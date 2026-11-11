// GDI32 for the recompiled mTropolis player: a software implementation on indexed (8 bpp)
// surfaces with real palette semantics. The display is a 640x480, 256-colour palette device,
// the mode the title's help file recommends. The player composes scenes itself into 8 bpp DIB
// sections and BitBlts them to its window; this layer supplies DCs, clipping, raster
// operations, the logical/system palette model, regions, brushes, pens and text.
//
// The screen surface and the system palette live in buffers owned by the platform
// (host.screen), so a presenter can show them without copying.

const STATIC20 = [
  0x000000, 0x800000, 0x008000, 0x808000, 0x000080, 0x800080, 0x008080, 0xC0C0C0, 0xC0DCC0, 0xA6CAF0,
  0xFFFBF0, 0xA0A0A4, 0x808080, 0xFF0000, 0x00FF00, 0xFFFF00, 0x0000FF, 0xFF00FF, 0x00FFFF, 0xFFFFFF,
];   // 0xRRGGBB

export function installGdi32(m, host) {
  const { u8, u16, u32, i32 } = m;
  const G = 'GDI32.DLL!';
  const objs = host.gdi = new Map();
  let nextObj = 0x4000;
  const newObj = (o) => { const h = nextObj; nextObj += 4; o.h = h; objs.set(h, o); return h; };
  host.newGdi = newObj;

  // --- system palette and screen ------------------------------------------------
  const SW = host.screen.width;
  const SH = host.screen.height;
  const sysPal = host.screen.palette;          // Uint32Array(256) 0xRRGGBB
  let sysPalVer = 1;
  let sysPalUse = 1;                            // SYSPAL_STATIC
  const resetSysPal = () => {
    sysPal.fill(0);
    for (let k = 0; k < 10; k++) { sysPal[k] = STATIC20[k]; sysPal[246 + k] = STATIC20[10 + k]; }
    sysPalVer++;
  };
  resetSysPal();
  const screen = { kind: 'screen', w: SW, h: SH, bpp: 8, stride: SW, data: host.screen.pixels, topDown: true, colors: sysPal, ver: () => sysPalVer };
  host.screenSurface = screen;
  const dirty = (x0, y0, x1, y1) => host.screen.markDirty(x0, y0, x1, y1);

  const rgbOf = (cr) => ((cr & 0xFF) << 16) | (cr & 0xFF00) | ((cr >> 16) & 0xFF);     // COLORREF -> 0xRRGGBB
  const crOf = (rgb) => ((rgb & 0xFF) << 16) | (rgb & 0xFF00) | ((rgb >> 16) & 0xFF);
  const nearestCache = new WeakMap();
  /** Index of the colour in a 256-entry table closest to rgb; an exact match wins, lowest index first. */
  const nearest = (table, ver, rgb) => {
    let c = nearestCache.get(table);
    if (!c || c.ver !== ver) nearestCache.set(table, c = { ver, map: new Map() });
    let r = c.map.get(rgb);
    if (r !== undefined) return r;
    const rr = rgb >> 16, gg = (rgb >> 8) & 255, bb = rgb & 255;
    let best = 0, bd = 1e9;
    for (let k = 0; k < 256; k++) {
      const t = table[k];
      const dr = (t >> 16) - rr, dg = ((t >> 8) & 255) - gg, db = (t & 255) - bb;
      const d = dr * dr + dg * dg + db * db;
      if (d < bd) { bd = d; best = k; if (!d) break; }
    }
    c.map.set(rgb, best);
    return best;
  };
  const surfVer = (s) => (s.kind === 'screen' ? sysPalVer : s.cver);

  /** COLORREF -> pixel value for a surface, through the DC's logical palette where asked. */
  const pixelOf = (dc, s, cr) => {
    const kind = cr >>> 24;
    if (s.bpp === 8) {
      if (kind === 1) {
        const idx = cr & 0xFF;
        const pal = dc.palette;
        if (s.kind === 'screen') return pal && pal.map ? pal.map[idx] : idx;
        if (pal) return nearest(s.colors, surfVer(s), pal.rgb[idx % pal.n]);
        return idx;
      }
      if (kind === 0x10) return cr & 0xFF;            // DIBINDEX
      return nearest(s.colors, surfVer(s), rgbOf(cr));
    }
    let rgb = rgbOf(cr);
    if (kind === 1 && dc.palette) rgb = dc.palette.rgb[(cr & 0xFF) % dc.palette.n];
    if (s.bpp === 1) return ((rgb >> 16) + ((rgb >> 8) & 255) + (rgb & 255)) >= 384 ? 1 : 0;
    if (s.bpp === 16) return ((rgb >> 8) & 0xF800) | ((rgb >> 5) & 0x7E0) | ((rgb >> 3) & 0x1F);
    return rgb;
  };
  const rgbAt = (s, v) => {
    if (s.bpp === 8) return s.colors[v];
    if (s.bpp === 1) return s.colors ? s.colors[v] : (v ? 0xFFFFFF : 0);
    if (s.bpp === 16) return ((v & 0xF800) << 8) | ((v & 0x7E0) << 5) | ((v & 0x1F) << 3);
    return v & 0xFFFFFF;
  };
  const rowOff = (s, y) => (s.topDown ? y : s.h - 1 - y) * s.stride;
  const getPx = (s, x, y) => {
    const o = rowOff(s, y);
    const d = s.data;
    switch (s.bpp) {
      case 8: return d[o + x];
      case 1: return (d[o + (x >> 3)] >> (7 - (x & 7))) & 1;
      case 16: return d[o + x * 2] | (d[o + x * 2 + 1] << 8);
      case 24: return d[o + x * 3] | (d[o + x * 3 + 1] << 8) | (d[o + x * 3 + 2] << 16);
      default: return d[o + x * 4] | (d[o + x * 4 + 1] << 8) | (d[o + x * 4 + 2] << 16);
    }
  };
  const putPx = (s, x, y, v) => {
    const o = rowOff(s, y);
    const d = s.data;
    switch (s.bpp) {
      case 8: d[o + x] = v; break;
      case 1: if (v) d[o + (x >> 3)] |= 0x80 >> (x & 7); else d[o + (x >> 3)] &= ~(0x80 >> (x & 7)); break;
      case 16: d[o + x * 2] = v; d[o + x * 2 + 1] = v >> 8; break;
      case 24: d[o + x * 3] = v; d[o + x * 3 + 1] = v >> 8; d[o + x * 3 + 2] = v >> 16; break;
      default: d[o + x * 4] = v; d[o + x * 4 + 1] = v >> 8; d[o + x * 4 + 2] = v >> 16; d[o + x * 4 + 3] = 255;
    }
  };

  // --- stock objects ---------------------------------------------------------------
  const stock = new Map();
  const mkBrush = (o) => newObj({ type: 'brush', style: 0, color: 0, ...o });
  const mkPen = (o) => newObj({ type: 'pen', style: 0, width: 1, color: 0, ...o });
  const mkFont = (o) => newObj({ type: 'font', height: 16, weight: 400, italic: 0, underline: 0, face: 'System', pitch: 0, ...o });
  const mkPalette = (n, rgb, flags) => newObj({ type: 'palette', n, rgb, flags, map: null, ver: 1 });
  stock.set(0, mkBrush({ color: 0xFFFFFF, stock: true }));
  stock.set(1, mkBrush({ color: 0xC0C0C0, stock: true }));
  stock.set(2, mkBrush({ color: 0x808080, stock: true }));
  stock.set(3, mkBrush({ color: 0x404040, stock: true }));
  stock.set(4, mkBrush({ color: 0x000000, stock: true }));
  stock.set(5, mkBrush({ style: 1, stock: true }));               // NULL_BRUSH
  stock.set(6, mkPen({ color: 0xFFFFFF, stock: true }));
  stock.set(7, mkPen({ color: 0x000000, stock: true }));
  stock.set(8, mkPen({ style: 5, stock: true }));                 // NULL_PEN
  for (const k of [10, 11, 12, 13, 14, 16, 17]) stock.set(k, mkFont({ stock: true, face: k === 10 || k === 16 ? 'Courier New' : k === 13 ? 'System' : 'MS Sans Serif', height: k === 13 ? 16 : 13, weight: k === 13 ? 700 : 400, pitch: k === 10 || k === 16 ? 1 : 0 }));
  {
    const rgb = new Uint32Array(20);
    for (let k = 0; k < 20; k++) rgb[k] = STATIC20[k];
    const h = mkPalette(20, rgb, new Uint8Array(20));
    objs.get(h).stock = true;
    objs.get(h).isDefault = true;
    stock.set(15, h);
  }
  m.api(G + 'GetStockObject', 1, (k) => stock.get(k) || 0);

  // --- device contexts -------------------------------------------------------------
  const newDC = (surface, extra = {}) => newObj({
    type: 'dc', surface, ox: 0, oy: 0, clip: null, visW: surface.w, visH: surface.h, visX: 0, visY: 0,
    brush: stock.get(0), pen: stock.get(7), font: stock.get(13), palette: objs.get(stock.get(15)), bitmap: 0,
    textColor: 0, bkColor: 0xFFFFFF, bkMode: 2, rop2: 13, curX: 0, curY: 0, vx: 0, vy: 0, wx: 0, wy: 0,
    mapMode: 1, stretchMode: 1, textAlign: 0, polyFill: 1, saved: [], ...extra,
  });
  host.newDC = newDC;
  const DC = (h) => { const d = objs.get(h); return d && d.type === 'dc' ? d : null; };
  // logical -> device (surface) coordinates
  const dx = (dc, x) => (x | 0) - dc.wx + dc.vx + dc.ox;
  const dy = (dc, y) => (y | 0) - dc.wy + dc.vy + dc.oy;

  // Regions: {type:'region', rects:[[x0,y0,x1,y1],...]} with non-overlapping rects.
  const mkRgn = (rects) => newObj({ type: 'region', rects });
  const bbox = (rects) => {
    if (!rects.length) return [0, 0, 0, 0];
    let a = 1e9, b = 1e9, c = -1e9, d = -1e9;
    for (const r of rects) { if (r[0] < a) a = r[0]; if (r[1] < b) b = r[1]; if (r[2] > c) c = r[2]; if (r[3] > d) d = r[3]; }
    return [a, b, c, d];
  };
  const isect = (rects, x0, y0, x1, y1) => {
    const out = [];
    for (const r of rects) {
      const a = Math.max(r[0], x0), b = Math.max(r[1], y0), c = Math.min(r[2], x1), d = Math.min(r[3], y1);
      if (a < c && b < d) out.push([a, b, c, d]);
    }
    return out;
  };
  const subtract = (rects, x0, y0, x1, y1) => {
    const out = [];
    for (const r of rects) {
      const a = Math.max(r[0], x0), b = Math.max(r[1], y0), c = Math.min(r[2], x1), d = Math.min(r[3], y1);
      if (a >= c || b >= d) { out.push(r); continue; }
      if (r[1] < b) out.push([r[0], r[1], r[2], b]);
      if (d < r[3]) out.push([r[0], d, r[2], r[3]]);
      if (r[0] < a) out.push([r[0], b, a, d]);
      if (c < r[2]) out.push([c, b, r[2], d]);
    }
    return out;
  };
  const isectRgn = (A, B) => { let out = []; for (const r of B) out = out.concat(isect(A, r[0], r[1], r[2], r[3])); return out; };
  /** Visible rectangles of a DC in surface coordinates. */
  const clipRects = (dc) => {
    const vis = [[Math.max(0, dc.visX), Math.max(0, dc.visY), Math.min(dc.surface.w, dc.visX + dc.visW), Math.min(dc.surface.h, dc.visY + dc.visH)]];
    if (vis[0][0] >= vis[0][2] || vis[0][1] >= vis[0][3]) return [];
    return dc.clip ? isectRgn(dc.clip, vis) : vis;
  };
  host.clipRects = clipRects;

  m.api(G + 'CreateCompatibleDC', 1, () => {
    // A memory DC starts with a 1x1 monochrome bitmap selected.
    const s = { kind: 'ddb', w: 1, h: 1, bpp: 1, stride: 4, data: new Uint8Array(4), topDown: true, colors: null, cver: 1 };
    return newDC(s, { mem: true });
  });
  m.api(G + 'DeleteDC', 1, (h) => { objs.delete(h); return 1; });
  m.api(G + 'SaveDC', 1, (h) => {
    const dc = DC(h);
    if (!dc) return 0;
    const { saved, h: _h, ...rest } = dc;
    dc.saved.push({ ...rest, clip: dc.clip ? dc.clip.map((r) => r.slice()) : null });
    return dc.saved.length;
  });
  m.api(G + 'RestoreDC', 2, (h, n) => {
    const dc = DC(h);
    if (!dc) return 0;
    n |= 0;
    const idx = n < 0 ? dc.saved.length + n : n - 1;
    if (idx < 0 || idx >= dc.saved.length) return 0;
    const st = dc.saved[idx];
    dc.saved.length = idx;
    const surface = dc.surface, bitmap = dc.bitmap;
    Object.assign(dc, st);
    dc.surface = surface;          // the selected bitmap is not part of the saved state that matters here
    dc.bitmap = bitmap;
    return 1;
  });
  m.api(G + 'GetDeviceCaps', 2, (h, idx) => {
    const dc = DC(h);
    const s = dc ? dc.surface : screen;
    const print = s.kind === 'print';
    switch (idx) {
      case 0: return 0x400;                       // DRIVERVERSION
      case 2: return print ? 2 : 1;               // TECHNOLOGY: DT_RASPRINTER / DT_RASDISPLAY
      case 4: return print ? 203 : 240;           // HORZSIZE mm
      case 6: return print ? 271 : 180;
      case 8: return print ? s.w : SW;            // HORZRES
      case 10: return print ? s.h : SH;           // VERTRES
      case 12: return print ? 24 : 8;             // BITSPIXEL
      case 14: return 1;                          // PLANES
      case 16: return -1;
      case 18: return -1;
      case 22: return 6;
      case 24: return print ? -1 : 20;            // NUMCOLORS
      case 26: return 0;
      case 28: return 0;
      case 30: return 0;
      case 38: return print ? 0x0001 | 0x0008 | 0x0800 | 0x0200 : 0x0001 | 0x0008 | 0x0100 | 0x0200 | 0x0800 | 0x0080;  // RASTERCAPS: BITBLT, BITMAP64, RC_PALETTE (display), DI_BITMAP, STRETCHBLT, DIBTODEV
      case 40: case 42: case 44: return 36;
      case 88: case 90: return print ? 300 : 96;  // LOGPIXELSX/Y
      case 104: return print ? 0 : 256;           // SIZEPALETTE
      case 106: return print ? 0 : (sysPalUse === 2 ? 2 : 20);   // NUMRESERVED
      case 108: return print ? 24 : 18;           // COLORRES
      case 110: return print ? s.w : SW;          // PHYSICALWIDTH
      case 111: return print ? s.h : SH;
      case 112: case 113: return 0;
      default: return 0;
    }
  });
  m.api(G + 'GdiFlush', 0, () => 1);
  m.api(G + 'GetObjectType', 1, (h) => {
    const o = objs.get(h);
    if (!o) return 0;
    return { pen: 1, brush: 2, dc: o.mem ? 10 : 3, palette: 5, font: 6, bitmap: 7, region: 8 }[o.type] || 0;
  });

  // --- bitmaps -------------------------------------------------------------------
  const dibStride = (w, bpp) => (((w * bpp + 31) >> 5) << 2);
  const readColors = (bmi, n) => {
    const hs = u32[bmi >> 2];
    const out = new Uint32Array(256);
    for (let k = 0; k < n; k++) {
      const p = bmi + hs + k * 4;
      out[k] = (u8[p + 2] << 16) | (u8[p + 1] << 8) | u8[p];
    }
    return out;
  };
  const palIndexColors = (dc, bmi, n) => {
    // DIB_PAL_COLORS: the colour table is an array of u16 indices into the DC's logical palette.
    const hs = u32[bmi >> 2];
    const out = new Uint32Array(256);
    const pal = dc && dc.palette;
    for (let k = 0; k < n; k++) {
      const idx = u16[(bmi + hs + k * 2) >> 1];
      out[k] = pal ? pal.rgb[idx % pal.n] : sysPal[idx & 255];
    }
    return out;
  };
  m.api(G + 'CreateDIBSection', 6, (hdc, bmi, usage, ppBits, hSection, offset) => {
    const w = i32[(bmi + 4) >> 2];
    const hRaw = i32[(bmi + 8) >> 2];
    const bpp = u16[(bmi + 14) >> 1];
    const h = Math.abs(hRaw);
    const stride = dibStride(w, bpp);
    const bits = host.heap.alloc(stride * h + 16, true);
    let used = u32[(bmi + 32) >> 2];
    if (bpp <= 8 && (!used || used > (1 << bpp))) used = 1 << bpp;
    const colors = bpp <= 8 ? (usage === 1 ? palIndexColors(DC(hdc), bmi, used) : readColors(bmi, used)) : null;
    const s = { kind: 'dib', w, h, bpp, stride, data: u8.subarray(bits, bits + stride * h), bits, topDown: hRaw < 0, colors, cver: 1, section: true };
    if (bpp === 16) s.masks = u32[(bmi + 16) >> 2] === 3 ? [u32[(bmi + 40) >> 2], u32[(bmi + 44) >> 2], u32[(bmi + 48) >> 2]] : [0x7C00, 0x3E0, 0x1F];
    if (ppBits) u32[ppBits >> 2] = bits;
    return newObj({ type: 'bitmap', s });
  });
  m.api(G + 'CreateBitmap', 5, (w, h, planes, bpp, pBits) => {
    const stride = ((w * bpp + 15) >> 4) << 1;          // DDB rows are word aligned
    const data = new Uint8Array(Math.max(1, stride * h));
    if (pBits) data.set(u8.subarray(pBits, pBits + stride * h));
    const s = { kind: 'ddb', w, h, bpp, stride, data, topDown: true, colors: bpp === 8 ? sysPal : null, cver: 1 };
    if (bpp === 8) s.kind = 'ddb8';
    return newObj({ type: 'bitmap', s });
  });
  m.api(G + 'CreateDIBitmap', 6, (hdc, hdr, init, pBits, bmi, usage) => {
    // A device-dependent bitmap for an 8 bpp palette display: pixels are system palette indices.
    const w = i32[(hdr + 4) >> 2];
    const h = Math.abs(i32[(hdr + 8) >> 2]);
    const s = { kind: 'ddb8', w, h, bpp: 8, stride: (w + 1) & ~1, data: new Uint8Array(((w + 1) & ~1) * h), topDown: true, colors: sysPal, cver: 1 };
    const hbm = newObj({ type: 'bitmap', s });
    if ((init & 4) && pBits && bmi) {
      const src = dibFromPacked(DC(hdc), bmi, pBits, usage);
      const tmp = { surface: s, ox: 0, oy: 0, clip: null, visX: 0, visY: 0, visW: w, visH: h, palette: DC(hdc) ? DC(hdc).palette : null, vx: 0, vy: 0, wx: 0, wy: 0 };
      blit(tmp, 0, 0, w, h, src, 0, 0, 0xCC0020, null);
    }
    return hbm;
  });
  /** Surface view over a packed DIB (BITMAPINFO + bits) in guest memory. */
  const dibFromPacked = (dc, bmi, pBits, usage) => {
    const w = i32[(bmi + 4) >> 2];
    const hRaw = i32[(bmi + 8) >> 2];
    const bpp = u16[(bmi + 14) >> 1];
    const h = Math.abs(hRaw);
    const stride = dibStride(w, bpp);
    let used = u32[(bmi + 32) >> 2];
    if (bpp <= 8 && (!used || used > (1 << bpp))) used = 1 << bpp;
    const colors = bpp <= 8 ? (usage === 1 ? palIndexColors(dc, bmi, used) : readColors(bmi, used)) : null;
    return { kind: 'dib', w, h, bpp, stride, data: u8.subarray(pBits, pBits + stride * h), topDown: hRaw < 0, colors, cver: -1 - (pBits | 0) };
  };
  host.dibFromPacked = dibFromPacked;
  m.api(G + 'SetDIBColorTable', 4, (hdc, start, n, pq) => {
    const dc = DC(hdc);
    const s = dc && dc.surface;
    if (!s || !s.colors || s.kind === 'screen' || s.kind === 'ddb8') return 0;
    for (let k = 0; k < n && start + k < 256; k++) {
      const p = pq + k * 4;
      s.colors[start + k] = (u8[p + 2] << 16) | (u8[p + 1] << 8) | u8[p];
    }
    s.cver++;
    return n;
  });
  m.api(G + 'GetDIBColorTable', 4, (hdc, start, n, pq) => {
    const dc = DC(hdc);
    const s = dc && dc.surface;
    if (!s || !s.colors) return 0;
    for (let k = 0; k < n && start + k < 256; k++) {
      const c = s.colors[start + k];
      const p = pq + k * 4;
      u8[p] = c & 255; u8[p + 1] = (c >> 8) & 255; u8[p + 2] = c >> 16; u8[p + 3] = 0;
    }
    return n;
  });
  m.api(G + 'GetObjectA', 3, (h, n, p) => {
    const o = objs.get(h);
    if (!o) return 0;
    if (o.type === 'bitmap') {
      const s = o.s;
      if (!p) return s.section ? 84 : 24;
      const tmp = new Uint8Array(84);
      const v = new DataView(tmp.buffer);
      v.setInt32(4, s.w, true); v.setInt32(8, s.h, true); v.setInt32(12, s.stride, true);
      v.setUint16(16, 1, true); v.setUint16(18, s.bpp, true); v.setUint32(20, s.bits || 0, true);
      // DIBSECTION: BITMAPINFOHEADER follows
      v.setUint32(24, 40, true); v.setInt32(28, s.w, true); v.setInt32(32, s.topDown ? -s.h : s.h, true);
      v.setUint16(36, 1, true); v.setUint16(38, s.bpp, true); v.setUint32(44, s.stride * s.h, true);
      v.setUint32(56, s.bpp <= 8 ? 1 << s.bpp : 0, true);
      const len = Math.min(n, s.section ? 84 : 24);
      u8.set(tmp.subarray(0, len), p);
      return len;
    }
    if (o.type === 'palette') { if (p && n >= 2) u16[p >> 1] = o.n; return 2; }
    if (o.type === 'brush') {
      if (p && n >= 12) { u32[p >> 2] = o.style; u32[(p + 4) >> 2] = crOf(o.color); u32[(p + 8) >> 2] = o.hatch || 0; }
      return 12;
    }
    if (o.type === 'pen') {
      if (p && n >= 16) { u32[p >> 2] = o.style; u32[(p + 4) >> 2] = o.width; u32[(p + 8) >> 2] = 0; u32[(p + 12) >> 2] = crOf(o.color); }
      return 16;
    }
    if (o.type === 'font') {
      if (p) {
        const len = Math.min(n, 60);
        const tmp = new Uint8Array(60);
        const v = new DataView(tmp.buffer);
        v.setInt32(0, o.lfHeight === undefined ? o.height : o.lfHeight, true); v.setInt32(16, o.weight, true);
        tmp[20] = o.italic; tmp[21] = o.underline; tmp[27] = o.pitch;
        for (let k = 0; k < Math.min(31, o.face.length); k++) tmp[28 + k] = o.face.charCodeAt(k);
        u8.set(tmp.subarray(0, len), p);
      }
      return 60;
    }
    return 0;
  });
  m.api(G + 'DeleteObject', 1, (h) => {
    const o = objs.get(h);
    if (!o || o.stock) return 1;
    if (o.type === 'bitmap' && o.s.bits) host.heap.release(o.s.bits);
    objs.delete(h);
    return 1;
  });
  m.api(G + 'UnrealizeObject', 1, (h) => { const o = objs.get(h); if (o && o.type === 'palette') o.map = null; return 1; });
  m.api(G + 'SelectObject', 2, (hdc, h) => {
    const dc = DC(hdc);
    const o = objs.get(h);
    if (!dc || !o) return 0;
    let old = 0;
    switch (o.type) {
      case 'brush': old = dc.brush; dc.brush = h; break;
      case 'pen': old = dc.pen; dc.pen = h; break;
      case 'font': old = dc.font; dc.font = h; break;
      case 'bitmap':
        if (!dc.mem) return 0;
        old = dc.bitmap || (dc.defBitmap || (dc.defBitmap = newObj({ type: 'bitmap', s: dc.surface, stock: true })));
        dc.bitmap = h; dc.surface = o.s; dc.visX = 0; dc.visY = 0; dc.visW = o.s.w; dc.visH = o.s.h;
        break;
      case 'region': dc.clip = o.rects.map((r) => r.slice()); return o.rects.length > 1 ? 3 : o.rects.length ? 2 : 1;
      default: return 0;
    }
    return old;
  });

  // --- palettes ------------------------------------------------------------------
  m.api(G + 'CreatePalette', 1, (p) => {
    const n = u16[(p + 2) >> 1];
    const rgb = new Uint32Array(Math.max(n, 1));
    const flags = new Uint8Array(Math.max(n, 1));
    for (let k = 0; k < n; k++) {
      const e = p + 4 + k * 4;
      rgb[k] = (u8[e] << 16) | (u8[e + 1] << 8) | u8[e + 2];
      flags[k] = u8[e + 3];
    }
    return mkPalette(n, rgb, flags);
  });
  m.api(G + 'SelectPalette', 3, (hdc, hpal, bkg) => {
    const dc = DC(hdc);
    const pal = objs.get(hpal);
    if (!dc || !pal || pal.type !== 'palette') return 0;
    const old = dc.palette ? dc.palette.h : stock.get(15);
    dc.palette = pal;
    dc.palBackground = !!bkg;
    return old;
  });
  /**
   * Foreground realization: map every logical entry to a system palette slot.
   * Static slots (0-9 and 246-255, or only 0 and 255 with SYSPAL_NOSTATIC) keep their colours.
   * An entry that matches a colour already present maps to it (unless PC_NOCOLLAPSE/PC_RESERVED),
   * otherwise it takes the next free slot; when none is left it maps to the nearest colour.
   */
  const realize = (pal) => {
    if (pal.isDefault) {
      pal.map = new Uint8Array(20);
      for (let k = 0; k < 20; k++) pal.map[k] = nearest(sysPal, sysPalVer, pal.rgb[k]);
      return 0;
    }
    const lo = sysPalUse === 2 ? 1 : 10;
    const hi = sysPalUse === 2 ? 254 : 245;
    const used = new Uint8Array(256);
    for (let k = 0; k < lo; k++) used[k] = 1;
    for (let k = hi + 1; k < 256; k++) used[k] = 1;
    if (sysPalUse === 2) { sysPal[0] = 0; sysPal[255] = 0xFFFFFF; } else for (let k = 0; k < 10; k++) { sysPal[k] = STATIC20[k]; sysPal[246 + k] = STATIC20[10 + k]; }
    const map = new Uint8Array(pal.n);
    let changed = 0;
    let free = lo;
    const pending = [];
    for (let k = 0; k < pal.n; k++) {
      const f = pal.flags[k];
      const c = pal.rgb[k];
      if (f & 2) { map[k] = c >> 16; continue; }                 // PC_EXPLICIT: low word is the hardware index
      let slot = -1;
      if (!(f & 5)) {                                             // may collapse onto an identical colour
        for (let j = 0; j < 256; j++) if (used[j] && sysPal[j] === c) { slot = j; break; }
      }
      if (slot < 0) {
        while (free <= hi && used[free]) free++;
        if (free <= hi) {
          slot = free;
          used[slot] = 1;
          if (sysPal[slot] !== c) { sysPal[slot] = c; changed++; }
        }
      }
      if (slot < 0) pending.push(k); else map[k] = slot;
    }
    sysPalVer++;
    for (const k of pending) map[k] = nearest(sysPal, sysPalVer, pal.rgb[k]);
    pal.map = map;
    pal.realizedVer = sysPalVer;
    host.screen.paletteChanged();
    return changed;
  };
  m.api(G + 'RealizePalette', 1, (hdc) => {
    const dc = DC(hdc);
    if (!dc || !dc.palette) return 0;
    if (dc.surface.kind !== 'screen') return 0;
    const n = realize(dc.palette);
    if (host.tracePalette) host.log('RealizePalette n=' + dc.palette.n + ' changed=' + n);
    return n;
  });
  m.api(G + 'AnimatePalette', 4, (hpal, start, n, p) => {
    const pal = objs.get(hpal);
    if (!pal) return 0;
    let any = false;
    for (let k = 0; k < n && start + k < pal.n; k++) {
      const i = start + k;
      if (!(pal.flags[i] & 1)) continue;            // only PC_RESERVED entries animate
      const e = p + k * 4;
      const c = (u8[e] << 16) | (u8[e + 1] << 8) | u8[e + 2];
      pal.rgb[i] = c;
      if (pal.map) { sysPal[pal.map[i]] = c; any = true; }
    }
    if (any) { sysPalVer++; host.screen.paletteChanged(); }
    return 1;
  });
  m.api(G + 'GetPaletteEntries', 4, (hpal, start, n, p) => {
    const pal = objs.get(hpal);
    if (!pal) return 0;
    if (!p) return pal.n;
    let k = 0;
    for (; k < n && start + k < pal.n; k++) {
      const c = pal.rgb[start + k];
      const e = p + k * 4;
      u8[e] = c >> 16; u8[e + 1] = (c >> 8) & 255; u8[e + 2] = c & 255; u8[e + 3] = pal.flags[start + k];
    }
    return k;
  });
  m.api(G + 'GetSystemPaletteEntries', 4, (hdc, start, n, p) => {
    if (!p) return 256;
    let k = 0;
    for (; k < n && start + k < 256; k++) {
      const c = sysPal[start + k];
      const e = p + k * 4;
      u8[e] = c >> 16; u8[e + 1] = (c >> 8) & 255; u8[e + 2] = c & 255; u8[e + 3] = 0;
    }
    return k;
  });
  m.api(G + 'SetSystemPaletteUse', 2, (hdc, use) => { const old = sysPalUse; sysPalUse = use; return old; });

  // --- brushes, pens, fonts --------------------------------------------------------
  m.api(G + 'CreateSolidBrush', 1, (cr) => mkBrush({ cr, color: rgbOf(cr) }));
  m.api(G + 'CreateHatchBrush', 2, (hatch, cr) => mkBrush({ style: 2, hatch, cr, color: rgbOf(cr) }));
  m.api(G + 'CreateBrushIndirect', 1, (p) => mkBrush({ style: u32[p >> 2], cr: u32[(p + 4) >> 2], color: rgbOf(u32[(p + 4) >> 2]), hatch: u32[(p + 8) >> 2] }));
  m.api(G + 'CreatePatternBrush', 1, (hbm) => { const b = objs.get(hbm); return b ? mkBrush({ style: 3, pattern: { ...b.s, data: b.s.data.slice() } }) : 0; });
  m.api(G + 'CreateDIBPatternBrushPt', 2, (pDib, usage) => {
    const hs = u32[pDib >> 2];
    const bpp = u16[(pDib + 14) >> 1];
    let used = u32[(pDib + 32) >> 2];
    if (bpp <= 8 && !used) used = 1 << bpp;
    const bits = pDib + hs + (bpp <= 8 ? used * (usage === 1 ? 2 : 4) : 0);
    const s = dibFromPacked(null, pDib, bits, usage);
    return mkBrush({ style: 3, pattern: { ...s, data: s.data.slice(), cver: 1 } });
  });
  m.api(G + 'CreatePen', 3, (style, width, cr) => mkPen({ style, width: Math.max(1, width), cr, color: rgbOf(cr) }));
  m.api(G + 'ExtCreatePen', 5, (style, width, pLb) => mkPen({ style: style & 15, width: Math.max(1, width), cr: u32[(pLb + 4) >> 2], color: rgbOf(u32[(pLb + 4) >> 2]) }));
  m.api(G + 'CreateFontIndirectA', 1, (p) => {
    const lfHeight = i32[p >> 2];
    return mkFont({ lfHeight, height: lfHeight ? Math.abs(lfHeight) : 16, cell: lfHeight > 0, weight: i32[(p + 16) >> 2] || 400, italic: u8[p + 20], underline: u8[p + 21], pitch: u8[p + 27], face: m.cstr(p + 28) || 'System' });
  });
  const fontOf = (dc) => objs.get(dc.font) || objs.get(stock.get(13));
  const metrics = (dc) => host.text.metrics(fontOf(dc));
  m.api(G + 'GetTextMetricsA', 2, (hdc, p) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    const f = fontOf(dc);
    const t = metrics(dc);
    u8.fill(0, p, p + 56);
    i32[p >> 2] = t.height; i32[(p + 4) >> 2] = t.ascent; i32[(p + 8) >> 2] = t.descent;
    i32[(p + 12) >> 2] = t.internalLeading; i32[(p + 16) >> 2] = 0;
    i32[(p + 20) >> 2] = t.aveWidth; i32[(p + 24) >> 2] = t.maxWidth; i32[(p + 28) >> 2] = f.weight;
    i32[(p + 36) >> 2] = 96; i32[(p + 40) >> 2] = 96;
    u8[p + 44] = 0x20; u8[p + 45] = 0xFF; u8[p + 46] = 0x1F; u8[p + 47] = 0x20;
    u8[p + 48] = f.italic; u8[p + 49] = f.underline;
    u8[p + 51] = (f.pitch & 3) === 1 ? 0x04 | 0x30 : 0x01 | 0x04 | 0x20;   // TMPF_TRUETYPE (| TMPF_FIXED_PITCH means variable)
    return 1;
  });
  m.api(G + 'GetTextExtentPointA', 4, (hdc, pStr, n, pSize) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    const t = metrics(dc);
    i32[pSize >> 2] = host.text.width(fontOf(dc), host.latin1At(pStr, n));
    i32[(pSize + 4) >> 2] = t.height;
    return 1;
  });
  for (const [name, prop] of [['SetTextColor', 'textColor'], ['SetBkColor', 'bkColor']]) {
    m.api(G + name, 2, (hdc, v) => { const dc = DC(hdc); if (!dc) return 0xFFFFFFFF; const o = dc[prop]; dc[prop] = v; return o; });
  }
  for (const [name, prop] of [['SetBkMode', 'bkMode'], ['SetROP2', 'rop2'], ['SetMapMode', 'mapMode'], ['SetStretchBltMode', 'stretchMode'], ['SetTextAlign', 'textAlign'], ['SetPolyFillMode', 'polyFill']]) {
    m.api(G + name, 2, (hdc, v) => { const dc = DC(hdc); if (!dc) return 0; const o = dc[prop]; dc[prop] = v; return o; });
  }
  m.api(G + 'GetBkMode', 1, (hdc) => { const dc = DC(hdc); return dc ? dc.bkMode : 0; });
  m.api(G + 'SetMapperFlags', 2, () => 0);
  m.api(G + 'SetTextCharacterExtra', 2, () => 0);
  m.api(G + 'SetTextJustification', 3, () => 1);
  m.api(G + 'SetArcDirection', 2, () => 1);
  m.api(G + 'SetColorAdjustment', 2, () => 1);
  const pt = (p, x, y) => { if (p) { i32[p >> 2] = x; i32[(p + 4) >> 2] = y; } return 1; };
  m.api(G + 'SetViewportOrgEx', 4, (hdc, x, y, p) => { const dc = DC(hdc); if (!dc) return 0; pt(p, dc.vx, dc.vy); dc.vx = x | 0; dc.vy = y | 0; return 1; });
  m.api(G + 'OffsetViewportOrgEx', 4, (hdc, x, y, p) => { const dc = DC(hdc); if (!dc) return 0; pt(p, dc.vx, dc.vy); dc.vx += x | 0; dc.vy += y | 0; return 1; });
  m.api(G + 'SetWindowOrgEx', 4, (hdc, x, y, p) => { const dc = DC(hdc); if (!dc) return 0; pt(p, dc.wx, dc.wy); dc.wx = x | 0; dc.wy = y | 0; return 1; });
  m.api(G + 'OffsetWindowOrgEx', 4, (hdc, x, y, p) => { const dc = DC(hdc); if (!dc) return 0; pt(p, dc.wx, dc.wy); dc.wx += x | 0; dc.wy += y | 0; return 1; });
  m.api(G + 'GetViewportOrgEx', 2, (hdc, p) => { const dc = DC(hdc); return dc ? pt(p, dc.vx, dc.vy) : 0; });
  for (const name of ['SetViewportExtEx', 'SetWindowExtEx']) m.api(G + name, 4, (hdc, x, y, p) => pt(p, 1, 1));
  for (const name of ['ScaleViewportExtEx', 'ScaleWindowExtEx']) m.api(G + name, 6, (hdc, a, b, c, d, p) => pt(p, 1, 1));
  for (const name of ['GetViewportExtEx', 'GetWindowExtEx']) m.api(G + name, 2, (hdc, p) => pt(p, 1, 1));

  // --- clipping ------------------------------------------------------------------
  const curClip = (dc) => dc.clip || [[dc.visX, dc.visY, dc.visX + dc.visW, dc.visY + dc.visH]];
  const rgnKind = (rects) => (rects.length > 1 ? 3 : rects.length ? 2 : 1);
  m.api(G + 'SelectClipRgn', 2, (hdc, hrgn) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    const r = objs.get(hrgn);
    // region coordinates are device units relative to the DC origin
    dc.clip = r ? r.rects.map((q) => [q[0] + dc.ox, q[1] + dc.oy, q[2] + dc.ox, q[3] + dc.oy]) : null;
    return r ? rgnKind(r.rects) : 2;
  });
  m.api(G + 'ExtSelectClipRgn', 3, (hdc, hrgn, mode) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    const r = objs.get(hrgn);
    if (!r) { dc.clip = null; return 2; }
    const rr = r.rects.map((q) => [q[0] + dc.ox, q[1] + dc.oy, q[2] + dc.ox, q[3] + dc.oy]);
    if (mode === 5) dc.clip = rr;                                   // RGN_COPY
    else if (mode === 1) dc.clip = isectRgn(curClip(dc), rr);       // RGN_AND
    else if (mode === 4) { let c = curClip(dc); for (const q of rr) c = subtract(c, q[0], q[1], q[2], q[3]); dc.clip = c; } else if (mode === 2) { let add = rr; for (const q of curClip(dc)) add = subtract(add, q[0], q[1], q[2], q[3]); dc.clip = curClip(dc).concat(add); } else dc.clip = rr;
    return rgnKind(dc.clip);
  });
  m.api(G + 'GetClipRgn', 2, (hdc, hrgn) => {
    const dc = DC(hdc);
    const r = objs.get(hrgn);
    if (!dc || !r) return -1;
    if (!dc.clip) return 0;
    r.rects = dc.clip.map((q) => [q[0] - dc.ox, q[1] - dc.oy, q[2] - dc.ox, q[3] - dc.oy]);
    return 1;
  });
  m.api(G + 'IntersectClipRect', 5, (hdc, l, t, r, b) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    dc.clip = isect(curClip(dc), dx(dc, l), dy(dc, t), dx(dc, r), dy(dc, b));
    return rgnKind(dc.clip);
  });
  m.api(G + 'ExcludeClipRect', 5, (hdc, l, t, r, b) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    dc.clip = subtract(curClip(dc), dx(dc, l), dy(dc, t), dx(dc, r), dy(dc, b));
    return rgnKind(dc.clip);
  });
  m.api(G + 'OffsetClipRgn', 3, (hdc, ax, ay) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    if (dc.clip) for (const q of dc.clip) { q[0] += ax | 0; q[2] += ax | 0; q[1] += ay | 0; q[3] += ay | 0; }
    return rgnKind(curClip(dc));
  });
  const writeRect = (p, a, b, c, d) => { i32[p >> 2] = a; i32[(p + 4) >> 2] = b; i32[(p + 8) >> 2] = c; i32[(p + 12) >> 2] = d; };
  m.api(G + 'GetClipBox', 2, (hdc, p) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    const rects = clipRects(dc);
    const b = bbox(rects);
    const offx = dc.ox + dc.vx - dc.wx, offy = dc.oy + dc.vy - dc.wy;
    writeRect(p, b[0] - offx, b[1] - offy, b[2] - offx, b[3] - offy);
    return rgnKind(rects);
  });
  m.api(G + 'RectVisible', 2, (hdc, p) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    return isect(clipRects(dc), dx(dc, i32[p >> 2]), dy(dc, i32[(p + 4) >> 2]), dx(dc, i32[(p + 8) >> 2]), dy(dc, i32[(p + 12) >> 2])).length ? 1 : 0;
  });
  m.api(G + 'PtVisible', 3, (hdc, x, y) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    const X = dx(dc, x), Y = dy(dc, y);
    return clipRects(dc).some((r) => X >= r[0] && X < r[2] && Y >= r[1] && Y < r[3]) ? 1 : 0;
  });
  m.api(G + 'SelectClipPath', 2, () => 1);

  // --- regions -------------------------------------------------------------------
  const norm = (a, b, c, d) => [Math.min(a, c) | 0, Math.min(b, d) | 0, Math.max(a, c) | 0, Math.max(b, d) | 0];
  m.api(G + 'CreateRectRgn', 4, (a, b, c, d) => { const r = norm(a | 0, b | 0, c | 0, d | 0); return mkRgn(r[0] < r[2] && r[1] < r[3] ? [r] : []); });
  const spansToRects = (spans) => {
    // spans: [y, x0, x1] sorted by y; merge vertically identical runs
    const out = [];
    const open = new Map();
    let lastY = null;
    for (const [y, x0, x1] of spans) {
      if (x0 >= x1) continue;
      const key = x0 + ',' + x1;
      const r = open.get(key);
      if (r && r[3] === y) r[3] = y + 1;
      else { const nr = [x0, y, x1, y + 1]; out.push(nr); open.set(key, nr); }
      lastY = y;
    }
    return out;
  };
  const ellipseSpans = (l, t, r, b) => {
    const spans = [];
    const cx = (l + r) / 2, cy = (t + b) / 2, rx = (r - l) / 2, ry = (b - t) / 2;
    if (rx <= 0 || ry <= 0) return spans;
    for (let y = t; y < b; y++) {
      const yy = (y + 0.5 - cy) / ry;
      if (yy * yy > 1) continue;
      const w = rx * Math.sqrt(1 - yy * yy);
      spans.push([y, Math.round(cx - w), Math.round(cx + w)]);
    }
    return spans;
  };
  m.api(G + 'CreateEllipticRgn', 4, (l, t, r, b) => mkRgn(spansToRects(ellipseSpans(l | 0, t | 0, r | 0, b | 0))));
  m.api(G + 'CreateRoundRectRgn', 6, (l, t, r, b, ew, eh) => {
    l |= 0; t |= 0; r |= 0; b |= 0;
    const rx = Math.min(ew | 0, r - l) / 2, ry = Math.min(eh | 0, b - t) / 2;
    const spans = [];
    for (let y = t; y < b; y++) {
      let inset = 0;
      const d = y + 0.5 < t + ry ? (t + ry - (y + 0.5)) / ry : y + 0.5 > b - ry ? ((y + 0.5) - (b - ry)) / ry : 0;
      if (d > 0 && ry > 0) inset = rx * (1 - Math.sqrt(Math.max(0, 1 - d * d)));
      spans.push([y, Math.round(l + inset), Math.round(r - inset)]);
    }
    return mkRgn(spansToRects(spans));
  });
  const polySpans = (pts, winding) => {
    let y0 = 1e9, y1 = -1e9;
    for (const p of pts) { if (p[1] < y0) y0 = p[1]; if (p[1] > y1) y1 = p[1]; }
    const spans = [];
    for (let y = y0; y < y1; y++) {
      const yc = y + 0.5;
      const xs = [];
      for (let k = 0; k < pts.length; k++) {
        const a = pts[k], b = pts[(k + 1) % pts.length];
        if ((a[1] <= yc && b[1] > yc) || (b[1] <= yc && a[1] > yc)) {
          xs.push([a[0] + (yc - a[1]) * (b[0] - a[0]) / (b[1] - a[1]), b[1] > a[1] ? 1 : -1]);
        }
      }
      xs.sort((p, q) => p[0] - q[0]);
      if (winding) {
        let w = 0, start = 0;
        for (const [x, dir] of xs) { if (w === 0) start = x; w += dir; if (w === 0) spans.push([y, Math.round(start), Math.round(x)]); }
      } else for (let k = 0; k + 1 < xs.length; k += 2) spans.push([y, Math.round(xs[k][0]), Math.round(xs[k + 1][0])]);
    }
    return spans;
  };
  m.api(G + 'CreatePolygonRgn', 3, (p, n, mode) => {
    const pts = [];
    for (let k = 0; k < n; k++) pts.push([i32[(p + k * 8) >> 2], i32[(p + k * 8 + 4) >> 2]]);
    return mkRgn(spansToRects(polySpans(pts, mode === 2)));
  });
  m.api(G + 'OffsetRgn', 3, (h, ax, ay) => {
    const r = objs.get(h);
    if (!r) return 0;
    for (const q of r.rects) { q[0] += ax | 0; q[2] += ax | 0; q[1] += ay | 0; q[3] += ay | 0; }
    return rgnKind(r.rects);
  });
  m.api(G + 'GetRgnBox', 2, (h, p) => { const r = objs.get(h); if (!r) return 0; const b = bbox(r.rects); writeRect(p, b[0], b[1], b[2], b[3]); return rgnKind(r.rects); });
  m.api(G + 'PtInRegion', 3, (h, x, y) => { const r = objs.get(h); x |= 0; y |= 0; return r && r.rects.some((q) => x >= q[0] && x < q[2] && y >= q[1] && y < q[3]) ? 1 : 0; });

  // --- raster operations -----------------------------------------------------------
  const brushPixel = (dc, s, br) => (br.style === 1 ? null : pixelOf(dc, s, br.cr !== undefined ? br.cr : crOf(br.color)));
  /** Value of the selected brush at device position (x, y). */
  const brushAt = (dc, s, br, solid, x, y) => {
    if (br.style === 3 && br.pattern) {
      const p = br.pattern;
      const v = getPx(p, ((x % p.w) + p.w) % p.w, ((y % p.h) + p.h) % p.h);
      if (p.bpp === 1) return pixelOf(dc, s, v ? dc.bkColor : dc.textColor);
      if (s.bpp === 8 && p.bpp === 8 && p.colors) return p.kind === 'ddb8' ? v : nearest(s.colors, surfVer(s), p.colors[v]);
      return s.bpp === 8 ? nearest(s.colors, surfVer(s), rgbAt(p, v)) : rgbAt(p, v);
    }
    if (br.style === 2) {
      const on = [(y & 7) === 3, (x & 7) === 3, ((x - y) & 7) === 0, ((x + y) & 7) === 0, (x & 7) === 3 || (y & 7) === 3, ((x - y) & 7) === 0 || ((x + y) & 7) === 0][br.hatch % 6];
      return on ? solid : pixelOf(dc, s, dc.bkColor);
    }
    return solid;
  };
  const rop3 = (rop, p, s, d) => {
    let r = 0;
    if (rop & 0x01) r |= ~p & ~s & ~d;
    if (rop & 0x02) r |= ~p & ~s & d;
    if (rop & 0x04) r |= ~p & s & ~d;
    if (rop & 0x08) r |= ~p & s & d;
    if (rop & 0x10) r |= p & ~s & ~d;
    if (rop & 0x20) r |= p & ~s & d;
    if (rop & 0x40) r |= p & s & ~d;
    if (rop & 0x80) r |= p & s & d;
    return r;
  };
  const xlatCache = new WeakMap();
  /** 256-entry translation of source pixel values to destination pixel values, or null for identity. */
  const xlatFor = (dc, src, dst) => {
    if (src.bpp !== 8 || dst.bpp !== 8) return undefined;
    if (src.colors === dst.colors) return null;
    const sv = surfVer(src), dv = surfVer(dst);
    let c = xlatCache.get(src);
    if (c && c.dst === dst && c.sv === sv && c.dv === dv && sv > 0) return c.t;
    const sc = src.colors, dc2 = dst.colors;
    let same = true;
    for (let k = 0; k < 256; k++) if (sc[k] !== dc2[k]) { same = false; break; }
    let t = null;
    if (!same) {
      t = new Uint8Array(256);
      for (let k = 0; k < 256; k++) t[k] = sc[k] === dc2[k] ? k : nearest(dc2, dv, sc[k]);
    }
    if (sv > 0) xlatCache.set(src, { dst, sv, dv, t });
    return t;
  };

  /**
   * BitBlt core. Destination rectangle in logical DC units, source in source-surface pixels
   * (srcSurf null for pattern-only ROPs). Clipped to the DC and to both surfaces.
   */
  function blit(dc, X, Y, W, H, srcSurf, SX, SY, rop, srcDc) {
    const dst = dc.surface;
    const ropc = (rop >>> 16) & 0xFF;
    const needSrc = ((ropc >> 2) & 0x33) !== (ropc & 0x33);
    const needPat = ((ropc >> 4) & 0x0F) !== (ropc & 0x0F);
    const x0 = dx(dc, X), y0 = dy(dc, Y);
    if (W < 0 || H < 0) return 1;
    const rects = isect(clipRects(dc), x0, y0, x0 + W, y0 + H);
    if (!rects.length) return 1;
    let br = null, solid = 0;
    if (needPat) {
      br = objs.get(dc.brush) || objs.get(stock.get(0));
      if (br.style === 1 && ropc === 0xF0) return 1;
      solid = brushPixel(dc, dst, br) || 0;
    }
    const simplePat = needPat && br.style === 0;
    let xl;
    if (needSrc) {
      if (!srcSurf) return 0;
      xl = xlatFor(dc, srcSurf, dst);
    }
    const mask = dst.bpp === 8 ? 0xFF : dst.bpp === 1 ? 1 : dst.bpp === 16 ? 0xFFFF : 0xFFFFFF;
    for (const r of rects) {
      let ax = r[0], ay = r[1], bx = r[2], by = r[3];
      if (needSrc) {
        // keep the source inside its surface
        let sx0 = SX + (ax - x0), sy0 = SY + (ay - y0);
        if (sx0 < 0) { ax -= sx0; sx0 = 0; }
        if (sy0 < 0) { ay -= sy0; sy0 = 0; }
        if (SX + (bx - x0) > srcSurf.w) bx = x0 + srcSurf.w - SX;
        if (SY + (by - y0) > srcSurf.h) by = y0 + srcSurf.h - SY;
        if (ax >= bx || ay >= by) continue;
      }
      const w = bx - ax;
      if (dst.kind === 'screen') dirty(ax, ay, bx, by);
      // Fast paths: 8 bpp to 8 bpp copies.
      if (ropc === 0xCC && xl !== undefined) {
        const sd = srcSurf.data, dd = dst.data;
        const overlap = sd.buffer === dd.buffer && srcSurf === dst;
        const down = overlap && (SY + (ay - y0)) < ay;
        for (let k = 0; k < by - ay; k++) {
          const y = down ? by - 1 - k : ay + k;
          const so = rowOff(srcSurf, SY + (y - y0)) + SX + (ax - x0);
          const doff = rowOff(dst, y) + ax;
          if (xl === null) dd.copyWithin !== undefined && sd.buffer === dd.buffer ? dd.set(sd.subarray(so, so + w), doff) : dd.set(sd.subarray(so, so + w), doff);
          else for (let x = 0; x < w; x++) dd[doff + x] = xl[sd[so + x]];
        }
        continue;
      }
      if (ropc === 0xF0 && simplePat && dst.bpp === 8) {
        for (let y = ay; y < by; y++) { const o = rowOff(dst, y) + ax; dst.data.fill(solid, o, o + w); }
        continue;
      }
      if ((ropc === 0x00 || ropc === 0xFF) && dst.bpp === 8) {
        const v = ropc ? 0xFF : 0;
        for (let y = ay; y < by; y++) { const o = rowOff(dst, y) + ax; dst.data.fill(v, o, o + w); }
        continue;
      }
      // General path.
      const monoSrc = needSrc && srcSurf.bpp === 1 && dst.bpp !== 1;
      const fg = monoSrc ? pixelOf(dc, dst, dc.textColor) : 0;
      const bg = monoSrc ? pixelOf(dc, dst, dc.bkColor) : 0;
      const toMono = needSrc && dst.bpp === 1 && srcSurf.bpp !== 1;
      const bkSrc = toMono && srcDc ? pixelOf(srcDc, srcSurf, srcDc.bkColor) : 0;
      for (let y = ay; y < by; y++) {
        for (let x = ax; x < bx; x++) {
          let s = 0, p = 0;
          if (needSrc) {
            s = getPx(srcSurf, SX + (x - x0), SY + (y - y0));
            if (monoSrc) s = s ? bg : fg;
            else if (toMono) s = s === bkSrc ? 1 : 0;
            else if (xl) s = xl[s];
            else if (xl === undefined && srcSurf.bpp !== dst.bpp) {
              const rgb = rgbAt(srcSurf, s);
              s = dst.bpp === 8 ? nearest(dst.colors, surfVer(dst), rgb) : dst.bpp === 16 ? ((rgb >> 8) & 0xF800) | ((rgb >> 5) & 0x7E0) | ((rgb >> 3) & 0x1F) : rgb;
            }
          }
          if (needPat) p = simplePat ? solid : brushAt(dc, dst, br, solid, x, y);
          const d = getPx(dst, x, y);
          putPx(dst, x, y, rop3(ropc, p, s, d) & mask);
        }
      }
    }
    return 1;
  }
  host.blit = blit;

  m.api(G + 'BitBlt', 9, (hdc, x, y, w, h, hsrc, sx, sy, rop) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    const sdc = DC(hsrc);
    if (host.traceBlt) host.log(`BitBlt dst=${hdc}(${dc.surface.kind} ${dc.surface.w}x${dc.surface.h}) ${x | 0},${y | 0} ${w | 0}x${h | 0} src=${hsrc} ${sx | 0},${sy | 0} rop=${rop.toString(16)}`);
    const r = sdc ? blit(dc, x | 0, y | 0, w | 0, h | 0, sdc.surface, dx(sdc, sx), dy(sdc, sy), rop, sdc) : blit(dc, x | 0, y | 0, w | 0, h | 0, null, 0, 0, rop, null);
    if (dc.surface.kind === 'screen') host.screen.present();
    return r;
  });
  m.api(G + 'PatBlt', 6, (hdc, x, y, w, h, rop) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    x |= 0; y |= 0; w |= 0; h |= 0;
    if (w < 0) { x += w; w = -w; }
    if (h < 0) { y += h; h = -h; }
    const r = blit(dc, x, y, w, h, null, 0, 0, rop, null);
    if (dc.surface.kind === 'screen') host.screen.present();
    return r;
  });
  /** Stretch from a source surface rectangle into a DC rectangle (nearest neighbour, as COLORONCOLOR). */
  const stretch = (dc, X, Y, W, H, src, SX, SY, SW2, SH2, rop, srcDc) => {
    X |= 0; Y |= 0; W |= 0; H |= 0; SX |= 0; SY |= 0; SW2 |= 0; SH2 |= 0;
    if (W === SW2 && H === SH2) return blit(dc, X, Y, W, H, src, SX, SY, rop, srcDc);
    if (!W || !H || !SW2 || !SH2) return 1;
    // scale into a temporary surface of the source's format, then blit
    const aw = Math.abs(W), ah = Math.abs(H);
    const bytes = src.bpp === 8 ? 1 : src.bpp === 1 ? 1 : src.bpp >> 3;
    const tmp = { kind: 'dib', w: aw, h: ah, bpp: src.bpp === 1 ? 8 : src.bpp, stride: aw * bytes, data: new Uint8Array(aw * ah * bytes), topDown: true, colors: src.bpp === 1 ? Uint32Array.from({ length: 256 }, (_, k) => (k ? 0xFFFFFF : 0)) : src.colors, cver: src.kind === 'screen' ? -sysPalVer : -Math.abs(src.cver || 1), masks: src.masks };
    if (src.colors === sysPal) tmp.colors = sysPal;
    for (let y = 0; y < ah; y++) {
      let sy = SY + Math.floor(((H < 0 ? ah - 1 - y : y) * SH2) / ah);
      if (sy < 0 || sy >= src.h) continue;
      for (let x = 0; x < aw; x++) {
        const sx = SX + Math.floor(((W < 0 ? aw - 1 - x : x) * SW2) / aw);
        if (sx < 0 || sx >= src.w) continue;
        putPx(tmp, x, y, getPx(src, sx, sy));
      }
    }
    return blit(dc, W < 0 ? X + W : X, H < 0 ? Y + H : Y, aw, ah, tmp, 0, 0, rop, srcDc);
  };
  m.api(G + 'StretchBlt', 11, (hdc, x, y, w, h, hsrc, sx, sy, sw, sh, rop) => {
    const dc = DC(hdc), sdc = DC(hsrc);
    if (!dc) return 0;
    if (!sdc) return blit(dc, x | 0, y | 0, w | 0, h | 0, null, 0, 0, rop, null);
    const r = stretch(dc, x, y, w, h, sdc.surface, dx(sdc, sx), dy(sdc, sy), sw, sh, rop, sdc);
    if (dc.surface.kind === 'screen') host.screen.present();
    return r;
  });
  m.api(G + 'StretchDIBits', 13, (hdc, x, y, w, h, sx, sy, sw, sh, pBits, bmi, usage, rop) => {
    const dc = DC(hdc);
    if (!dc || !pBits) return 0;
    const src = dibFromPacked(dc, bmi, pBits, usage);
    // DIB source coordinates have their origin at the lower-left corner of the image.
    sx |= 0; sy |= 0; sw |= 0; sh |= 0;
    const top = src.h - (sy + sh);
    stretch(dc, x, y, w, h, src, sx, top, sw, sh, rop, null);
    if (dc.surface.kind === 'screen') host.screen.present();
    return sh;
  });
  m.api(G + 'GetPixel', 3, (hdc, x, y) => {
    const dc = DC(hdc);
    if (!dc) return 0xFFFFFFFF;
    const X = dx(dc, x), Y = dy(dc, y), s = dc.surface;
    if (X < 0 || Y < 0 || X >= s.w || Y >= s.h) return 0xFFFFFFFF;
    return crOf(rgbAt(s, getPx(s, X, Y)));
  });
  const inClip = (rects, x, y) => { for (const r of rects) if (x >= r[0] && x < r[2] && y >= r[1] && y < r[3]) return true; return false; };
  m.api(G + 'SetPixel', 4, (hdc, x, y, cr) => {
    const dc = DC(hdc);
    if (!dc) return 0xFFFFFFFF;
    const X = dx(dc, x), Y = dy(dc, y);
    if (!inClip(clipRects(dc), X, Y)) return 0xFFFFFFFF;
    putPx(dc.surface, X, Y, pixelOf(dc, dc.surface, cr));
    if (dc.surface.kind === 'screen') { dirty(X, Y, X + 1, Y + 1); host.screen.present(); }
    return cr;
  });

  // --- shapes and lines ------------------------------------------------------------
  const fillRects = (dc, rects, hbr, ropc = 0xF0) => {
    const save = dc.brush;
    if (hbr) dc.brush = hbr;
    const sx = dc.vx, sy = dc.vy, wx = dc.wx, wy = dc.wy, ox = dc.ox, oy = dc.oy;
    dc.vx = dc.vy = dc.wx = dc.wy = dc.ox = dc.oy = 0;                 // rects are device coordinates
    for (const r of rects) blit(dc, r[0], r[1], r[2] - r[0], r[3] - r[1], null, 0, 0, ropc << 16, null);
    dc.vx = sx; dc.vy = sy; dc.wx = wx; dc.wy = wy; dc.ox = ox; dc.oy = oy;
    dc.brush = save;
    if (dc.surface.kind === 'screen') host.screen.present();
  };
  host.fillRects = fillRects;
  const devRgn = (dc, r) => r.rects.map((q) => [dx(dc, q[0]), dy(dc, q[1]), dx(dc, q[2]), dy(dc, q[3])]);
  m.api(G + 'FillRgn', 3, (hdc, hrgn, hbr) => { const dc = DC(hdc), r = objs.get(hrgn); if (!dc || !r) return 0; fillRects(dc, devRgn(dc, r), hbr); return 1; });
  m.api(G + 'InvertRgn', 2, (hdc, hrgn) => { const dc = DC(hdc), r = objs.get(hrgn); if (!dc || !r) return 0; fillRects(dc, devRgn(dc, r), 0, 0x55); return 1; });
  m.api(G + 'FrameRgn', 5, (hdc, hrgn, hbr, w, h) => {
    const dc = DC(hdc), r = objs.get(hrgn);
    if (!dc || !r) return 0;
    w = Math.max(1, w | 0); h = Math.max(1, h | 0);
    // frame = region minus the region shrunk by (w, h): approximate per rectangle on the bounding outline
    const rects = devRgn(dc, r);
    const inside = (x, y) => rects.some((q) => x >= q[0] && x < q[2] && y >= q[1] && y < q[3]);
    const out = [];
    for (const q of rects) {
      for (let y = q[1]; y < q[3]; y++) {
        let run = -1;
        for (let x = q[0]; x <= q[2]; x++) {
          const edge = x < q[2] && !(inside(x - w, y) && inside(x + w, y) && inside(x, y - h) && inside(x, y + h));
          if (edge && run < 0) run = x;
          if (!edge && run >= 0) { out.push([run, y, x, y + 1]); run = -1; }
        }
      }
    }
    fillRects(dc, out, hbr);
    return 1;
  });
  const penPixel = (dc) => { const p = objs.get(dc.pen); return !p || p.style === 5 ? null : { v: pixelOf(dc, dc.surface, p.cr !== undefined ? p.cr : crOf(p.color)), w: p.width }; };
  const plot = (dc, rects, x, y, v, rop2) => {
    if (!inClip(rects, x, y)) return;
    const s = dc.surface;
    if (rop2 === 13) putPx(s, x, y, v);
    else if (rop2 === 7) putPx(s, x, y, getPx(s, x, y) ^ v);
    else if (rop2 === 6) putPx(s, x, y, ~getPx(s, x, y) & (s.bpp === 8 ? 255 : 0xFFFFFF));
    else if (rop2 === 1) putPx(s, x, y, 0);
    else if (rop2 === 16) putPx(s, x, y, s.bpp === 8 ? 255 : 0xFFFFFF);
    else if (rop2 !== 11) putPx(s, x, y, v);
  };
  const line = (dc, x0, y0, x1, y1) => {
    const pen = penPixel(dc);
    if (!pen) return;
    const rects = clipRects(dc);
    const w = pen.w;
    let ddx = Math.abs(x1 - x0), ddy = -Math.abs(y1 - y0);
    const sx = x0 < x1 ? 1 : -1, sy = y0 < y1 ? 1 : -1;
    let err = ddx + ddy;
    let x = x0, y = y0;
    const mark = [Math.min(x0, x1) - w, Math.min(y0, y1) - w, Math.max(x0, x1) + w + 1, Math.max(y0, y1) + w + 1];
    for (;;) {
      if (x === x1 && y === y1) break;                 // the end point is not drawn
      if (w <= 1) plot(dc, rects, x, y, pen.v, dc.rop2);
      else for (let a = -(w >> 1); a < w - (w >> 1); a++) for (let b = -(w >> 1); b < w - (w >> 1); b++) plot(dc, rects, x + a, y + b, pen.v, dc.rop2);
      const e2 = 2 * err;
      if (e2 >= ddy) { err += ddy; x += sx; }
      if (e2 <= ddx) { err += ddx; y += sy; }
    }
    if (dc.surface.kind === 'screen') { dirty(Math.max(0, mark[0]), Math.max(0, mark[1]), Math.min(SW, mark[2]), Math.min(SH, mark[3])); host.screen.present(); }
  };
  m.api(G + 'MoveToEx', 4, (hdc, x, y, p) => { const dc = DC(hdc); if (!dc) return 0; pt(p, dc.curX, dc.curY); dc.curX = x | 0; dc.curY = y | 0; return 1; });
  m.api(G + 'GetCurrentPositionEx', 2, (hdc, p) => { const dc = DC(hdc); return dc ? pt(p, dc.curX, dc.curY) : 0; });
  m.api(G + 'LineTo', 3, (hdc, x, y) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    line(dc, dx(dc, dc.curX), dy(dc, dc.curY), dx(dc, x), dy(dc, y));
    dc.curX = x | 0; dc.curY = y | 0;
    return 1;
  });
  m.api(G + 'PolylineTo', 3, (hdc, p, n) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    for (let k = 0; k < n; k++) {
      const x = i32[(p + k * 8) >> 2], y = i32[(p + k * 8 + 4) >> 2];
      line(dc, dx(dc, dc.curX), dy(dc, dc.curY), dx(dc, x), dy(dc, y));
      dc.curX = x; dc.curY = y;
    }
    return 1;
  });
  m.api(G + 'Rectangle', 5, (hdc, l, t, r, b) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    const q = norm(dx(dc, l), dy(dc, t), dx(dc, r), dy(dc, b));
    const br = objs.get(dc.brush);
    const pen = penPixel(dc);
    if (br && br.style !== 1) fillRects(dc, [pen ? [q[0] + 1, q[1] + 1, q[2] - 1, q[3] - 1] : [q[0], q[1], q[2] - 1, q[3] - 1]], 0);
    if (pen) {
      line(dc, q[0], q[1], q[2] - 1, q[1]); line(dc, q[2] - 1, q[1], q[2] - 1, q[3] - 1);
      line(dc, q[2] - 1, q[3] - 1, q[0], q[3] - 1); line(dc, q[0], q[3] - 1, q[0], q[1]);
    }
    return 1;
  });
  // Curve/path primitives exist only in MFC's CDC wrappers; the title does not draw with them.
  m.api(G + 'ArcTo', 9, () => 1);
  m.api(G + 'PolyBezierTo', 3, () => 1);
  m.api(G + 'PolyDraw', 4, () => 1);
  m.api(G + 'PlayMetaFile', 2, () => 1);
  m.api(G + 'PlayMetaFileRecord', 4, () => 1);
  m.api(G + 'EnumMetaFile', 4, () => 1);

  // --- text ----------------------------------------------------------------------
  const textOut = (dc, x, y, str, opts = 0, pRect = 0) => {
    const f = fontOf(dc);
    const t = host.text.metrics(f);
    const s = dc.surface;
    let X = dx(dc, x), Y = dy(dc, y);
    if (dc.textAlign & 1) { X = dx(dc, dc.curX); Y = dy(dc, dc.curY); }
    const width = host.text.width(f, str);
    if ((dc.textAlign & 6) === 6) X -= width >> 1;
    else if (dc.textAlign & 2) X -= width;
    if ((dc.textAlign & 24) === 24) Y -= t.ascent;
    else if (dc.textAlign & 8) Y -= t.height;
    let rects = clipRects(dc);
    let box = null;
    if (pRect) box = [dx(dc, i32[pRect >> 2]), dy(dc, i32[(pRect + 4) >> 2]), dx(dc, i32[(pRect + 8) >> 2]), dy(dc, i32[(pRect + 12) >> 2])];
    if ((opts & 2) && box) fillRectsColor(dc, isect(rects, box[0], box[1], box[2], box[3]), dc.bkColor);
    else if (dc.bkMode === 2 && str.length && !(opts & 2)) fillRectsColor(dc, isect(rects, X, Y, X + width, Y + t.height), dc.bkColor);
    if ((opts & 4) && box) rects = isect(rects, box[0], box[1], box[2], box[3]);
    if (str.length) {
      const g = host.text.raster(f, str);       // {w, h, alpha: Uint8Array}
      const v = pixelOf(dc, s, dc.textColor);
      for (let yy = 0; yy < g.h; yy++) {
        for (let xx = 0; xx < g.w; xx++) {
          if (g.alpha[yy * g.w + xx] >= 128 && inClip(rects, X + xx, Y + yy)) putPx(s, X + xx, Y + yy, v);
        }
      }
      if (s.kind === 'screen') { dirty(Math.max(0, X), Math.max(0, Y), Math.min(SW, X + g.w), Math.min(SH, Y + g.h)); host.screen.present(); }
    }
    if (dc.textAlign & 1) dc.curX += width;
    return width;
  };
  const fillRectsColor = (dc, rects, cr) => {
    const s = dc.surface;
    const v = pixelOf(dc, s, cr);
    for (const r of rects) {
      for (let y = r[1]; y < r[3]; y++) {
        if (s.bpp === 8) { const o = rowOff(s, y); s.data.fill(v, o + r[0], o + r[2]); } else for (let x = r[0]; x < r[2]; x++) putPx(s, x, y, v);
      }
      if (s.kind === 'screen') dirty(r[0], r[1], r[2], r[3]);
    }
  };
  host.textOut = textOut;
  host.fillRectsColor = fillRectsColor;
  m.api(G + 'TextOutA', 5, (hdc, x, y, p, n) => { const dc = DC(hdc); if (!dc) return 0; textOut(dc, x, y, host.latin1At(p, n)); return 1; });
  m.api(G + 'ExtTextOutA', 8, (hdc, x, y, opts, pRect, p, n) => { const dc = DC(hdc); if (!dc) return 0; textOut(dc, x, y, p ? host.latin1At(p, n) : '', opts, pRect); return 1; });

  // --- printing: pages are rendered to a 24-bit surface and handed to the platform ---
  host.createPrinterDC = () => {
    const w = 2400, h = 3150;       // 8 x 10.5 inch printable area at 300 dpi
    const s = { kind: 'print', w, h, bpp: 32, stride: w * 4, data: new Uint8Array(w * h * 4).fill(255), topDown: true, colors: null, cver: 1 };
    return newDC(s, { printer: true });
  };
  m.api(G + 'StartDocA', 2, (hdc, pDoc) => { const dc = DC(hdc); if (!dc) return -1; dc.docName = u32[(pDoc + 4) >> 2] ? m.cstr(u32[(pDoc + 4) >> 2]) : 'Maisy'; dc.pages = 0; return 1; });
  m.api(G + 'StartPage', 1, (hdc) => { const dc = DC(hdc); if (!dc) return 0; if (dc.surface.kind === 'print') dc.surface.data.fill(255); return 1; });
  m.api(G + 'EndPage', 1, (hdc) => {
    const dc = DC(hdc);
    if (!dc) return 0;
    if (dc.surface.kind === 'print') { dc.pages = (dc.pages || 0) + 1; host.printPage(dc.surface, dc.docName || 'Maisy', dc.pages); }
    return 1;
  });
  m.api(G + 'EndDoc', 1, () => 1);
  m.api(G + 'ResetDCA', 2, (hdc, pDevMode) => {
    // dmOrientation (DEVMODE +44): 1 portrait, 2 landscape. The page surface is re-made to match.
    const dc = DC(hdc);
    if (!dc || dc.surface.kind !== 'print') return hdc;
    const landscape = pDevMode && u16[(pDevMode + 44) >> 1] === 2;
    const w = landscape ? 3150 : 2400, h = landscape ? 2400 : 3150;
    if (dc.surface.w !== w) {
      dc.surface = { kind: 'print', w, h, bpp: 32, stride: w * 4, data: new Uint8Array(w * h * 4).fill(255), topDown: true, colors: null, cver: 1 };
      dc.visW = w; dc.visH = h;
    }
    return hdc;
  });
  m.api(G + 'Escape', 5, () => 0);
}
