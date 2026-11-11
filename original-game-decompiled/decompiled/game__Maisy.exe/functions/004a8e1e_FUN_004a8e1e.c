
/* ==== FUN_004a8e1e @ 004a8e1e ==== 
 * signature: LRESULT __stdcall FUN_004a8e1e(int param_1, HWND__ * param_2, int * param_3)
 * body: 004a8e1e-004a8ee0
 */

LRESULT FUN_004a8e1e(int param_1,HWND__ *param_2,int *param_3)

{
  _AFX_THREAD_STATE *p_Var1;
  LRESULT LVar2;
  int iVar3;
  int iVar4;
  DWORD dwThreadId;
  HHOOK pHVar5;
  
  p_Var1 = AfxGetThreadState();
  if (param_1 == 3) {
    iVar4 = *param_3;
    if ((*(int *)(p_Var1 + 0x14) != 0) ||
       (((*(byte *)(iVar4 + 0x23) & 0x40) == 0 &&
        (iVar3 = FUN_004bafca(), *(char *)(iVar3 + 0x14) == '\0')))) {
      *(uint *)(p_Var1 + 0x28) = (uint)(*(int *)(iVar4 + 0x28) == 0x8002);
      if (DAT_004e5204 == 0) {
        FUN_004a8d18(param_2);
      }
      else {
        *(HWND__ **)(p_Var1 + 0x24) = param_2;
        dwThreadId = GetCurrentThreadId();
        pHVar5 = SetWindowsHookExA(4,FUN_004a8ee1,(HINSTANCE)0x0,dwThreadId);
        *(HHOOK *)(p_Var1 + 0x2c) = pHVar5;
        if (pHVar5 == (HHOOK)0x0) {
          return 1;
        }
      }
    }
    p_Var1 = p_Var1 + 0x30;
    LVar2 = CallNextHookEx(*(HHOOK *)p_Var1,3,(WPARAM)param_2,(LPARAM)param_3);
    iVar4 = FUN_004bafca();
    if (*(char *)(iVar4 + 0x14) != '\0') {
      UnhookWindowsHookEx(*(HHOOK *)p_Var1);
      *(undefined4 *)p_Var1 = 0;
    }
  }
  else {
    LVar2 = CallNextHookEx(*(HHOOK *)(p_Var1 + 0x30),param_1,(WPARAM)param_2,(LPARAM)param_3);
  }
  return LVar2;
}


