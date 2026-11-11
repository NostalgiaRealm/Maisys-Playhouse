
/* ==== USER32.DLL::DefDlgProcA @ 5f004a44 ==== 
 * signature: LRESULT __stdcall DefDlgProcA(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 5f004a44-5f004a49
 * thunk to: USER32.DLL::DefDlgProcA
 */

LRESULT DefDlgProcA(HWND hDlg,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefDlgProcA(hDlg,Msg,wParam,lParam);
  return LVar1;
}


