
/* ==== FUN_140186c0 @ 140186c0 ==== 
 * signature: undefined __stdcall FUN_140186c0(void)
 * body: 140186c0-14018708
 */

void FUN_140186c0(void)

{
  FARPROC pFVar1;
  
  if ((0 < DAT_14026d80) && (DAT_14026d80 = DAT_14026d80 + -1, DAT_14026d80 == 0)) {
    pFVar1 = GetProcAddress(DAT_14026d7c,s__CMgrTerminate_14026e04);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)();
    }
    FreeLibrary(DAT_14026d7c);
    DAT_14026d7c = (HMODULE)0x0;
    PTR_FUN_14026d78 = FUN_1401871c;
  }
  return;
}


