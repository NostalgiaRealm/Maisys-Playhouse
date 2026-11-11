
/* ==== FUN_12028450 @ 12028450 ==== 
 * signature: undefined4 __stdcall FUN_12028450(void)
 * body: 12028450-120284be
 */

undefined4 FUN_12028450(void)

{
  if (DAT_12037d84 == (HMODULE)0x0) {
    DAT_12037d84 = LoadLibraryA(s_QTIM32_DLL_12037da4);
    if (DAT_12037d84 == (HMODULE)0x0) {
      PTR_FUN_12037d80 = FUN_12027c8c;
      DAT_12037d84 = (HMODULE)0x0;
      return 1;
    }
    PTR_FUN_12037d80 = GetProcAddress(DAT_12037d84,s__EntryPoint_12037d98);
    if ((FARPROC)PTR_FUN_12037d80 == (FARPROC)0x0) {
      PTR_FUN_12037d80 = FUN_12027c8c;
      DAT_12037d84 = (HMODULE)0x0;
      return 2;
    }
  }
  DAT_12037d88 = DAT_12037d88 + 1;
  return 0;
}


