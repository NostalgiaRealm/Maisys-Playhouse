
/* ==== __lock @ 15002310 ==== 
 * signature: void __cdecl __lock(int _File)
 * body: 15002310-15002377
 * note: Library Function - Single Match  __lock  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 1998 Release */

void __cdecl __lock(int _File)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_15005370 + _File;
  if (*piVar1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_15002500(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    __lock(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_150024e0(lpCriticalSection);
    }
    FUN_15002380(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


