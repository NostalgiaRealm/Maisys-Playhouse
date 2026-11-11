# installer__WISE0132.dll

- Role: Wise Installation System script-engine DLL carried in both Wise stubs; not gameplay
- Group: installer (not gameplay)
- Input: `extracted/Autorun.EXE__wise/WiseScript.bin` (155136 bytes)
- SHA-256: `68ae6a552c63f331586d27930b4dcb3da63a88a86e1928cf078ccc7769e4970f`
- Byte-identical copies: `extracted/Install.exe__wise/_unnamed/stream_001_00003d3f.exe`
- Format: PE32, image base 0x10000000, entry 0x10016c80, DLL: True
- Exports (41): CopyDlg, CustomDlg, DDECallback, DiskPrompt, DisplayGraphics, FileWrite, HandleFtp, LanguageDlg, MessageBoxDlg, PathNameDlg, SearchDlg, UpdateScreen, WiseMain, WizardDlg, _ListboxSubclassProc@16, f0, f1, f10, f11, f12, f13, f15, f16, f17, f19, f2, f20, f21, f22, f23, f25, f27, f28, f29, f3, f30, f31, f33, f34, f8, f9
- Imports: USER32.dll 92, GDI32.dll 43, ADVAPI32.dll 15, comdlg32.dll 1, VERSION.dll 4, MPR.dll 1, WINMM.dll 3, SHELL32.dll 1, KERNEL32.dll 114

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 432, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 17 thunks, 57 named by Ghidra/library signatures, 358 unnamed `FUN_`.
- Decompiled to pseudocode: 432; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 62 from orphan instructions, 4 from prologues in gaps, 22 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 110080; without instructions: padding 793, defined data 686, ambiguous 5 (code_gaps.csv). Instruction bytes outside any function: 35.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/installer__WISE0132.dll/analysis.gpr`.
