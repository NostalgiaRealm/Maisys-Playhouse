
/* ==== FUN_0048cb10 @ 0048cb10 ==== 
 * signature: undefined4 __stdcall FUN_0048cb10(void)
 * body: 0048cb10-0048cb7e
 */

undefined4 FUN_0048cb10(void)

{
  if (DAT_004dd1ac == (HMODULE)0x0) {
    DAT_004dd1ac = LoadLibraryA(s_QTIM32_DLL_004dd1cc);
    if (DAT_004dd1ac == (HMODULE)0x0) {
      PTR_FUN_004dd1a8 = FUN_0048cdfc;
      DAT_004dd1ac = (HMODULE)0x0;
      return 1;
    }
    PTR_FUN_004dd1a8 = GetProcAddress(DAT_004dd1ac,s__EntryPoint_004dd1c0);
    if ((FARPROC)PTR_FUN_004dd1a8 == (FARPROC)0x0) {
      PTR_FUN_004dd1a8 = FUN_0048cdfc;
      DAT_004dd1ac = (HMODULE)0x0;
      return 2;
    }
  }
  DAT_004dd1b0 = DAT_004dd1b0 + 1;
  return 0;
}


