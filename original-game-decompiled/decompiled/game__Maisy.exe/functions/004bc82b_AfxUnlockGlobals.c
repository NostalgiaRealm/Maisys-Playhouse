
/* ==== AfxUnlockGlobals @ 004bc82b ==== 
 * signature: void __stdcall AfxUnlockGlobals(int param_1)
 * body: 004bc82b-004bc849
 * note: Library Function - Single Match  void __stdcall AfxUnlockGlobals(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxUnlockGlobals(int)
   
   Library: Visual Studio 1998 Release */

void AfxUnlockGlobals(int param_1)

{
  if (DAT_004e5368 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_004e5218 + param_1 * 0x18));
  }
  return;
}


