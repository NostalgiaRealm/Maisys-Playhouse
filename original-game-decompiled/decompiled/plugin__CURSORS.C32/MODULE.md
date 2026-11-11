# plugin__CURSORS.C32

- Role: mCursors: cursor resource container loaded by the player (cursor graphics)
- Group: plugin (gameplay runtime)
- Input: `original/disc/z_data/mPlugins/CURSORS.C32` (88576 bytes)
- SHA-256: `201fb19b742d2955620de186c1c2462e46a52a8fc1726c08ce34e31504aaff51`
- Byte-identical copies: `original/disc/z_data/mPlugins/CURSORS.C32`
- Format: PE32, image base 0x15000000, entry 0x15001160, DLL: True
- Version resource: CompanyName=mFactory/Quark, Inc.; FileDescription=mCursors (Win32 Player); FileVersion=2, 0, 0, 0; InternalName=mCursors; LegalCopyright=Copyright Â© 1998 Quark, Inc.; OriginalFilename=mCursors.c32; ProductName=2.0, Â© 1998 Quark, Inc.; ProductVersion=2, 0, 0, 0
- Exports (1): _WEP
- Imports: KERNEL32.dll 41

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 99, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 0 thunks, 43 named by Ghidra/library signatures, 56 unnamed `FUN_`.
- Decompiled to pseudocode: 99; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 28 from orphan instructions, 0 from prologues in gaps, 1 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 9216; without instructions: padding 930, defined data 0, ambiguous 1 (code_gaps.csv). Instruction bytes outside any function: 9.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/plugin__CURSORS.C32/analysis.gpr`.
