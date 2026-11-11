
/* ==== AfxLockGlobals @ 004bc7bf ==== 
 * signature: void __stdcall AfxLockGlobals(int param_1)
 * body: 004bc7bf-004bc82a
 * note: Library Function - Single Match  void __stdcall AfxLockGlobals(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxLockGlobals(int)
   
   Library: Visual Studio 1998 Release */

void AfxLockGlobals(int param_1)

{
  int *piVar1;
  
  if (DAT_004e5210 == 0) {
    AfxCriticalInit();
  }
  if (DAT_004e5368 == 0) {
    piVar1 = &DAT_004e5388 + param_1;
    if (*piVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004e5370);
      if (*piVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_004e5218 + param_1 * 0x18));
        *piVar1 = *piVar1 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004e5370);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_004e5218 + param_1 * 0x18));
  }
  return;
}


