// Page side of the port: presents the game thread's 640x480 indexed frame buffer, plays the PCM it
// submits, and feeds pointer, keyboard, touch and controller input into the shared input ring.
// No game logic runs here. See docs/LLM_GUIDE.md.

const CTRL = { WAKE: 0, IN_WRITE: 1, IN_READ: 2, PAUSED: 3, FRAME: 4, STOP: 5, ANSWER: 6, PALETTE: 7, DIRTY: 8 };
const RING = 256, REC = 6;
const SW = 640, SH = 480;
const $ = (id) => document.getElementById(id);
const canvas = $('screen');
const stage = $('stage');
const bar = $('bar');
const statusEl = $('status');
const params = new URLSearchParams(location.search);
const baseUrl = new URL('.', location.href).href;

// --- settings -------------------------------------------------------------------------
const DEFAULTS = { res: 'auto', scale: 100, smooth: 'pixel', volume: 100, mute: false, hover: false, pad: 100 };
const LS = { ui: 'maisy.ui', store: 'maisy.store', file: 'maisy.file:' };
const loadJson = (k, d) => { try { const v = localStorage.getItem(k); return v ? JSON.parse(v) : d; } catch (e) { return d; } };
const saveJson = (k, v) => { try { localStorage.setItem(k, JSON.stringify(v)); } catch (e) { /* storage may be unavailable */ } };
const ui = { ...DEFAULTS, ...loadJson(LS.ui, {}) };
if (params.has('res')) ui.res = params.get('res');
if (params.has('scale')) ui.scale = Math.max(25, Math.min(200, Number(params.get('scale')) || 100));
const saveUi = () => saveJson(LS.ui, ui);

// --- shared state with the game thread ------------------------------------------------
let ctrl = null, ring = null, pixels = null, palette = null, worker = null;
let running = false, paused = false, userPaused = false;
const isolated = typeof SharedArrayBuffer !== 'undefined' && self.crossOriginIsolated;

function pushInput(type, a = 0, b = 0, c = 0, d = 0) {
  if (!running) return;
  const w = Atomics.load(ctrl, CTRL.IN_WRITE);
  const r = Atomics.load(ctrl, CTRL.IN_READ);
  if (((w - r) | 0) >= RING - 1) return;            // ring full: drop (moves are frequent, the newest follows)
  const o = (w % RING) * REC;
  ring[o] = type; ring[o + 1] = a; ring[o + 2] = b; ring[o + 3] = c; ring[o + 4] = d;
  Atomics.store(ctrl, CTRL.IN_WRITE, (w + 1) | 0);
  Atomics.add(ctrl, CTRL.WAKE, 1);
  Atomics.notify(ctrl, CTRL.WAKE);
}

// --- layout and presentation ------------------------------------------------------------
const src = document.createElement('canvas');
src.width = SW; src.height = SH;
const srcCtx = src.getContext('2d');
const frame = srcCtx.createImageData(SW, SH);
const frame32 = new Uint32Array(frame.data.buffer);
const pal32 = new Uint32Array(256);
const ctx = canvas.getContext('2d', { alpha: false, desynchronized: true });
let scene = { x: 0, y: 0, w: SW, h: SH };       // scene rectangle in canvas backing pixels
let sceneCss = { x: 0, y: 0, w: SW, h: SH };    // same in CSS pixels relative to the stage
let lastFrame = -1, needRedraw = true;
const perf = { frames: 0, last: performance.now(), fps: 0, worst: 0, lastT: 0, samples: [] };

