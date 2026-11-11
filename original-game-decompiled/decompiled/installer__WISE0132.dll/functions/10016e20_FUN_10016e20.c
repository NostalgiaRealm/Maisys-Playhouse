
/* ==== FUN_10016e20 @ 10016e20 ==== 
 * signature: undefined __cdecl FUN_10016e20(int param_1)
 * body: 10016e20-10016e95
 */

void __cdecl FUN_10016e20(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((&DAT_100200e8)[param_1] == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_10015d50(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10016e20(0x11);
    if ((&DAT_100200e8)[param_1] == 0) {
      InitializeCriticalSection(lpCriticalSection);
      (&DAT_100200e8)[param_1] = lpCriticalSection;
    }
    else {
      FUN_10015a50((undefined *)lpCriticalSection);
    }
    FUN_10016ea0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_100200e8)[param_1]);
  return;
}


