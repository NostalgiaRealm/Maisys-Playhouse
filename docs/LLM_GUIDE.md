# LLM guide: Maisy's Playhouse browser port

Read this before changing anything. `PLAN.md` has the current state and next actions.

## What this project is

A browser port of the 1999 CD-ROM *Maisy's Playhouse* made by **statically recompiling the original x86 runtime to WebAssembly**. The original program is the stock mTropolis 2.0 player (`Maisy.exe`) with six plug-in DLLs; the game itself is authored data (`data.mfx`, `data2.mxx`) that the player interprets. The port runs that player unchanged in logic and gives it the Windows services it asks for. No activity was re-created by hand, and there is no interpreter fallback.

## Folder map

| Path | What | Edit? |
|---|---|---|
| `Original/` | The disc image as delivered | **never** |
| `original-game-decompiled/` | Phase 1: full static analysis (own README, LLM_GUIDE, COVERAGE_REPORT). `original/disc/` is the extracted disc and is the port's input | analysis only; never the inputs |
| `reference/scummvm/` | Sparse checkout of ScummVM's mTropolis engine (GPL), used only as format documentation by the data dumper. No code from it is in the port | no |
| `tools/recomp/` | The recompiler (maintained source, Python) | yes |
| `source/host/` | Host layer shared by browser and Node: `machine.js`, `runtime.js`, `kernel32.js`, `user32.js`, `gdi32.js`, `winmm.js`, `vfs.js` | yes |
| `source/web/` | Browser side: `worker.js` (game thread), `main.js` (page), `style.css` | yes |
| `public/` | `index.html`, `coi-sw.js`, and **generated** `game/maisy.wasm`, `maisy.meta.json`, `maisy.codemap.bin` | html/sw yes; `game/` is build output |
| `dist/` | **Generated** site (`tools/build.mjs`) | no |
| `tools/` | `run-headless.mjs`, `browser-check.mjs`, `serve.mjs`, `build.mjs`, deploy scripts; `tools/out/` is scratch output | yes |
| `docs/` | This guide, `recompiler.md`, `original-behavior.md`, `feature-parity.md`, `validation.md`, `intentional-differences.md`, `hosting.md`, the original request and feasibility notes | yes |

## Original modules and their roles

| Module | Role |
|---|---|
| `Maisy.exe` | mTropolis player: MFC MDI app; loads plug-ins, parses the project, runs scenes, composes into 8-bit DIB sections, mixes sound to waveOut |
| `BASIC.X32` | standard modifiers (Miniscript, messengers, variables, drag, collision, motion, transitions, save/restore…) |
| `EXTRAS.R32` | object-reference and list variables, cursor modifier, media cue, MIDI, print, navigation… (used: `ObjRefP`, `CursorMod`, `ListMod`, `MediaCue`) |
| `EXPRMNTL.R32` | `SysInfo` (used), `MenuSrv`, `Quit` |
| `Bitmap.r32` | `hlBitmapVariable`, `hlCaptureBitmap`, `hlPrintBitmap` (used by Gingerbread and Coloring) and four unused modifiers |
| `CURSORS.C32` | cursor resources |
| `NETWORK.R32` | network modifiers; loaded by the player like every file in `mPlugins`, not used by the content |

## Runtime architecture

```
page (main.js)                               worker (worker.js)
  canvas  <- shared 640x480 index buffer  <-  gdi32.js   <- BitBlt etc. <-+
           <- shared 256-entry palette    <-                              |
  Web Audio <- postMessage(PCM)           <-  winmm.js   <- waveOutWrite <-+-- maisy.wasm
  pointer/keys/touch/pad -> shared ring   ->  user32.js  -> messages ---->+   (Maisy.exe + plug-ins,
  localStorage <- postMessage             <-  kernel32.js <- files, ini, registry    original code)
                                              vfs.js: data.mfx whole, data2.mxx by HTTP ranges
```

- The worker calls the original entry point once and stays inside it. The original message loop runs as is; `GetMessageA`, `Sleep` and idle `PeekMessageA` block with `Atomics.wait`. That needs SharedArrayBuffer, hence cross-origin isolation (headers or `coi-sw.js`).
- Each import is a host thunk bound by name with `m.api('DLL!Name', nargs, fn)`. **`nargs` must be the real stdcall argument count**: a wrong count corrupts the stack silently. `wsprintfA` is cdecl and bound raw.
- An unbound import throws "Host function not implemented" when called. All 486 imports are currently bound; some to honest "not available" answers (see `docs/recompiler.md`).
- The display is deliberately a 640×480 **8-bit palette device**. `gdi32.js` implements logical/system palette realization; the screen surface stores palette indices.
- Windows have no non-client area, except a 1-pixel border on MDI children (`user32.js`, `inset`). See `docs/intentional-differences.md` before touching window geometry.

## Source and generated boundaries

Never hand-edit `public/game/*` or `dist/*`. After changing `tools/recomp/*`: `npm run recompile`. After changing anything served: `node tools/build.mjs --link`.

## How to work on it

1. Reproduce in Node first: `node tools/run-headless.mjs --seconds 60 --clicks "22000,320,330;33000,45,45;41000,320,245" --shots 30,50 --trace win,files`. Time is virtual, so a minute takes about a second. Screenshots land in `tools/out/`.
2. A trap's stack names original functions with their original addresses; look them up with `python3 original-game-decompiled/scripts/lookup.py <module> <address>`. For plug-ins the Wasm name carries the preferred-base address; a raw address from `g_a` or a log is in this build's layout (subtract the module's base, add its preferred base; both are in `maisy.meta.json`).
3. For a missing Windows behaviour, find what the original code expects from the decompilation, implement it in `source/host/`, and record the evidence (module + address) in `docs/original-behavior.md`. Do not return success from an API you have not implemented.
4. Browser check: `node tools/serve.mjs --port 8377`, then `node tools/browser-check.mjs` (uses Playwright from the A2 Racer 4 project's `node_modules`, or `PLAYWRIGHT_DIR`).
5. Keep "implemented" and "verified" apart in `docs/feature-parity.md`, and do not describe anything as matching the original without a reference run.

## Likely next problems

- A scene that needs something unimplemented will stop with a clear message in the page's start card (`window.__crash`) and in the worker log (`?log=1`). Candidates: C++ exceptions, player dialogs, a thread, an unusual GDI call path (pattern brushes, `StretchBlt`, palette animation), the Bitmap plug-in's print path.
- Text: fonts are approximations; if a text element matters, compare with the authored font in `authored-content/structure/`.
- Audio/animation sync has not been judged by a person.
