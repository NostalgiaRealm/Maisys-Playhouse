# installer__Install.exe

- Role: Wise STUB32 self-extractor that installs the plug-ins, help file and shortcuts; not gameplay
- Group: installer (not gameplay)
- Input: `original/disc/Install.exe` (720225 bytes)
- SHA-256: `43377a7339e3e8c7892631268ec3c1cc254a0d32c929efc6514fcc7c692c3bab`
- Format: PE32, image base 0x400000, entry 0x4021c5, DLL: False
- Exports (2): _MainWndProc@16, _StubFileWrite@12
- Imports: KERNEL32.dll 25, USER32.dll 19, GDI32.dll 9

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 26, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 0 thunks, 3 named by Ghidra/library signatures, 23 unnamed `FUN_`.
- Decompiled to pseudocode: 26; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 0 from orphan instructions, 0 from prologues in gaps, 0 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 7680; without instructions: padding 271, defined data 0, ambiguous 0 (code_gaps.csv). Instruction bytes outside any function: 3.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/installer__Install.exe/analysis.gpr`.
