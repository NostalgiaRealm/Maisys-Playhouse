# Maisy's Playhouse (1999) in the browser

The original Windows program of the 1999 CD-ROM, recompiled from x86 machine code to WebAssembly, running the original game data unmodified.

- Runtime approach: **static x86-to-Wasm recompilation of the original mTropolis 2.0 player `Maisy.exe` and its six plug-ins** (`docs/recompiler.md`). No interpreter fallback, no hand-made activities.
- Status: boots, plays through the intro into the house and the Messy Room activity with working clicks and sound output; quits through the credits and writes its save. Every activity, level and room has been run with scripted random input without a stop, and printing, saving, dialogs and exceptions were exercised; what was and was not checked is in `docs/feature-parity.md` and `docs/validation.md`.
- Source: <https://github.com/NostalgiaRealm/Maisys-Playhouse> and <https://gitlab.com/Nostalgia_Realm/Maisys-Playhouse>. Live at <https://games.nostalgiarealm.com/maisysplayhouse/> (`docs/hosting.md`).

## Requirements

- Node.js 20+ (24 used)
- Python 3 with `capstone` for the recompiler (here: `~/.local/share/reverse-engineering/python-analysis/bin/python`)
- `7z` to extract the disc image
- For the decompilation phase only: Ghidra 12.1.4 with a JDK 21+, Python with `pefile`
- For the browser smoke check only: Playwright (taken from `../A2 Racer 4/node_modules` or `PLAYWRIGHT_DIR`)

## Prepare

The disc image is `Original/maisycd/MAISY_CD.iso` (never modified). Extract it into the working copy that both the analysis and the port read:

```bash
7z x -y -o"original-game-decompiled/original/disc" Original/maisycd/MAISY_CD.iso
```

From a clone of the repository there is no disc image; `data2.mxx` is stored in pieces (GitHub's 100 MB limit) and is put back with

```bash
npm run restore-data
```

The repository leaves out the ISO, the installer and autorun programs and the promotional catalogue (`.gitignore` says why); nothing the port needs.

The decompilation package (`original-game-decompiled/`) is complete and checked in; to rebuild it see its own `README.md`. The port needs from it only `original/disc/` and `decompiled/*/functions.csv`.

## Build

```bash
npm run recompile
```

writes `public/game/maisy.wasm`, `maisy.meta.json` and `maisy.codemap.bin` (about 10 s).

```bash
node tools/build.mjs --link
```

assembles `dist/` (page, host code, module, `data/data.mfx`, `data/data2.mxx`). `--link` symlinks the 295 MB data file instead of copying it; leave it out for a self-contained folder.

## Run

```bash
node tools/serve.mjs --port 8377
```

then open <http://localhost:8377/> and press Play. The server sends byte ranges and the cross-origin isolation headers. It does not run from `file://`.

Headless, without a browser (virtual clock, scripted clicks, screenshots in `tools/out/`):

```bash
node tools/run-headless.mjs --seconds 95 --clicks "22000,320,330;33000,45,45;41000,320,245;86000,85,395" --shots 30,50,94
```

Browser smoke check:

```bash
node tools/browser-check.mjs
```

```bash
node tools/browser-check.mjs --mobile --size 800x360 --dpr 2
```

## Controls

Mouse or touch as in the original. Space skips where the title allows it. Toolbar: ☝ touch hover mode, 🔊 mute, ⛶ full screen, ⚙ settings (resolution, render scale 25-200 %, sharp/smooth scaling, volume, controller speed, help, erase saved game). Controller: stick or d-pad moves a pointer, A clicks, B is Space.

## Documentation

| File | Content |
|---|---|
| `PLAN.md` | progress, blockers, next actions |
| `docs/LLM_GUIDE.md` | folder map, architecture, how to continue |
| `docs/recompiler.md` | translation pipeline, module layout, replacements, unsupported paths |
| `docs/original-behavior.md` | evidence-linked findings about the original |
| `docs/feature-parity.md` | full content and feature inventory, implemented vs verified |
| `docs/validation.md` | the one checked activity and what was and was not checked |
| `docs/intentional-differences.md` | browser and mobile adaptations |
| `docs/hosting.md` | server requirements and publishing |
| `original-game-decompiled/README.md` | the decompilation package |

## Rights

The disc's programs and data belong to their publishers (Sound Source Interactive, Simon & Schuster Interactive, mFactory/Quark for the player). This repository's own code is the recompiler and host layer; the recompiler core derives from the A2 Racer 4 project. ScummVM's mTropolis source (`reference/`) was read for file-format knowledge by the data dumper only.
