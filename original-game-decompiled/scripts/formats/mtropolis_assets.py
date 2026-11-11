#!/usr/bin/env python3
"""Extract media assets from an mTropolis project into standard formats.

Usage:
  python3 -I mtropolis_assets.py SEGMENT1 [SEGMENT2 ...] --out OUTDIR [--jobs N] [--only mtoon,audio,palette,text]

Outputs (under OUTDIR/assets, all GENERATED from the original files, which are only read):
  mtoon/<id>_<name>.png   sprite sheet, one cell per frame (cell = full mToon rect), 8-bit paletted
  mtoon/<id>_<name>.json  frame table, ranges, codec, layout of the sheet
  audio/<id>_<name>.wav   PCM audio re-wrapped in a RIFF/WAVE header (sample data byte-identical)
  palettes/*.json         colour tables
  text/text_assets.json   text assets
  index.json              everything extracted, with source offsets and SHA-1 of the source data
and OUTDIR/inventory/asset_extraction.csv (one row per asset object in the streams).

The mToon RLE decoder follows ScummVM's CachedMToon::decompressMToonRLE (format reference).
Requires Pillow for PNG writing.
"""
import argparse
import csv
import hashlib
import json
import mmap
import os
import re
import struct
import sys
import wave
from multiprocessing import Pool

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import mtropolis_format as M  # noqa: E402

RLE_CODEC = 0x2e524c45
RLE_KEY = 0x524c4520


def safe_name(s):
    s = re.sub(r'[^A-Za-z0-9._-]+', '_', s or '').strip('_.')
    return s[:48] or 'unnamed'


def decode_rle8(data, w, h, canvas, bottom_up):
    """Decode one 8-bit mToon RLE frame into canvas (bytearray, w*h, top-down rows).
    Pixels that the stream skips are left untouched.  Returns (ok, pixels_written, note)."""
    n = len(data)
    pos = 0
    x = 0
    y = 0
    written = 0
    if n == 0:
        return True, 0, 'empty'
    while True:
        if pos >= n:
            return False, written, 'ran out of data at row %d' % y
        code = data[pos]
        pos += 1
        rem = w - x
        if code == 0:
            if pos >= n:
                return False, written, 'truncated skip code'
            c = data[pos]
            pos += 1
            if c & 0x80:
                y += c - 0x80
                x = 0
                if y < h:
                    continue
                break
            if c > rem:
                return False, written, 'horizontal skip past row end at row %d' % y
            x += c
        elif code & 0x80:
            k = code - 0x80
            if k > n - pos or k > rem:
                return False, written, 'literal run past row/data end at row %d' % y
            row = (h - 1 - y) if bottom_up else y
            base = row * w + x
            canvas[base:base + k] = data[pos:pos + k]
            pos += k
            x += k
            written += k
        else:
            if code > rem or pos >= n:
                return False, written, 'repeat run past row/data end at row %d' % y
            v = data[pos]
            pos += 1
            row = (h - 1 - y) if bottom_up else y
            base = row * w + x
            canvas[base:base + code] = bytes((v,)) * code
            x += code
            written += code
            # encoder quirk handled by ScummVM: zero-length run after a maximum-length run
            if code == 0x7f and n - pos >= 2 and data[pos] == 0 and data[pos + 1] == v:
                pos += 2
        if x == w:
            y += 1
            x = 0
            if y >= h:
                break
    return True, written, '' if pos == n else '%d trailing bytes' % (n - pos)


