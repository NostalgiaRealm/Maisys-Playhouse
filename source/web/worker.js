// Game thread. Runs the recompiled player exactly as the original ran its thread: WinMain's own
// message loop, with GetMessage/Sleep style waits blocking this worker (Atomics.wait). The page
// stays responsive because nothing of the game runs on it; it only presents the shared frame
// buffer, plays submitted sound and feeds input into a shared ring.
import { createGame } from '../host/runtime.js';
import { RangeReader } from '../host/vfs.js';

const CTRL = { WAKE: 0, IN_WRITE: 1, IN_READ: 2, PAUSED: 3, FRAME: 4, STOP: 5, ANSWER: 6, PALETTE: 7, DIRTY: 8 };
const RING = 256, REC = 6;
let ctrl, ring, pixels, palette;
let t0 = 0, pausedTotal = 0;
let baseUrl = '';
const post = (msg, transfer) => self.postMessage(msg, transfer || []);
const log = (s) => post({ t: 'log', s });

const now = () => performance.now() - t0 - pausedTotal;
/** While the page is hidden or paused the game thread stops here and its clock does not run. */
const checkPause = () => {
  if (!Atomics.load(ctrl, CTRL.PAUSED)) return;
  const t = performance.now();
  while (Atomics.load(ctrl, CTRL.PAUSED)) Atomics.wait(ctrl, CTRL.PAUSED, 1, 500);
  pausedTotal += performance.now() - t;
};
const waitWake = (ms) => {
  checkPause();
  if (Atomics.load(ctrl, CTRL.IN_WRITE) !== Atomics.load(ctrl, CTRL.IN_READ)) return;
  const v = Atomics.load(ctrl, CTRL.WAKE);
  if (ms > 0) Atomics.wait(ctrl, CTRL.WAKE, v, ms);
  checkPause();
};

function fetchSync(url, start, len) {
  const x = new XMLHttpRequest();
  x.open('GET', url, false);
  x.responseType = 'arraybuffer';
  if (start !== undefined) x.setRequestHeader('Range', `bytes=${start}-${start + len - 1}`);
  x.send();
  if (x.status !== 200 && x.status !== 206) throw new Error(`fetch ${url}: HTTP ${x.status}`);
  let buf = new Uint8Array(x.response);
  if (start !== undefined && x.status === 200 && buf.length > len) buf = buf.subarray(start, start + len);   // server ignored Range
  return buf;
}

// --- text: canvas fonts stand in for the Windows font mapper --------------------------
const textCanvas = new OffscreenCanvas(8, 8);
const textCtx = textCanvas.getContext('2d', { willReadFrequently: true });
const FACE = { 'system': 'Arial, Helvetica, sans-serif', 'ms sans serif': 'Arial, Helvetica, sans-serif', 'courier new': '"Courier New", Courier, monospace', 'courier': '"Courier New", Courier, monospace', 'arial': 'Arial, Helvetica, sans-serif', 'times new roman': '"Times New Roman", Times, serif', 'fixedsys': '"Courier New", monospace', 'terminal': '"Courier New", monospace' };
const fontCache = new Map();
const cssFont = (f) => {
  const key = f.h;
  let c = fontCache.get(key);
  if (c && c.height === f.height && c.face === f.face && c.weight === f.weight) return c;
  // lfHeight < 0 asks for a character height (em); > 0 for a cell height (em + internal leading)
  const em = Math.max(4, Math.round(f.cell ? f.height * 0.87 : f.height));
  const family = FACE[f.face.toLowerCase()] || `"${f.face}", ${(f.pitch & 3) === 1 ? 'monospace' : 'sans-serif'}`;
  const css = `${f.italic ? 'italic ' : ''}${f.weight >= 600 ? 'bold ' : ''}${em}px ${family}`;
  textCtx.font = css;
  const mm = textCtx.measureText('Mgjpqy|Ä');
  const ascent = Math.ceil(mm.fontBoundingBoxAscent || em * 0.9);
  const descent = Math.ceil(mm.fontBoundingBoxDescent || em * 0.25);
  c = { css, em, ascent, descent, height: f.height, face: f.face, weight: f.weight, ave: Math.round(textCtx.measureText('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ').width / 52), max: Math.ceil(textCtx.measureText('W').width) };
  fontCache.set(key, c);
  return c;
};
const text = {
  metrics: (f) => { const c = cssFont(f); return { height: c.ascent + c.descent, ascent: c.ascent, descent: c.descent, internalLeading: Math.max(0, c.ascent + c.descent - c.em), aveWidth: c.ave, maxWidth: c.max }; },
  width: (f, s) => { const c = cssFont(f); textCtx.font = c.css; return Math.round(textCtx.measureText(s).width); },
  raster: (f, s) => {
    const c = cssFont(f);
    textCtx.font = c.css;
    const w = Math.max(1, Math.ceil(textCtx.measureText(s).width) + 2);
    const h = c.ascent + c.descent;
    if (textCanvas.width < w || textCanvas.height < h) { textCanvas.width = Math.max(textCanvas.width, w); textCanvas.height = Math.max(textCanvas.height, h); }
    textCtx.clearRect(0, 0, w, h);
    textCtx.font = c.css;
    textCtx.fillStyle = '#fff';
    textCtx.textBaseline = 'alphabetic';
    textCtx.fillText(s, 0, c.ascent);
    const d = textCtx.getImageData(0, 0, w, h).data;
    const alpha = new Uint8Array(w * h);
    for (let k = 0; k < w * h; k++) alpha[k] = d[k * 4 + 3];
    return { w, h, alpha };
  },
};

