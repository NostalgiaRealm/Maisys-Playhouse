#!/usr/bin/env node
// Assembles dist/: the page, the host code, the recompiled module and the original data files.
//   node tools/build.mjs [--link]   (--link symlinks the 295 MB data file instead of copying it)
// Run `npm run recompile` first if public/game/maisy.wasm is missing or the recompiler changed.
import fs from 'node:fs';
import path from 'node:path';
import crypto from 'node:crypto';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const DISC = path.join(ROOT, 'original-game-decompiled/original/disc');
const DIST = path.join(ROOT, 'dist');
const link = process.argv.includes('--link');
const cp = (from, to) => { fs.mkdirSync(path.dirname(to), { recursive: true }); fs.copyFileSync(from, to); };
const cpDir = (from, to) => { for (const e of fs.readdirSync(from, { withFileTypes: true })) { const a = path.join(from, e.name), b = path.join(to, e.name); if (e.isDirectory()) cpDir(a, b); else cp(a, b); } };

for (const f of ['maisy.wasm', 'maisy.meta.json', 'maisy.codemap.bin']) {
  if (!fs.existsSync(path.join(ROOT, 'public/game', f))) { console.error(`public/game/${f} is missing: run "npm run recompile" first`); process.exit(1); }
}
fs.mkdirSync(DIST, { recursive: true });
cp(path.join(ROOT, 'public/index.html'), path.join(DIST, 'index.html'));
cp(path.join(ROOT, 'public/coi-sw.js'), path.join(DIST, 'coi-sw.js'));
cpDir(path.join(ROOT, 'public/game'), path.join(DIST, 'game'));
cpDir(path.join(ROOT, 'source/host'), path.join(DIST, 'src/host'));
cpDir(path.join(ROOT, 'source/web'), path.join(DIST, 'src/web'));

// Original data, unmodified. data.mfx is read whole; data2.mxx is read in byte ranges.
cp(path.join(DISC, 'z_data/data.mfx'), path.join(DIST, 'data/data.mfx'));
const big = path.join(DIST, 'data/data2.mxx');
const bigSrc = path.join(DISC, 'data2.mxx');
if (!fs.existsSync(big) || fs.statSync(big).size !== fs.statSync(bigSrc).size) {
  fs.rmSync(big, { force: true });
  if (link) fs.symlinkSync(bigSrc, big); else fs.copyFileSync(bigSrc, big);
}
const size = (p) => fs.statSync(p).size;
const files = [
  { path: 'C:\\MAISY1\\Data.mfx', mode: 'whole', url: 'data/data.mfx', size: size(path.join(DISC, 'z_data/data.mfx')) },
  { path: 'D:\\data2.mxx', mode: 'range', url: 'data/data2.mxx', size: size(bigSrc) },
  // listed by name and size only: the player enumerates mPlugins and "loads" them; their code is in maisy.wasm
  { path: 'C:\\MAISY1\\Maisy.exe', mode: 'listed', size: size(path.join(DISC, 'z_data/Maisy.exe')) },
];
for (const f of fs.readdirSync(path.join(DISC, 'z_data/mPlugins')).sort()) files.push({ path: 'C:\\MAISY1\\mPlugins\\' + f, mode: 'listed', size: size(path.join(DISC, 'z_data/mPlugins', f)) });
const sha = (p) => crypto.createHash('sha256').update(fs.readFileSync(p)).digest('hex');
fs.writeFileSync(path.join(DIST, 'game/files.json'), JSON.stringify({ files, built: new Date().toISOString(), wasmSha256: sha(path.join(ROOT, 'public/game/maisy.wasm')) }, null, 1));
// the title's own help file, as text (original-game-decompiled/docs/original-documentation)
const help = path.join(ROOT, 'original-game-decompiled/docs/original-documentation/MaisyPH.hlp.txt');
if (fs.existsSync(help)) fs.writeFileSync(path.join(DIST, 'game/help.txt'), fs.readFileSync(help, 'utf8').split('\n').filter((l) => !l.startsWith(';')).join('\n').replace(/\n{3,}/g, '\n\n').trim() + '\n');
let total = 0;
const walk = (d) => { for (const e of fs.readdirSync(d, { withFileTypes: true })) { const p = path.join(d, e.name); if (e.isDirectory()) walk(p); else total += fs.statSync(p).size; } };
walk(DIST);
console.log(`dist/ ready: ${(total / 1048576).toFixed(1)} MB`);
