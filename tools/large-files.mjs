#!/usr/bin/env node
// data2.mxx (295 MB) is over the 100 MB per-file limit of GitHub. Git holds it in pieces under
// large-files/; this restores it to original-game-decompiled/original/disc/data2.mxx and checks its SHA-256.
//   node tools/large-files.mjs restore | split | verify
import fs from 'node:fs';
import path from 'node:path';
import crypto from 'node:crypto';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const TARGET = path.join(ROOT, 'original-game-decompiled/original/disc/data2.mxx');
const DIR = path.join(ROOT, 'large-files');
const PART = 95 * 1024 * 1024;
const sums = () => Object.fromEntries(fs.readFileSync(path.join(DIR, 'SHA256SUMS'), 'utf8').trim().split('\n').map((l) => l.split(/\s+/).reverse()));
const shaFile = (p) => { const h = crypto.createHash('sha256'); const fd = fs.openSync(p, 'r'); const b = Buffer.alloc(1 << 22); let n; while ((n = fs.readSync(fd, b, 0, b.length)) > 0) h.update(b.subarray(0, n)); fs.closeSync(fd); return h.digest('hex'); };
const cmd = process.argv[2] || 'restore';
if (cmd === 'split') {
  fs.mkdirSync(DIR, { recursive: true });
  const fd = fs.openSync(TARGET, 'r');
  const size = fs.fstatSync(fd).size;
  const lines = [`${shaFile(TARGET)}  data2.mxx`];
  for (let k = 0, off = 0; off < size; k++, off += PART) {
    const b = Buffer.alloc(Math.min(PART, size - off));
    fs.readSync(fd, b, 0, b.length, off);
    const name = `data2.mxx.part-${String(k).padStart(2, '0')}`;
    fs.writeFileSync(path.join(DIR, name), b);
    lines.push(`${crypto.createHash('sha256').update(b).digest('hex')}  ${name}`);
  }
  fs.writeFileSync(path.join(DIR, 'SHA256SUMS'), lines.join('\n') + '\n');
  console.log(lines.join('\n'));
} else {
  const want = sums();
  if (fs.existsSync(TARGET) && shaFile(TARGET) === want['data2.mxx']) { console.log('data2.mxx present and intact'); process.exit(0); }
  if (cmd === 'verify') { console.error('data2.mxx missing or different'); process.exit(1); }
  const parts = Object.keys(want).filter((n) => n.includes('.part-')).sort();
  fs.mkdirSync(path.dirname(TARGET), { recursive: true });
  const out = fs.openSync(TARGET, 'w');
  for (const p of parts) { const b = fs.readFileSync(path.join(DIR, p)); if (crypto.createHash('sha256').update(b).digest('hex') !== want[p]) { console.error('corrupt piece ' + p); process.exit(1); } fs.writeSync(out, b); }
  fs.closeSync(out);
  if (shaFile(TARGET) !== want['data2.mxx']) { console.error('restored file does not match its SHA-256'); process.exit(1); }
  console.log('data2.mxx restored from ' + parts.length + ' pieces');
}