function layout() {
  const cw = Math.max(1, stage.clientWidth), ch = Math.max(1, stage.clientHeight);
  const dpr = window.devicePixelRatio || 1;
  const k = ui.scale / 100;
  let bw, bh;
  if (ui.res === 'auto') {
    bw = Math.max(1, Math.round(cw * dpr * k));
    bh = Math.max(1, Math.round(ch * dpr * k));
  } else {
    // explicit scene resolution; the canvas keeps the stage's shape around it
    const sw = Number(ui.res) * k, sh = sw * 3 / 4;
    if (cw / ch >= 4 / 3) { bh = Math.round(sh); bw = Math.round(sh * cw / ch); } else { bw = Math.round(sw); bh = Math.round(sw * ch / cw); }
  }
  bw = Math.min(bw, 8192); bh = Math.min(bh, 8192);
  if (canvas.width !== bw || canvas.height !== bh) { canvas.width = bw; canvas.height = bh; }
  canvas.style.width = cw + 'px';
  canvas.style.height = ch + 'px';
  const fit = Math.min(bw / SW, bh / SH);
  const w = Math.round(SW * fit), h = Math.round(SH * fit);
  scene = { x: Math.floor((bw - w) / 2), y: Math.floor((bh - h) / 2), w, h };
  sceneCss = { x: scene.x * cw / bw, y: scene.y * ch / bh, w: w * cw / bw, h: h * ch / bh };
  // the toolbar sits on the letterbox bars when there is room, else it floats small in a corner
  const side = sceneCss.x, below = ch - (sceneCss.y + sceneCss.h);
  bar.dataset.mode = side >= 46 ? 'side' : below >= 46 ? 'bottom' : 'float';
  $('res').textContent = `${bw}×${bh} · scene ${w}×${h}`;
  $('s-info').textContent = `Canvas ${bw}×${bh} px, scene ${w}×${h} px (authored 640×480), device pixel ratio ${dpr}, render scale ${ui.scale}%.`;
  needRedraw = true;
  cursorScaleChanged();
}

function draw() {
  const f = Atomics.load(ctrl, CTRL.FRAME);
  if (f === lastFrame && !needRedraw) return false;
  lastFrame = f;
  needRedraw = false;
  for (let k = 0; k < 256; k++) { const c = palette[k]; pal32[k] = 0xFF000000 | ((c & 0xFF) << 16) | (c & 0xFF00) | ((c >> 16) & 0xFF); }
  const n = SW * SH;
  for (let k = 0; k < n; k++) frame32[k] = pal32[pixels[k]];
  srcCtx.putImageData(frame, 0, 0);
  ctx.imageSmoothingEnabled = ui.smooth === 'smooth';
  if (scene.x > 0 || scene.y > 0) { ctx.fillStyle = '#000'; ctx.fillRect(0, 0, canvas.width, canvas.height); }
  ctx.drawImage(src, scene.x, scene.y, scene.w, scene.h);
  return true;
}

function tick(t) {
  requestAnimationFrame(tick);
  if (!running) return;
  pollGamepad(t);
  draw();
  // presentation-loop timing (the game's own cadence is independent of this)
  if (perf.lastT) { const dt = t - perf.lastT; if (perf.recording) perf.samples.push(dt); }
  perf.lastT = t;
}

