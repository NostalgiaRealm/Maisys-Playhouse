
/* ==== USER32.DLL::DefWindowProcW @ 5f004a98 ==== 
 * signature: LRESULT __stdcall DefWindowProcW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f004a98-5f004a9d
 * thunk to: USER32.DLL::DefWindowProcW
 */

LRESULT DefWindowProcW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcW(hWnd,Msg,wParam,lParam);
  return LVar1;
}


