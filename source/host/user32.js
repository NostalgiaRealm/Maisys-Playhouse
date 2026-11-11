// USER32 for the recompiled mTropolis player (an MFC application): window classes, a window tree,
// message queue and dispatch, hooks (MFC subclasses windows from a WH_CBT hook), painting, input,
// menus/accelerators as data, cursors and the string/rect helpers.
//
// Browser adaptation (docs/intentional-differences.md): windows have no non-client area. The
// frame's caption, borders and menu bar are not drawn and have zero size, so a window's client
// area equals its window rectangle and the stage keeps its authored 640x480 coordinates.

const WM = {
  CREATE: 0x01, DESTROY: 0x02, MOVE: 0x03, SIZE: 0x05, ACTIVATE: 0x06, SETFOCUS: 0x07, KILLFOCUS: 0x08, ENABLE: 0x0A,
  SETTEXT: 0x0C, GETTEXT: 0x0D, GETTEXTLENGTH: 0x0E, PAINT: 0x0F, CLOSE: 0x10, QUIT: 0x12, ERASEBKGND: 0x14,
  SHOWWINDOW: 0x18, ACTIVATEAPP: 0x1C, SETCURSOR: 0x20, MOUSEACTIVATE: 0x21, GETMINMAXINFO: 0x24, WINDOWPOSCHANGING: 0x46,
  WINDOWPOSCHANGED: 0x47, NCCREATE: 0x81, NCDESTROY: 0x82, NCCALCSIZE: 0x83, NCHITTEST: 0x84, NCPAINT: 0x85, NCACTIVATE: 0x86,
  KEYDOWN: 0x100, KEYUP: 0x101, CHAR: 0x102, SYSKEYDOWN: 0x104, SYSKEYUP: 0x105, SYSCHAR: 0x106, INITDIALOG: 0x110,
  COMMAND: 0x111, SYSCOMMAND: 0x112, MOUSEMOVE: 0x200, LBUTTONDOWN: 0x201, LBUTTONUP: 0x202, LBUTTONDBLCLK: 0x203,
  RBUTTONDOWN: 0x204, RBUTTONUP: 0x205, RBUTTONDBLCLK: 0x206, QUERYNEWPALETTE: 0x30F, PALETTECHANGED: 0x311,
  CANCELMODE: 0x1F, CAPTURECHANGED: 0x215,
};
const WS_CHILD = 0x40000000, WS_VISIBLE = 0x10000000, WS_DISABLED = 0x08000000, WS_POPUP = 0x80000000;

