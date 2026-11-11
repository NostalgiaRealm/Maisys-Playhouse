
/* ==== USER32.DLL::DefFrameProcA @ 004a2728 ==== 
 * signature: LRESULT __stdcall DefFrameProcA(HWND hWnd, HWND hWndMDIClient, UINT uMsg, WPARAM wParam, LPARAM lParam)
 * body: 004a2728-004a272d
 * thunk to: USER32.DLL::DefFrameProcA
 */

LRESULT DefFrameProcA(HWND hWnd,HWND hWndMDIClient,UINT uMsg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefFrameProcA(hWnd,hWndMDIClient,uMsg,wParam,lParam);
  return LVar1;
}


