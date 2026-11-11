# The Maisy recompiler

`tools/recomp/` turns the original x86 player `Maisy.exe` and its six plug-ins into one WebAssembly module, `public/game/maisy.wasm`, plus `maisy.meta.json` and `maisy.codemap.bin`. Run it with `npm run recompile` (about 10 seconds). It needs Python 3 with `capstone`; on this machine that is `~/.local/share/reverse-engineering/python-analysis/bin/python`.

This is static binary translation of the original machine code. It is not compilation of decompiler output, and it is not an interpreter for the title's data: the mTropolis player itself runs, unchanged in logic, and interprets `data.mfx`/`data2.mxx` as it always did.

The instruction lifter, control-flow structuring, x87 model and Wasm encoder are the ones written for A2 Racer 4 (`../A2 Racer 4/tools/recomp`, copied on 2026-11-11). What is new for Maisy is listed under "Changes from the A2 recompiler". No A2 address, patch, hook or timing replacement is used.

## Inputs (never modified)

| Module | File (under `original-game-decompiled/original/disc/`) | SHA-256 | Preferred base | Base in this build |
|---|---|---|---|---|
| MAISY | `z_data/Maisy.exe` | `a72b353d62932da2f273c495c6df4fc7bb5fdb1de035984bd446951fe218c5b0` | 0x00400000 | 0x00400000 |
| BASIC | `z_data/mPlugins/BASIC.X32` | `d52dda21c41daaf8…` | 0x11000000 | 0x00600000 |
| BITMAP | `z_data/mPlugins/Bitmap.r32` | `9492053f007a9522…` | 0x10000000 | 0x00640000 |
| CURSORS | `z_data/mPlugins/CURSORS.C32` | `201fb19b742d2955…` | 0x15000000 | 0x00660000 |
| EXPRMNTL | `z_data/mPlugins/EXPRMNTL.R32` | `d1f76dadc0c3ca30…` | 0x13000000 | 0x00680000 |
| EXTRAS | `z_data/mPlugins/EXTRAS.R32` | `2a4be198cd1c02fc…` | 0x12000000 | 0x00690000 |
| NETWORK | `z_data/mPlugins/NETWORK.R32` | `f6c446af63508688…` | 0x14000000 | 0x006D0000 |

Full hashes: `original-game-decompiled/inventory/modules.csv` and `maisy.meta.json` (`modules[].sha256`). Function inventories: `original-game-decompiled/decompiled/<id>/functions.csv` (Ghidra).

## Pipeline

| File | Purpose |
|---|---|
| `recompile.py` | PE loading and relocation (`Image`), function discovery, control-flow graphs, x87 depth and flag analysis |
| `lift.py` | Instruction lifting and structured control flow |
| `wasmgen.py` | WebAssembly binary encoder |
| `replacements.py` | The C-runtime helpers that are not lifted, found by byte signature in every module |
| `build.py` | Module list, merged function inventory, emits the module, metadata and `out/report.json` |