def extract_mtoon(task):
    """Worker: decode one mToon asset object and write PNG + JSON."""
    from PIL import Image
    seg_path, meta, out_png, out_json = task
    f = meta['f']
    with open(seg_path, 'rb') as fh:
        mm = mmap.mmap(fh.fileno(), 0, access=mmap.ACCESS_READ)
        base = f['frameDataPosition']
        blob = mm[base:base + f['sizeOfFrameData']]
        mm.close()
    r = f['rect']
    W = r['right'] - r['left']
    H = r['bottom'] - r['top']
    frames = f['frames']
    nfr = len(frames)
    bpp = f['bitsPerPixel']
    codec = f['codecID']
    result = {'assetID': f['assetID'], 'frames': nfr, 'ok': 0, 'failed': 0, 'notes': [], 'png': None}
    pal = None
    cd = bytes.fromhex(f['codecData']) if f['codecData'] else b''
    if len(cd) == 1024:
        pal = []
        for i in range(256):
            pal.extend((cd[i * 4 + 2], cd[i * 4 + 1], cd[i * 4]))
    info = []
    hdrs = []
    for fr in frames:
        d = blob[fr['dataOffset']:fr['dataOffset'] + fr['compressedSize']]
        if codec == RLE_CODEC and len(d) >= 20:
            hdrs.append(struct.unpack('>5I', d[:20]))
        else:
            hdrs.append(None)
    any_temporal = any(h is not None and h[0] != RLE_KEY for h in hdrs)
    same_dims = all(h is None or (h[2] == W and h[3] == H) for h in hdrs)
    temporal = codec == RLE_CODEC and any_temporal and same_dims
    if W <= 0 or H <= 0 or nfr == 0:
        result['notes'].append('empty mToon (rect %dx%d, %d frames)' % (W, H, nfr))
        cols = rows = 0
        sheet = None
    else:
        cols = max(1, min(nfr, max(1, 4096 // W), 16))
        rows = (nfr + cols - 1) // cols
        sheet = Image.new('P', (cols * W, rows * H), 0)
        if pal:
            sheet.putpalette(pal)
    persist = bytearray(W * H) if (temporal and W > 0 and H > 0) else None
    for i, fr in enumerate(frames):
        fi = {'index': i, 'rect': fr['rect1'], 'dataOffset': fr['dataOffset'], 'fileOffset': base + fr['dataOffset'],
              'compressedSize': fr['compressedSize'], 'decompressedSize': fr['decompressedSize'],
              'keyframeFlag': fr['keyframeFlag'], 'bitsPerPixel': fr['bitsPerPixel'],
              'decompressedBytesPerRow': fr['decompressedBytesPerRow']}
        d = blob[fr['dataOffset']:fr['dataOffset'] + fr['compressedSize']]
        fr_r = fr['rect1']
        fw = fr_r['right'] - fr_r['left']
        fh_ = fr_r['bottom'] - fr_r['top']
        ok = False
        note = ''
        cell = None
        if sheet is None:
            note = 'no canvas'
        elif codec == RLE_CODEC:
            if fr['compressedSize'] == 0:
                fi['rlePrefix'] = None
                if temporal:
                    cell = (bytes(persist), W, H, 0, 0)
                    ok = True
                    note = 'zero-size frame: repeats previous frame'
                else:
                    cell = (bytes(fw * fh_), fw, fh_, fr_r['left'] - r['left'], fr_r['top'] - r['top']) if fw > 0 and fh_ > 0 else None
                    ok = True
                    note = 'zero-size frame: blank'
            elif len(d) < 20:
                note = 'frame data shorter than RLE header'
            else:
                prefix, ver, rw, rh, dsz = hdrs[i]
                fi['rlePrefix'] = 'RLE (keyframe)' if prefix == RLE_KEY else ('delta' if prefix == 1 else '0x%08x' % prefix)
                fi['rleVersion'] = '0x%08x' % ver
                fi['rleWidth'] = rw
                fi['rleHeight'] = rh
                # ScummVM accepts only 0x01000001 (8-bit) / 0x01000002 (16-bit).  Every frame in
                # Maisy's Playhouse carries 0x81000001; the payload decodes with the same 8-bit
                # scheme (verified by exact row/byte consumption).  Meaning of bit 31: unknown.
                if (ver & 0x7fffffff) != 0x01000001 or bpp != 8:
                    note = 'unsupported RLE version/bit depth (0x%08x, %d bpp)' % (ver, bpp)
                elif temporal:
                    if prefix == RLE_KEY:
                        persist[:] = bytes(W * H)
                    ok, wr, note = decode_rle8(d[20:], W, H, persist, True)
                    fi['pixelsWritten'] = wr
                    cell = (bytes(persist), W, H, 0, 0)
                else:
                    cv = bytearray(rw * rh)
                    ok, wr, note = decode_rle8(d[20:], rw, rh, cv, True)
                    fi['pixelsWritten'] = wr
                    fi['pixelsNotWritten'] = rw * rh - wr
                    cell = (bytes(cv), rw, rh, fr_r['left'] - r['left'], fr_r['top'] - r['top'])
        elif codec == 0:
            stride = fr['decompressedBytesPerRow']
            if fw <= 0 or fh_ <= 0:
                note = 'empty frame rect'
            elif bpp in (1, 8) and len(d) >= stride * fh_:
                cv = bytearray(fw * fh_)
                for row in range(fh_):
                    src = d[row * stride:(row + 1) * stride]
                    dst = (fh_ - 1 - row) * fw   # Windows-format uncompressed frames are bottom-up (ScummVM)
                    if bpp == 8:
                        cv[dst:dst + fw] = src[:fw]
                    else:
                        for col in range(fw):
                            cv[dst + col] = (src[col // 8] >> (7 - (col % 8))) & 1
                cell = (bytes(cv), fw, fh_, fr_r['left'] - r['left'], fr_r['top'] - r['top'])
                ok = True
            else:
                note = 'unsupported uncompressed layout (%d bpp, %d bytes)' % (bpp, len(d))
        else:
            note = 'codec 0x%08x not decoded' % codec
        if cell is not None and cell[1] > 0 and cell[2] > 0:
            im = Image.frombytes('P', (cell[1], cell[2]), cell[0])
            cx_ = (i % cols) * W + cell[3]
            cy_ = (i // cols) * H + cell[4]
            sheet.paste(im, (cx_, cy_))
        fi['decoded'] = bool(ok)
        if note:
            fi['note'] = note
        fi['sheetCell'] = [(i % cols) * W, (i // cols) * H, W, H] if sheet is not None else None
        if ok:
            result['ok'] += 1
        else:
            result['failed'] += 1
            result['notes'].append('frame %d: %s' % (i, note))
        info.append(fi)
    if sheet is not None:
        sheet.save(out_png, optimize=False)
        result['png'] = out_png
        ph = hashlib.sha1(sheet.tobytes())
        ph.update(json.dumps([r, [fr['rect1'] for fr in frames], f['frameRanges'], f['registrationPoint'], cd.hex()],
                             sort_keys=True).encode())
        result['pixelSha1'] = ph.hexdigest()
    else:
        result['pixelSha1'] = None
    js = {
        '_generated': 'by scripts/formats/mtropolis_assets.py from the original data file; this is an extracted ASSET, not source',
        'assetID': f['assetID'], 'name': meta['name'], 'sourceStream': meta['stream'], 'sourceSegmentFile': os.path.basename(seg_path),
        'assetObjectOffset': meta['off'], 'frameDataPosition': base, 'sizeOfFrameData': f['sizeOfFrameData'],
        'width': W, 'height': H, 'rect': r, 'registrationPoint': f['registrationPoint'],
        'bitsPerPixel': bpp, 'codecID': '0x%08x' % codec,
        'codec': {RLE_CODEC: 'mToon RLE (".RLE"), 8-bit, rows bottom-up', 0: 'uncompressed'}.get(codec, 'unknown'),
        'temporalCompression': bool(temporal), 'encodingFlags': '0x%x' % f['encodingFlags'], 'version': f['version'],
        'palette': 'embedded 256-entry BGRx table in the asset header (codecData); written into the PNG palette' if pal else None,
        'frameRanges': f['frameRanges'], 'numFrames': nfr,
        'sheet': {'columns': cols, 'rows': rows,
                  'cellWidth': W, 'cellHeight': H,
                  'note': 'cell i is at column i %% columns, row i // columns. Pixels are palette indices. '
                          'For delta-coded (temporal) mToons each cell shows the accumulated picture. '
                          'For non-temporal frames, pixels the RLE stream skips are left as index 0 '
                          '(see pixelsNotWritten); transparency at runtime depends on the element ink mode.'},
        'frames': info,
    }
    with open(out_json, 'w') as fh:
        json.dump(js, fh, indent=1)
    return result


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('segments', nargs='+')
    ap.add_argument('--out', required=True)
    ap.add_argument('--jobs', type=int, default=os.cpu_count() or 2)
    ap.add_argument('--only', default='mtoon,audio,palette,text')
    args = ap.parse_args()
    only = set(args.only.split(','))
    adir = os.path.join(args.out, 'assets')
    for d in ('mtoon', 'audio', 'palettes', 'text'):
        os.makedirs(os.path.join(adir, d), exist_ok=True)
    os.makedirs(os.path.join(args.out, 'inventory'), exist_ok=True)

    bufs = []
    for s in args.segments:
        fh = open(s, 'rb')
        bufs.append(mmap.mmap(fh.fileno(), 0, access=mmap.ACCESS_READ))
    pre = M.read_catalog(bufs[0])
    cat = pre['catalog']
    streams = cat['f']['streams']
    var = 'win' if pre['catalogDataFormat'] == 'win' else 'mac'
    names = {}
    rows = []
    index = {'_generated': 'by scripts/formats/mtropolis_assets.py; extracted ASSETS (not source)', 'mtoon': [], 'audio': [],
             'palettes': [], 'text': [], 'movies': [], 'images': []}
    seen = {}       # (kind, assetID, sha1) -> output file
    per_id = {}     # (kind, assetID) -> number of distinct variants
    mtoon_tasks = []
    task_row = {}
    texts = []
    counts = {'mtoon_objects': 0, 'audio_objects': 0, 'movie_objects': 0, 'image_objects': 0}

    # asset names from the asset catalog in the boot stream
    for st in streams:
        if st['streamType'].lower() != 'bootstream':
            continue
        pos, size = st.get(var + 'Pos', st.get('pos')), st.get(var + 'Size', st.get('size'))
        for o in M.walk_stream(bufs[st['segmentIndexPlusOne'] - 1], pos, size, var):
            if o['type'] == 0xd:
                for a in o['f']['assets']:
                    names[a['id']] = a['name']
                break

    def variant_name(kind, aid, sha):
        k = (kind, aid)
        n = per_id.get(k, 0)
        per_id[k] = n + 1
        return '%04d_%s%s' % (aid, safe_name(names.get(aid, '')), '' if n == 0 else '_variant%d' % (n + 1))

    for st in streams:
        pos, size = st.get(var + 'Pos', st.get('pos')), st.get(var + 'Size', st.get('size'))
        if not size or st['segmentIndexPlusOne'] > len(bufs):
            continue
        seg = st['segmentIndexPlusOne']
        buf = bufs[seg - 1]
        for o in M.walk_stream(buf, pos, size, var):
            t = o['type']
            if t not in M.ASSET_TYPES:
                continue
            f = o['f']
            aid = f.get('assetID')
            nm = names.get(aid, '')
            row = {'asset_id': aid, 'name': nm, 'stream': st['index'], 'segment': seg, 'object_offset': '0x%x' % o['off'],
                   'kind': '', 'data_offset': '', 'data_size': '', 'sha1_of_source_data': '', 'output': '', 'status': '', 'detail': ''}
            if t == 0xf:
                counts['mtoon_objects'] += 1
                row['kind'] = 'mToon'
                row['data_offset'] = f['frameDataPosition']
                row['data_size'] = f['sizeOfFrameData']
                if 'mtoon' in only:
                    h = hashlib.sha1()
                    # Hash per frame, leaving out the 5th dword of each RLE frame header: that field
                    # holds a size in some copies and stale bytes in others (ScummVM notes the same),
                    # which would otherwise make identical pictures look different.
                    for fr in f['frames']:
                        fo = f['frameDataPosition'] + fr['dataOffset']
                        fd = buf[fo:fo + fr['compressedSize']]
                        if f['codecID'] == RLE_CODEC and len(fd) >= 20:
                            h.update(fd[:16])
                            h.update(fd[20:])
                        else:
                            h.update(fd)
                    # only fields that affect the decoded result (unknown/junk header fields are left out)
                    h.update(json.dumps([[(fr['rect1'], fr['dataOffset'], fr['compressedSize']) for fr in f['frames']],
                                         f['rect'], f['codecData'], f['frameRanges'], f['codecID'], f['registrationPoint']],
                                        sort_keys=True).encode())
                    sha = h.hexdigest()
                    row['sha1_of_source_data'] = sha
                    key = ('mtoon', aid, sha)
                    if key in seen:
                        row['output'] = seen[key]
                        row['status'] = 'duplicate-of-extracted'
                    else:
                        ti = len(mtoon_tasks)
                        tmpbase = os.path.join(adir, 'mtoon', '__tmp_%05d' % ti)
                        seen[key] = ('task', ti)
                        row['output'] = seen[key]
                        row['status'] = 'pending'
                        mtoon_tasks.append((args.segments[seg - 1], {'f': f, 'name': nm, 'stream': st['index'], 'off': o['off']},
                                            tmpbase + '.png', tmpbase + '.json'))
                        task_row[ti] = row
            elif t == 0x11:
                counts['audio_objects'] += 1
                row['kind'] = 'audio'
                row['data_offset'] = f['filePosition']
                row['data_size'] = f['size']
                enc = {0: 'PCM uncompressed', 3: 'MACE 3:1', 4: 'MACE 6:1'}.get(f['encoding1'], 'encoding %d' % f['encoding1'])
                row['detail'] = '%s, %d Hz, %d-bit, %d ch' % (enc, f['sampleRate1'], f['bitsPerSample'], f['channels'])
                if 'audio' in only:
                    data = buf[f['filePosition']:f['filePosition'] + f['size']]
                    sha = hashlib.sha1(data).hexdigest()
                    row['sha1_of_source_data'] = sha
                    key = ('audio', aid, sha)
                    if key in seen:
                        row['output'] = seen[key]
                        row['status'] = 'duplicate-of-extracted'
                    elif f['encoding1'] != 0 or f['bitsPerSample'] not in (8, 16) or len(data) != f['size']:
                        base = variant_name('audio', aid, sha)
                        with open(os.path.join(adir, 'audio', base + '.raw'), 'wb') as fh:
                            fh.write(data)
                        seen[key] = 'assets/audio/' + base + '.raw'
                        row['output'] = seen[key]
                        row['status'] = 'raw-only'
                        row['detail'] += ' (not converted)'
                    else:
                        base = variant_name('audio', aid, sha)
                        wpath = os.path.join(adir, 'audio', base + '.wav')
                        with wave.open(wpath, 'wb') as w:
                            w.setnchannels(f['channels'])
                            w.setsampwidth(f['bitsPerSample'] // 8)
                            w.setframerate(f['sampleRate1'])
                            w.writeframes(data)   # 8-bit: unsigned (same as WAV); 16-bit: little-endian signed (same as WAV)
                        seen[key] = 'assets/audio/' + base + '.wav'
                        row['output'] = seen[key]
                        row['status'] = 'extracted'
                        cd = bytes.fromhex(f['codedDuration'])
                        index['audio'].append({
                            'assetID': aid, 'name': nm, 'file': seen[key], 'sourceStream': st['index'], 'segment': seg,
                            'assetObjectOffset': o['off'], 'dataOffset': f['filePosition'], 'dataSize': f['size'],
                            'originalEncoding': enc, 'sampleRate': f['sampleRate1'], 'bitsPerSample': f['bitsPerSample'],
                            'channels': f['channels'],
                            'sampleFormat': 'unsigned 8-bit' if f['bitsPerSample'] == 8 else 'signed 16-bit little-endian',
                            'codedDurationSeconds': (((cd[0] * 60 + cd[1]) * 60 + cd[2]) * 100 + cd[3]) / 100.0,
                            'computedDurationSeconds': round(f['size'] / (f['sampleRate1'] * f['channels'] * f['bitsPerSample'] / 8.0), 3),
                            'cuePoints': [{'position': c['position'], 'cuePointID': c['cuePointID']} for c in f['cuePoints']],
                            'sha1': sha})
            elif t == 0x1e:
                row['kind'] = 'colorTable'
                if 'palette' in only:
                    sha = hashlib.sha1(bytes(sum(f['colors'], []))).hexdigest()
                    row['sha1_of_source_data'] = sha
                    key = ('pal', aid, sha)
                    if key in seen:
                        row['output'] = seen[key]
                        row['status'] = 'duplicate-of-extracted'
                    else:
                        base = variant_name('pal', aid, sha)
                        with open(os.path.join(adir, 'palettes', base + '.json'), 'w') as fh:
                            json.dump({'_generated': 'extracted ASSET (colour table), not source', 'assetID': aid, 'name': nm,
                                       'sourceStream': st['index'], 'segment': seg, 'assetObjectOffset': o['off'],
                                       'format': '256 entries [r, g, b], 0-255 (byte order as read by ScummVM ColorTableAsset, Windows layout)',
                                       'colors': f['colors']}, fh)
                        seen[key] = 'assets/palettes/' + base + '.json'
                        row['output'] = seen[key]
                        row['status'] = 'extracted'
                        index['palettes'].append({'assetID': aid, 'name': nm, 'file': seen[key], 'sha1': sha})
            elif t == 0x1f:
                row['kind'] = 'text'
                row['status'] = 'extracted'
                row['output'] = 'assets/text/text_assets.json'
                texts.append({'assetID': aid, 'name': nm, 'sourceStream': st['index'], 'segment': seg, 'assetObjectOffset': o['off'],
                              'isBitmap': bool(f['isBitmap'] & 1), 'alignment': f['alignment'], 'text': f.get('text'),
                              'bitmapSize': f['bitmapSize']})
            elif t in (0x10, 0x24):
                counts['movie_objects'] += 1
                row['kind'] = 'movie'
                row['status'] = 'not-extracted'
                row['detail'] = 'movie assets are not handled by this tool run (none exist in Maisy\'s Playhouse)'
                index['movies'].append({'assetID': aid, 'name': nm, 'type': o['typeName'], 'offset': o['off'], 'fields': f})
            elif t == 0xe:
                counts['image_objects'] += 1
                row['kind'] = 'image'
                row['status'] = 'not-extracted'
                row['detail'] = 'image assets are not handled by this tool run (none exist in Maisy\'s Playhouse)'
                index['images'].append({'assetID': aid, 'name': nm, 'offset': o['off'], 'fields': f})
            rows.append(row)

    if texts and 'text' in only:
        with open(os.path.join(adir, 'text', 'text_assets.json'), 'w') as fh:
            json.dump({'_generated': 'extracted ASSETS (text), not source', 'texts': texts}, fh, indent=1)
        index['text'] = [{'assetID': t['assetID'], 'stream': t['sourceStream'], 'text': t['text']} for t in texts]

    # mToons in parallel
    fail_rows = []
    tot_frames = ok_frames = 0
    mtoon_unique = 0
    if mtoon_tasks:
        with Pool(args.jobs) as pool:
            task_out = {}
            pix_seen = {}
            for i, res in enumerate(pool.imap(extract_mtoon, mtoon_tasks, chunksize=4)):
                row = task_row[i]
                tot_frames += res['frames']
                ok_frames += res['ok']
                tmp_png, tmp_json = mtoon_tasks[i][2], mtoon_tasks[i][3]
                pk = (res['assetID'], res['pixelSha1'])
                if res['pixelSha1'] and pk in pix_seen:
                    # same decoded picture as an already extracted copy (the RLE byte stream differs only in
                    # equivalent encodings, e.g. a 1-pixel literal vs a 1-pixel run)
                    for pth in (tmp_png, tmp_json):
                        if os.path.exists(pth):
                            os.remove(pth)
                    task_out[i] = pix_seen[pk]
                    row['status'] = 'duplicate-of-extracted'
                    row['detail'] = 'decoded pixels identical to the extracted copy; RLE byte stream differs'
                    row['output'] = pix_seen[pk]
                    continue
                base = variant_name('mtoon', res['assetID'], None)
                rel = 'assets/mtoon/' + base + '.png'
                if res['png']:
                    os.replace(tmp_png, os.path.join(adir, 'mtoon', base + '.png'))
                os.replace(tmp_json, os.path.join(adir, 'mtoon', base + '.json'))
                task_out[i] = rel
                if res['pixelSha1']:
                    pix_seen[pk] = rel
                mtoon_unique += 1
                row['output'] = rel
                row['status'] = 'extracted' if res['failed'] == 0 and res['png'] else ('partial' if res['ok'] else 'failed')
                row['detail'] = '%d/%d frames decoded%s' % (res['ok'], res['frames'], ('; ' + '; '.join(res['notes'][:3])) if res['notes'] else '')
                index['mtoon'].append({'assetID': res['assetID'], 'name': row['name'], 'file': rel,
                                       'meta': rel[:-4] + '.json', 'frames': res['frames'], 'framesDecoded': res['ok'],
                                       'sourceStream': row['stream'], 'pixelSha1': res['pixelSha1']})
                if res['failed'] or not res['png']:
                    fail_rows.append(row)
            for r in rows:
                if isinstance(r['output'], tuple):
                    r['output'] = task_out[r['output'][1]]

    with open(os.path.join(adir, 'index.json'), 'w') as fh:
        json.dump(index, fh, indent=1)
    with open(os.path.join(args.out, 'inventory', 'asset_extraction.csv'), 'w', newline='') as fh:
        cols = ['asset_id', 'name', 'kind', 'stream', 'segment', 'object_offset', 'data_offset', 'data_size',
                'sha1_of_source_data', 'output', 'status', 'detail']
        w = csv.DictWriter(fh, fieldnames=cols)
        w.writeheader()
        w.writerows(rows)

    summ = {
        'assetObjects': len(rows), 'byKind': {}, 'byStatus': {},
        'mtoonDecodedObjects': len(mtoon_tasks), 'mtoonUniqueExtracted': mtoon_unique,
        'mtoonFramesInDecodedObjects': tot_frames, 'mtoonFramesDecoded': ok_frames,
        'mtoonWithProblems': len(fail_rows), 'counts': counts,
        'multiVariantAssetIDs': sorted('%s:%d' % k for k, v in per_id.items() if v > 1),
    }
    for r in rows:
        summ['byKind'][r['kind']] = summ['byKind'].get(r['kind'], 0) + 1
        k = r['kind'] + '/' + r['status']
        summ['byStatus'][k] = summ['byStatus'].get(k, 0) + 1
    with open(os.path.join(args.out, 'inventory', 'asset_extraction_summary.json'), 'w') as fh:
        json.dump(summ, fh, indent=1)
    print(json.dumps(summ, indent=1))
    for r in fail_rows[:20]:
        print('PROBLEM', r['asset_id'], r['name'], r['detail'])


if __name__ == '__main__':
    main()