// --- pointer, touch, keyboard ----------------------------------------------------------
const toScene = (e) => {
  const r = canvas.getBoundingClientRect();
  const x = Math.floor((e.clientX - r.left - sceneCss.x) * SW / sceneCss.w);
  const y = Math.floor((e.clientY - r.top - sceneCss.y) * SH / sceneCss.h);
  return { x: Math.max(0, Math.min(SW - 1, x)), y: Math.max(0, Math.min(SH - 1, y)), inside: x >= 0 && y >= 0 && x < SW && y < SH };
};
let activePointer = null;
let pointerPos = { x: SW >> 1, y: SH >> 1 };
const btn = (e) => (e.button === 2 ? 2 : e.button === 1 ? 1 : 0);
canvas.addEventListener('pointerdown', (e) => {
  if (!running) return;
  e.preventDefault();
  canvas.focus({ preventScroll: true });
  ensureAudio();
  const p = toScene(e);
  if (!p.inside) return;
  hideVirtualCursor();
  pointerPos = p;
  if (e.pointerType === 'touch' && ui.hover) { pushInput(1, p.x, p.y); activePointer = { id: e.pointerId, hover: true }; }
  else {
    if (activePointer) return;                         // one pressing pointer at a time
    pushInput(1, p.x, p.y);                            // position first: rollover and cursor logic see the pointer arrive
    pushInput(2, p.x, p.y, btn(e));
    activePointer = { id: e.pointerId, button: btn(e) };
  }
  try { canvas.setPointerCapture(e.pointerId); } catch (err) { /* not capturable */ }
});
canvas.addEventListener('pointermove', (e) => {
  if (!running) return;
  if (activePointer && e.pointerId !== activePointer.id) return;
  if (e.pointerType === 'touch' && !activePointer) return;
  const p = toScene(e);
  pointerPos = p;
  if (e.pointerType === 'mouse') hideVirtualCursor();
  pushInput(1, p.x, p.y);
});
const release = (e, cancelled) => {
  if (!activePointer || e.pointerId !== activePointer.id) return;
  const p = toScene(e);
  pointerPos = p;
  if (!activePointer.hover) {
    if (cancelled) pushInput(6);                       // release without a click position
    else pushInput(3, p.x, p.y, activePointer.button); // also when released outside the scene: coordinates are clamped
  }
  activePointer = null;
  try { canvas.releasePointerCapture(e.pointerId); } catch (err) { /* already released */ }
};
canvas.addEventListener('pointerup', (e) => { e.preventDefault(); release(e, false); });
canvas.addEventListener('pointercancel', (e) => release(e, true));
canvas.addEventListener('lostpointercapture', (e) => { if (activePointer && e.pointerId === activePointer.id) release(e, true); });
canvas.addEventListener('contextmenu', (e) => e.preventDefault());
for (const type of ['touchstart', 'touchmove', 'touchend']) stage.addEventListener(type, (e) => { if (e.target === canvas) e.preventDefault(); }, { passive: false });
window.addEventListener('blur', () => { if (running) { pushInput(6); activePointer = null; } });

const VK_BY_CODE = { Space: 0x20, Enter: 0x0D, NumpadEnter: 0x0D, Escape: 0x1B, Backspace: 0x08, Tab: 0x09, ArrowLeft: 0x25, ArrowUp: 0x26, ArrowRight: 0x27, ArrowDown: 0x28, ShiftLeft: 0x10, ShiftRight: 0x10, ControlLeft: 0x11, ControlRight: 0x11, AltLeft: 0x12, AltRight: 0x12, Home: 0x24, End: 0x23, PageUp: 0x21, PageDown: 0x22, Insert: 0x2D, Delete: 0x2E, CapsLock: 0x14 };
const vkOf = (e) => {
  if (VK_BY_CODE[e.code]) return VK_BY_CODE[e.code];
  if (/^Key[A-Z]$/.test(e.code)) return e.code.charCodeAt(3);
  if (/^Digit\d$/.test(e.code)) return e.code.charCodeAt(5);
  if (/^F\d+$/.test(e.code)) return 0x6F + Number(e.code.slice(1));
  if (/^Numpad\d$/.test(e.code)) return 0x60 + Number(e.code.slice(6));
  return e.keyCode & 0xFF;
};
const charOf = (e) => {
  if (e.ctrlKey || e.metaKey) return 0;
  if (e.key.length === 1) { const c = e.key.charCodeAt(0); return c < 256 ? c : 0; }
  return { Enter: 13, Escape: 27, Backspace: 8, Tab: 9 }[e.key] || 0;
};
const typing = (e) => e.target instanceof HTMLInputElement || e.target instanceof HTMLSelectElement || e.target instanceof HTMLTextAreaElement;
window.addEventListener('keydown', (e) => {
  if (!running || typing(e) || !$('settings').hidden || !$('help').hidden) return;
  if (e.code === 'F11' || e.code === 'F12' || (e.ctrlKey && ['KeyR', 'KeyL', 'KeyT', 'KeyW'].includes(e.code)) || e.metaKey) return;   // leave browser keys alone
  e.preventDefault();
  ensureAudio();
  pushInput(4, vkOf(e), charOf(e));
});
window.addEventListener('keyup', (e) => {
  if (!running || typing(e)) return;
  pushInput(5, vkOf(e));
});

