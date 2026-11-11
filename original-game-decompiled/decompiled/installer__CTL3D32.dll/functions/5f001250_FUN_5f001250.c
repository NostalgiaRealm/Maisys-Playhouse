
/* ==== FUN_5f001250 @ 5f001250 ==== 
 * signature: LRESULT __cdecl FUN_5f001250(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
 * body: 5f001250-5f0012a1
 */

LRESULT __cdecl FUN_5f001250(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  
  lpPrevWndFunc = FUN_5f001020(param_1,param_5);
  LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  RemovePropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
  RemovePropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  return LVar1;
}


