
/* ==== USER32.DLL::DefMDIChildProcA @ 004a2740 ==== 
 * signature: LRESULT __stdcall DefMDIChildProcA(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
 * body: 004a2740-004a2745
 * thunk to: USER32.DLL::DefMDIChildProcA
 */

LRESULT DefMDIChildProcA(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefMDIChildProcA(hWnd,uMsg,wParam,lParam);
  return LVar1;
}


