
/* ==== FUN_0048cda0 @ 0048cda0 ==== 
 * signature: undefined __stdcall FUN_0048cda0(void)
 * body: 0048cda0-0048cde8
 */

void FUN_0048cda0(void)

{
  FARPROC pFVar1;
  
  if ((0 < DAT_004dd1bc) && (DAT_004dd1bc = DAT_004dd1bc + -1, DAT_004dd1bc == 0)) {
    pFVar1 = GetProcAddress(DAT_004dd1b8,s__CMgrTerminate_004dd23c);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)();
    }
    FreeLibrary(DAT_004dd1b8);
    DAT_004dd1b8 = (HMODULE)0x0;
    PTR_FUN_004dd1b4 = FUN_0048d368;
  }
  return;
}


