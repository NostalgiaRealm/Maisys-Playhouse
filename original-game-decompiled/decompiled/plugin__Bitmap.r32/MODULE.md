# plugin__Bitmap.r32

- Role: third-party "hl" bitmap kit: bitmap variable, capture, display, print, save, scale, import modifiers
- Group: plugin (gameplay runtime)
- Input: `original/disc/z_data/mPlugins/Bitmap.r32` (90624 bytes)
- SHA-256: `9492053f007a95225d5b0e557382c7f49e7340cde2ce22e4899542eb29dd5cf5`
- Byte-identical copies: `original/disc/z_data/mPlugins/Bitmap.r32`
- Format: PE32, image base 0x10000000, entry 0x10009b80, DLL: True
- Exports (7): hlBitmapVariable, hlCaptureBitmap, hlDisplayBitmap, hlImportBitmap, hlPrintBitmap, hlSaveBitmap, hlScaleBitmap
- Imports: KERNEL32.dll 66, USER32.dll 6, GDI32.dll 16, comdlg32.dll 3

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 414, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 3 thunks, 23 named by Ghidra/library signatures, 388 unnamed `FUN_`.
- Decompiled to pseudocode: 414; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 132 from orphan instructions, 2 from prologues in gaps, 16 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 61952; without instructions: padding 2036, defined data 96, ambiguous 36 (code_gaps.csv). Instruction bytes outside any function: 35.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/plugin__Bitmap.r32/analysis.gpr`.
