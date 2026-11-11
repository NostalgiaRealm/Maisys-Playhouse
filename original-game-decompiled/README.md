# Maisy's Playhouse (1999): original game decompilation

Static analysis package for the English Windows CD-ROM. Nothing here is a port, and nothing here was produced by running the original programs. This directory is separate from the browser port (`../tools`, `../source`, `../public`).

**Honesty note.** All C in `decompiled/` is Ghidra-generated pseudocode; all script listings in `authored-content/scripts/` are disassembly (and clearly labelled generated pseudocode) of the title's compiled Miniscript bytecode. Neither is the original authored source, and there is no buildable original project. Images and sounds are extracted *assets*, not source.

## What the game is

`z_data/Maisy.exe` is the stock **mTropolis 2.0 32-bit Windows Player** (`mTplay32.exe`, mFactory/Quark; an MFC application built with MSVC). The game itself is authored content: `z_data/data.mfx` (project catalog, boot stream, scene structure, modifiers and compiled Miniscript) and `data2.mxx` (second segment, media). Six plug-ins in `z_data/mPlugins/` supply modifier types to the player. The disc's `Autorun.EXE` and `Install.exe` are Wise Installation System self-extractors; `CATALOG/` is a promotional HTML/GIF catalog, not game content.

## Folders

| Folder | Contents |
|---|---|
| `original/disc/` | Byte-exact extraction of `MAISY_CD.iso` (7-Zip). Working copy; the ISO in `../Original/` is the source of truth. |
| `extracted/` | Payloads statically unpacked from the two Wise self-extractors (`*__wise/`, with `manifest.csv`), and string listings of their install scripts (`wise-scripts/`). |
| `inventory/` | `all_files.csv` (every file + SHA-256), `modules.json/.csv` (17 unique code-bearing files, identities, roles, duplicate locations), `coverage.csv`, `failed_functions_all.csv`, `failed_function_resolution.md`. |
| `decompiled/<module-id>/` | Per native module: `MODULE.md`, `INPUT.sha256`, `decompiled.c`, `functions/` (one file per function), `functions.csv`, `disassembly.asm`, `calls.csv`, `data_refs.csv`, `strings.csv`, `strings_raw.csv`, `symbols.csv`, `imports.csv`, `exports.csv`, `sections.csv`, `code_gaps.csv`, `recovered_functions.tsv`, `failed_functions.csv`, `resources/`. |
| `analysis-projects/<module-id>/` | Reusable Ghidra 12.1.4 projects (`analysis.gpr`). |
| `authored-content/` | Recovered project content: catalog, object tree, Miniscript listings, inventories, extracted assets, `FORMAT_NOTES.md`, `CONTENT_OVERVIEW.md`. |
| `docs/original-documentation/` | Text of the WinHelp file `MaisyPH.hlp` (activity descriptions, levels, buttons). |
| `scripts/` | Everything needed to reproduce: see below. |
| `logs/` | Ghidra console logs and job records. |

## Modules

| Id | Role |
|---|---|
| `game__Maisy.exe` | The mTropolis player. Runs everything; statically links MFC and the C runtime. |
| `plugin__BASIC.X32` | Basic Kit: the standard modifiers (Miniscript, messengers, variables, drag, collision, motion, transitions, sound effects, save/restore...). |
| `plugin__EXTRAS.R32` | Extras Kit: MIDI, lists, navigation, media cue, cursor, print, file, QTVR, open-title/app. |
| `plugin__EXPRMNTL.R32` | Experimental Kit: `MenuSrv`, `Quit`, `SysInfo`. |
| `plugin__NETWORK.R32` | Network Kit: URL fetch/post/open, network messenger. |
| `plugin__Bitmap.r32` | Third-party `hl*` bitmap kit: bitmap variable, capture, display, import, print, save, scale. |
| `plugin__CURSORS.C32` | mCursors: a resource-only plug-in carrying 71 cursor images. |
| `autorun__Autorun.EXE` | Wise stub + script: the disc's autorun menu (Play / Install / Catalog / Exit). Not gameplay. |
| `installer__Install.exe` | Wise stub + script: copies `Maisy.exe`, `Data.mfx`, plug-ins and help to disk, creates shortcuts that run `Maisy.exe "Data.mfx"`. Not gameplay. |
| `installer__WISE0132.dll`, `WIZWIN32.dll`, `W32INST.DLL`, `UNWISE32.EXE`, `REBOOTNT.EXE`, `CTL3D32.dll` (2 builds), `dos_stub_5607.exe` | Wise runtime pieces and redistributables carried inside the stubs. Not gameplay. |

Each `MODULE.md` gives the identity, exports and analysis numbers. `COVERAGE_REPORT.md` reconciles the inventory with the exports.

## How things map back

- A native function is identified by module id + original virtual address (`functions.csv`, file names in `functions/`). Addresses are those of the module's preferred image base.
- A plug-in modifier is an export of its plug-in (`exports.csv`), named exactly as the modifier type string stored in `data.mfx`. The player loads every file in `mPlugins\` with `LoadLibraryA` and enumerates exports by ordinal (`Maisy.exe` 0x00435A30).
- An authored object is identified by stream + file offset and by its GUID (`authored-content/inventory/objects.csv`).

`scripts/lookup.py <module> <address>` prints the function containing an address.

## Reproduce

Needs: python3, 7z, Ghidra 12.1.4 (`ghidra-headless`) with a JDK 21+, a Python with `pefile`. From this folder:

```bash
7z x -y -ooriginal/disc ../Original/maisycd/MAISY_CD.iso
python3 -I scripts/wise_extract.py original/disc/Install.exe extracted/Install.exe__wise
python3 -I scripts/wise_extract.py original/disc/Autorun.EXE extracted/Autorun.EXE__wise
python3 -I scripts/wise_script_strings.py extracted/Install.exe__wise/WiseScript.bin extracted/wise-scripts/Install.WiseScript.strings.txt
python3 -I scripts/wise_script_strings.py extracted/Autorun.EXE__wise/_unnamed/stream_000_00003051.bin extracted/wise-scripts/Autorun.WiseScript.strings.txt
~/.local/share/reverse-engineering/python-analysis/bin/python -I scripts/build_modules.py .
python3 -I scripts/assign_module_ids.py .
python3 -I scripts/run_ghidra_batch.py . --jobs 5
~/.local/share/reverse-engineering/python-analysis/bin/python -I scripts/extract_module_metadata.py .
python3 -I scripts/winhelp_to_text.py original/disc/MaisyPH.hlp docs/original-documentation/MaisyPH.hlp.txt docs/original-documentation/hlp-pictures
python3 -I scripts/formats/mtropolis_dump.py   # see authored-content/FORMAT_NOTES.md for arguments
python3 -I scripts/build_coverage.py .
```

Ghidra refuses project paths containing an apostrophe, so `run_ghidra_batch.py` analyses in `~/Documents/Rebuilds/maisy-ghidra-work/` and moves each finished project into `analysis-projects/`.

Note: `wise_extract.py` names the Autorun script stream wrongly (`WiseScript.bin` there is `WISE0132.dll`; the script is `_unnamed/stream_000_00003051.bin`). `inventory/modules.json` identifies every payload by its PE export name instead.
