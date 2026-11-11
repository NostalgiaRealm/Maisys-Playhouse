
/* ==== FUN_140184a0 @ 140184a0 ==== 
 * signature: undefined4 __stdcall FUN_140184a0(void)
 * body: 140184a0-14018540
 */

undefined4 FUN_140184a0(void)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (DAT_14026d7c == (HMODULE)0x0) {
    DAT_14026d7c = LoadLibraryA(s_CMGR32_DLL_14026dac);
    if (DAT_14026d7c == (HMODULE)0x0) {
      PTR_FUN_14026d78 = FUN_1401871c;
      DAT_14026d7c = (HMODULE)0x0;
      return 1;
    }
    PTR_FUN_14026d78 = GetProcAddress(DAT_14026d7c,s__EntryPoint_14026d84);
    pFVar1 = GetProcAddress(DAT_14026d7c,s__CMgrInitialize_14026d9c);
    if ((PTR_FUN_14026d78 != (undefined *)0x0) && (pFVar1 != (FARPROC)0x0)) {
      iVar2 = (*pFVar1)();
      if (iVar2 == 0) goto LAB_14018537;
    }
    PTR_FUN_14026d78 = FUN_1401871c;
    FreeLibrary(DAT_14026d7c);
    DAT_14026d7c = (HMODULE)0x0;
    return 2;
  }
LAB_14018537:
  DAT_14026d80 = DAT_14026d80 + 1;
  return 0;
}


