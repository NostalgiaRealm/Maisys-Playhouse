#!/usr/bin/env python3
"""Inventory every code-bearing (MZ) file on the disc and in the extracted installer payloads.
Usage: build_modules.py <root>   -> inventory/modules.json, inventory/modules.csv, inventory/all_files.csv
Duplicates (same SHA-256) are folded into one module record that lists every location."""
import os, sys, json, csv, hashlib, struct
import pefile
ROOT = sys.argv[1]
def sha(p):
    h = hashlib.sha256()
    with open(p, 'rb') as f:
        for c in iter(lambda: f.read(1 << 20), b''): h.update(c)
    return h.hexdigest()
files = []
for base in ('original/disc', 'extracted'):
    for d, _, fs in os.walk(os.path.join(ROOT, base)):
        for f in sorted(fs):
            p = os.path.join(d, f)
            rel = os.path.relpath(p, ROOT)
            with open(p, 'rb') as fh: head = fh.read(2)
            files.append(dict(path=rel, size=os.path.getsize(p), sha256=sha(p), mz=head == b'MZ'))
files.sort(key=lambda x: x['path'])
with open(os.path.join(ROOT, 'inventory/all_files.csv'), 'w', newline='') as f:
    w = csv.DictWriter(f, ['path', 'size', 'sha256', 'mz']); w.writeheader(); w.writerows(files)
mods = {}
for x in files:
    if not x['mz']: continue
    m = mods.setdefault(x['sha256'], dict(sha256=x['sha256'], size=x['size'], locations=[]))
    m['locations'].append(x['path'])
out = []
for m in mods.values():
    locs = sorted(m['locations'], key=lambda p: (not p.startswith('original/disc'), p))
    m['primary_location'] = locs[0]
    p = os.path.join(ROOT, locs[0])
    info = dict(format='MZ (non-PE)', machine='', image_base='', entry='', is_dll=False, exports=[], n_imports=0, version={}, sections=[], exec_raw_bytes=0)
    try:
        pe = pefile.PE(p)
        info.update(format='PE32', machine=hex(pe.FILE_HEADER.Machine), image_base=hex(pe.OPTIONAL_HEADER.ImageBase),
                    entry=hex(pe.OPTIONAL_HEADER.ImageBase + pe.OPTIONAL_HEADER.AddressOfEntryPoint), is_dll=pe.is_dll(),
                    timestamp=pe.FILE_HEADER.TimeDateStamp, has_reloc=any(s.Name.startswith(b'.reloc') for s in pe.sections))
        info['sections'] = [dict(name=s.Name.rstrip(b'\0').decode('latin1'), va=hex(s.VirtualAddress), vsize=s.Misc_VirtualSize, rawsize=s.SizeOfRawData, chars=hex(s.Characteristics)) for s in pe.sections]
        info['exec_raw_bytes'] = sum(s.SizeOfRawData for s in pe.sections if s.Characteristics & 0x20000000)
        if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
            info['export_dll_name'] = pe.get_string_at_rva(pe.DIRECTORY_ENTRY_EXPORT.struct.Name).decode('latin1') if pe.DIRECTORY_ENTRY_EXPORT.struct.Name else ''
            info['exports'] = [(e.name or b'').decode('latin1') or '#%d' % e.ordinal for e in pe.DIRECTORY_ENTRY_EXPORT.symbols]
        if hasattr(pe, 'DIRECTORY_ENTRY_IMPORT'):
            info['imports'] = {d.dll.decode('latin1'): len(d.imports) for d in pe.DIRECTORY_ENTRY_IMPORT}
            info['n_imports'] = sum(info['imports'].values())
        if hasattr(pe, 'FileInfo'):
            for fi in pe.FileInfo:
                for e in fi:
                    if hasattr(e, 'StringTable'):
                        for st in e.StringTable:
                            for k, v in st.entries.items(): info['version'][k.decode('latin1')] = v.decode('latin1')
    except pefile.PEFormatError as e:
        info['format'] = 'MZ (%s)' % e
    m.update(info)
    out.append(m)
out.sort(key=lambda m: m['primary_location'])
json.dump(out, open(os.path.join(ROOT, 'inventory/modules_raw.json'), 'w'), indent=1)
for m in out:
    print(m['size'], m['format'], m['image_base'], m.get('export_dll_name', ''), m['version'].get('FileDescription', ''), m['version'].get('OriginalFilename', ''), len(m['exports']), m['n_imports'], '|', ' ; '.join(m['locations']))
