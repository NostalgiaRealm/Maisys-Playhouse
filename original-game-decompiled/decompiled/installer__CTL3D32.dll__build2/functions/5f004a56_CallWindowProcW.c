
/* ==== USER32.DLL::CallWindowProcW @ 5f004a56 ==== 
 * signature: LRESULT __stdcall CallWindowProcW(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f004a56-5f004a5b
 * thunk to: USER32.DLL::CallWindowProcW
 */

LRESULT CallWindowProcW(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallWindowProcW(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return LVar1;
}


