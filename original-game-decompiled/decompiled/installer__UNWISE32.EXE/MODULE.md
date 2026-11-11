# installer__UNWISE32.EXE

- Role: Wise uninstaller placed in the install folder; not gameplay
- Group: installer (not gameplay)
- Input: `extracted/Install.exe__wise/_unnamed/stream_015_000263ed.exe` (270848 bytes)
- SHA-256: `a45783a4a9ca997168ea75164c5ab8e1ac9c040060030bcb395e0409f4efc3d3`
- Format: PE32, image base 0x400000, entry 0x40ae40, DLL: False
- Exports (3): _ItemDlg@16, _MainWndProc@16, _SharedDlg@16
- Imports: KERNEL32.dll 94, USER32.dll 64, GDI32.dll 21, comdlg32.dll 1, ADVAPI32.dll 16

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 182, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 11 thunks, 15 named by Ghidra/library signatures, 156 unnamed `FUN_`.
- Decompiled to pseudocode: 182; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 21 from orphan instructions, 2 from prologues in gaps, 13 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 53248; without instructions: padding 864, defined data 260, ambiguous 28 (code_gaps.csv). Instruction bytes outside any function: 5.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/installer__UNWISE32.EXE/analysis.gpr`.
