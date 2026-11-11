#!/usr/bin/env node
// Brief browser smoke check: opens the game in headless Chromium, presses Play, replays a short
// scripted path into the Messy Room activity and saves screenshots. Not a test suite.
//   node tools/browser-check.mjs [--url http://localhost:8377/] [--size 1024x768] [--dpr 1] [--mobile] [--out tools/out/browser]
//        [--steps "wait:16000;click:320,330;wait:9000;shot:foyer;..."] [--throttle 1]
// Needs Playwright. It is taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import { createRequire } from 'node:module';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const require = createRequire(path.join(process.env.PLAYWRIGHT_DIR || path.resolve(ROOT, '../A2 Racer 4/node_modules'), 'x.js'));
const { chromium } = require('playwright');
const opt = (name, def) => { const k = process.argv.indexOf('--' + name); return k < 0 ? def : process.argv[k + 1]; };
const [w, h] = opt('size', '1024x768').split('x').map(Number);
const mobile = process.argv.includes('--mobile');
const dpr = Number(opt('dpr', mobile ? 2 : 1));
const outDir = path.resolve(opt('out', path.join(ROOT, 'tools/out/browser')));
const url = opt('url', 'http://localhost:8377/');
const DEFAULT_STEPS = 'wait:17000;shot:1-house;click:320,330;wait:9000;shot:2-foyer;click:45,45;wait:6000;shot:3-easel;click:320,245;wait:30000;shot:4-messy-room;click:85,395;wait:7000;shot:5-after-click;state';
const steps = opt('steps', DEFAULT_STEPS).split(';').filter(Boolean);
fs.mkdirSync(outDir, { recursive: true });

const browser = await chromium.launch({ headless: true, args: ['--autoplay-policy=no-user-gesture-required'] });
const context = await browser.newContext({ viewport: { width: w, height: h }, deviceScaleFactor: dpr, isMobile: mobile, hasTouch: mobile });
const page = await context.newPage();
page.on('console', (m) => { const t = m.text(); if (m.type() === 'error' || process.argv.includes('--verbose')) console.log('[' + m.type() + ']', t.slice(0, 300)); });
page.on('pageerror', (e) => console.log('[pageerror]', e.message));
const throttle = Number(opt('throttle', 1));
if (throttle > 1) { const cdp = await context.newCDPSession(page); await cdp.send('Emulation.setCPUThrottlingRate', { rate: throttle }); }
await page.goto(url + (url.includes('?') ? '&' : '?') + 'log=1');
await page.waitForFunction(() => document.getElementById('play') && !document.getElementById('play').disabled, null, { timeout: 30000 });
console.log('isolated:', await page.evaluate(() => self.crossOriginIsolated), 'viewport', w + 'x' + h, 'dpr', dpr, mobile ? 'mobile/touch' : 'desktop');
await page.click('#play');
await page.waitForFunction(() => window.__game.state().running, null, { timeout: 60000 });
const scenePoint = async (x, y) => page.evaluate(([sx, sy]) => {
  const c = document.getElementById('screen').getBoundingClientRect();
  const i = window.__perf.info();
  const k = c.width / i.canvas[0];
  return [c.left + (i.scene.x + (sx + 0.5) * i.scene.w / 640) * k, c.top + (i.scene.y + (sy + 0.5) * i.scene.h / 480) * k];
}, [x, y]);
for (const step of steps) {
  const [cmd, arg = ''] = step.split(':');
  if (cmd === 'wait') await page.waitForTimeout(Number(arg));
  else if (cmd === 'shot') { const f = path.join(outDir, arg + '.png'); await page.screenshot({ path: f }); console.log('shot', f); }
  else if (cmd === 'click') {
    const [x, y] = arg.split(',').map(Number);
    const [px, py] = await scenePoint(x, y);
    if (mobile) await page.touchscreen.tap(px, py);
    else { await page.mouse.move(px, py); await page.waitForTimeout(80); await page.mouse.down(); await page.waitForTimeout(90); await page.mouse.up(); }
    console.log('click scene', x, y, '-> page', px.toFixed(0), py.toFixed(0));
  } else if (cmd === 'key') { await page.keyboard.press(arg); console.log('key', arg); }
  else if (cmd === 'eval') console.log('eval:', JSON.stringify(await page.evaluate(arg)));
  else if (cmd === 'state') {
    console.log('state:', JSON.stringify(await page.evaluate(() => ({ ...window.__game.state(), crash: window.__crash || null, info: window.__perf.info(), status: document.getElementById('status').textContent, log: window.__game.log.filter((l) => !/IsTNT|Affinity|IsProcessorFeature/.test(l)).slice(-8) }))));
  }
}
await browser.close();
