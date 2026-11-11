
/* ==== USER32.DLL::DefWindowProcA @ 12027bd8 ==== 
 * signature: LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 12027bd8-12027bdd
 * thunk to: USER32.DLL::DefWindowProcA
 */

LRESULT DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