// --- controller: a virtual pointer -----------------------------------------------------
const vcursor = $('vcursor');
const pad = { active: false, buttons: [], lastT: 0, fx: SW / 2, fy: SH / 2 };
const hideVirtualCursor = () => { if (pad.active) { pad.active = false; vcursor.hidden = true; } };
function placeVirtualCursor() {
  vcursor.hidden = false;
  vcursor.style.left = (sceneCss.x + pointerPos.x * sceneCss.w / SW) + 'px';
  vcursor.style.top = (sceneCss.y + pointerPos.y * sceneCss.h / SH) + 'px';
}
function pollGamepad(t) {
  const pads = navigator.getGamepads ? navigator.getGamepads() : [];
  let gp = null;
  for (const p of pads) if (p && p.connected) { gp = p; break; }
  const dt = Math.min(0.05, (t - (pad.lastT || t)) / 1000);
  pad.lastT = t;
  if (!gp) return;
  const dead = (v) => (Math.abs(v) < 0.18 ? 0 : (v - Math.sign(v) * 0.18) / 0.82);
  let ax = dead(gp.axes[0] || 0), ay = dead(gp.axes[1] || 0);
  const b = (k) => !!(gp.buttons[k] && gp.buttons[k].pressed);
  if (b(14)) ax = -0.35; if (b(15)) ax = 0.35; if (b(12)) ay = -0.35; if (b(13)) ay = 0.35;
  if (ax || ay) {
    if (!pad.active) { pad.active = true; pad.fx = pointerPos.x; pad.fy = pointerPos.y; }
    const speed = 420 * (ui.pad / 100);
    pad.fx = Math.max(0, Math.min(SW - 1, pad.fx + ax * Math.abs(ax) * speed * dt));
    pad.fy = Math.max(0, Math.min(SH - 1, pad.fy + ay * Math.abs(ay) * speed * dt));
    const nx = Math.round(pad.fx), ny = Math.round(pad.fy);
    if (nx !== pointerPos.x || ny !== pointerPos.y) { pointerPos = { x: nx, y: ny, inside: true }; pushInput(1, nx, ny); }
    placeVirtualCursor();
  }
  const edge = (k, down, up) => {
    const now = b(k);
    if (now !== !!pad.buttons[k]) { pad.buttons[k] = now; if (now) down(); else up(); }
  };
  edge(0, () => { ensureAudio(); if (!pad.active) { pad.active = true; pad.fx = pointerPos.x; pad.fy = pointerPos.y; placeVirtualCursor(); } pushInput(1, pointerPos.x, pointerPos.y); pushInput(2, pointerPos.x, pointerPos.y, 0); }, () => pushInput(3, pointerPos.x, pointerPos.y, 0));
  edge(1, () => pushInput(4, 0x20, 0x20), () => pushInput(5, 0x20));        // B: Space, the title's own skip key
  edge(9, () => toggleSettings(), () => {});
}

// --- cursor ---------------------------------------------------------------------------
const cursorImages = new Map();
let currentCursor = { css: 'default' };
let cursorScale = 1;
function cursorUrl(c, scale) {
  const key = c.key + '@' + scale;
  if (cursorImages.has(key)) return cursorImages.get(key);
  const base = cursorImages.get(c.key + '#raw');
  if (!base) return null;
  const cv = document.createElement('canvas');
  cv.width = base.w * scale; cv.height = base.h * scale;
  const g = cv.getContext('2d');
  const tmp = document.createElement('canvas');
  tmp.width = base.w; tmp.height = base.h;
  tmp.getContext('2d').putImageData(new ImageData(new Uint8ClampedArray(base.rgba), base.w, base.h), 0, 0);
  g.imageSmoothingEnabled = false;
  g.drawImage(tmp, 0, 0, cv.width, cv.height);
  const out = { url: cv.toDataURL('image/png'), hx: base.hx * scale, hy: base.hy * scale };
  cursorImages.set(key, out);
  return out;
}
function applyCursor() {
  const c = currentCursor;
  if (c.none) { canvas.style.cursor = 'none'; vcursor.classList.add('plain'); return; }
  if (c.css) { canvas.style.cursor = c.css; vcursor.classList.add('plain'); return; }
  const img = cursorUrl(c, cursorScale);
  if (!img) { canvas.style.cursor = 'default'; return; }
  canvas.style.cursor = `url(${img.url}) ${img.hx} ${img.hy}, default`;
  vcursor.classList.remove('plain');
  vcursor.style.setProperty('--cursor-img', `url(${img.url})`);
}
function cursorScaleChanged() {
  // browsers refuse cursor images above 128 px: scale with the scene, but stay inside that
  const s = Math.max(1, Math.min(3, Math.round(sceneCss.w / SW)));
  if (s !== cursorScale) { cursorScale = s; applyCursor(); }
}

