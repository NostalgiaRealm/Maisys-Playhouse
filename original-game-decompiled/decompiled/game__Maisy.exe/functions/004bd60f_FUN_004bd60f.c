
/* ==== FUN_004bd60f @ 004bd60f ==== 
 * signature: undefined __stdcall FUN_004bd60f(void)
 * body: 004bd60f-004bd6c9
 */

void FUN_004bd60f(void)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uchar *puVar4;
  int iVar5;
  _AFX_THREAD_STATE *p_Var6;
  uchar *_Str;
  
  iVar3 = FUN_004bafca();
  AfxLockGlobals(1);
  _Str = (uchar *)(iVar3 + 0x34);
  while (*_Str != '\0') {
    puVar4 = __mbschr(_Str,10);
    *puVar4 = '\0';
    iVar5 = FUN_004bafca();
    UnregisterClassA((LPCSTR)_Str,*(HINSTANCE *)(iVar5 + 8));
    _Str = puVar4 + 1;
  }
  *(uchar *)(iVar3 + 0x34) = '\0';
  AfxUnlockGlobals(1);
  iVar3 = FUN_004bafca();
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(iVar3 + 4) + 0xb8), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,0);
  }
  p_Var6 = AfxGetThreadState();
  piVar2 = *(int **)(p_Var6 + 0xd0);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_004a2c19(piVar2);
    if (iVar3 != 0) {
      *(undefined4 *)(p_Var6 + 0xd0) = 0;
    }
  }
  iVar3 = FUN_004bafca();
  if (*(char *)(iVar3 + 0x14) == '\0') {
    if (*(HHOOK *)(p_Var6 + 0x34) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(p_Var6 + 0x34));
      *(undefined4 *)(p_Var6 + 0x34) = 0;
    }
    if (*(HHOOK *)(p_Var6 + 0x30) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(p_Var6 + 0x30));
      *(undefined4 *)(p_Var6 + 0x30) = 0;
    }
  }
  return;
}