export function installUser32(m, host) {
  const { u8, u16, u32, i32 } = m;
  const U = 'USER32.DLL!';
  const SW = host.screen.width, SH = host.screen.height;
  const log = (s) => host.log(s);

  const tmp = m.lowAlloc(1024);            // scratch for structures passed to window procedures
  const wins = host.windows = new Map();
  const classes = new Map();
  let nextHwnd = 0x10100;
  const DESKTOP = 0x10010;
  const desktop = { hwnd: DESKTOP, inset: 0, x: 0, y: 0, w: SW, h: SH, style: WS_VISIBLE, exStyle: 0, children: [], parent: null, owner: null, visible: true, enabled: true, props: new Map(), extra: new Uint8Array(0), cls: { name: '#32769', style: 0 }, proc: 0, text: '', id: 0 };
  wins.set(DESKTOP, desktop);
  const W = (h) => wins.get(h);
  let activeWin = 0, focusWin = 0, captureWin = 0;
  const queue = [];
  let quitPosted = null;
  let lastMsg = { time: 0, x: 0, y: 0 };
  const keyState = new Uint8Array(256);
  let cursorX = SW >> 1, cursorY = SH >> 1;

  // --- strings ---------------------------------------------------------------------
  const strOrAtom = (p) => (p < 0x10000 ? (host.atomName(p) || '#' + p) : m.cstr(p));
  const format = (fmt, nextArg) => {
    let out = '';
    for (let k = 0; k < fmt.length; k++) {
      const c = fmt[k];
      if (c !== '%') { out += c; continue; }
      let spec = '';
      k++;
      while (k < fmt.length && '-+ #0'.includes(fmt[k])) spec += fmt[k++];
      let width = '';
      if (fmt[k] === '*') { width = String(nextArg() | 0); k++; } else while (k < fmt.length && fmt[k] >= '0' && fmt[k] <= '9') width += fmt[k++];
      let prec = -1;
      if (fmt[k] === '.') { k++; let p = ''; if (fmt[k] === '*') { p = String(nextArg() | 0); k++; } else while (k < fmt.length && fmt[k] >= '0' && fmt[k] <= '9') p += fmt[k++]; prec = Number(p || 0); }
      while (k < fmt.length && 'lhLwI'.includes(fmt[k])) k++;
      const t = fmt[k];
      let s;
      switch (t) {
        case 'd': case 'i': s = String(nextArg() | 0); break;
        case 'u': s = String(nextArg() >>> 0); break;
        case 'x': s = (nextArg() >>> 0).toString(16); break;
        case 'X': s = (nextArg() >>> 0).toString(16).toUpperCase(); break;
        case 'c': case 'C': s = String.fromCharCode(nextArg() & 0xFF); break;
        case 's': case 'S': { const p = nextArg(); s = p ? m.cstr(p) : '(null)'; if (prec >= 0) s = s.slice(0, prec); break; }
        case 'p': s = (nextArg() >>> 0).toString(16).toUpperCase().padStart(8, '0'); break;
        case '%': s = '%'; break;
        default: s = '%' + spec + width + (t || ''); break;
      }
      if ('diuxX'.includes(t) && prec >= 0) { const neg = s[0] === '-'; s = (neg ? '-' : '') + (neg ? s.slice(1) : s).padStart(prec, '0'); }
      const wn = Number(width || 0);
      if (s.length < wn) s = spec.includes('-') ? s.padEnd(wn) : spec.includes('0') && 'diuxX'.includes(t) ? (s[0] === '-' ? '-' + s.slice(1).padStart(wn - 1, '0') : s.padStart(wn, '0')) : s.padStart(wn);
      out += s;
    }
    return out;
  };
  host.format = format;
  // wsprintfA is cdecl: the caller pops the arguments.
  m.bindRaw(U + 'wsprintfA', 0, (esp) => {
    let a = esp + 12;
    const s = format(m.cstr(u32[(esp + 8) >> 2]), () => { const v = u32[a >> 2]; a += 4; return v; });
    return m.writeCStr(u32[(esp + 4) >> 2], s, 1024 + 1);
  });
  m.bound.add(U + 'wsprintfA');
  m.api(U + 'wvsprintfA', 3, (buf, fmt, args) => {
    let a = args;
    return m.writeCStr(buf, format(m.cstr(fmt), () => { const v = u32[a >> 2]; a += 4; return v; }), 1025);
  });
  const up = (c) => ((c >= 0x61 && c <= 0x7A) || (c >= 0xE0 && c <= 0xFE && c !== 0xF7) ? c - 32 : c);
  const lo = (c) => ((c >= 0x41 && c <= 0x5A) || (c >= 0xC0 && c <= 0xDE && c !== 0xD7) ? c + 32 : c);
  m.api(U + 'CharUpperA', 1, (p) => { if (p < 0x10000) return up(p); for (let q = p; u8[q]; q++) u8[q] = up(u8[q]); return p; });
  m.api(U + 'CharLowerA', 1, (p) => { if (p < 0x10000) return lo(p); for (let q = p; u8[q]; q++) u8[q] = lo(u8[q]); return p; });
  const copyStr = (s, d) => { let k = 0; do { u8[d + k] = u8[s + k]; } while (u8[s + k++]); return 1; };
  m.api(U + 'CharToOemA', 2, copyStr);
  m.api(U + 'OemToCharA', 2, copyStr);
  m.api(U + 'LoadStringA', 4, (hInst, id, buf, n) => {
    const r = host.resource(hInst, (id >>> 4) + 1, 6);
    if (!r) { if (n) u8[buf] = 0; return 0; }
    let p = r.ptr;
    for (let k = 0; k < (id & 15); k++) p += 2 + u16[p >> 1] * 2;
    const len = u16[p >> 1];
    let s = '';
    for (let k = 0; k < len; k++) { const c = u16[(p + 2 + k * 2) >> 1]; s += String.fromCharCode(c < 256 ? c : 0x3F); }
    return m.writeCStr(buf, s, n);
  });

  // --- rectangles ------------------------------------------------------------------
  const rd = (p) => [i32[p >> 2], i32[(p + 4) >> 2], i32[(p + 8) >> 2], i32[(p + 12) >> 2]];
  const wr = (p, a, b, c, d) => { i32[p >> 2] = a; i32[(p + 4) >> 2] = b; i32[(p + 8) >> 2] = c; i32[(p + 12) >> 2] = d; };
  m.api(U + 'CopyRect', 2, (d, s) => { wr(d, ...rd(s)); return 1; });
  m.api(U + 'SetRectEmpty', 1, (p) => { wr(p, 0, 0, 0, 0); return 1; });
  m.api(U + 'EqualRect', 2, (a, b) => { const x = rd(a), y = rd(b); return x.every((v, k) => v === y[k]) ? 1 : 0; });
  m.api(U + 'OffsetRect', 3, (p, ax, ay) => { const r = rd(p); wr(p, r[0] + (ax | 0), r[1] + (ay | 0), r[2] + (ax | 0), r[3] + (ay | 0)); return 1; });
  m.api(U + 'IntersectRect', 3, (d, a, b) => {
    const x = rd(a), y = rd(b);
    const l = Math.max(x[0], y[0]), t = Math.max(x[1], y[1]), r = Math.min(x[2], y[2]), bt = Math.min(x[3], y[3]);
    if (l < r && t < bt) { wr(d, l, t, r, bt); return 1; }
    wr(d, 0, 0, 0, 0);
    return 0;
  });
  m.api(U + 'PtInRect', 3, (p, x, y) => { const r = rd(p); x |= 0; y |= 0; return x >= r[0] && x < r[2] && y >= r[1] && y < r[3] ? 1 : 0; });

  // --- system information ------------------------------------------------------------
  m.api(U + 'GetSystemMetrics', 1, (i) => {
    switch (i) {
      case 0: return SW;               // SM_CXSCREEN
      case 1: return SH;
      case 2: case 3: return 16;       // scroll bar sizes
      case 13: case 14: return 32;     // cursor
      case 11: case 12: return 32;     // icon
      case 16: return SW;              // SM_CXFULLSCREEN
      case 17: return SH;
      case 19: return 1;               // SM_MOUSEPRESENT
      case 28: case 29: return 0;      // SM_CXMIN/CYMIN
      case 36: case 37: return 4;      // double click
      case 43: return 3;               // SM_CMOUSEBUTTONS
      case 49: case 50: return 16;     // small icon
      case 59: return SW;              // SM_CXMAXTRACK
      case 60: return SH;
      case 61: return SW;              // SM_CXMAXIMIZED
      case 62: return SH;
      case 5: case 6: return 1;        // SM_CXBORDER/SM_CYBORDER (the MDI child's border)
      // otherwise no non-client area: caption, menu, frame and edge sizes are zero
      default: return 0;
    }
  });
  const SYSCOLORS = [0xC0C0C0, 0x808000, 0x800000, 0x808080, 0xC0C0C0, 0xFFFFFF, 0x000000, 0x000000, 0x000000, 0xFFFFFF, 0xC0C0C0, 0xC0C0C0, 0x808080, 0x800000, 0xFFFFFF, 0xC0C0C0, 0x808080, 0x808080, 0x000000, 0xC0C0C0, 0xFFFFFF, 0x000000, 0xC0C0C0, 0x000000, 0xE1FFFF];
  m.api(U + 'GetSysColor', 1, (i) => SYSCOLORS[i] || 0);
  m.api(U + 'SetSysColors', 3, () => 1);
  m.api(U + 'SystemParametersInfoA', 4, (action, a, p) => {
    if (action === 48 && p) { wr(p, 0, 0, SW, SH); return 1; }   // SPI_GETWORKAREA
    return 0;
  });
  m.api(U + 'GetDialogBaseUnits', 0, () => (16 << 16) | 8);
  m.api(U + 'GetKeyboardType', 1, (t) => (t === 0 ? 4 : t === 2 ? 12 : 0));
  m.api(U + 'MessageBeep', 1, () => { host.beep(); return 1; });
  m.api(U + 'SetMessageQueue', 1, () => 1);
  m.api(U + 'GetMenuCheckMarkDimensions', 0, () => (13 << 16) | 13);
  const regMsgs = new Map();
  m.api(U + 'RegisterWindowMessageA', 1, (p) => {
    const s = m.cstr(p);
    if (!regMsgs.has(s)) regMsgs.set(s, 0xC000 + regMsgs.size);
    return regMsgs.get(s);
  });

  // --- classes ---------------------------------------------------------------------
  const callProc = (proc, hwnd, msg, wp, lp) => {
    if (!proc) return 0;
    return m.call(proc, [hwnd, msg, wp, lp]) >>> 0;
  };
  const send = (hwnd, msg, wp = 0, lp = 0) => {
    const w = W(hwnd);
    if (!w || w.destroyed) return 0;
    if (host.traceMsg) log(`  send ${hwnd.toString(16)} ${msg.toString(16)} ${wp.toString(16)} ${lp.toString(16)}`);
    return callProc(w.proc, hwnd, msg, wp >>> 0, lp >>> 0);
  };
  host.sendMessage = send;
  const defProcThunk = m.makeThunk('DefWindowProcA(thunk)', 16, (esp) => defWindowProc(u32[(esp + 4) >> 2], u32[(esp + 8) >> 2], u32[(esp + 12) >> 2], u32[(esp + 16) >> 2]));
  // MDICLIENT: the player is an MFC MDI application; its document window is an MDI child.
  const mdiClientProc = (hwnd, msg, wp, lp) => {
    const w = W(hwnd);
    if (!w) return 0;
    switch (msg) {
      case 0x220: {   // WM_MDICREATE: lp -> MDICREATESTRUCT {szClass, szTitle, hOwner, x, y, cx, cy, style, lParam}
        let x = i32[(lp + 12) >> 2], y = i32[(lp + 16) >> 2], cx = i32[(lp + 20) >> 2], cy = i32[(lp + 24) >> 2];
        if (x === (0x80000000 | 0)) { x = 0; y = 0; }
        if (cx === (0x80000000 | 0)) { cx = cw(w); cy = ch(w); }
        const style = (u32[(lp + 28) >> 2] | 0x40000000 | 0x10000000 | 0x04000000) >>> 0;   // WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS
        const child = createWindow(0x40, u32[lp >> 2], u32[(lp + 4) >> 2], style, x, y, cx, cy, hwnd, 0, u32[(lp + 8) >> 2], lp);
        if (child) mdiActivate(w, W(child));
        return child;
      }
      case 0x221: { const c = W(wp); if (c) { if (w.mdiActive === wp) w.mdiActive = 0; destroy(c); } return 0; }   // WM_MDIDESTROY
      case 0x222: { const c = W(wp); if (c) mdiActivate(w, c); return 0; }                                        // WM_MDIACTIVATE
      case 0x229: if (lp) u32[lp >> 2] = 0; return w.mdiActive || 0;                                              // WM_MDIGETACTIVE
      case 0x225: { const c = W(wp); if (c) setPos(c, 0, 0, cw(w), ch(w), 4, 0); return 0; }                          // WM_MDIMAXIMIZE
      case 0x223: return 0;                                                                                       // WM_MDIRESTORE
      case 0x230: return 0;                                                                                       // WM_MDISETMENU (no menu bar)
      case 0x234: return 0;                                                                                       // WM_MDIREFRESHMENU
      case WM.SETFOCUS: if (w.mdiActive && W(w.mdiActive)) setFocus(w.mdiActive); return 0;
      default: return defWindowProc(hwnd, msg, wp, lp);
    }
  };
  const mdiActivate = (client, c) => {
    const old = client.mdiActive || 0;
    if (old === c.hwnd) return;
    client.mdiActive = c.hwnd;
    const s2 = client.children;
    s2.splice(s2.indexOf(c), 1);
    s2.unshift(c);
    if (old && W(old)) send(old, 0x222, old, c.hwnd);
    send(c.hwnd, 0x22, 0, 0);                 // WM_CHILDACTIVATE
    send(c.hwnd, 0x222, old, c.hwnd);         // WM_MDIACTIVATE
    if (activeWin === topLevelOf(client).hwnd) setFocus(c.hwnd);
  };
  const mdiProcThunk = m.makeThunk('MDIClientProc(thunk)', 16, (esp) => mdiClientProc(u32[(esp + 4) >> 2], u32[(esp + 8) >> 2], u32[(esp + 12) >> 2], u32[(esp + 16) >> 2]));
  const SYSTEM_CLASSES = ['BUTTON', 'EDIT', 'STATIC', 'LISTBOX', 'COMBOBOX', 'SCROLLBAR', 'MDICLIENT', '#32770', '#32768', 'COMBOLBOX'];
  for (const name of SYSTEM_CLASSES) classes.set(name, { name, style: 0x0008, proc: name === 'MDICLIENT' ? mdiProcThunk : defProcThunk, clsExtra: 0, wndExtra: name === '#32770' ? 30 : 4, hInstance: 0, hIcon: 0, hCursor: 0, hbrBackground: 0, menuName: 0, atom: host.addAtom(name), system: true });
  const readClass = (p) => ({ style: u32[p >> 2], proc: u32[(p + 4) >> 2], clsExtra: i32[(p + 8) >> 2], wndExtra: i32[(p + 12) >> 2], hInstance: u32[(p + 16) >> 2], hIcon: u32[(p + 20) >> 2], hCursor: u32[(p + 24) >> 2], hbrBackground: u32[(p + 28) >> 2], menuName: u32[(p + 32) >> 2], name: strOrAtom(u32[(p + 36) >> 2]) });
  m.api(U + 'RegisterClassA', 1, (p) => {
    const c = readClass(p);
    const key = c.name.toUpperCase();
    if (classes.has(key) && !classes.get(key).system) { host.lastError = 1410; return 0; }
    c.atom = host.addAtom(c.name);
    c.menuNamePtr = c.menuName;
    classes.set(key, c);
    if (host.traceWin) log(`RegisterClass ${c.name} style=${c.style.toString(16)} proc=${c.proc.toString(16)}`);
    return c.atom;
  });
  m.api(U + 'UnregisterClassA', 2, (p) => { classes.delete(strOrAtom(p).toUpperCase()); return 1; });
  m.api(U + 'GetClassInfoA', 3, (hInst, pName, p) => {
    const c = classes.get(strOrAtom(pName).toUpperCase());
    if (!c) { host.lastError = 1411; return 0; }
    u32[p >> 2] = c.style; u32[(p + 4) >> 2] = c.proc; i32[(p + 8) >> 2] = c.clsExtra; i32[(p + 12) >> 2] = c.wndExtra;
    u32[(p + 16) >> 2] = c.hInstance; u32[(p + 20) >> 2] = c.hIcon; u32[(p + 24) >> 2] = c.hCursor; u32[(p + 28) >> 2] = c.hbrBackground;
    u32[(p + 32) >> 2] = c.menuName; u32[(p + 36) >> 2] = pName;
    return 1;
  });
  m.api(U + 'GetClassNameA', 3, (hwnd, buf, n) => { const w = W(hwnd); return w ? m.writeCStr(buf, w.cls.name, n) : 0; });

  // --- hooks -----------------------------------------------------------------------
  const hooks = [];
  m.api(U + 'SetWindowsHookExA', 4, (id, proc, hMod, thread) => {
    const h = 0x7000 + hooks.length * 4;
    hooks.push({ h, id: id | 0, proc, active: true });
    return h;
  });
  m.api(U + 'UnhookWindowsHookEx', 1, (h) => { const k = hooks.find((x) => x.h === h); if (k) k.active = false; return 1; });
  m.api(U + 'CallNextHookEx', 4, () => 0);
  const callHooks = (id, code, wp, lp) => {
    let r = 0;
    for (let k = hooks.length - 1; k >= 0; k--) {
      const hk = hooks[k];
      if (hk.active && hk.id === id) { r = m.call(hk.proc, [code, wp, lp]); if (r) break; }
    }
    return r;
  };

  // --- window tree -------------------------------------------------------------------
  const origin = (w) => {
    let x = 0, y = 0;
    for (let p = w; p && p !== desktop; p = p.parent) { x += p.x + p.inset; y += p.y + p.inset; }
    return [x, y];
  };
  const cw = (w) => Math.max(0, w.w - 2 * w.inset);
  const ch = (w) => Math.max(0, w.h - 2 * w.inset);
  const isVisible = (w) => { for (let p = w; p && p !== desktop; p = p.parent) if (!p.visible) return false; return true; };
  const isEnabled = (w) => { for (let p = w; p && p !== desktop; p = p.parent) if (!p.enabled) return false; return true; };
  const topLevelOf = (w) => { let p = w; while (p.parent && p.parent !== desktop) p = p.parent; return p; };
  host.windowOrigin = (hwnd) => { const w = W(hwnd); return w ? origin(w) : [0, 0]; };
  const invalidate = (w, rect = null) => {
    // rect: client coordinates [l,t,r,b] or null for all
    const r = rect || [0, 0, cw(w), ch(w)];
    if (w.update) w.update = [Math.min(w.update[0], r[0]), Math.min(w.update[1], r[1]), Math.max(w.update[2], r[2]), Math.max(w.update[3], r[3])];
    else w.update = r.slice();
    w.erase = true;
  };
  const invalidateTree = (w) => { invalidate(w); for (const c of w.children) if (c.visible) invalidateTree(c); };

  const writeCreateStruct = (p, w, params, hMenu, pName, pClass) => {
    u32[p >> 2] = params; u32[(p + 4) >> 2] = w.hInstance; u32[(p + 8) >> 2] = hMenu; u32[(p + 12) >> 2] = w.parent && w.parent !== desktop ? w.parent.hwnd : (w.owner ? w.owner.hwnd : 0);
    i32[(p + 16) >> 2] = w.h; i32[(p + 20) >> 2] = w.w; i32[(p + 24) >> 2] = w.y; i32[(p + 28) >> 2] = w.x;
    u32[(p + 32) >> 2] = w.style; u32[(p + 36) >> 2] = pName; u32[(p + 40) >> 2] = pClass; u32[(p + 44) >> 2] = w.exStyle;
  };
  const sizeMove = (w) => {
    send(w.hwnd, WM.SIZE, 0, ((ch(w) & 0xFFFF) << 16) | (cw(w) & 0xFFFF));
    send(w.hwnd, WM.MOVE, 0, (((w.y + w.inset) & 0xFFFF) << 16) | ((w.x + w.inset) & 0xFFFF));
  };
  const CW_USEDEFAULT = 0x80000000 | 0;
  const createWindow = (exStyle, pClass, pName, style, x, y, cx, cy, hParent, hMenu, hInst, params) => {
    const cname = strOrAtom(pClass);
    const cls = classes.get(cname.toUpperCase());
    if (!cls) { log('CreateWindowEx: unknown class ' + cname); host.lastError = 1407; return 0; }
    x |= 0; y |= 0; cx |= 0; cy |= 0;
    const child = (style & WS_CHILD) !== 0;
    let parent = desktop, owner = null;
    if (child) { parent = W(hParent); if (!parent) { host.lastError = 1400; return 0; } } else if (hParent) owner = W(hParent) || null;
    if (!child) {
      if (x === CW_USEDEFAULT) { x = 0; y = 0; }
      if (cx === CW_USEDEFAULT) { cx = SW; cy = SH; }
    }
    const hwnd = nextHwnd;
    nextHwnd += 4;
    // An MDI child keeps its one-pixel window border: the player sizes its frame so that this border
    // falls just outside the screen (Maisy.exe 0x0040F1A0), which puts the stage at (0,0).
    const w = { hwnd, inset: exStyle & 0x40 ? 1 : 0, cls, proc: cls.proc, style: style >>> 0, exStyle: exStyle >>> 0, x, y, w: Math.max(0, cx), h: Math.max(0, cy), parent, owner, children: [], visible: false, enabled: !(style & WS_DISABLED), id: child ? hMenu : 0, menu: child ? 0 : hMenu, hInstance: hInst, text: pName ? m.cstr(pName) : '', props: new Map(), extra: new Uint8Array(Math.max(0, cls.wndExtra) + 4), userData: 0, update: null, destroyed: false };
    wins.set(hwnd, w);
    parent.children.unshift(w);
    if (host.traceWin) log(`CreateWindowEx ${hwnd.toString(16)} class=${cname} "${w.text}" style=${w.style.toString(16)} ex=${w.exStyle.toString(16)} ${x},${y} ${cx}x${cy} parent=${(hParent >>> 0).toString(16)}`);
    const cs = host.heap.alloc(64);
    writeCreateStruct(cs, w, params, hMenu, pName, pClass);
    // WH_CBT / HCBT_CREATEWND: MFC installs its window procedure here.
    u32[(cs + 48) >> 2] = cs; u32[(cs + 52) >> 2] = 0;
    callHooks(5, 3, hwnd, cs + 48);
    let ok = send(hwnd, WM.NCCREATE, 0, cs);
    if (ok) {
      // WM_NCCALCSIZE keeps the whole window as client area
      const r = send(hwnd, WM.CREATE, 0, cs);
      if ((r | 0) === -1) ok = 0;
    }
    if (!ok) {
      log(`CreateWindowEx ${cname}: creation refused by the window procedure`);
      destroy(w, false);
      host.heap.release(cs);
      return 0;
    }
    host.heap.release(cs);
    if (w.destroyed) return 0;
    sizeMove(w);
    if (style & WS_VISIBLE) { w.style &= ~WS_VISIBLE; showWindow(w, 5); }
    return w.destroyed ? 0 : hwnd;
  };
  m.api(U + 'CreateWindowExA', 12, createWindow);
  const destroy = (w, notify = true) => {
    if (w.destroyed) return;
    if (notify) send(w.hwnd, WM.DESTROY);
    for (const c of w.children.slice()) destroy(c, notify);
    for (const o of [...wins.values()]) if (o.owner === w && !o.destroyed) destroy(o, notify);
    if (notify) send(w.hwnd, WM.NCDESTROY);
    w.destroyed = true;
    if (w.isDialog && w.visible) host.hideDialog(w.hwnd);
    if (w.parent) { const k = w.parent.children.indexOf(w); if (k >= 0) w.parent.children.splice(k, 1); }
    wins.delete(w.hwnd);
    if (activeWin === w.hwnd) activeWin = 0;
    if (focusWin === w.hwnd) focusWin = 0;
    if (captureWin === w.hwnd) captureWin = 0;
    for (let k = queue.length - 1; k >= 0; k--) if (queue[k].hwnd === w.hwnd) queue.splice(k, 1);
    if (w.parent && w.parent !== desktop && w.visible) invalidate(w.parent, [w.x, w.y, w.x + w.w, w.y + w.h]);
  };
  m.api(U + 'DestroyWindow', 1, (hwnd) => {
    const w = W(hwnd);
    if (!w) return 0;
    if (host.traceWin) log('DestroyWindow ' + hwnd.toString(16));
    if (w.visible) { w.visible = false; w.style &= ~WS_VISIBLE; }
    destroy(w);
    return 1;
  });
  const setFocus = (hwnd) => {
    const old = focusWin;
    if (old === hwnd) return old;
    focusWin = hwnd;
    if (old && W(old)) send(old, WM.KILLFOCUS, hwnd, 0);
    if (hwnd && W(hwnd) && focusWin === hwnd) send(hwnd, WM.SETFOCUS, old, 0);
    return old;
  };
  const activate = (w) => {
    const top = topLevelOf(w);
    if (activeWin === top.hwnd) return;
    const old = activeWin;
    const first = !host.appActive;
    host.appActive = true;
    if (old && W(old)) { send(old, WM.NCACTIVATE, 0, 0); send(old, WM.ACTIVATE, 0, top.hwnd); }
    activeWin = top.hwnd;
    if (first) send(top.hwnd, WM.ACTIVATEAPP, 1, 0);
    send(top.hwnd, WM.QUERYNEWPALETTE, 0, 0);
    send(top.hwnd, WM.NCACTIVATE, 1, 0);
    send(top.hwnd, WM.ACTIVATE, 1, old);
    // DefWindowProc(WM_ACTIVATE) gives the window the focus; an application handler may already have set it.
    if (activeWin === top.hwnd && (!focusWin || !W(focusWin) || topLevelOf(W(focusWin)) !== top)) setFocus(top.hwnd);
  };
  const showWindow = (w, cmd) => {
    const was = w.visible;
    const show = cmd !== 0;      // SW_HIDE = 0; minimise is not modelled (no taskbar)
    if (show === was) return was;
    send(w.hwnd, WM.SHOWWINDOW, show ? 1 : 0, 0);
    w.visible = show;
    if (show) w.style |= WS_VISIBLE; else w.style &= ~WS_VISIBLE;
    if (w.isDialog) { if (show) host.showDialog(dialogSpec(w)); else host.hideDialog(w.hwnd); }
    if (w.parent && w.parent.isDialog) host.dialogChanged(w.parent);
    if (show) {
      invalidateTree(w);
      if (w.parent === desktop && cmd !== 4 && cmd !== 8 && cmd !== 7) activate(w);
    } else {
      if (w.parent && w.parent !== desktop) invalidate(w.parent, [w.x, w.y, w.x + w.w, w.y + w.h]);
      if (activeWin === w.hwnd) activeWin = 0;
      if (focusWin === w.hwnd) setFocus(0);
    }
    return was;
  };
  m.api(U + 'ShowWindow', 2, (hwnd, cmd) => { const w = W(hwnd); if (!w) return 0; if (host.traceWin) log(`ShowWindow ${hwnd.toString(16)} ${cmd}`); return showWindow(w, cmd) ? 1 : 0; });
  m.api(U + 'ShowOwnedPopups', 2, () => 1);
  m.api(U + 'IsWindow', 1, (h) => (W(h) ? 1 : 0));
  m.api(U + 'IsWindowVisible', 1, (h) => { const w = W(h); return w && isVisible(w) ? 1 : 0; });
  m.api(U + 'IsWindowEnabled', 1, (h) => { const w = W(h); return w && w.enabled ? 1 : 0; });
  m.api(U + 'IsIconic', 1, () => 0);
  m.api(U + 'IsChild', 2, (hp, hc) => { let w = W(hc); const p = W(hp); if (!w || !p) return 0; while (w.parent && w.parent !== desktop) { w = w.parent; if (w === p) return 1; } return 0; });
  m.api(U + 'EnableWindow', 2, (h, en) => {
    const w = W(h);
    if (!w) return 0;
    const was = !w.enabled;
    if (w.enabled !== !!en) {
      w.enabled = !!en;
      if (en) w.style &= ~WS_DISABLED; else w.style |= WS_DISABLED;
      send(h, WM.ENABLE, en ? 1 : 0, 0);
    }
    return was ? 1 : 0;
  });
  m.api(U + 'GetDesktopWindow', 0, () => DESKTOP);
  m.api(U + 'GetParent', 1, (h) => { const w = W(h); if (!w) return 0; if (w.style & WS_CHILD) return w.parent.hwnd; return w.owner ? w.owner.hwnd : 0; });
  m.api(U + 'GetTopWindow', 1, (h) => { const w = h ? W(h) : desktop; return w && w.children.length ? w.children[0].hwnd : 0; });
  m.api(U + 'GetWindow', 2, (h, cmd) => {
    const w = W(h);
    if (!w) return 0;
    const sib = w.parent ? w.parent.children : [w];
    const k = sib.indexOf(w);
    switch (cmd) {
      case 0: return sib[0].hwnd;
      case 1: return sib[sib.length - 1].hwnd;
      case 2: return k + 1 < sib.length ? sib[k + 1].hwnd : 0;
      case 3: return k > 0 ? sib[k - 1].hwnd : 0;
      case 4: return w.owner ? w.owner.hwnd : 0;
      case 5: return w.children.length ? w.children[0].hwnd : 0;
      default: return 0;
    }
  });
  m.api(U + 'GetLastActivePopup', 1, (h) => h);
  m.api(U + 'FindWindowA', 2, (pClass, pName) => {
    const cn = pClass ? strOrAtom(pClass).toUpperCase() : null;
    const tn = pName ? m.cstr(pName) : null;
    for (const w of desktop.children) if ((!cn || w.cls.name.toUpperCase() === cn) && (tn === null || w.text === tn)) return w.hwnd;
    return 0;
  });
  m.api(U + 'GetActiveWindow', 0, () => activeWin);
  m.api(U + 'GetForegroundWindow', 0, () => activeWin);
  m.api(U + 'SetActiveWindow', 1, (h) => { const old = activeWin; const w = W(h); if (w) activate(w); return old; });
  m.api(U + 'SetForegroundWindow', 1, (h) => { const w = W(h); if (w) activate(w); return 1; });
  m.api(U + 'BringWindowToTop', 1, (h) => { const w = W(h); if (!w) return 0; const s = w.parent.children; s.splice(s.indexOf(w), 1); s.unshift(w); return 1; });
  m.api(U + 'GetFocus', 0, () => focusWin);
  m.api(U + 'SetFocus', 1, (h) => setFocus(W(h) ? h : 0));
  m.api(U + 'GetCapture', 0, () => captureWin);
  m.api(U + 'SetCapture', 1, (h) => { const old = captureWin; captureWin = h; if (old && old !== h && W(old)) send(old, WM.CAPTURECHANGED, 0, h); return old; });
  m.api(U + 'ReleaseCapture', 0, () => { const old = captureWin; captureWin = 0; if (old && W(old)) send(old, WM.CAPTURECHANGED, 0, 0); return 1; });

  const GWL = { WNDPROC: -4, HINSTANCE: -6, HWNDPARENT: -8, ID: -12, STYLE: -16, EXSTYLE: -20, USERDATA: -21 };
  m.api(U + 'GetWindowLongA', 2, (h, idx) => {
    const w = W(h);
    if (!w) return 0;
    idx |= 0;
    switch (idx) {
      case GWL.WNDPROC: return w.proc;
      case GWL.HINSTANCE: return w.hInstance;
      case GWL.HWNDPARENT: return w.style & WS_CHILD ? w.parent.hwnd : (w.owner ? w.owner.hwnd : 0);
      case GWL.ID: return w.id;
      case GWL.STYLE: return w.style;
      case GWL.EXSTYLE: return w.exStyle;
      case GWL.USERDATA: return w.userData;
      default:
        if (idx >= 0 && idx + 4 <= w.extra.length) return w.extra[idx] | (w.extra[idx + 1] << 8) | (w.extra[idx + 2] << 16) | (w.extra[idx + 3] << 24);
        return 0;
    }
  });
  m.api(U + 'SetWindowLongA', 3, (h, idx, v) => {
    const w = W(h);
    if (!w) return 0;
    idx |= 0;
    let old = 0;
    switch (idx) {
      case GWL.WNDPROC: old = w.proc; w.proc = v; break;
      case GWL.HINSTANCE: old = w.hInstance; w.hInstance = v; break;
      case GWL.HWNDPARENT: old = w.owner ? w.owner.hwnd : 0; w.owner = W(v) || null; break;
      case GWL.ID: old = w.id; w.id = v; break;
      case GWL.STYLE: old = w.style; w.style = v >>> 0; w.visible = (v & WS_VISIBLE) !== 0; w.enabled = !(v & WS_DISABLED); break;
      case GWL.EXSTYLE: old = w.exStyle; w.exStyle = v >>> 0; break;
      case GWL.USERDATA: old = w.userData; w.userData = v; break;
      default:
        if (idx >= 0 && idx + 4 <= w.extra.length) {
          old = w.extra[idx] | (w.extra[idx + 1] << 8) | (w.extra[idx + 2] << 16) | (w.extra[idx + 3] << 24);
          w.extra[idx] = v; w.extra[idx + 1] = v >> 8; w.extra[idx + 2] = v >> 16; w.extra[idx + 3] = v >> 24;
        }
    }
    return old;
  });
  const propKey = (p) => (p < 0x10000 ? '#' + p : '#' + host.addAtom(m.cstr(p)));
  m.api(U + 'SetPropA', 3, (h, p, v) => { const w = W(h); if (!w) return 0; w.props.set(propKey(p), v); return 1; });
  m.api(U + 'GetPropA', 2, (h, p) => { const w = W(h); return w ? (w.props.get(propKey(p)) || 0) : 0; });
  m.api(U + 'RemovePropA', 2, (h, p) => { const w = W(h); if (!w) return 0; const k = propKey(p); const v = w.props.get(k) || 0; w.props.delete(k); return v; });
  m.api(U + 'GetDlgCtrlID', 1, (h) => { const w = W(h); return w ? w.id : 0; });
  m.api(U + 'GetDlgItem', 2, (h, id) => { const w = W(h); if (!w) return 0; const c = w.children.find((x) => (x.id & 0xFFFF) === (id & 0xFFFF)); return c ? c.hwnd : 0; });
  m.api(U + 'GetNextDlgTabItem', 3, () => 0);

  // --- geometry --------------------------------------------------------------------
  m.api(U + 'GetClientRect', 2, (h, p) => { const w = W(h); if (!w) return 0; wr(p, 0, 0, cw(w), ch(w)); return 1; });
  m.api(U + 'GetWindowRect', 2, (h, p) => { const w = W(h); if (!w) return 0; const [x, y] = origin(w); wr(p, x - w.inset, y - w.inset, x - w.inset + w.w, y - w.inset + w.h); return 1; });
  m.api(U + 'ClientToScreen', 2, (h, p) => { const w = W(h); if (!w) return 0; const [x, y] = origin(w); i32[p >> 2] += x; i32[(p + 4) >> 2] += y; return 1; });
  m.api(U + 'ScreenToClient', 2, (h, p) => { const w = W(h); if (!w) return 0; const [x, y] = origin(w); i32[p >> 2] -= x; i32[(p + 4) >> 2] -= y; return 1; });
  m.api(U + 'MapWindowPoints', 4, (hFrom, hTo, p, n) => {
    const a = hFrom && W(hFrom) ? origin(W(hFrom)) : [0, 0];
    const b = hTo && W(hTo) ? origin(W(hTo)) : [0, 0];
    for (let k = 0; k < n; k++) { i32[(p + k * 8) >> 2] += a[0] - b[0]; i32[(p + k * 8 + 4) >> 2] += a[1] - b[1]; }
    return (((a[1] - b[1]) & 0xFFFF) << 16) | ((a[0] - b[0]) & 0xFFFF);
  });
  m.api(U + 'AdjustWindowRectEx', 4, () => 1);       // no non-client area
  const setPos = (w, x, y, cx, cy, flags, after) => {
    const nomove = flags & 2, nosize = flags & 1;
    const nx = nomove ? w.x : x | 0, ny = nomove ? w.y : y | 0;
    const nw = nosize ? w.w : Math.max(0, cx | 0), nh = nosize ? w.h : Math.max(0, cy | 0);
    const p = host.heap.alloc(32);
    u32[p >> 2] = w.hwnd; u32[(p + 4) >> 2] = after; i32[(p + 8) >> 2] = nx; i32[(p + 12) >> 2] = ny; i32[(p + 16) >> 2] = nw; i32[(p + 20) >> 2] = nh; u32[(p + 24) >> 2] = flags;
    send(w.hwnd, WM.WINDOWPOSCHANGING, 0, p);
    const fx = i32[(p + 8) >> 2], fy = i32[(p + 12) >> 2], fw = i32[(p + 16) >> 2], fh = i32[(p + 20) >> 2];
    const moved = fx !== w.x || fy !== w.y, sized = fw !== w.w || fh !== w.h;
    if ((moved || sized) && w.visible && w.parent && w.parent !== desktop) invalidate(w.parent, [w.x, w.y, w.x + w.w, w.y + w.h]);
    w.x = fx; w.y = fy; w.w = fw; w.h = fh;
    if (!(flags & 4) && after !== undefined && w.parent) {         // z-order
      const s = w.parent.children;
      if (after === 0) { s.splice(s.indexOf(w), 1); s.unshift(w); } else if (after === 1) { s.splice(s.indexOf(w), 1); s.push(w); }
    }
    let f2 = flags;
    if (!moved) f2 |= 2;
    if (!sized) f2 |= 1;
    u32[(p + 24) >> 2] = f2;
    if (flags & 0x40) showWindow(w, 5);
    if (flags & 0x80) showWindow(w, 0);
    if (moved || sized) { if (w.visible) invalidateTree(w); }
    if (!w.destroyed) send(w.hwnd, WM.WINDOWPOSCHANGED, 0, p);
    host.heap.release(p);
    if (host.traceWin && (moved || sized)) log(`SetWindowPos ${w.hwnd.toString(16)} -> ${fx},${fy} ${fw}x${fh} flags=${flags.toString(16)} caller=${m.u32[m.esp >> 2].toString(16)}`);
  };
  m.api(U + 'SetWindowPos', 7, (h, after, x, y, cx, cy, flags) => { const w = W(h); if (!w) return 0; setPos(w, x, y, cx, cy, flags, after); return 1; });
  m.api(U + 'MoveWindow', 6, (h, x, y, cx, cy) => { const w = W(h); if (!w) return 0; setPos(w, x, y, cx, cy, 4, 0); return 1; });
  m.api(U + 'BeginDeferWindowPos', 1, () => { const list = []; return host.newHandle({ type: 'dwp', list }); });
  m.api(U + 'DeferWindowPos', 8, (hdwp, h, after, x, y, cx, cy, flags) => { const d = host.handles.get(hdwp); if (d) d.list.push([h, after, x, y, cx, cy, flags]); return hdwp; });
  m.api(U + 'EndDeferWindowPos', 1, (hdwp) => {
    const d = host.handles.get(hdwp);
    if (d) for (const [h, after, x, y, cx, cy, flags] of d.list) { const w = W(h); if (w) setPos(w, x, y, cx, cy, flags, after); }
    host.handles.delete(hdwp);
    return 1;
  });
  m.api(U + 'GetWindowPlacement', 2, (h, p) => {
    const w = W(h);
    if (!w) return 0;
    u32[p >> 2] = 44; u32[(p + 4) >> 2] = 0; u32[(p + 8) >> 2] = w.visible ? 1 : 0;
    i32[(p + 12) >> 2] = -1; i32[(p + 16) >> 2] = -1; i32[(p + 20) >> 2] = -1; i32[(p + 24) >> 2] = -1;
    wr(p + 28, w.x, w.y, w.x + w.w, w.y + w.h);
    return 1;
  });
  m.api(U + 'SetWindowPlacement', 2, (h, p) => {
    const w = W(h);
    if (!w) return 0;
    const r = rd(p + 28);
    setPos(w, r[0], r[1], r[2] - r[0], r[3] - r[1], 4, 0);
    showWindow(w, u32[(p + 8) >> 2]);
    return 1;
  });
  const hitTest = (parent, x, y) => {
    // x, y relative to parent's client area; children are in z-order, top first
    for (const c of parent.children) {
      if (!c.visible || c.destroyed) continue;
      if (x >= c.x && x < c.x + c.w && y >= c.y && y < c.y + c.h) {
        if (!c.enabled) return parent === desktop ? null : parent;
        return hitTest(c, x - c.x - c.inset, y - c.y - c.inset) || c;
      }
    }
    return parent === desktop ? null : parent;
  };
  m.api(U + 'WindowFromPoint', 2, (x, y) => { const w = hitTest(desktop, x | 0, y | 0); return w ? w.hwnd : 0; });
  m.api(U + 'GetCursorPos', 1, (p) => { i32[p >> 2] = cursorX; i32[(p + 4) >> 2] = cursorY; return 1; });
  m.api(U + 'GetMessagePos', 0, () => ((lastMsg.y & 0xFFFF) << 16) | (lastMsg.x & 0xFFFF));
  m.api(U + 'GetMessageTime', 0, () => lastMsg.time);

  // --- text and scroll -----------------------------------------------------------------
  m.api(U + 'SetWindowTextA', 2, (h, p) => (W(h) ? (send(h, WM.SETTEXT, 0, p), 1) : 0));
  m.api(U + 'GetWindowTextA', 3, (h, p, n) => { const w = W(h); if (!w) { if (n) u8[p] = 0; return 0; } return m.writeCStr(p, w.text, n); });
  m.api(U + 'GetWindowTextLengthA', 1, (h) => { const w = W(h); return w ? w.text.length : 0; });
  m.api(U + 'ShowScrollBar', 3, () => 1);
  m.api(U + 'SetScrollPos', 4, () => 0);
  m.api(U + 'GetScrollPos', 2, () => 0);
  m.api(U + 'SetScrollRange', 5, () => 1);
  m.api(U + 'GetScrollRange', 4, (h, bar, a, b) => { i32[a >> 2] = 0; i32[b >> 2] = 0; return 1; });
  m.api(U + 'SetScrollInfo', 4, () => 0);
  m.api(U + 'GetScrollInfo', 3, () => 0);
  m.api(U + 'ScrollWindow', 5, (h) => { const w = W(h); if (w) invalidate(w); return 1; });
  m.api(U + 'ScrollWindowEx', 8, (h) => { const w = W(h); if (w) invalidate(w); return 1; });

  // --- device contexts and painting ---------------------------------------------------
  const windowDC = (w, clipToUpdate = null) => {
    const [ox, oy] = origin(w);
    // visible area: the client rectangle clipped by every ancestor
    let l = ox, t = oy, r = ox + cw(w), b = oy + ch(w);
    for (let p = w.parent; p && p !== desktop; p = p.parent) {
      const [px, py] = origin(p);
      l = Math.max(l, px); t = Math.max(t, py); r = Math.min(r, px + cw(p)); b = Math.min(b, py + ch(p));
    }
    l = Math.max(l, 0); t = Math.max(t, 0); r = Math.min(r, SW); b = Math.min(b, SH);
    const vis = isVisible(w) && !w.noDraw;
    const hdc = host.newDC(host.screenSurface, { hwnd: w.hwnd, ox, oy, visX: l, visY: t, visW: vis ? Math.max(0, r - l) : 0, visH: vis ? Math.max(0, b - t) : 0 });
    const dc = host.gdi.get(hdc);
    // WS_CLIPCHILDREN: children are excluded from the parent's drawing area
    if (w.style & 0x02000000) {
      let rects = [[l, t, r, b]];
      for (const c of w.children) if (c.visible) rects = subtractRect(rects, ox + c.x, oy + c.y, ox + c.x + c.w, oy + c.y + c.h);
      dc.clip = rects;
    }
    if (clipToUpdate) {
      const u = [ox + clipToUpdate[0], oy + clipToUpdate[1], ox + clipToUpdate[2], oy + clipToUpdate[3]];
      dc.clip = (dc.clip || [[l, t, r, b]]).map((q) => [Math.max(q[0], u[0]), Math.max(q[1], u[1]), Math.min(q[2], u[2]), Math.min(q[3], u[3])]).filter((q) => q[0] < q[2] && q[1] < q[3]);
    }
    return hdc;
  };
  const subtractRect = (rects, x0, y0, x1, y1) => {
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
  const getDC = (h) => {
    if (!h || h === DESKTOP) return host.newDC(host.screenSurface, { hwnd: 0 });
    const w = W(h);
    return w ? windowDC(w) : 0;
  };
  m.api(U + 'GetDC', 1, getDC);
  m.api(U + 'GetWindowDC', 1, getDC);
  m.api(U + 'ReleaseDC', 2, (h, hdc) => { host.gdi.delete(hdc); return 1; });
  const eraseBkgnd = (w, hdc) => {
    w.erase = false;
    return send(w.hwnd, WM.ERASEBKGND, hdc, 0);
  };
  m.api(U + 'BeginPaint', 2, (h, ps) => {
    const w = W(h);
    if (!w) return 0;
    const upd = w.update || [0, 0, 0, 0];
    const hdc = windowDC(w, upd);
    w.update = null;
    let erased = 1;
    if (w.erase) erased = eraseBkgnd(w, hdc) ? 0 : 1;
    u8.fill(0, ps, ps + 64);
    u32[ps >> 2] = hdc; u32[(ps + 4) >> 2] = erased;
    wr(ps + 8, upd[0], upd[1], upd[2], upd[3]);
    return hdc;
  });
  m.api(U + 'EndPaint', 2, (h, ps) => { host.gdi.delete(u32[ps >> 2]); return 1; });
  m.api(U + 'InvalidateRect', 3, (h, p, erase) => {
    const w = h ? W(h) : null;
    if (!w) { if (!h) for (const c of desktop.children) if (c.visible) invalidateTree(c); return 1; }
    invalidate(w, p ? rd(p) : null);
    if (!erase && !w.eraseSticky) w.erase = w.erase && true;
    return 1;
  });
  m.api(U + 'ValidateRect', 2, (h, p) => { const w = W(h); if (w) w.update = null; return 1; });
  const paintNow = (w) => {
    if (w.destroyed || !w.update || !isVisible(w)) return;
    if (w.noDraw) { w.update = null; return; }
    send(w.hwnd, WM.PAINT, 0, 0);
    if (!w.destroyed && w.update) w.update = null;      // a handler that does not call BeginPaint must not loop
  };
  const updateTree = (w) => { paintNow(w); for (const c of w.children.slice()) if (!c.destroyed && c.visible) updateTree(c); };
  m.api(U + 'UpdateWindow', 1, (h) => { const w = W(h); if (!w) return 0; updateTree(w); return 1; });
  m.api(U + 'RedrawWindow', 4, (h, p, hrgn, flags) => {
    const w = h ? W(h) : desktop.children[0];
    if (!w) return 0;
    if (flags & 1) { if (flags & 0x80) invalidateTree(w); else invalidate(w, p ? rd(p) : null); }
    if (flags & 8) w.update = null;
    if (flags & 0x100) updateTree(w);
    return 1;
  });
  const dcOf = (hdc) => host.gdi.get(hdc);
  m.api(U + 'FillRect', 3, (hdc, p, hbr) => {
    const dc = dcOf(hdc);
    if (!dc) return 0;
    const r = rd(p);
    let brush = hbr;
    if (hbr && hbr <= 31 && !host.gdi.has(hbr)) brush = sysColorBrush(hbr - 1);
    const save = dc.brush;
    dc.brush = brush;
    host.blit(dc, r[0], r[1], r[2] - r[0], r[3] - r[1], null, 0, 0, 0xF00021, null);
    dc.brush = save;
    if (dc.surface.kind === 'screen') host.screen.present();
    return 1;
  });
  const sysBrushes = new Map();
  const sysColorBrush = (i) => {
    if (!sysBrushes.has(i)) {
      const c = SYSCOLORS[i] || 0;
      sysBrushes.set(i, host.newGdi({ type: 'brush', style: 0, cr: c, color: ((c & 0xFF) << 16) | (c & 0xFF00) | ((c >> 16) & 0xFF), stock: true }));
    }
    return sysBrushes.get(i);
  };
  m.api(U + 'InvertRect', 2, (hdc, p) => { const dc = dcOf(hdc); if (!dc) return 0; const r = rd(p); host.blit(dc, r[0], r[1], r[2] - r[0], r[3] - r[1], null, 0, 0, 0x550009, null); return 1; });
  m.api(U + 'DrawTextA', 5, (hdc, pStr, n, pRect, fmt) => {
    const dc = dcOf(hdc);
    if (!dc) return 0;
    const s = (n | 0) < 0 ? m.cstr(pStr) : host.latin1At(pStr, n);
    const f = host.gdi.get(dc.font);
    const t = host.text.metrics(f);
    const lines = fmt & 0x20 ? [s.replace(/[\r\n]+/g, ' ')] : s.split(/\r?\n/);
    const r = rd(pRect);
    const maxW = Math.max(...lines.map((l) => host.text.width(f, l)), 0);
    const hTot = lines.length * t.height;
    if (fmt & 0x400) { wr(pRect, r[0], r[1], r[0] + maxW, r[1] + hTot); return hTot; }     // DT_CALCRECT
    let y = r[1];
    if (fmt & 4) y = r[1] + ((r[3] - r[1] - hTot) >> 1); else if (fmt & 8) y = r[3] - hTot;
    for (const l of lines) {
      const w = host.text.width(f, l);
      const x = fmt & 1 ? r[0] + ((r[2] - r[0] - w) >> 1) : fmt & 2 ? r[2] - w : r[0];
      const align = dc.textAlign;
      dc.textAlign = 0;
      host.textOut(dc, x, y, l, fmt & 0x100 ? 0 : 4, fmt & 0x100 ? 0 : pRect);
      dc.textAlign = align;
      y += t.height;
    }
    return hTot;
  });
  m.api(U + 'TabbedTextOutA', 8, (hdc, x, y, p, n) => { const dc = dcOf(hdc); if (!dc) return 0; const w = host.textOut(dc, x, y, host.latin1At(p, n).replace(/\t/g, '    ')); return (host.text.metrics(host.gdi.get(dc.font)).height << 16) | (w & 0xFFFF); });
  m.api(U + 'GrayStringA', 9, () => 1);

  // --- default window procedure ---------------------------------------------------------
  function defWindowProc(hwnd, msg, wp, lp) {
    const w = W(hwnd);
    if (!w) return 0;
    if (host.onDefWindowProc) host.onDefWindowProc(hwnd, msg, wp, lp);     // test hook (tools/run-headless.mjs --throw-test)
    switch (msg) {
      case WM.NCCREATE: return 1;
      case WM.CREATE: return 0;
      case WM.SETTEXT: w.text = lp ? m.cstr(lp) : ''; if (w.isDialog) host.dialogChanged(w); else if (w.parent && w.parent.isDialog) host.dialogChanged(w.parent); return 1;
      case WM.GETTEXT: return wp ? m.writeCStr(lp, w.text, wp) : 0;
      case WM.GETTEXTLENGTH: return w.text.length;
      case WM.CLOSE: destroy(w); return 0;
      case WM.PAINT: {
        // validate; classes without a paint handler show their background
        if (w.erase) { const hdc = windowDC(w, w.update); eraseBkgnd(w, hdc); host.gdi.delete(hdc); }
        w.update = null;
        return 0;
      }
      case WM.ERASEBKGND: {
        let br = w.cls.hbrBackground;
        if (!br) return 0;
        if (br <= 31 && !host.gdi.has(br)) br = sysColorBrush(br - 1);
        const dc = dcOf(wp);
        if (dc) { const save = dc.brush; dc.brush = br; host.blit(dc, 0, 0, cw(w), ch(w), null, 0, 0, 0xF00021, null); dc.brush = save; }
        return 1;
      }
      case WM.NCHITTEST: return 1;         // HTCLIENT
      case WM.SETCURSOR: {
        if (w.style & WS_CHILD && w.parent !== desktop && send(w.parent.hwnd, WM.SETCURSOR, wp, lp)) return 1;
        if ((lp & 0xFFFF) === 1 && w.cls.hCursor) host.setCursor(w.cls.hCursor);
        return 0;
      }
      case WM.MOUSEACTIVATE: return 1;     // MA_ACTIVATE
      case WM.ACTIVATE: if (wp & 0xFFFF) setFocus(hwnd); return 0;
      case WM.WINDOWPOSCHANGED: {
        const flags = u32[(lp + 24) >> 2];
        if (!(flags & 1)) send(hwnd, WM.SIZE, 0, ((ch(w) & 0xFFFF) << 16) | (cw(w) & 0xFFFF));
        if (!(flags & 2)) send(hwnd, WM.MOVE, 0, (((w.y + w.inset) & 0xFFFF) << 16) | ((w.x + w.inset) & 0xFFFF));
        return 0;
      }
      case WM.SYSCOMMAND:
        if ((wp & 0xFFF0) === 0xF060) send(hwnd, WM.CLOSE);    // SC_CLOSE
        return 0;
      case WM.SYSKEYDOWN:
        if (wp === 0x73) queue.push({ hwnd: topLevelOf(w).hwnd, msg: WM.SYSCOMMAND, wp: 0xF060, lp: 0 });   // Alt+F4
        return 0;
      case 0x7B: // WM_CONTEXTMENU
      case WM.RBUTTONUP:
      default:
        return 0;
    }
  }
  m.api(U + 'DefWindowProcA', 4, defWindowProc);
  m.api(U + 'DefFrameProcA', 5, (hwnd, hClient, msg, wp, lp) => {
    const c = W(hClient);
    if (msg === WM.SIZE && c) { setPos(c, 0, 0, lp & 0xFFFF, (lp >>> 16) & 0xFFFF, 4, 0); return 0; }
    if (msg === WM.SETFOCUS && c) { setFocus(hClient); return 0; }
    return defWindowProc(hwnd, msg, wp, lp);
  });
  m.api(U + 'DefMDIChildProcA', 4, defWindowProc);
  m.api(U + 'CallWindowProcA', 5, (proc, hwnd, msg, wp, lp) => callProc(proc, hwnd, msg, wp, lp));
  m.api(U + 'SendMessageA', 4, (hwnd, msg, wp, lp) => {
    if (hwnd === 0xFFFF) { for (const w of desktop.children.slice()) send(w.hwnd, msg, wp, lp); return 1; }
    return send(hwnd, msg, wp, lp);
  });
  m.api(U + 'SendDlgItemMessageA', 5, (h, id, msg, wp, lp) => { const w = W(h); const c = w && w.children.find((x) => (x.id & 0xFFFF) === (id & 0xFFFF)); return c ? send(c.hwnd, msg, wp, lp) : 0; });
  m.api(U + 'PostMessageA', 4, (hwnd, msg, wp, lp) => {
    if (hwnd && hwnd !== 0xFFFF && !W(hwnd)) return 0;
    queue.push({ hwnd, msg, wp, lp, posted: true });
    host.wake();
    return 1;
  });
  m.api(U + 'PostQuitMessage', 1, (code) => { quitPosted = { code }; return 0; });

  // --- input -----------------------------------------------------------------------
  let lastClick = { time: -1e9, x: 0, y: 0, hwnd: 0, button: 0 };
  const mouseKeys = () => (keyState[1] & 0x80 ? 1 : 0) | (keyState[2] & 0x80 ? 2 : 0) | (keyState[0x10] & 0x80 ? 4 : 0) | (keyState[0x11] & 0x80 ? 8 : 0) | (keyState[4] & 0x80 ? 0x10 : 0);
  const pumpInput = () => {
    const events = host.input.poll();
    if (!events) return;
    for (const e of events) {
      const time = host.nowMs() >>> 0;
      if (e.type === 'move' || e.type === 'down' || e.type === 'up') {
        cursorX = Math.max(0, Math.min(SW - 1, e.x | 0));
        cursorY = Math.max(0, Math.min(SH - 1, e.y | 0));
        const vk = e.button === 2 ? 2 : e.button === 1 ? 4 : 1;
        if (e.type === 'down') keyState[vk] = 0x80 | ((keyState[vk] ^ 1) & 1);
        if (e.type === 'up') keyState[vk] &= 1;
        const target = captureWin && W(captureWin) ? W(captureWin) : hitTest(desktop, cursorX, cursorY);
        if (!target) continue;
        const [ox, oy] = origin(target);
        const lp = (((cursorY - oy) & 0xFFFF) << 16) | ((cursorX - ox) & 0xFFFF);
        let msg = WM.MOUSEMOVE;
        if (e.type !== 'move') {
          const base = e.button === 2 ? WM.RBUTTONDOWN : e.button === 1 ? 0x207 : WM.LBUTTONDOWN;
          msg = e.type === 'down' ? base : base + 1;
          if (e.type === 'down') {
            const dbl = (target.cls.style & 8) && lastClick.hwnd === target.hwnd && lastClick.button === e.button && time - lastClick.time <= 500 && Math.abs(lastClick.x - cursorX) <= 2 && Math.abs(lastClick.y - cursorY) <= 2;
            if (dbl) { msg = base + 2; lastClick.time = -1e9; } else lastClick = { time, x: cursorX, y: cursorY, hwnd: target.hwnd, button: e.button };
          }
        }
        if (msg === WM.MOUSEMOVE) {
          // only the newest pending move is kept, as Windows does
          for (let k = queue.length - 1; k >= 0; k--) if (queue[k].msg === WM.MOUSEMOVE && !queue[k].posted) queue.splice(k, 1);
        }
        queue.push({ hwnd: target.hwnd, msg, wp: mouseKeys(), lp, time, x: cursorX, y: cursorY, mouse: true });
      } else if (e.type === 'keydown' || e.type === 'keyup') {
        const vk = e.vk & 0xFF;
        const down = e.type === 'keydown';
        const was = (keyState[vk] & 0x80) !== 0;
        if (down) keyState[vk] = 0x80 | (was ? keyState[vk] & 1 : (keyState[vk] ^ 1) & 1); else keyState[vk] &= 1;
        const alt = (keyState[0x12] & 0x80) !== 0 && !(keyState[0x11] & 0x80);
        const hwnd = focusWin || activeWin;
        if (!hwnd) continue;
        const scan = (e.scan || 0) & 0xFF;
        const lp = (1 | (scan << 16) | (alt ? 1 << 29 : 0) | (down ? (was ? 1 << 30 : 0) : (3 << 30))) >>> 0;
        const sys = alt || vk === 0x79;
        queue.push({ hwnd, msg: down ? (sys ? WM.SYSKEYDOWN : WM.KEYDOWN) : (sys ? WM.SYSKEYUP : WM.KEYUP), wp: vk, lp, time, x: cursorX, y: cursorY, ch: down ? e.ch || 0 : 0 });
      } else if (e.type === 'cancel') {
        // pointer cancelled or focus lost: release buttons and keys so nothing stays stuck
        const target = captureWin && W(captureWin) ? W(captureWin) : hitTest(desktop, cursorX, cursorY);
        for (const [vk, up] of [[1, WM.LBUTTONUP], [2, WM.RBUTTONUP]]) {
          if (keyState[vk] & 0x80) {
            keyState[vk] &= 1;
            if (target) { const [ox, oy] = origin(target); queue.push({ hwnd: target.hwnd, msg: up, wp: mouseKeys(), lp: (((cursorY - oy) & 0xFFFF) << 16) | ((cursorX - ox) & 0xFFFF), time, x: cursorX, y: cursorY, mouse: true }); }
          }
        }
        for (let vk = 8; vk < 256; vk++) {
          if (keyState[vk] & 0x80) { keyState[vk] &= 1; const hwnd = focusWin || activeWin; if (hwnd) queue.push({ hwnd, msg: WM.KEYUP, wp: vk, lp: 0xC0000001 >>> 0, time, x: cursorX, y: cursorY }); }
        }
      } else if (e.type === 'command') {
        // a button of a dialog shown by the page: what the button control would have sent
        const dw = W(e.hwnd);
        const c = dw && dw.children.find((x) => (x.id & 0xFFFF) === e.id);
        if (dw) queue.push({ hwnd: e.hwnd, msg: WM.COMMAND, wp: e.id & 0xFFFF, lp: c ? c.hwnd : 0, time });
      } else if (e.type === 'close') {
        const top = desktop.children.find((c) => c.visible);
        if (top) queue.push({ hwnd: top.hwnd, msg: WM.CLOSE, wp: 0, lp: 0, time });
      }
    }
  };
  const findPaint = () => {
    const walk = (w) => {
      if (w !== desktop && (!w.visible || w.destroyed)) return null;
      if (w !== desktop && w.update) { if (w.noDraw) w.update = null; else return w; }
      for (const c of w.children) { const r = walk(c); if (r) return r; }
      return null;
    };
    return walk(desktop);
  };
  const writeMsg = (p, q) => {
    u32[p >> 2] = q.hwnd; u32[(p + 4) >> 2] = q.msg; u32[(p + 8) >> 2] = q.wp >>> 0; u32[(p + 12) >> 2] = q.lp >>> 0;
    u32[(p + 16) >> 2] = q.time === undefined ? host.nowMs() >>> 0 : q.time;
    i32[(p + 20) >> 2] = q.x === undefined ? cursorX : q.x; i32[(p + 24) >> 2] = q.y === undefined ? cursorY : q.y;
  };
  const pendingChars = new Map();
  /** Returns 1 when a message was written, 0 when none matches, -1 for WM_QUIT (also written). */
  const fetch = (p, hwndFilter, lo, hi, remove) => {
    pumpInput();
    const match = (q) => (!lo && !hi ? true : q.msg >= lo && q.msg <= hi) && (!hwndFilter || q.hwnd === hwndFilter || (W(q.hwnd) && isChildOf(W(q.hwnd), hwndFilter)));
    for (let k = 0; k < queue.length; k++) {
      const q = queue[k];
      if (!match(q)) continue;
      if (q.hwnd && !W(q.hwnd)) { queue.splice(k, 1); k--; continue; }
      if (remove) {
        queue.splice(k, 1);
        if (q.mouse) {
          // WM_SETCURSOR goes to the window under the pointer before the mouse message is delivered
          const w = W(q.hwnd);
          if (w && !captureWin) send(q.hwnd, WM.SETCURSOR, q.hwnd, ((q.msg & 0xFFFF) << 16) | 1);
        }
        if (q.ch) pendingChars.set(p, q);
        lastMsg = { time: q.time === undefined ? host.nowMs() >>> 0 : q.time, x: q.x === undefined ? cursorX : q.x, y: q.y === undefined ? cursorY : q.y };
      }
      writeMsg(p, q);
      return 1;
    }
    if (quitPosted && !queue.length && (!lo && !hi || (lo <= WM.QUIT && hi >= WM.QUIT))) {
      writeMsg(p, { hwnd: 0, msg: WM.QUIT, wp: quitPosted.code, lp: 0 });
      if (remove) quitPosted = null;
      return -1;
    }
    if ((!lo && !hi) || (lo <= WM.PAINT && hi >= WM.PAINT)) {
      const w = findPaint();
      if (w && (!hwndFilter || w.hwnd === hwndFilter)) { writeMsg(p, { hwnd: w.hwnd, msg: WM.PAINT, wp: 0, lp: 0 }); return 1; }
    }
    return 0;
  };
  const isChildOf = (w, hp) => { for (let p = w.parent; p && p !== desktop; p = p.parent) if (p.hwnd === hp) return true; return false; };
  m.api(U + 'GetMessageA', 4, (p, hwnd, lo, hi) => {
    for (;;) {
      const r = fetch(p, hwnd, lo, hi, true);
      if (r === 1) return 1;
      if (r === -1) return 0;
      host.waitForInput(1000);         // blocks; woken by input or a posted message
    }
  });
  m.api(U + 'PeekMessageA', 5, (p, hwnd, lo, hi, flags) => {
    const r = fetch(p, hwnd, lo, hi, (flags & 1) !== 0);
    if (r) return 1;
    if (!lo && !hi) host.idle();       // an idle pump: let the browser breathe without changing the title's timing
    return 0;
  });
  m.api(U + 'TranslateMessage', 1, (p) => {
    const msg = u32[(p + 4) >> 2];
    if (msg !== WM.KEYDOWN && msg !== WM.SYSKEYDOWN) return 0;
    const q = pendingChars.get(p);
    pendingChars.delete(p);
    if (q && q.ch) { queue.unshift({ hwnd: q.hwnd, msg: msg === WM.SYSKEYDOWN ? WM.SYSCHAR : WM.CHAR, wp: q.ch & 0xFF, lp: q.lp, time: q.time, posted: true }); return 1; }
    return 0;
  });
  m.api(U + 'DispatchMessageA', 1, (p) => {
    const hwnd = u32[p >> 2];
    const w = W(hwnd);
    if (!w) return 0;
    const msg = u32[(p + 4) >> 2];
    const r = callProc(w.proc, hwnd, msg, u32[(p + 8) >> 2], u32[(p + 12) >> 2]);
    if (msg === WM.PAINT && !w.destroyed && w.update) w.update = null;
    return r;
  });
  m.api(U + 'GetKeyState', 1, (vk) => { const s = keyState[vk & 0xFF]; return ((s & 0x80 ? 0xFF80 : 0) | (s & 1)) << 16 >> 16; });
  m.api(U + 'GetKeyboardState', 1, (p) => { u8.set(keyState, p); return 1; });
  m.api(U + 'ToAscii', 5, (vk, scan, pState, pChar) => {
    let c = 0;
    const shift = (u8[pState + 0x10] & 0x80) !== 0;
    if (vk >= 0x41 && vk <= 0x5A) c = shift !== ((u8[pState + 0x14] & 1) !== 0) ? vk : vk + 32;
    else if (vk >= 0x30 && vk <= 0x39 && !shift) c = vk;
    else if (vk === 0x20 || vk === 0x0D || vk === 0x1B || vk === 0x08 || vk === 0x09) c = vk;
    if (!c) return 0;
    u16[pChar >> 1] = c;
    return 1;
  });
  m.api(U + 'IsDialogMessageA', 2, () => 0);
  m.api(U + 'TranslateMDISysAccel', 2, () => 0);

  // --- menus and accelerators (data only: no menu bar is shown) -------------------------
  const menus = new Map();
  let nextMenu = 0x8000;
  const parseMenu = (p) => {
    // MENUITEMTEMPLATEHEADER then items; returns handle
    const mk = () => { const h = nextMenu; nextMenu += 4; const mu = { h, items: [] }; menus.set(h, mu); return mu; };
    let q = p + 4 + u16[(p + 2) >> 1];
    const readStr = () => { let s = ''; for (;;) { const c = u16[q >> 1]; q += 2; if (!c) break; s += String.fromCharCode(c); } return s; };
    const readItems = (menu) => {
      for (;;) {
        const flags = u16[q >> 1];
        q += 2;
        const item = { flags: flags & ~0x80, id: 0, text: '', sub: null };
        if (flags & 0x10) { item.text = readStr(); item.sub = mk(); item.id = item.sub.h; readItems(item.sub); } else { item.id = u16[q >> 1]; q += 2; item.text = readStr(); }
        menu.items.push(item);
        if (flags & 0x80) break;
      }
    };
    const root = mk();
    readItems(root);
    return root.h;
  };
  m.api(U + 'LoadMenuA', 2, (hInst, name) => {
    const r = host.resource(hInst, name < 0x10000 ? name : m.cstr(name).toUpperCase(), 4);
    return r ? parseMenu(r.ptr) : 0;
  });
  m.api(U + 'DestroyMenu', 1, () => 1);
  m.api(U + 'GetMenu', 1, (h) => { const w = W(h); return w ? w.menu || 0 : 0; });
  m.api(U + 'SetMenu', 2, (h, hm) => { const w = W(h); if (!w) return 0; w.menu = hm; return 1; });
  m.api(U + 'DrawMenuBar', 1, () => 1);
  m.api(U + 'GetSubMenu', 2, (hm, pos) => { const mu = menus.get(hm); const it = mu && mu.items[pos | 0]; return it && it.sub ? it.sub.h : 0; });
  m.api(U + 'GetMenuItemCount', 1, (hm) => { const mu = menus.get(hm); return mu ? mu.items.length : -1; });
  m.api(U + 'GetMenuItemID', 2, (hm, pos) => { const mu = menus.get(hm); const it = mu && mu.items[pos | 0]; return !it || it.sub ? 0xFFFFFFFF : it.id; });
  const findItem = (hm, id, flags) => {
    const mu = menus.get(hm);
    if (!mu) return null;
    if (flags & 0x400) return mu.items[id] || null;
    for (const it of mu.items) {
      if (!it.sub && it.id === id) return it;
      if (it.sub) { const r = findItem(it.sub.h, id, flags); if (r) return r; }
    }
    return null;
  };
  m.api(U + 'GetMenuState', 3, (hm, id, flags) => { const it = findItem(hm, id, flags); return it ? (it.flags | (it.sub ? 0x10 | (it.sub.items.length << 8) : 0)) : 0xFFFFFFFF; });
  m.api(U + 'GetMenuStringA', 5, (hm, id, buf, n, flags) => { const it = findItem(hm, id, flags); return it && n ? m.writeCStr(buf, it.text, n) : 0; });
  m.api(U + 'EnableMenuItem', 3, (hm, id, flags) => { const it = findItem(hm, id, flags); if (!it) return 0xFFFFFFFF; const old = it.flags & 3; it.flags = (it.flags & ~3) | (flags & 3); return old; });
  m.api(U + 'CheckMenuItem', 3, (hm, id, flags) => { const it = findItem(hm, id, flags); if (!it) return 0xFFFFFFFF; const old = it.flags & 8; it.flags = (it.flags & ~8) | (flags & 8); return old; });
  m.api(U + 'ModifyMenuA', 5, () => 1);
  m.api(U + 'InsertMenuA', 5, () => 1);
  m.api(U + 'DeleteMenu', 3, () => 1);
  m.api(U + 'SetMenuItemBitmaps', 5, () => 1);
  m.api(U + 'TrackPopupMenu', 7, () => 0);
  m.api(U + 'LoadAcceleratorsA', 2, (hInst, name) => {
    const r = host.resource(hInst, name < 0x10000 ? name : m.cstr(name).toUpperCase(), 9);
    if (!r) return 0;
    const list = [];
    for (let p = r.ptr; p < r.ptr + r.size; p += 8) { list.push({ flags: u16[p >> 1], key: u16[(p + 2) >> 1], cmd: u16[(p + 4) >> 1] }); if (u16[p >> 1] & 0x80) break; }
    return host.newHandle({ type: 'accel', list });
  });
  m.api(U + 'TranslateAcceleratorA', 3, (hwnd, hAcc, p) => {
    const a = host.handles.get(hAcc);
    if (!a) return 0;
    const msg = u32[(p + 4) >> 2];
    if (msg !== WM.KEYDOWN && msg !== WM.SYSKEYDOWN && msg !== WM.CHAR) return 0;
    const key = u32[(p + 8) >> 2];
    const shift = (keyState[0x10] & 0x80) !== 0, ctrl = (keyState[0x11] & 0x80) !== 0, alt = (keyState[0x12] & 0x80) !== 0;
    for (const e of a.list) {
      const virt = (e.flags & 1) !== 0;
      if (virt !== (msg !== WM.CHAR)) continue;
      if (e.key !== key) continue;
      if (virt && (((e.flags & 4) !== 0) !== shift || ((e.flags & 8) !== 0) !== ctrl || ((e.flags & 0x10) !== 0) !== alt)) continue;
      send(hwnd, WM.COMMAND, (1 << 16) | e.cmd, 0);
      return 1;
    }
    return 0;
  });

  // --- cursors, icons, bitmaps -----------------------------------------------------------
  const cursors = host.cursors = new Map();
  let nextCursor = 0x9000;
  const SYSTEM_CURSORS = { 32512: 'default', 32513: 'text', 32514: 'wait', 32515: 'crosshair', 32516: 'default', 32642: 'nwse-resize', 32643: 'nesw-resize', 32644: 'ew-resize', 32645: 'ns-resize', 32646: 'move', 32648: 'not-allowed', 32649: 'pointer', 32650: 'progress', 32651: 'help' };
  const cursorByKey = new Map();
  m.api(U + 'LoadCursorA', 2, (hInst, name) => {
    const key = hInst + ':' + (name < 0x10000 ? name : m.cstr(name).toUpperCase());
    if (cursorByKey.has(key)) return cursorByKey.get(key);
    let c = null;
    if (!hInst) c = { css: SYSTEM_CURSORS[name] || 'default' };
    else {
      const grp = host.resource(hInst, name < 0x10000 ? name : m.cstr(name).toUpperCase(), 12);
      if (grp) {
        // GRPCURSORDIR: first entry's resource id is at offset 6 + 12
        const id = u16[(grp.ptr + 18) >> 1];
        const r = host.resource(hInst, id, 1);
        if (r) c = decodeCursor(r.ptr, r.size);
      }
    }
    if (!c) { if (host.traceWin) log('LoadCursor failed ' + key); return 0; }
    const h = nextCursor;
    nextCursor += 4;
    c.key = key;
    cursors.set(h, c);
    cursorByKey.set(key, h);
    return h;
  });
  const decodeCursor = (p, size) => {
    // RT_CURSOR: hotspot x, y (u16), then a DIB: BITMAPINFOHEADER (height doubled), colour table, XOR bits, AND mask
    const hx = u16[p >> 1], hy = u16[(p + 2) >> 1];
    const b = p + 4;
    const w = i32[(b + 4) >> 2], h = i32[(b + 8) >> 2] >> 1, bpp = u16[(b + 14) >> 1];
    const ncol = bpp <= 8 ? (u32[(b + 32) >> 2] || 1 << bpp) : 0;
    const pal = b + u32[b >> 2];
    const xorStride = (((w * bpp + 31) >> 5) << 2), andStride = (((w + 31) >> 5) << 2);
    const xor = pal + ncol * 4, and = xor + xorStride * h;
    const rgba = new Uint8Array(w * h * 4);
    for (let y = 0; y < h; y++) {
      const row = h - 1 - y;
      for (let x = 0; x < w; x++) {
        let idx = 0, r = 0, g = 0, bl = 0;
        if (bpp === 1) idx = (u8[xor + row * xorStride + (x >> 3)] >> (7 - (x & 7))) & 1;
        else if (bpp === 4) idx = (u8[xor + row * xorStride + (x >> 1)] >> (x & 1 ? 0 : 4)) & 15;
        else if (bpp === 8) idx = u8[xor + row * xorStride + x];
        if (bpp <= 8) { bl = u8[pal + idx * 4]; g = u8[pal + idx * 4 + 1]; r = u8[pal + idx * 4 + 2]; } else { const q = xor + row * xorStride + x * (bpp >> 3); bl = u8[q]; g = u8[q + 1]; r = u8[q + 2]; }
        const mask = (u8[and + row * andStride + (x >> 3)] >> (7 - (x & 7))) & 1;
        const o = (y * w + x) * 4;
        if (mask) {
          // AND=1: transparent, or inverted screen when XOR is white (drawn as black here)
          const inv = r + g + bl > 0;
          rgba[o] = 0; rgba[o + 1] = 0; rgba[o + 2] = 0; rgba[o + 3] = inv ? 255 : 0;
        } else { rgba[o] = r; rgba[o + 1] = g; rgba[o + 2] = bl; rgba[o + 3] = 255; }
      }
    }
    return { w, h, hx, hy, rgba };
  };
  let currentCursor = 0, showCount = 0;
  host.setCursor = (h) => {
    if (h === currentCursor) return;
    currentCursor = h;
    host.cursorChanged(h ? cursors.get(h) || { css: 'default' } : null, showCount >= 0);
  };
  m.api(U + 'SetCursor', 1, (h) => { const old = currentCursor; host.setCursor(h); return old; });
  m.api(U + 'ShowCursor', 1, (show) => {
    showCount += show ? 1 : -1;
    host.cursorChanged(currentCursor ? cursors.get(currentCursor) || { css: 'default' } : null, showCount >= 0);
    return showCount;
  });
  m.api(U + 'DestroyCursor', 1, () => 1);
  m.api(U + 'LoadIconA', 2, () => 0x9900);
  m.api(U + 'DestroyIcon', 1, () => 1);
  m.api(U + 'LoadBitmapA', 2, (hInst, name) => {
    const r = host.resource(hInst, name < 0x10000 ? name : m.cstr(name).toUpperCase(), 2);
    if (!r) return 0;
    const bmi = r.ptr;
    const bpp = u16[(bmi + 14) >> 1];
    const ncol = bpp <= 8 ? (u32[(bmi + 32) >> 2] || 1 << bpp) : 0;
    const src = host.dibFromPacked(null, bmi, bmi + u32[bmi >> 2] + ncol * 4, 0);
    // device-dependent copy (system palette indices)
    const s = { kind: 'ddb8', w: src.w, h: src.h, bpp: 8, stride: (src.w + 1) & ~1, data: new Uint8Array(((src.w + 1) & ~1) * src.h), topDown: true, colors: host.screen.palette, cver: 1 };
    const hbm = host.newGdi({ type: 'bitmap', s });
    host.blit({ surface: s, ox: 0, oy: 0, clip: null, visX: 0, visY: 0, visW: s.w, visH: s.h, vx: 0, vy: 0, wx: 0, wy: 0, palette: null }, 0, 0, s.w, s.h, src, 0, 0, 0xCC0020, null);
    return hbm;
  });

  // --- dialogs and message boxes -----------------------------------------------------------
  m.api(U + 'MessageBoxA', 4, (hwnd, pText, pCap, type) => host.messageBox(pText ? m.cstr(pText) : '', pCap ? m.cstr(pCap) : 'Error', type));
  // Dialogs. The dialog and its controls are real windows, so the player's (MFC) dialog code runs
  // unchanged: WM_INITDIALOG, Get/SetDlgItemText, WM_COMMAND, EndDialog. They are not drawn into
  // the 640x480 screen; the page shows the dialog's texts and buttons as an overlay and a button
  // press comes back as the WM_COMMAND the control would have sent.
  const DLG_CLASSES = { 0x80: 'BUTTON', 0x81: 'EDIT', 0x82: 'STATIC', 0x83: 'LISTBOX', 0x84: 'SCROLLBAR', 0x85: 'COMBOBOX' };
  const dlgProc = (hwnd, msg, wp, lp) => {
    const w = W(hwnd);
    if (!w) return 0;
    const proc = w.extra[4] | (w.extra[5] << 8) | (w.extra[6] << 16) | (w.extra[7] << 24);
    if (proc >>> 0) {
      w.extra[0] = w.extra[1] = w.extra[2] = w.extra[3] = 0;          // DWL_MSGRESULT
      const handled = callProc(proc >>> 0, hwnd, msg, wp, lp);
      if (!W(hwnd)) return 0;
      if (handled) return msg === 0x110 || (msg >= 0x132 && msg <= 0x138) || msg === 0x2B || msg === 0x2E || msg === 0x2F ? handled : (w.extra[0] | (w.extra[1] << 8) | (w.extra[2] << 16) | (w.extra[3] << 24)) >>> 0;
    }
    if (msg === WM.CLOSE) { queue.push({ hwnd, msg: WM.COMMAND, wp: 2, lp: 0, posted: true }); return 0; }   // IDCANCEL
    if (msg === WM.ERASEBKGND || msg === WM.PAINT) { w.update = null; return 1; }
    return defWindowProc(hwnd, msg, wp, lp);
  };
  const dlgProcThunk = m.makeThunk('DefDlgProc(thunk)', 16, (esp) => dlgProc(u32[(esp + 4) >> 2], u32[(esp + 8) >> 2], u32[(esp + 12) >> 2], u32[(esp + 16) >> 2]));
  classes.get('#32770').proc = dlgProcThunk;
  const dialogSpec = (w) => {
    const texts = [], buttons = [];
    for (const c of w.children.slice().reverse()) {
      const cn = c.cls.name.toUpperCase();
      if (!c.visible) continue;
      if (cn === 'STATIC' && c.text.trim()) texts.push(c.text.replace(/&/g, ''));
      else if (cn === 'BUTTON' && (c.style & 0xF) <= 1) buttons.push({ id: c.id & 0xFFFF, label: c.text.replace(/&/g, ''), isDefault: (c.style & 0xF) === 1, disabled: !c.enabled });
    }
    return { hwnd: w.hwnd, title: w.text, texts, buttons };
  };
  host.dialogChanged = (w) => { if (w.isDialog && w.visible && !w.destroyed) host.showDialog(dialogSpec(w)); };
  m.api(U + 'CreateDialogIndirectParamA', 5, (hInst, pTmpl, hParent, proc, param) => {
    // DLGTEMPLATE (the classic form; DLGTEMPLATEEX starts with dlgVer 1, signature 0xFFFF)
    let p = pTmpl;
    if (u16[p >> 1] === 1 && u16[(p + 2) >> 1] === 0xFFFF) { log('CreateDialogIndirectParam: extended dialog templates are not supported'); return 0; }
    const style = u32[p >> 2];
    const count = u16[(p + 8) >> 1];
    p += 18;
    const sz = () => { if (u16[p >> 1] === 0xFFFF) { const v = u16[(p + 2) >> 1]; p += 4; return v; } let t = ''; for (;;) { const c = u16[p >> 1]; p += 2; if (!c) break; t += String.fromCharCode(c < 256 ? c : 63); } return t; };
    sz();                                  // menu
    sz();                                  // class
    const title = sz();
    if (style & 0x40) { p += 2; sz(); }     // DS_SETFONT: point size, face
    const tmp2 = host.heap.alloc(512);
    m.writeCStr(tmp2, title, 255);
    m.writeCStr(tmp2 + 256, '#32770');
    const hwnd = createWindow(0, tmp2 + 256, tmp2, ((style & ~WS_VISIBLE & ~WS_CHILD) | WS_POPUP) >>> 0, 170, 140, 300, 200, hParent, 0, hInst, 0);
    if (!hwnd) { host.heap.release(tmp2); return 0; }
    const w = W(hwnd);
    w.isDialog = true;
    w.noDraw = true;
    w.extra[4] = proc; w.extra[5] = proc >> 8; w.extra[6] = proc >> 16; w.extra[7] = proc >>> 24;
    let first = 0;
    for (let k = 0; k < count; k++) {
      p = (p + 3) & ~3;
      const cStyle = u32[p >> 2], cEx = u32[(p + 4) >> 2];
      const id = u16[(p + 16) >> 1];
      p += 18;
      const cls = sz();
      const text = sz();
      const extraLen = u16[p >> 1];
      p += 2 + extraLen;
      const cname = typeof cls === 'number' ? DLG_CLASSES[cls] || 'STATIC' : cls;
      m.writeCStr(tmp2, typeof text === 'number' ? '' : text, 255);
      m.writeCStr(tmp2 + 256, cname, 255);
      const ch = createWindow(cEx, tmp2 + 256, tmp2, (cStyle | WS_CHILD) >>> 0, 0, k * 20, 280, 18, hwnd, id, hInst, 0);
      if (ch) { W(ch).noDraw = true; if (!first) first = ch; }
    }
    host.heap.release(tmp2);
    if (!W(hwnd)) return 0;
    const r = send(hwnd, WM.INITDIALOG, first, param);
    if (!W(hwnd)) return 0;
    if (r && first && W(first)) setFocus(first);
    if (style & WS_VISIBLE) showWindow(w, 5);
    return hwnd;
  });
  m.api(U + 'EndDialog', 2, (hwnd, result) => {
    const w = W(hwnd);
    if (!w) return 0;
    w.dlgResult = result;
    showWindow(w, 0);
    return 1;
  });
  const dlgItem = (h, id) => { const w = W(h); return w ? w.children.find((x) => (x.id & 0xFFFF) === (id & 0xFFFF)) || null : null; };
  m.api(U + 'SetDlgItemTextA', 3, (h, id, p) => { const c = dlgItem(h, id); if (!c) return 0; send(c.hwnd, WM.SETTEXT, 0, p); return 1; });
  m.api(U + 'GetDlgItemTextA', 4, (h, id, p, n) => { const c = dlgItem(h, id); if (!c) { if (n) u8[p] = 0; return 0; } return m.writeCStr(p, c.text, n); });
  m.api(U + 'SetDlgItemInt', 4, (h, id, v, signed) => { const c = dlgItem(h, id); if (!c) return 0; c.text = String(signed ? v | 0 : v >>> 0); host.dialogChanged(c.parent); return 1; });
  m.api(U + 'GetDlgItemInt', 4, (h, id, pOk, signed) => { const c = dlgItem(h, id); const v = c ? parseInt(c.text, 10) : NaN; if (pOk) u32[pOk >> 2] = Number.isNaN(v) ? 0 : 1; return Number.isNaN(v) ? 0 : v; });
  m.api(U + 'CheckDlgButton', 3, (h, id, v) => { const c = dlgItem(h, id); if (c) c.checked = v; return c ? 1 : 0; });
  m.api(U + 'CheckRadioButton', 4, (h, first, last, id) => { const w = W(h); if (!w) return 0; for (const c of w.children) if ((c.id & 0xFFFF) >= first && (c.id & 0xFFFF) <= last) c.checked = (c.id & 0xFFFF) === id ? 1 : 0; return 1; });
  m.api(U + 'IsDlgButtonChecked', 2, (h, id) => { const c = dlgItem(h, id); return c ? c.checked || 0 : 0; });
  m.api(U + 'WinHelpA', 4, (hwnd, pFile, cmd) => { if (cmd !== 2) host.showHelp(pFile ? m.cstr(pFile) : ''); return 1; });
  m.api(U + 'ReuseDDElParam', 5, (lp) => lp);
  m.api(U + 'UnpackDDElParam', 4, () => 0);

  // --- SHELL32, COMDLG32, WINSPOOL, COMCTL32 -------------------------------------------------
  const S = 'SHELL32.DLL!';
  m.api(S + 'DragAcceptFiles', 2, () => 0);        // no shell drag-and-drop in a browser
  m.api(S + 'DragFinish', 1, () => 0);
  m.api(S + 'DragQueryFileA', 4, () => 0);
  m.api(S + 'ExtractIconA', 3, () => 0);
  m.api(S + 'SHGetFileInfoA', 5, () => 0);
  m.api('COMCTL32.DLL!#17', 0, () => 0);           // InitCommonControls
  const C = 'COMDLG32.DLL!';
  m.api(C + 'GetFileTitleA', 3, (pFile, buf, n) => { const s = m.cstr(pFile).split(/[\\/]/).pop(); m.writeCStr(buf, s, n); return 0; });
  m.api(C + 'GetOpenFileNameA', 1, () => 0);       // cancelled: the title never needs a file picker for play
  m.api(C + 'GetSaveFileNameA', 1, () => 0);
  m.api(C + 'CommDlgExtendedError', 0, () => 0);
  m.api(C + 'PageSetupDlgA', 1, () => 0);
  m.api(C + 'PrintDlgA', 1, (p) => {
    // PRINTDLG is byte-packed (66 bytes): hDevMode +8, hDevNames +12, hDC +16, Flags +20.
    // No Windows dialog is shown: there is one "printer", the browser's print dialog, which opens
    // when the page is sent. The Bitmap plug-in first asks for the default printer
    // (PD_RETURNDEFAULT | PD_RETURNDC) and needs its DEVMODE to choose the orientation
    // (Bitmap.r32 0x10004550, 0x100045F0).
    const flags = u32[(p + 20) >> 2];
    if (!host.canPrint()) return 0;
    const get32 = (o) => m.view.getUint32(p + o, true);
    const set32 = (o, v) => m.view.setUint32(p + o, v, true);
    if (!get32(8)) {
      const h = host.globalAlloc(0x42, 148);              // GHND: DEVMODEA
      const d = host.globalLock(h);
      m.writeCStr(d, 'Browser printer', 32);
      u16[(d + 32) >> 1] = 0x0400; u16[(d + 34) >> 1] = 0x0400; u16[(d + 36) >> 1] = 148; u16[(d + 38) >> 1] = 0;
      u32[(d + 40) >> 2] = 0x00000001 | 0x00000002 | 0x00000100;   // DM_ORIENTATION | DM_PAPERSIZE | DM_COPIES
      u16[(d + 44) >> 1] = 1;                              // portrait
      u16[(d + 46) >> 1] = 9;                              // DMPAPER_A4
      u16[(d + 54) >> 1] = 1;                              // copies
      host.globalUnlock(h);
      set32(8, h);
    }
    if (!get32(12)) {
      const h = host.globalAlloc(0x42, 64);                // DEVNAMES: three string offsets + default flag
      const d = host.globalLock(h);
      u16[d >> 1] = 8; u16[(d + 2) >> 1] = 16; u16[(d + 4) >> 1] = 32; u16[(d + 6) >> 1] = 1;
      m.writeCStr(d + 8, 'WINSPOOL'); m.writeCStr(d + 16, 'Browser printer'); m.writeCStr(d + 32, 'LPT1:');
      host.globalUnlock(h);
      set32(12, h);
    }
    if ((flags & 0x100) && !get32(16)) set32(16, host.createPrinterDC());   // PD_RETURNDC
    m.view.setUint16(p + 24, 1, true); m.view.setUint16(p + 26, 1, true); m.view.setUint16(p + 32, 1, true);
    return 1;
  });
  const P = 'WINSPOOL.DRV!';
  m.api(P + 'OpenPrinterA', 3, () => 0);
  m.api(P + 'ClosePrinter', 1, () => 1);
  m.api(P + 'DocumentPropertiesA', 6, () => -1);

  host.user = { desktop, queue, keyState, W, defWindowProc, invalidateTree, topWindow: () => desktop.children.find((c) => c.visible) || null };
}
