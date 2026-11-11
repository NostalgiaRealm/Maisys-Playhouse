# installer__WIZWIN32.dll

- Role: Wise wizard-dialog helper DLL; not gameplay
- Group: installer (not gameplay)
- Input: `extracted/Autorun.EXE__wise/_unnamed/stream_002_00017325.exe` (30720 bytes)
- SHA-256: `82c59878abf7a9fd77e181645648b00318649ae55d758d603241808f75a85eb5`
- Byte-identical copies: `extracted/Install.exe__wise/_unnamed/stream_003_0001aca8.exe`
- Format: PE32, image base 0x10000000, entry 0x10001000, DLL: True
- Exports (2): Update, _ProgressDlg@16
- Imports: KERNEL32.dll 11, USER32.dll 40, GDI32.dll 17

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 20, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 0 thunks, 3 named by Ghidra/library signatures, 17 unnamed `FUN_`.
- Decompiled to pseudocode: 20; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 3 from orphan instructions, 0 from prologues in gaps, 1 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 6656; without instructions: padding 458, defined data 16, ambiguous 0 (code_gaps.csv). Instruction bytes outside any function: 0.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/installer__WIZWIN32.dll/analysis.gpr`.