// --- audio ----------------------------------------------------------------------------
let actx = null, master = null, deviceGain = null;
const devices = new Map();
function ensureAudio() {
  if (!actx) {
    const AC = window.AudioContext || window.webkitAudioContext;
    if (!AC) return;
    actx = new AC({ latencyHint: 'interactive' });
    master = actx.createGain();
    deviceGain = actx.createGain();
    deviceGain.connect(master);
    master.connect(actx.destination);
    applyVolume();
  }
  if (actx.state === 'suspended' && !paused) actx.resume();
}
function applyVolume() {
  if (master) master.gain.value = ui.mute ? 0 : ui.volume / 100;
  $('b-mute').textContent = ui.mute ? '🔇' : '🔊';
  $('b-mute').setAttribute('aria-pressed', String(ui.mute));
}
const audioStats = { submits: 0, seconds: 0, resets: 0 };
function onAudio(msg) {
  if (msg.op === 'submit') audioStats.submits++;
  if (msg.op === 'reset') audioStats.resets++;
  if (!actx) return;
  if (msg.op === 'open') devices.set(msg.h, { fmt: msg.fmt, next: 0, sources: new Set() });
  else if (msg.op === 'close') devices.delete(msg.h);
  else if (msg.op === 'volume') deviceGain.gain.value = (msg.l + msg.r) / 2;
  else if (msg.op === 'reset') {
    const d = devices.get(msg.h);
    if (!d) return;
    for (const s of d.sources) { try { s.onended = null; s.stop(); } catch (e) { /* not started */ } }
    d.sources.clear();
    d.next = 0;
  } else if (msg.op === 'submit') {
    const d = devices.get(msg.h);
    if (!d) return;
    const { fmt } = d;
    const bytes = msg.pcm;
    const frames = Math.floor(bytes.length / fmt.align);
    if (!frames) return;
    const buf = actx.createBuffer(fmt.channels, frames, fmt.rate);
    const dv = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
    for (let c = 0; c < fmt.channels; c++) {
      const out = buf.getChannelData(c);
      if (fmt.bits === 8) for (let k = 0; k < frames; k++) out[k] = (bytes[k * fmt.align + c] - 128) / 128;
      else for (let k = 0; k < frames; k++) out[k] = dv.getInt16(k * fmt.align + c * 2, true) / 32768;
    }
    const s = actx.createBufferSource();
    s.buffer = buf;
    s.connect(deviceGain);
    // back-to-back with the previous buffer of this device, as waveOut queues them
    const when = Math.max(actx.currentTime + 0.02, d.next);
    d.next = when + frames / fmt.rate;
    audioStats.seconds += frames / fmt.rate;
    s.start(when);
    d.sources.add(s);
    s.onended = () => d.sources.delete(s);
  }
}

// --- pause, dialogs, printing, persistence -------------------------------------------------
function setPaused(p) {
  if (!running || paused === p) return;
  paused = p;
  if (p) { pushInput(6); activePointer = null; }
  Atomics.store(ctrl, CTRL.PAUSED, p ? 1 : 0);
  Atomics.notify(ctrl, CTRL.PAUSED);
  if (actx) { if (p) actx.suspend(); else actx.resume(); }
  $('paused').hidden = !(p && userPaused);
}
document.addEventListener('visibilitychange', () => { if (!userPaused) setPaused(document.hidden); });
$('resume').addEventListener('click', () => { userPaused = false; setPaused(false); });

