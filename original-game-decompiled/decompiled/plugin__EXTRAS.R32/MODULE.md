# plugin__EXTRAS.R32

- Role: mTropolis Extras Kit modifiers
- Group: plugin (gameplay runtime)
- Input: `original/disc/z_data/mPlugins/EXTRAS.R32` (261632 bytes)
- SHA-256: `2a4be198cd1c02fca0c921442c0f9c622838a7e14b5423b96ebf6c285b32f5f9`
- Byte-identical copies: `original/disc/z_data/mPlugins/EXTRAS.R32`
- Format: PE32, image base 0x12000000, entry 0x12028da0, DLL: True
- Version resource: CompanyName=mFactory/Quark, Inc.; FileDescription=Extras Kit (Win32 Player); FileVersion=2, 0, 0, 0; InternalName=Extras; LegalCopyright=Copyright Â© 1998 Quark, Inc.; OriginalFilename=Extras.r32; ProductName=2.0, Â© 1998 Quark, Inc.; ProductVersion=2, 0, 0, 0
- Exports (19): ?MIDIModf@@YAXPAUMInitInfo@@@Z, CursorMod, FileMod, ListMod, MPrefs, MediaCue, MidiAst, Navigate, ObjRefP, OpenTitle, PointMotion, Print, QTVRComponent, QTVRMessenger, QTVRNavigator, TrackController, fade, openApp, panning
- Imports: KERNEL32.dll 86, ADVAPI32.dll 3, USER32.dll 8, GDI32.dll 11, comdlg32.dll 4, WINMM.dll 8

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 1858, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 66 thunks, 174 named by Ghidra/library signatures, 1618 unnamed `FUN_`.
- Decompiled to pseudocode: 1858; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 1046 from orphan instructions, 29 from prologues in gaps, 71 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 210432; without instructions: padding 5907, defined data 118, ambiguous 914 (code_gaps.csv). Instruction bytes outside any function: 48.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/plugin__EXTRAS.R32/analysis.gpr`.
