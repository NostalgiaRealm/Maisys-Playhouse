
/* ==== FUN_120284c0 @ 120284c0 ==== 
 * signature: undefined4 __stdcall FUN_120284c0(void)
 * body: 120284c0-12028560
 */

undefined4 FUN_120284c0(void)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (DAT_12037d90 == (HMODULE)0x0) {
    DAT_12037d90 = LoadLibraryA(s_CMGR32_DLL_12037dc0);
    if (DAT_12037d90 == (HMODULE)0x0) {
      PTR_FUN_12037d8c = FUN_120281f8;
      DAT_12037d90 = (HMODULE)0x0;
      return 1;
    }
    PTR_FUN_12037d8c = GetProcAddress(DAT_12037d90,s__EntryPoint_12037d98);
    pFVar1 = GetProcAddress(DAT_12037d90,s__CMgrInitialize_12037db0);
    if ((PTR_FUN_12037d8c != (undefined *)0x0) && (pFVar1 != (FARPROC)0x0)) {
      iVar2 = (*pFVar1)();
      if (iVar2 == 0) goto LAB_12028557;
    }
    PTR_FUN_12037d8c = FUN_120281f8;
    FreeLibrary(DAT_12037d90);
    DAT_12037d90 = (HMODULE)0x0;
    return 2;
  }
LAB_12028557:
  DAT_12037d94 = DAT_12037d94 + 1;
  return 0;
}