const MB_BUTTONS = [[['OK', 1]], [['OK', 1], ['Cancel', 2]], [['Abort', 3], ['Retry', 4], ['Ignore', 5]], [['Yes', 6], ['No', 7], ['Cancel', 2]], [['Yes', 6], ['No', 7]], [['Retry', 4], ['Cancel', 2]]];
function messageBox(msg) {
  $('dlg-title').textContent = msg.caption;
  $('dlg-text').textContent = msg.text;
  const row = $('dlg-buttons');
  row.textContent = '';
  for (const [label, id] of MB_BUTTONS[msg.type & 15] || MB_BUTTONS[0]) {
    const b = document.createElement('button');
    b.textContent = label;
    b.addEventListener('click', () => { $('dialog').hidden = true; Atomics.store(ctrl, CTRL.ANSWER, id); Atomics.notify(ctrl, CTRL.ANSWER); });
    row.appendChild(b);
  }
  $('dialog').hidden = false;
}
// A dialog of the player itself (for example "Please insert the disk"): its texts and buttons, shown
// by the page; a press is sent back as the button's command.
let gameDialog = 0;
function showGameDialog(msg) {
  if (msg.close !== undefined) { if (gameDialog === msg.close) { $('dialog').hidden = true; gameDialog = 0; } return; }
  const { spec } = msg;
  gameDialog = spec.hwnd;
  $('dlg-title').textContent = spec.title;
  $('dlg-text').textContent = spec.texts.join('\n');
  const row = $('dlg-buttons');
  row.textContent = '';
  for (const b of spec.buttons) {
    const el = document.createElement('button');
    el.textContent = b.label || 'OK';
    el.disabled = !!b.disabled;
    if (b.isDefault) el.className = 'primary';
    el.addEventListener('click', () => pushInput(8, spec.hwnd, b.id));
    row.appendChild(el);
  }
  $('dialog').hidden = false;
}
function printPage(msg) {
  // The title printed a page (Gingerbread / Colouring "print" button): hand it to the browser's print dialog.
  const cv = document.createElement('canvas');
  cv.width = msg.w; cv.height = msg.h;
  cv.getContext('2d').putImageData(new ImageData(new Uint8ClampedArray(msg.rgba.buffer, msg.rgba.byteOffset, msg.w * msg.h * 4), msg.w, msg.h), 0, 0);
  cv.toBlob((blob) => {
    const url = URL.createObjectURL(blob);
    const frameEl = document.createElement('iframe');
    frameEl.style.cssText = 'position:fixed;right:0;bottom:0;width:0;height:0;border:0';
    frameEl.srcdoc = `<!doctype html><title>${msg.name}</title><style>@page{margin:10mm}html,body{margin:0}img{width:100%;height:auto}</style><img src="${url}">`;
    frameEl.onload = () => {
      const img = frameEl.contentDocument.querySelector('img');
      const go = () => { try { frameEl.contentWindow.focus(); frameEl.contentWindow.print(); } catch (e) { const a = document.createElement('a'); a.href = url; a.download = 'maisy-picture.png'; a.click(); } setTimeout(() => { frameEl.remove(); URL.revokeObjectURL(url); }, 60000); };
      if (img.complete) go(); else img.onload = go;
    };
    document.body.appendChild(frameEl);
  }, 'image/png');
}
const b64 = (bytes) => { let s = ''; for (let k = 0; k < bytes.length; k += 0x8000) s += String.fromCharCode.apply(null, bytes.subarray(k, k + 0x8000)); return btoa(s); };
function savedFiles() {
  const out = [];
  try { for (let k = 0; k < localStorage.length; k++) { const key = localStorage.key(k); if (key.startsWith(LS.file)) out.push([key.slice(LS.file.length), localStorage.getItem(key)]); } } catch (e) { /* no storage */ }
  return out;
}

