
/* ==== USER32.DLL::DefWindowProcA @ 140183ac ==== 
 * signature: LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 140183ac-140183b1
 * thunk to: USER32.DLL::DefWindowProcA
 */

LRESULT DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140183ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


