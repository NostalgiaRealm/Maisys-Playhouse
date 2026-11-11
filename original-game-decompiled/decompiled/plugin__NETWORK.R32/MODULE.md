# plugin__NETWORK.R32

- Role: mTropolis Network Kit modifiers (Winsock/URL); a byte-identical second copy is in Install.exe
- Group: plugin (gameplay runtime)
- Input: `original/disc/z_data/mPlugins/NETWORK.R32` (179200 bytes)
- SHA-256: `f6c446af6350868816b731ea227986c44d12bff34822c35ec209fb9dd86506dd`
- Byte-identical copies: `extracted/Install.exe__wise/_unnamed/stream_025_0009b1d9.exe`, `original/disc/z_data/mPlugins/NETWORK.R32`
- Format: PE32, image base 0x14000000, entry 0x140193c0, DLL: True
- Version resource: CompanyName=mFactory/Quark, Inc.; FileDescription=Network Kit (Win32 Player); FileVersion=2, 0, 0, 0; InternalName=Network; LegalCopyright=Copyright Â© 1998 Quark, Inc.; OriginalFilename=Network.r32; ProductName=2.0, Â© 1998 Quark, Inc.; ProductVersion=2, 0, 0, 0
- Exports (6): FetchUrlText, OpenURL, PostUrlText, PreFetchUrl, nMessenger, nProcessSrv
- Imports: USER32.dll 6, KERNEL32.dll 64

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 1257, of which 543 are one-byte `__break` int3 padding entries created by signature matching (not functions), 72 thunks, 134 named by Ghidra/library signatures, 508 unnamed `FUN_`.
- Decompiled to pseudocode: 1256; assembly-only: 1 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 808 from orphan instructions, 25 from prologues in gaps, 29 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 141824; without instructions: padding 3095, defined data 16, ambiguous 70 (code_gaps.csv). Instruction bytes outside any function: 25.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/plugin__NETWORK.R32/analysis.gpr`.
