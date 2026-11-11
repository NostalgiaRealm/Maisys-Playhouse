
/* ==== USER32.DLL::DefWindowProcA @ 004a2632 ==== 
 * signature: LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 004a2632-004a2637
 * thunk to: USER32.DLL::DefWindowProcA
 */

LRESULT DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


