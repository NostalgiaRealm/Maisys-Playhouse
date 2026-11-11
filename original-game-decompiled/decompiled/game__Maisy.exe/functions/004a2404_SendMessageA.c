
/* ==== USER32.DLL::SendMessageA @ 004a2404 ==== 
 * signature: LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 004a2404-004a2409
 * thunk to: USER32.DLL::SendMessageA
 */

LRESULT SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


