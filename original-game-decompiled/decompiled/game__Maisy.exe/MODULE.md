# game__Maisy.exe

- Role: mTropolis 2.0 32-bit Windows Player (mTplay32.exe): the runtime that loads data.mfx/data2.mxx and the mPlugins; all gameplay runs through it
- Group: game (gameplay runtime)
- Input: `original/disc/z_data/Maisy.exe` (1085952 bytes)
- SHA-256: `a72b353d62932da2f273c495c6df4fc7bb5fdb1de035984bd446951fe218c5b0`
- Format: PE32, image base 0x400000, entry 0x491820, DLL: False
- Version resource: CompanyName=mFactory/Quark, Inc.; FileDescription=mTropolis 32-Bit Windows Player.; FileVersion=2, 0, 0, 0; InternalName=mTplay32; LegalCopyright=Copyright Â© 1998 Quark, Inc.; OriginalFilename=mTplay32.exe; ProductName=2.0, Â© 1998 Quark, Inc.; ProductVersion=2, 0, 0, 0
- Imports: WINMM.dll 19, KERNEL32.dll 153, USER32.dll 161, GDI32.dll 91, comdlg32.dll 3, WINSPOOL.DRV 3, ADVAPI32.dll 13, SHELL32.dll 5, COMCTL32.dll 1

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 14857, of which 5818 are one-byte `__break` int3 padding entries created by signature matching (not functions), 568 thunks, 856 named by Ghidra/library signatures, 7615 unnamed `FUN_`.
- Decompiled to pseudocode: 14857; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 8987 from orphan instructions, 73 from prologues in gaps, 949 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 772096; without instructions: padding 34731, defined data 2172, ambiguous 3424 (code_gaps.csv). Instruction bytes outside any function: 71.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/game__Maisy.exe/analysis.gpr`.
