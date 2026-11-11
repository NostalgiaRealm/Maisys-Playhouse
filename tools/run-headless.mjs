#!/usr/bin/env node
// Runs the recompiled player without a browser, on a virtual clock, with scripted input.
// Uses the same host code as the browser worker. For development and smoke checks only.
//
//   node tools/run-headless.mjs [--seconds N] [--shots t1,t2,...] [--script file.json] [--trace api,msg,win,files,blt,audio,palette]
//     --script: [{"t": ms, "type": "move|down|up|keydown|keyup", "x":..,"y":..,"vk":..}, ...]
//     --out dir: where screenshots (PNG) and audio.wav go (default tools/out)
import fs from 'node:fs';
import path from 'node:path';
import zlib from 'node:zlib';
import { fileURLToPath } from 'node:url';
import { createGame } from '../source/host/runtime.js';
import { RangeReader } from '../source/host/vfs.js';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const DISC = path.join(ROOT, 'original-game-decompiled/original/disc');
const args = process.argv.slice(2);
const opt = (name, def) => { const k = args.indexOf('--' + name); return k >= 0 ? args[k + 1] : def; };
const seconds = Number(opt('seconds', 20));
const shots = String(opt('shots', '')).split(',').filter(Boolean).map(Number);
const outDir = path.resolve(opt('out', path.join(ROOT, 'tools/out')));
const trace = new Set(String(opt('trace', '')).split(',').filter(Boolean));
const script = opt('script', null) ? JSON.parse(fs.readFileSync(opt('script'), 'utf8')) : [];
const clicks = String(opt('clicks', '')).split(';').filter(Boolean).map((s) => s.split(',').map(Number));   // t,x,y
for (const [t, x, y] of clicks) script.push({ t: t - 60, type: 'move', x, y }, { t, type: 'down', x, y, button: 0 }, { t: t + 90, type: 'up', x, y, button: 0 });
script.sort((a, b) => a.t - b.t);
fs.mkdirSync(outDir, { recursive: true });

function png(w, h, rgba) {
  const crcTable = new Int32Array(256).map((_, n) => { let c = n; for (let k = 0; k < 8; k++) c = c & 1 ? 0xEDB88320 ^ (c >>> 1) : c >>> 1; return c; });
  const crc = (buf) => { let c = -1; for (const b of buf) c = crcTable[(c ^ b) & 255] ^ (c >>> 8); return (c ^ -1) >>> 0; };
  const chunk = (type, data) => { const len = Buffer.alloc(4); len.writeUInt32BE(data.length); const td = Buffer.concat([Buffer.from(type), data]); const c = Buffer.alloc(4); c.writeUInt32BE(crc(td)); return Buffer.concat([len, td, c]); };
  const raw = Buffer.alloc((w * 4 + 1) * h);
  for (let y = 0; y < h; y++) { raw[y * (w * 4 + 1)] = 0; Buffer.from(rgba.buffer, rgba.byteOffset + y * w * 4, w * 4).copy(raw, y * (w * 4 + 1) + 1); }
  const ihdr = Buffer.alloc(13); ihdr.writeUInt32BE(w, 0); ihdr.writeUInt32BE(h, 4); ihdr[8] = 8; ihdr[9] = 6;
  return Buffer.concat([Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]), chunk('IHDR', ihdr), chunk('IDAT', zlib.deflateSync(raw)), chunk('IEND', Buffer.alloc(0))]);
}

const W = 640, H = 480;
const pixels = new Uint8Array(W * H);
const palette = new Uint32Array(256);
let vt = 0;                 // virtual milliseconds
let presents = 0, dirtyCount = 0;
let scriptPos = 0;
let nextShot = 0;
const audioChunks = [];
let audioFmt = null;
const stats = { audioBytes: 0, audioSubmits: 0, messageBoxes: [], cursor: null };

const saveShot = (label) => {
  const rgba = new Uint8Array(W * H * 4);
  for (let k = 0; k < W * H; k++) { const c = palette[pixels[k]]; rgba[k * 4] = c >> 16; rgba[k * 4 + 1] = (c >> 8) & 255; rgba[k * 4 + 2] = c & 255; rgba[k * 4 + 3] = 255; }
  const f = path.join(outDir, `shot-${label}.png`);
  fs.writeFileSync(f, png(W, H, rgba));
  const used = new Set(pixels).size;
  console.log(`[shot] ${f} at ${vt.toFixed(0)} ms, ${used} distinct indices, presents=${presents}`);
};
class Stop extends Error {}
const advance = (ms) => {
  vt += ms;
  while (nextShot < shots.length && vt >= shots[nextShot] * 1000) { saveShot(String(shots[nextShot]).replace('.', '_')); nextShot++; }
  if (vt >= seconds * 1000) throw new Stop();
};
const nextEventTime = () => (scriptPos < script.length ? script[scriptPos].t : Infinity);

