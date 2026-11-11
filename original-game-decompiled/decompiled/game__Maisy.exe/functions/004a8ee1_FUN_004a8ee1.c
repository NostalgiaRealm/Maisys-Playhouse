
/* ==== FUN_004a8ee1 @ 004a8ee1 ==== 
 * signature: LRESULT __stdcall FUN_004a8ee1(int param_1, WPARAM param_2, int param_3)
 * body: 004a8ee1-004a8f33
 */

LRESULT FUN_004a8ee1(int param_1,WPARAM param_2,int param_3)

{
  _AFX_THREAD_STATE *p_Var1;
  LRESULT LVar2;
  
  p_Var1 = AfxGetThreadState();
  if ((param_1 < 0) || (*(int *)(p_Var1 + 0x24) != *(int *)(param_3 + 0xc))) {
    LVar2 = CallNextHookEx(*(HHOOK *)(p_Var1 + 0x2c),param_1,param_2,param_3);
  }
  else {
    UnhookWindowsHookEx(*(HHOOK *)(p_Var1 + 0x2c));
    *(undefined4 *)(p_Var1 + 0x2c) = 0;
    FUN_004a8d18(*(HWND__ **)(param_3 + 0xc));
    LVar2 = 0;
    *(undefined4 *)(p_Var1 + 0x24) = 0;
  }
  return LVar2;
}