function onWorkerMessage(e) {
  const msg = e.data;
  switch (msg.t) {
    case 'audio': onAudio(msg); break;
    case 'cursor':
      if (msg.rgba) cursorImages.set(msg.key + '#raw', { w: msg.w, h: msg.h, hx: msg.hx, hy: msg.hy, rgba: msg.rgba });
      currentCursor = msg;
      applyCursor();
      break;
    case 'status': statusEl.textContent = msg.s; break;
    case 'log': if (params.has('log')) console.log('[game]', msg.s); gameLog.push(msg.s); if (gameLog.length > 400) gameLog.shift(); break;
    case 'running': running = true; $('start').hidden = true; canvas.focus({ preventScroll: true }); layout(); break;
    case 'settings': saveJson(LS.store, msg.entries); break;
    case 'persist': try { if (msg.data) localStorage.setItem(LS.file + msg.path, b64(msg.data)); else localStorage.removeItem(LS.file + msg.path); } catch (err) { console.warn('could not save', msg.path, err); } break;
    case 'messagebox': messageBox(msg); break;
    case 'dialog': showGameDialog(msg); break;
    case 'print': printPage(msg); break;
    case 'help': showHelp(); break;
    case 'beep': break;
    case 'exit':
      running = false;
      $('start').hidden = false;
      $('play').disabled = false;
      $('play').textContent = 'Play again';
      statusEl.textContent = 'The game has ended.';
      worker.terminate(); worker = null;
      break;
    case 'crash':
      running = false;
      console.error('[game] crash', msg.message, msg.stack);
      $('start').hidden = false;
      $('play').disabled = false;
      $('play').textContent = 'Restart';
      statusEl.textContent = 'The game stopped: ' + msg.message;
      window.__crash = msg;
      if (worker) { worker.terminate(); worker = null; }
      break;
    default: break;
  }
}
const gameLog = [];

async function startGame() {
  $('play').disabled = true;
  ensureAudio();
  statusEl.textContent = 'Starting…';
  ctrl = new Int32Array(new SharedArrayBuffer(64 * 4));
  ring = new Int32Array(new SharedArrayBuffer(RING * REC * 4));
  pixels = new Uint8Array(new SharedArrayBuffer(SW * SH));
  palette = new Uint32Array(new SharedArrayBuffer(256 * 4));
  lastFrame = -1;
  const manifest = await (await fetch(baseUrl + 'game/files.json')).json();
  worker = new Worker(new URL('./worker.js', import.meta.url), { type: 'module' });
  worker.onmessage = onWorkerMessage;
  worker.onerror = (e) => { statusEl.textContent = 'Worker error: ' + (e.message || e); $('play').disabled = false; };
  worker.postMessage({ t: 'start', ctrl: ctrl.buffer, ring: ring.buffer, pixels: pixels.buffer, palette: palette.buffer, baseUrl, manifest, settings: loadJson(LS.store, []), saved: savedFiles(), debug: params.has('debug') });
}

