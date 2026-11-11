# installer__W32INST.DLL

- Role: Wise helper DLL; not gameplay
- Group: installer (not gameplay)
- Input: `extracted/Install.exe__wise/_unnamed/stream_008_000215e3.exe` (6656 bytes)
- SHA-256: `7008b83a1bc98ca9062ef0d7840e226609d45f4430782a1147eac8414989e668`
- Format: PE32, image base 0x10000000, entry 0x10001000, DLL: True
- Exports (3): DoService, IsAdmin, ShellLink
- Imports: KERNEL32.dll 18, USER32.dll 2, ADVAPI32.dll 7, ole32.dll 3, VERSION.dll 3

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 13, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 3 thunks, 4 named by Ghidra/library signatures, 6 unnamed `FUN_`.
- Decompiled to pseudocode: 13; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 0 from orphan instructions, 0 from prologues in gaps, 0 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 2560; without instructions: padding 25, defined data 0, ambiguous 0 (code_gaps.csv). Instruction bytes outside any function: 0.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/installer__W32INST.DLL/analysis.gpr`.
