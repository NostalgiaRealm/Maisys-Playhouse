
/* ==== FUN_1000a320 @ 1000a320 ==== 
 * signature: undefined __cdecl FUN_1000a320(int param_1)
 * body: 1000a320-1000a395
 */

void __cdecl FUN_1000a320(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((&DAT_10013230)[param_1] == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1000c060(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000a320(0x11);
    if ((&DAT_10013230)[param_1] == 0) {
      InitializeCriticalSection(lpCriticalSection);
      (&DAT_10013230)[param_1] = lpCriticalSection;
    }
    else {
      FUN_1000bff0((undefined *)lpCriticalSection);
    }
    FUN_1000a3a0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10013230)[param_1]);
  return;
}


