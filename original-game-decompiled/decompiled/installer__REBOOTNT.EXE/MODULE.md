# installer__REBOOTNT.EXE

- Role: Wise reboot helper; not gameplay
- Group: installer (not gameplay)
- Input: `extracted/Autorun.EXE__wise/_unnamed/stream_003_00019680.exe` (2560 bytes)
- SHA-256: `166e8fe44186f356e162ceac313100d0992b70d3a6a029906c2242afc8691c85`
- Byte-identical copies: `extracted/Install.exe__wise/_unnamed/stream_006_00021256.exe`
- Format: PE32, image base 0x400000, entry 0x401000, DLL: False
- Imports: KERNEL32.dll 3, USER32.dll 1, ADVAPI32.dll 3

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 1, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 0 thunks, 1 named by Ghidra/library signatures, 0 unnamed `FUN_`.
- Decompiled to pseudocode: 1; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 0 from orphan instructions, 0 from prologues in gaps, 0 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 512; without instructions: padding 369, defined data 0, ambiguous 0 (code_gaps.csv). Instruction bytes outside any function: 0.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/installer__REBOOTNT.EXE/analysis.gpr`.
