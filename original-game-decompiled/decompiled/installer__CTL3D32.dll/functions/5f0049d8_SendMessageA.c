
/* ==== USER32.DLL::SendMessageA @ 5f0049d8 ==== 
 * signature: LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f0049d8-5f0049dd
 * thunk to: USER32.DLL::SendMessageA
 */

LRESULT SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