async function start(init) {
  ctrl = new Int32Array(init.ctrl);
  ring = new Int32Array(init.ring);
  pixels = new Uint8Array(init.pixels);
  palette = new Uint32Array(init.palette);
  baseUrl = init.baseUrl;
  const manifest = init.manifest;
  const settings = new Map(init.settings || []);
  post({ t: 'status', s: 'Loading the original player…' });
  const [wasmBuf, meta, codeMap] = await Promise.all([
    fetch(baseUrl + 'game/maisy.wasm').then((r) => { if (!r.ok) throw new Error('maisy.wasm: HTTP ' + r.status); return r; }),
    fetch(baseUrl + 'game/maisy.meta.json').then((r) => r.json()),
    fetch(baseUrl + 'game/maisy.codemap.bin').then((r) => r.arrayBuffer()),
  ]);
  const wasm = await WebAssembly.compileStreaming(wasmBuf).catch(async () => WebAssembly.compile(await (await fetch(baseUrl + 'game/maisy.wasm')).arrayBuffer()));
  post({ t: 'status', s: 'Loading the game data…' });
  const files = [];
  for (const f of manifest.files) {
    if (f.mode === 'whole') {
      const data = new Uint8Array(await (await fetch(baseUrl + f.url)).arrayBuffer());
      files.push({ path: f.path, data, readOnly: true });
    } else if (f.mode === 'range') {
      files.push({ path: f.path, size: f.size, reader: new RangeReader(f.size, (off, len) => fetchSync(baseUrl + f.url, off, len), 1 << 18, 64) });
    } else {
      // listed only: the player enumerates and loads these by name; their code is in maisy.wasm
      files.push({ path: f.path, size: f.size, reader: { read() { throw new Error('placeholder file read: ' + f.path); } } });
    }
  }
  for (const [path, b64] of init.saved || []) {
    const bin = atob(b64);
    const data = new Uint8Array(bin.length);
    for (let k = 0; k < bin.length; k++) data[k] = bin.charCodeAt(k);
    files.push({ path, data, persist: true });
  }
  let presented = 0;
  const platform = {
    log,
    nowMs: now,
    wallClockMs: () => Date.now(),
    sleep: (ms) => {
      checkPause();
      const end = performance.now() + ms;
      // a private wait: input must not cut a Sleep short
      const cell = new Int32Array(new SharedArrayBuffer(4));
      let left = ms;
      while (left > 0) { Atomics.wait(cell, 0, 0, left); left = end - performance.now(); }
      checkPause();
    },
    waitForInput: (ms) => waitWake(ms),
    idle: () => waitWake(1),
    wake: () => {},
    screen: {
      width: 640, height: 480, pixels, palette,
      markDirty: () => {},
      present: () => { Atomics.add(ctrl, CTRL.FRAME, 1); presented++; },
      paletteChanged: () => { Atomics.add(ctrl, CTRL.FRAME, 1); Atomics.add(ctrl, CTRL.PALETTE, 1); },
    },
    input: {
      poll: () => {
        let r = Atomics.load(ctrl, CTRL.IN_READ);
        const w = Atomics.load(ctrl, CTRL.IN_WRITE);
        if (r === w) return null;
        const out = [];
        while (r !== w) {
          const o = (r % RING) * REC;
          const type = ring[o];
          if (type === 1) out.push({ type: 'move', x: ring[o + 1], y: ring[o + 2] });
          else if (type === 2) out.push({ type: 'down', x: ring[o + 1], y: ring[o + 2], button: ring[o + 3] });
          else if (type === 3) out.push({ type: 'up', x: ring[o + 1], y: ring[o + 2], button: ring[o + 3] });
          else if (type === 4) out.push({ type: 'keydown', vk: ring[o + 1], ch: ring[o + 2], scan: ring[o + 3] });
          else if (type === 5) out.push({ type: 'keyup', vk: ring[o + 1], scan: ring[o + 3] });
          else if (type === 6) out.push({ type: 'cancel' });
          else if (type === 7) out.push({ type: 'close' });
          else if (type === 8) out.push({ type: 'command', hwnd: ring[o + 1], id: ring[o + 2] });
          r = (r + 1) | 0;
        }
        Atomics.store(ctrl, CTRL.IN_READ, r);
        return out;
      },
    },
    audio: {
      open: (h, fmt) => post({ t: 'audio', op: 'open', h, fmt }),
      submit: (h, pcm, delayMs) => post({ t: 'audio', op: 'submit', h, pcm, delayMs }, [pcm.buffer]),
      reset: (h) => post({ t: 'audio', op: 'reset', h }),
      close: (h) => post({ t: 'audio', op: 'close', h }),
      setVolume: (l, r) => post({ t: 'audio', op: 'volume', l, r }),
    },
    text,
    settings,
    saveSettings: () => post({ t: 'settings', entries: [...settings] }),
    persistFile: (path, data) => post({ t: 'persist', path, data }),
    messageBox: (textStr, caption, type) => {
      // modal: the game thread waits for the answer, its clock stopped, as a real MessageBox would block it
      Atomics.store(ctrl, CTRL.ANSWER, 0);
      post({ t: 'messagebox', text: textStr, caption, type });
      const t = performance.now();
      while (!Atomics.load(ctrl, CTRL.ANSWER)) Atomics.wait(ctrl, CTRL.ANSWER, 0, 500);
      pausedTotal += performance.now() - t;
      return Atomics.load(ctrl, CTRL.ANSWER);
    },
    beep: () => post({ t: 'beep' }),
    showHelp: (file) => post({ t: 'help', file }),
    canPrint: () => true,
    printPage: (s, name, n) => { const rgba = s.data.slice(); post({ t: 'print', w: s.w, h: s.h, rgba, name, n }, [rgba.buffer]); },
    showDialog: (spec) => post({ t: 'dialog', spec }),
    hideDialog: (hwnd) => post({ t: 'dialog', close: hwnd }),
    cursorChanged: (c, visible) => {
      if (!c || !visible) post({ t: 'cursor', none: !visible });
      else if (c.css) post({ t: 'cursor', css: c.css });
      else post({ t: 'cursor', key: c.key, w: c.w, h: c.h, hx: c.hx, hy: c.hy, rgba: c.sent ? null : c.rgba });
      if (c && c.rgba) c.sent = true;
    },
  };
  const game = await createGame({ wasm, meta, codeMap: new Uint8Array(codeMap), platform, files });
  if (game.host.unbound.length) log('unbound imports: ' + game.host.unbound.join(' '));
  if (init.debug) { self.game = game; }
  post({ t: 'running' });
  t0 = performance.now();
  pausedTotal = 0;
  let code = 0;
  try {
    code = game.run();
    post({ t: 'exit', code });
  } catch (e) {
    post({ t: 'crash', message: String(e && e.message ? e.message : e), stack: e && e.stack ? String(e.stack).split('\n').slice(0, 24).join('\n') : '' });
  }
}

self.onmessage = (e) => {
  if (e.data.t === 'start') start(e.data).catch((err) => post({ t: 'crash', message: String(err && err.message ? err.message : err), stack: err && err.stack ? String(err.stack) : '' }));
};