// a crude fixed-cell text rasteriser: the real one (browser) uses canvas fonts
const text = {
  metrics: (f) => { const h = f.height || 16; const cell = f.cell ? h : Math.round(h * 1.15); return { height: cell, ascent: Math.round(cell * 0.8), descent: cell - Math.round(cell * 0.8), internalLeading: cell - h > 0 ? cell - h : 0, aveWidth: Math.round(h * 0.5), maxWidth: h }; },
  width: (f, s) => s.length * Math.round((f.height || 16) * 0.5),
  raster: (f, s) => {
    const m2 = text.metrics(f); const cw = Math.round((f.height || 16) * 0.5); const w = Math.max(1, s.length * cw);
    const alpha = new Uint8Array(w * m2.height);
    for (let k = 0; k < s.length; k++) if (s[k] !== ' ') for (let y = 2; y < m2.height - 2; y++) for (let x = 1; x < cw - 1; x++) if (((x + y + s.charCodeAt(k)) % 3) === 0) alpha[y * w + k * cw + x] = 255;
    return { w, h: m2.height, alpha };
  },
};

const fileReader = (p) => {
  const fd = fs.openSync(p, 'r');
  const size = fs.fstatSync(fd).size;
  return { size, reader: new RangeReader(size, (off, len) => { const b = Buffer.alloc(len); fs.readSync(fd, b, 0, len, off); return new Uint8Array(b.buffer, b.byteOffset, len); }) };
};
const settingsFile = path.join(outDir, 'settings.json');
const settings = new Map(opt('fresh', null) !== null || !fs.existsSync(settingsFile) ? [] : JSON.parse(fs.readFileSync(settingsFile, 'utf8')));

const platform = {
  log: (s) => console.log(`[${(vt / 1000).toFixed(3)}] ${s}`),
  nowMs: () => { vt += 0.002; return vt; },
  wallClockMs: () => Date.UTC(1999, 6, 16, 12, 0, 0) + vt,
  sleep: (ms) => advance(Math.max(ms, 1)),
  waitForInput: (ms) => advance(Math.max(0.5, Math.min(ms, nextEventTime() - vt))),
  idle: () => advance(1),
  wake: () => {},
  screen: { width: W, height: H, pixels, palette, markDirty: () => { dirtyCount++; }, present: () => { presents++; }, paletteChanged: () => { presents++; } },
  input: {
    poll: () => {
      if (scriptPos >= script.length || script[scriptPos].t > vt) return null;
      const out = [];
      while (scriptPos < script.length && script[scriptPos].t <= vt) { const e = script[scriptPos++]; console.log(`[${(vt / 1000).toFixed(3)}] input ${JSON.stringify(e)}`); out.push(e); }
      return out;
    },
  },
  audio: {
    open: (h, fmt) => { audioFmt = fmt; },
    submit: (h, pcm) => { stats.audioBytes += pcm.length; stats.audioSubmits++; audioChunks.push(Buffer.from(pcm)); },
    reset: () => {}, close: () => {}, setVolume: () => {},
  },
  text,
  settings,
  saveSettings: () => fs.writeFileSync(settingsFile, JSON.stringify([...settings])),
  persistFile: (p, data) => console.log(`[persist] ${p} ${data ? data.length + ' bytes' : 'deleted'}`),
  messageBox: (t, c, type) => { console.log(`[MessageBox] ${c}: ${t} (type ${type})`); stats.messageBoxes.push(t); return 1; },
  beep: () => {},
  showHelp: (f) => console.log('[help] ' + f),
  canPrint: () => true,
  printPage: (s, name, n) => console.log(`[print] page ${n} of "${name}" ${s.w}x${s.h}`),
  cursorChanged: (c, visible) => { stats.cursor = c ? (c.css || c.key) : null; if (trace.has('win')) console.log(`[cursor] ${stats.cursor} visible=${visible}`); },
};

