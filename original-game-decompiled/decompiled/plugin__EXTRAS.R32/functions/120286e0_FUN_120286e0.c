
/* ==== FUN_120286e0 @ 120286e0 ==== 
 * signature: undefined __stdcall FUN_120286e0(void)
 * body: 120286e0-12028728
 */

void FUN_120286e0(void)

{
  FARPROC pFVar1;
  
  if ((0 < DAT_12037d94) && (DAT_12037d94 = DAT_12037d94 + -1, DAT_12037d94 == 0)) {
    pFVar1 = GetProcAddress(DAT_12037d90,s__CMgrTerminate_12037e14);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)();
    }
    FreeLibrary(DAT_12037d90);
    DAT_12037d90 = (HMODULE)0x0;
    PTR_FUN_12037d8c = FUN_120281f8;
  }
  return;
}


