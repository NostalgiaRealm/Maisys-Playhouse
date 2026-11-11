# installer__dos_stub_5607.exe

- Role: 16-bit MZ program carried by the Wise installer (not PE); not gameplay
- Group: installer (not gameplay)
- Input: `extracted/Install.exe__wise/_unnamed/stream_005_0002039f.exe` (5607 bytes)
- SHA-256: `79a6d0024d14a70d7f739ab98b87670d0415a5eeeda772dec9f15efe3572a427`
- Format: MZ ('Invalid NT Headers signature.'), image base , entry , DLL: False

## Analysis (Ghidra 12.1.4, x86:LE:16:Real Mode)

- Function entries: 49, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 0 thunks, 1 named by Ghidra/library signatures, 48 unnamed `FUN_`.
- Decompiled to pseudocode: 49; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 0 from orphan instructions, 1 from prologues in gaps, 0 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 5095; without instructions: padding 54, defined data 0, ambiguous 382 (code_gaps.csv). Instruction bytes outside any function: 0.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/installer__dos_stub_5607.exe/analysis.gpr`.