// --- toolbar and panels -----------------------------------------------------------------
function toggleSettings(force) {
  const el = $('settings');
  el.hidden = force === undefined ? !el.hidden : !force;
  if (!el.hidden) $('help').hidden = true;
}
async function showHelp() {
  $('settings').hidden = true;
  if (!$('help-text').textContent) {
    try { $('help-text').textContent = await (await fetch(baseUrl + 'game/help.txt')).text(); } catch (e) { $('help-text').textContent = 'Help text is not available.'; }
  }
  $('help').hidden = false;
}
function syncControls() {
  $('s-res').value = ui.res; $('s-scale').value = ui.scale; $('o-scale').textContent = ui.scale + '%';
  $('s-smooth').value = ui.smooth; $('s-vol').value = ui.volume; $('o-vol').textContent = ui.volume + '%';
  $('s-hover').checked = ui.hover; $('s-pad').value = ui.pad; $('o-pad').textContent = ui.pad + '%';
  $('b-hover').setAttribute('aria-pressed', String(ui.hover));
  applyVolume();
}
$('s-res').addEventListener('change', (e) => { ui.res = e.target.value; saveUi(); layout(); });
$('s-scale').addEventListener('input', (e) => { ui.scale = Number(e.target.value); $('o-scale').textContent = ui.scale + '%'; saveUi(); layout(); });
$('s-smooth').addEventListener('change', (e) => { ui.smooth = e.target.value; saveUi(); needRedraw = true; });
$('s-vol').addEventListener('input', (e) => { ui.volume = Number(e.target.value); $('o-vol').textContent = ui.volume + '%'; ui.mute = false; saveUi(); applyVolume(); });
$('s-hover').addEventListener('change', (e) => { ui.hover = e.target.checked; saveUi(); syncControls(); });
$('s-pad').addEventListener('input', (e) => { ui.pad = Number(e.target.value); $('o-pad').textContent = ui.pad + '%'; saveUi(); });
$('s-close').addEventListener('click', () => toggleSettings(false));
$('s-help').addEventListener('click', showHelp);
$('help-close').addEventListener('click', () => { $('help').hidden = true; });
$('s-reset').addEventListener('click', () => {
  try { for (const key of Object.keys(localStorage)) if (key.startsWith(LS.file) || key === LS.store) localStorage.removeItem(key); } catch (e) { /* no storage */ }
  $('s-reset').textContent = 'Erased (takes effect at next start)';
});
$('b-settings').addEventListener('click', () => toggleSettings());
$('b-mute').addEventListener('click', () => { ui.mute = !ui.mute; saveUi(); ensureAudio(); applyVolume(); });
$('b-hover').addEventListener('click', () => { ui.hover = !ui.hover; saveUi(); syncControls(); });
$('b-full').addEventListener('click', () => {
  const el = document.documentElement;
  if (document.fullscreenElement || document.webkitFullscreenElement) (document.exitFullscreen || document.webkitExitFullscreen).call(document);
  else if (el.requestFullscreen) el.requestFullscreen({ navigationUI: 'hide' }).catch(() => {});
  else if (el.webkitRequestFullscreen) el.webkitRequestFullscreen();
});
$('play').addEventListener('click', startGame);
new ResizeObserver(layout).observe(stage);
window.addEventListener('orientationchange', layout);
if (window.matchMedia) {
  // device pixel ratio changes (zoom, moving between monitors)
  const watch = () => { const mq = matchMedia(`(resolution: ${window.devicePixelRatio}dppx)`); mq.addEventListener('change', () => { layout(); watch(); }, { once: true }); };
  watch();
}
window.addEventListener('beforeunload', () => { if (worker) worker.terminate(); });

// measurement hook for tools/measure.mjs: presentation-loop frame times over a window
window.__perf = { start() { perf.samples = []; perf.recording = true; }, stop() { perf.recording = false; return perf.samples.slice(); }, info: () => ({ canvas: [canvas.width, canvas.height], scene, dpr: window.devicePixelRatio, ui: { ...ui } }) };
window.__game = { pushInput, log: gameLog, state: () => ({ running, paused, frame: ctrl ? Atomics.load(ctrl, CTRL.FRAME) : 0, audio: { ...audioStats, context: actx ? actx.state : 'none', time: actx ? actx.currentTime : 0 } }) };

syncControls();
layout();
requestAnimationFrame(tick);

// --- cross-origin isolation ---------------------------------------------------------------
// The game thread blocks in Atomics.wait, which needs SharedArrayBuffer and therefore a
// cross-origin isolated page. Where the server does not send the COOP/COEP headers, a service
// worker adds them (coi-sw.js) and the page reloads once.
(async () => {
  if (isolated) { $('play').disabled = false; $('play').textContent = 'Play'; return; }
  if (!window.isSecureContext || !('serviceWorker' in navigator)) {
    $('play').textContent = 'Cannot start';
    statusEl.textContent = 'This page needs HTTPS (or localhost) and a browser with SharedArrayBuffer.';
    return;
  }
  try {
    statusEl.textContent = 'Preparing…';
    const reg = await navigator.serviceWorker.register(baseUrl + 'coi-sw.js', { scope: baseUrl });
    await navigator.serviceWorker.ready;
    if (!sessionStorage.getItem('maisy.coi-reload')) {
      sessionStorage.setItem('maisy.coi-reload', '1');
      if (reg.active && !navigator.serviceWorker.controller) { location.reload(); return; }
      navigator.serviceWorker.addEventListener('controllerchange', () => location.reload());
      setTimeout(() => location.reload(), 1500);
    } else {
      $('play').textContent = 'Cannot start';
      statusEl.textContent = 'Could not enable cross-origin isolation in this browser.';
    }
  } catch (e) {
    $('play').textContent = 'Cannot start';
    statusEl.textContent = 'Service worker failed: ' + e.message;
  }
})();
