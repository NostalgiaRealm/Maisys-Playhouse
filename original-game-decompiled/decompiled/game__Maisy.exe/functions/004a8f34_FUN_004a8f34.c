
/* ==== FUN_004a8f34 @ 004a8f34 ==== 
 * signature: undefined __stdcall FUN_004a8f34(int param_1)
 * body: 004a8f34-004a8f78
 */

void FUN_004a8f34(int param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  p_Var1 = AfxGetThreadState();
  if (*(int *)(p_Var1 + 0x14) != param_1) {
    if (*(int *)(p_Var1 + 0x30) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,FUN_004a8e1e,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(p_Var1 + 0x30) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_004a3538();
      }
    }
    *(int *)(p_Var1 + 0x14) = param_1;
  }
  return;
}


