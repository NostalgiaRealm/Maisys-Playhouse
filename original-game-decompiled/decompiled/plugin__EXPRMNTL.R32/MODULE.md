# plugin__EXPRMNTL.R32

- Role: mTropolis Experimental Kit modifiers
- Group: plugin (gameplay runtime)
- Input: `original/disc/z_data/mPlugins/EXPRMNTL.R32` (33280 bytes)
- SHA-256: `d1f76dadc0c3ca30166b61b5b9f5b3a37f94712d7c851e16635ad411f0fc8e53`
- Byte-identical copies: `original/disc/z_data/mPlugins/EXPRMNTL.R32`
- Format: PE32, image base 0x13000000, entry 0x13004840, DLL: True
- Version resource: CompanyName=mFactory/Quark, Inc.; FileDescription=Experimental Kit (Win32 Player); FileVersion=2, 0, 0, 0; InternalName=Exprmntl; LegalCopyright=Copyright Â© 1998 Quark, Inc.; OriginalFilename=Exprmntl.r32; ProductName=2.0, Â© 1998 Quark, Inc.; ProductVersion=2, 0, 0, 0
- Exports (3): MenuSrv, Quit, SysInfo
- Imports: USER32.dll 4, GDI32.dll 1, KERNEL32.dll 43

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 158, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 0 thunks, 45 named by Ghidra/library signatures, 113 unnamed `FUN_`.
- Decompiled to pseudocode: 158; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 49 from orphan instructions, 0 from prologues in gaps, 1 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 23040; without instructions: padding 1124, defined data 0, ambiguous 1 (code_gaps.csv). Instruction bytes outside any function: 9.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/plugin__EXPRMNTL.R32/analysis.gpr`.
