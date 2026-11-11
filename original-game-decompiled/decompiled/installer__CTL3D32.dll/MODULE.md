# installer__CTL3D32.dll

- Role: Microsoft Ctl3D 3D-controls redistributable (two builds); not gameplay
- Group: installer (not gameplay)
- Input: `extracted/Install.exe__wise/_unnamed/stream_002_0001797e.exe` (26624 bytes)
- SHA-256: `f52be8f2df2d434da7ceae635a45379f071c4b69d44002a7c89ef47028480500`
- Format: PE32, image base 0x5f000000, entry 0x5f0046c0, DLL: True
- Version resource: CompanyName=Microsoft Corporation; FileDescription=Ctl3D 3D Windows Controls; FileVersion=2.31.000; InternalName=CTL3D32; LegalCopyright=Copyright Â© Microsoft Corp. ; ProductName=3D Windows Controls; ProductVersion=2,31,0,0
- Exports (25): BtnWndProc3d, ComboWndProc3d, Ctl3dAutoSubclass, Ctl3dAutoSubclassEx, Ctl3dColorChange, Ctl3dCtlColor, Ctl3dCtlColorEx, Ctl3dDlgFramePaint, Ctl3dDlgProc, Ctl3dEnabled, Ctl3dGetVer, Ctl3dIsAutoSubclass, Ctl3dRegister, Ctl3dSetStyle, Ctl3dSubclassCtl, Ctl3dSubclassCtlEx, Ctl3dSubclassDlg, Ctl3dSubclassDlgEx, Ctl3dUnAutoSubclass, Ctl3dUnregister, Ctl3dUnsubclassCtl, Ctl3dWinIniChange, EditWndProc3d, ListWndProc3d, StaticWndProc3d
- Imports: KERNEL32.dll 22, USER32.dll 47, GDI32.dll 15

## Analysis (Ghidra 12.1.4, x86:LE:32:default)

- Function entries: 151, of which 0 are one-byte `__break` int3 padding entries created by signature matching (not functions), 84 thunks, 26 named by Ghidra/library signatures, 41 unnamed `FUN_`.
- Decompiled to pseudocode: 151; assembly-only: 0 (see failed_functions.csv).
- Second-pass recovery (recovered_functions.tsv): 88 from orphan instructions, 0 from prologues in gaps, 2 clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).
- Executable bytes 15360; without instructions: padding 422, defined data 0, ambiguous 22 (code_gaps.csv). Instruction bytes outside any function: 0.

All C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.

Files: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/installer__CTL3D32.dll/analysis.gpr`.
