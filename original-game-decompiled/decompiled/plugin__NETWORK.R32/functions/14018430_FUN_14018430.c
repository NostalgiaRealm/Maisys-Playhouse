
/* ==== FUN_14018430 @ 14018430 ==== 
 * signature: undefined4 __stdcall FUN_14018430(void)
 * body: 14018430-1401849e
 */

undefined4 FUN_14018430(void)

{
  if (DAT_14026d70 == (HMODULE)0x0) {
    DAT_14026d70 = LoadLibraryA(s_QTIM32_DLL_14026d90);
    if (DAT_14026d70 == (HMODULE)0x0) {
      PTR_FUN_14026d6c = FUN_140188fc;
      DAT_14026d70 = (HMODULE)0x0;
      return 1;
    }
    PTR_FUN_14026d6c = GetProcAddress(DAT_14026d70,s__EntryPoint_14026d84);
    if ((FARPROC)PTR_FUN_14026d6c == (FARPROC)0x0) {
      PTR_FUN_14026d6c = FUN_140188fc;
      DAT_14026d70 = (HMODULE)0x0;
      return 2;
    }
  }
  DAT_14026d74 = DAT_14026d74 + 1;
  return 0;
}


