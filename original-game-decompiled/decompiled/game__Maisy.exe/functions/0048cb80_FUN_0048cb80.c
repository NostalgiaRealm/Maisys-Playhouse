
/* ==== FUN_0048cb80 @ 0048cb80 ==== 
 * signature: undefined4 __stdcall FUN_0048cb80(void)
 * body: 0048cb80-0048cc20
 */

undefined4 FUN_0048cb80(void)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (DAT_004dd1b8 == (HMODULE)0x0) {
    DAT_004dd1b8 = LoadLibraryA(s_CMGR32_DLL_004dd1e8);
    if (DAT_004dd1b8 == (HMODULE)0x0) {
      PTR_FUN_004dd1b4 = FUN_0048d368;
      DAT_004dd1b8 = (HMODULE)0x0;
      return 1;
    }
    PTR_FUN_004dd1b4 = GetProcAddress(DAT_004dd1b8,s__EntryPoint_004dd1c0);
    pFVar1 = GetProcAddress(DAT_004dd1b8,s__CMgrInitialize_004dd1d8);
    if ((PTR_FUN_004dd1b4 != (undefined *)0x0) && (pFVar1 != (FARPROC)0x0)) {
      iVar2 = (*pFVar1)();
      if (iVar2 == 0) goto LAB_0048cc17;
    }
    PTR_FUN_004dd1b4 = FUN_0048d368;
    FreeLibrary(DAT_004dd1b8);
    DAT_004dd1b8 = (HMODULE)0x0;
    return 2;
  }
LAB_0048cc17:
  DAT_004dd1bc = DAT_004dd1bc + 1;
  return 0;
}


