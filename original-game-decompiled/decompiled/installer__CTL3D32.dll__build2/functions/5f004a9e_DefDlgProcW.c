
/* ==== USER32.DLL::DefDlgProcW @ 5f004a9e ==== 
 * signature: LRESULT __stdcall DefDlgProcW(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f004a9e-5f004aa3
 * thunk to: USER32.DLL::DefDlgProcW
 */

LRESULT DefDlgProcW(HWND hDlg,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefDlgProcW(hDlg,Msg,wParam,lParam);
  return LVar1;
}