const meta = JSON.parse(fs.readFileSync(path.join(ROOT, 'public/game/maisy.meta.json'), 'utf8'));
const wasm = await WebAssembly.compile(fs.readFileSync(path.join(ROOT, 'public/game/maisy.wasm')));
const codeMap = new Uint8Array(fs.readFileSync(path.join(ROOT, 'public/game/maisy.codemap.bin')));
const files = [
  { path: 'C:\\MAISY1\\Maisy.exe', ...fileReader(path.join(DISC, 'z_data/Maisy.exe')) },
  { path: 'C:\\MAISY1\\Data.mfx', ...fileReader(path.join(DISC, 'z_data/data.mfx')) },
  { path: 'D:\\data2.mxx', ...fileReader(path.join(DISC, 'data2.mxx')) },
  { path: 'D:\\z_data\\Data.mfx', ...fileReader(path.join(DISC, 'z_data/data.mfx')) },
  { path: 'D:\\z_data\\Maisy.exe', ...fileReader(path.join(DISC, 'z_data/Maisy.exe')) },
];
for (const f of fs.readdirSync(path.join(DISC, 'z_data/mPlugins'))) files.push({ path: 'C:\\MAISY1\\mPlugins\\' + f, ...fileReader(path.join(DISC, 'z_data/mPlugins', f)) });

const game = await createGame({ wasm, meta, codeMap, platform, files });
const { m, host } = game;
host.traceFiles = trace.has('files');
host.traceWin = trace.has('win');
host.traceMsg = trace.has('msg');
host.traceBlt = trace.has('blt');
host.traceAudio = trace.has('audio');
host.tracePalette = trace.has('palette');
if (trace.has('api')) m.traceApi = (id) => console.log(`  api ${m.thunkNames[id]}`);
if (host.unbound.length) console.log('unbound imports: ' + host.unbound.join(' '));
m.onTrace = (addr, esp, eax, ecx, edx) => console.log(`  trace ${addr.toString(16)} esp=${esp.toString(16)} eax=${eax.toString(16)} ecx=${ecx.toString(16)} edx=${edx.toString(16)} ret=${m.u32[esp >> 2].toString(16)} args=${[1, 2, 3, 4].map((k) => m.u32[(esp + k * 4) >> 2].toString(16)).join(',')}`);
const apiCounts = new Map();
if (trace.has('count')) m.traceApi = (id) => apiCounts.set(m.thunkNames[id], (apiCounts.get(m.thunkNames[id]) || 0) + 1);

const t0 = Date.now();
let exit = null;
try {
  exit = game.run();
  console.log('game exited with code', exit);
} catch (e) {
  if (e instanceof Stop) console.log(`stopped after ${seconds} virtual seconds`);
  else {
    console.log('ERROR: ' + (e && e.stack ? e.stack.split('\n').slice(0, 40).join('\n') : e));
    console.log('last indirect target g_a=' + (m.exports.g_a.value >>> 0).toString(16) + ' esp=' + (m.esp >>> 0).toString(16));
  }
}
saveShot('final');
if (audioChunks.length && audioFmt) {
  const data = Buffer.concat(audioChunks);
  const hdr = Buffer.alloc(44);
  hdr.write('RIFF', 0); hdr.writeUInt32LE(36 + data.length, 4); hdr.write('WAVEfmt ', 8); hdr.writeUInt32LE(16, 16); hdr.writeUInt16LE(1, 20);
  hdr.writeUInt16LE(audioFmt.channels, 22); hdr.writeUInt32LE(audioFmt.rate, 24); hdr.writeUInt32LE(audioFmt.rate * audioFmt.align, 28); hdr.writeUInt16LE(audioFmt.align, 32); hdr.writeUInt16LE(audioFmt.bits, 34);
  hdr.write('data', 36); hdr.writeUInt32LE(data.length, 40);
  fs.writeFileSync(path.join(outDir, 'audio.wav'), Buffer.concat([hdr, data]));
}
console.log(`wall ${(Date.now() - t0) / 1000}s, virtual ${(vt / 1000).toFixed(2)}s, presents ${presents}, audio ${stats.audioSubmits} buffers / ${stats.audioBytes} bytes, heap in use ${(host.heap.bytesInUse / 1048576).toFixed(1)} MB, missing libraries: ${[...host.missingLibraries].join(' ') || 'none'}`);
if (apiCounts.size) console.log([...apiCounts].sort((a, b) => b[1] - a[1]).slice(0, 60).map(([k, v]) => `${v} ${k}`).join('\n'));
