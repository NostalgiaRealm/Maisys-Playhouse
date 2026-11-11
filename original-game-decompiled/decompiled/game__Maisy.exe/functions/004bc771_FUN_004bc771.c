
/* ==== FUN_004bc771 @ 004bc771 ==== 
 * signature: undefined __stdcall FUN_004bc771(void)
 * body: 004bc771-004bc7be
 */

void FUN_004bc771(void)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((DAT_004e5210 != 0) && (DAT_004e5210 = DAT_004e5210 + -1, DAT_004e5368 == 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_004e5218;
    piVar1 = &DAT_004e5388;
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004e5370);
    do {
      if (*piVar1 != 0) {
        DeleteCriticalSection(lpCriticalSection);
        *piVar1 = *piVar1 + -1;
      }
      lpCriticalSection = lpCriticalSection + 1;
      piVar1 = piVar1 + 1;
    } while (piVar1 < &DAT_004e53c0);
  }
  return;
}