Current build: 9,938 functions discovered (439,819 instructions), 9,850 lifted, 88 not lifted (all inside Maisy.exe's C-runtime transcendental-math internals at 0x00496D50-0x0049921C, unreachable once their entry points map to `Math`; they trap if called). 20 irreducible functions use a dispatcher loop. Output 7.8 MB.

## Model

**Memory.** One 192 MiB linear memory holding every module at a fixed address, so absolute addresses and struct offsets stay valid. Layout: pop table 0x10000, host scratch from 0x20000, stack 0x100000-0x3E0000, thread block 0x3E8000, host thunk addresses from 0x3F0000 (4,096 ids), player image 0x400000, plug-ins from 0x600000, code map 0xA00000, heap from 0x1800000. Code sections are not loaded, except the index tables switches read.

**Module layout and relocation (the address-space problem).** The plug-ins' preferred bases (0x10000000-0x15000000) lie far outside a compact memory. Each plug-in is therefore loaded at the next free 64 KiB boundary after the previous module and relocated with its own `.reloc` table, which is what the Windows loader does when a preferred base is unavailable. All seven modules have relocation data; only type-3 (HIGHLOW) entries occur. The code map (a u16 function-table index per code byte) then covers one dense range, 0x3F0000-0x6FF000, instead of gigabytes. `maisy.meta.json` records both bases so an address in a trap maps back: original VA = address - base + preferredBase. Function names in the Wasm name section carry the original address (`BASIC_FUN_11004200_11004200`).

**Registers, flags, x87, control flow, calls.** As in the A2 recompiler: each x86 function is a Wasm function `(esp, eax, ecx, edx) -> (esp, eax)`; ebx/ebp/esi/edi are locals (1,390 functions that read one of them before writing it get them through globals; list in `out/report.json`, `register_input_functions`); flags are lazy where one setter kind reaches each consumer, else materialised; the x87 stack is modelled with f64 locals at static depths (53-bit precision; the original's control word is not modelled beyond rounding in `fistp`/`frndint`); reducible graphs are structured without a dispatcher; indirect calls go through the code map to `call_indirect`.

**Imports.** Each distinct imported function (486 across the seven modules) gets one host thunk shared by all importers. An import-table slot holds the thunk's fake code address, so `call [iat]`, `mov reg,[iat]; call reg` and function pointers passed around all work. Ordinal imports are named `DLL!#n`.

**Multiple modules at run time.** `LoadLibraryA` (in `source/host/kernel32.js`) resolves a plug-in file name to its module, calls its original `DllMain` once with `DLL_PROCESS_ATTACH`, and returns its base. `GetProcAddress` resolves by ordinal or name from the export list in the metadata; the player enumerates plug-in exports by ordinal (Maisy.exe 0x00435A30). Cross-module calls and callbacks are ordinary indirect calls through the shared code map. Resources (`FindResourceA`, `LoadStringA`, `LoadCursorA`, `LoadMenuA`, `LoadAcceleratorsA`) are read from the module images in memory, headers and `.rsrc` included.

**Entry points.** Roots are the player's entry point, every plug-in's entry point and exports, call targets, immediates that name a function, and every *relocated* data word that points into code. The relocation table tells exactly which data words are addresses, which replaces A2's heuristic scan of data sections.

## What is not lifted (`replacements.py`)

Every module carries its own statically linked MSVC 5/6 C runtime, so helpers are located per module by byte signature, not by address. The list is printed by the build.

| Helper | Found in | Replaced by | Why |
|---|---|---|---|
| `_chkstk` | MAISY | inline: `esp -= eax` | probes stack pages; odd register convention |
| `__EH_prolog` | MAISY | inline frame set-up | moves the caller's ebp |
| `__ftol` | MAISY, BASIC, BITMAP, EXTRAS | inline truncation | x87 argument, restores the control word |
| `_memcpy`/`_memmove` (two variants) | all but two modules, 6 sites | `memory.copy` | computed jumps and the direction flag |
| `_memset` | MAISY | `memory.fill` | computed jumps |
| `_strrchr` | MAISY, BITMAP | hand-written loop | scans backwards with the direction flag |
| `asin acos atan atan2 sinh cosh tanh pow log log10 exp fmod` and their `_CI…` forms | MAISY, 24 entry points | host `Math` | the CRT's transcendental dispatchers keep x87 values live across jumps between labels |

Nothing in this list is game logic. No function of the player or the plug-ins proper is replaced, patched or skipped, and there is no WinMain or message-loop replacement.

## Yielding to the browser

The module is not made re-entrant or asynchronous. It runs in a Web Worker and blocks exactly where the original thread blocked: `GetMessageA`, `Sleep` and an idle `PeekMessageA` become `Atomics.wait` on a shared buffer (`source/web/worker.js`). The page thread never runs game code. This is why the site must be cross-origin isolated (SharedArrayBuffer); `public/coi-sw.js` adds the headers where the server does not.

The player's loop is MFC's `CWinThread::Run` with its own pump override at 0x0040FA90. It polls `PeekMessageA` while idle and times everything from `timeGetTime`, so an empty poll waits at most 1 ms (or until input arrives); the clock is the real one minus time spent paused.

## Exceptions, threads, unsupported paths

- **C++ exceptions / SEH**: frames are built as in the original, but there is no unwinder. `RaiseException` stops the game with the thrown type's name. None was raised in the checked path. Unresolved: whether any other path throws in normal operation.
- **Threads**: `CreateThread` fails loudly. Static analysis found no caller outside MFC's own `AfxBeginThread`; none occurred in the checked path.
- **Dynamically loaded libraries not in this build**: `QTIM32.DLL`/`CMGR32.DLL` (QuickTime 2), `MSVFW32.DLL`, `CTL3D32.DLL`, `version.dll`, `Wsock32.DLL`. `LoadLibraryA` returns NULL for them, as on a PC without those components. The player, EXTRAS and NETWORK each probe `QTIM32.DLL` at start-up and carry on. The authored content has no movie, QuickTime or MIDI object (`original-game-decompiled/authored-content/CONTENT_OVERVIEW.md`).
- **MCI/MIDI**: `mciSendCommandA` returns "device not installed", `midiOutOpen` "no driver". The player sends one `MCI_OPEN` at start-up and continues.
- **Instructions**: `lock` prefixes are treated as the plain instruction (one thread); `push/pop fs|gs` (one timer callback in EXTRAS) push zero / discard. Anything else unsupported makes the function trap and is listed in `tools/recomp/out/report.json` under `failed`.

## Changes from the A2 recompiler

- `Image` loads several PEs into one address space, applies base relocations, merges import tables, records exports, and keeps PE headers and resources in memory.
- Layout constants; 4,096 thunks; code map written to a binary file.
- Pointer discovery from relocation entries; jump-table validation per module code section.
- Function inventory merged from seven Ghidra exports with per-module address deltas; Ghidra's no-return list is not used.
- CRT helpers by signature, per module; CRT math entry points recognised by their dispatch tables.
- `lock` prefix and segment-register push/pop.
- Removed: all A2 replacements, owner patches, splices, resume entries, race hooks.

## Debugging

`node tools/run-headless.mjs --seconds 60 --clicks "22000,320,330" --shots 30 --trace win,files` runs the same module and host code in Node on a virtual clock with scripted input and writes PNG screenshots and the produced PCM to `tools/out/`. `--trace api` prints every host call. `tools/recomp/build.py --trace 00460400,…` makes those functions (addresses in this build) report their entry registers. A trap's stack trace names original functions and addresses.
