
/* ==== FUN_5f002430 @ 5f002430 ==== 
 * signature: undefined __stdcall FUN_5f002430(void)
 * body: 5f002430-5f002504
 */

void FUN_5f002430(void)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  piVar1 = &DAT_5f00a190;
  do {
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 6;
  } while (piVar1 < &DAT_5f00a220);
  FUN_5f0012d0();
  if (DAT_5f005138 != 0) {
    GlobalDeleteAtom(DAT_5f005138);
  }
  if (DAT_5f00513e != 0) {
    GlobalDeleteAtom(DAT_5f00513e);
  }
  if (DAT_5f00513c != 0) {
    GlobalDeleteAtom(DAT_5f00513c);
  }
  if (DAT_5f00513a != 0) {
    GlobalDeleteAtom(DAT_5f00513a);
  }
  if (DAT_5f005142 != 0) {
    GlobalDeleteAtom(DAT_5f005142);
  }
  if (DAT_5f005140 != 0) {
    GlobalDeleteAtom(DAT_5f005140);
  }
  if (DAT_5f005144 != 0) {
    GlobalDeleteAtom(DAT_5f005144);
  }
  DAT_5f005130 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  return;
}


