
/* ==== USER32.DLL::SendMessageW @ 5f004a32 ==== 
 * signature: LRESULT __stdcall SendMessageW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f004a32-5f004a37
 * thunk to: USER32.DLL::SendMessageW
 */

LRESULT SendMessageW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageW(hWnd,Msg,wParam,lParam);
  return LVar1;
}


