# Validation

Scope, by the project's instructions: **one representative activity**, a brief visual/audio/input smoke check, no full playthrough, no browser/device matrix, no separate review pass. Everything outside this page is unverified (`docs/feature-parity.md`).

## The activity

**Messy Room, level 1, playroom** (`MES Messy Room LV1 PR Scene`, stream 45 of `data2.mxx`): the smallest complete activity, with delta-coded character animation, narration, sound effects, the shared-scene buttons and click interaction with the room's items. Chosen from the parsed data (`original-game-decompiled/authored-content/CONTENT_OVERVIEW.md`, "Recommended representative activity").

Path, three clicks from a cold start (scene coordinates, 640×480):

1. wait for the intro (logos, title) to reach the house, about 17 s
2. click the front door (320, 330) → Foyer
3. click the Easel button (45, 45) → activity menu
4. click the Messy Room button (320, 245) → load scene → activity
5. after the introduction animation and narration (about 45 s), click the horse (85, 395) and the guitar (350, 372)
6. click the House button (45, 45) → back to the Foyer

## Checks made (2026-11-11)

| Check | How | Result |
|---|---|---|
| Recompiled player boots, loads all six plug-ins and both data files | `node tools/run-headless.mjs --seconds 95 --clicks "22000,320,330;33000,45,45;41000,320,245;78000,350,372;86000,85,395"` (Node 24, virtual clock) | ran 95 virtual seconds without error; screenshots in `tools/out/`; no unbound import |
| Scenes render: publisher splash, title, house, Foyer, Easel menu, activity intro animation, activity room | screenshots from the headless run and from Chromium | pictures look complete and correctly coloured; judged by eye, not compared with the original |
| A real click goes through the original logic | door, Easel button, activity button, horse, guitar, House button | each had the authored effect (scene changes; horse removed; guitar moved to the shelf; return to the Foyer) |
| Sound is produced | headless: 169 waveOut buffers (22,050 Hz 8-bit mono) written to `tools/out/audio.wav`, non-silent; Chromium: 197 buffers scheduled on a running AudioContext | **PCM path works; nobody listened to it**. Synchronisation with animation was not assessed |
| Yields and resumes in the browser | Chromium 1208 (Playwright headless shell), page stays responsive, input processed, 110 s session | no hang, no crash |
| Desktop layout | Chromium, 1024×768, DPR 1, Auto, 100 % | canvas 1024×768, scene 1024×768 |
| Mobile layout and touch | Chromium mobile emulation (touch, `isMobile`), 800×360 CSS px, DPR 2, Auto, 100 %: same path with taps | canvas 1600×720, scene 960×720 pillar-boxed, toolbar on the right bar; taps navigated and put the horse and guitar away |
| Service-worker isolation fallback | `tools/serve.mjs --no-coi`, Chromium | page became cross-origin isolated after one reload and the game started; byte-range reads worked |
| Quit path (outside the activity, checked once because it ends the program) | headless: Panda → quit → yes | `MAISY1.SAV` (50 bytes) written and handed to persistence; credits; process exit code 0 |

Commands for the browser check: `node tools/serve.mjs --port 8377` and `node tools/browser-check.mjs` (desktop) or `node tools/browser-check.mjs --mobile --size 800x360 --dpr 2`.

## Performance

**Not measured.** The request asked for at least 30 FPS at 800×360 CSS px, DPR 2, 8× CPU throttle, with a baseline and optimisation runs. On 2026-11-11 the owner cancelled that step during the work ("Do NOT measure and optimize to 30 FPS target, it won't need optimization"). So there is no baseline, no before/after figure and no claim that the target is met.

What can be said without a measurement:

- The page's presentation loop converts one 640×480 indexed frame per changed frame and draws it scaled; it does no game work.
- The game thread is separate; in Node the checked 95-second path executes in about 1.1 s of wall time on the development PC, i.e. the recompiled code has large headroom there. That is not a mobile figure.
- `tools/browser-check.mjs --throttle 8` applies Chromium's CPU throttle and `window.__perf.start()/stop()` records presentation frame times, should a measurement be wanted later. CPU throttling is an emulated profile, not proof for any real phone.

## Known limitations of this validation

- No reference run of the original on Windows, so nothing here establishes parity; it establishes that the original code runs and behaves plausibly.
- One activity, one level, one room variant. 47 of 65 scenes were never entered.
- Audio was not heard; text rendering, dragging, keyboard, controller, hover mode, printing, pause/resume, save restore, resolution presets and render scales other than 100 % were not exercised.
- Headless Chromium on Linux only. No Firefox, Safari, Android or iOS device.
