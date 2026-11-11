
/* ==== __lock @ 130059f0 ==== 
 * signature: void __cdecl __lock(int _File)
 * body: 130059f0-13005a57
 * note: Library Function - Single Match  __lock  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 1998 Release */

void __cdecl __lock(int _File)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_13008660 + _File;
  if (*piVar1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_13005be0(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    __lock(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_13005bc0(lpCriticalSection);
    }
    FUN_13005a60(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


