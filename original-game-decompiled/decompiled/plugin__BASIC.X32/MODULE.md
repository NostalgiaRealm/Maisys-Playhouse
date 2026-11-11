# plugin__BASIC.X32

- Role: mTropolis Basic Kit: standard modifiers (miniscript, drag, collision, messengers, variables, save/restore ...)
- Group: plugin (gameplay runtime)
- Input: `original/disc/z_data/mPlugins/BASIC.X32` (249344 bytes)
- SHA-256: `d52dda21c41daaf84828d7dc32c95da7ec6a783e2be2c53fdcc2916f9108e5f9`
- Byte-identical copies: `original/disc/z_data/mPlugins/BASIC.X32`
- Format: PE32, image base 0x11000000, entry 0x110295f0, DLL: True
- Version resource: CompanyName=mFactory/Quark, Inc.; FileDescription=Basic Kit (Win32 Player); FileVersion=2, 0, 0, 0; InternalName=Basickit; LegalCopyright=Copyright Â© 1998 Quark, Inc.; OriginalFilename=Basic.x32; ProductName=2.0, Â© 1998 Quark, Inc.; ProductVersion=2, 0, 0, 0
- Exports (38): _WEP, behavmod, boolmod, bordermod, callmod, collisionmod, compmod, ctabmod, cursormod, dragmod, etransmod, fadexmod, floatmod, fulmotmod, graphmod, ifmsgmod, imagefxmod, integermod, kbdmod, messengermod, miniscriptmod, motionmod, newsaverestoremod, objrefmod, patmotmod, pointmod, rangemod, returnmod, saverestoremod, setmod, sharemod, soundmod, stringmod, textmod, timemsgmod, transmod, vectormod, vectormotionmod
- Imports: WINMM.dll 1, KERNEL32.dll 67, USER32.dll 6, GDI32.dll 36

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 1806, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 113 thunks, 182 named by Ghidra/library signatures, 1511 unnamed `FUN_`.
- Decompiled to pseudocode: 1805; assembly-only: 1 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 753 from orphan instructions, 25 from prologues in gaps, 64 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 207360; without instructions: padding 7073, defined data 274, ambiguous 516 (code_gaps.csv). Instruction bytes outside any function: 25.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/plugin__BASIC.X32/analysis.gpr`.
