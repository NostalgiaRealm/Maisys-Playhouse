
/* ==== USER32.DLL::EndDialog @ 004a2506 ==== 
 * signature: BOOL __stdcall EndDialog(HWND hDlg, INT_PTR nResult)
 * body: 004a2506-004a250b
 * thunk to: USER32.DLL::EndDialog
 */

BOOL EndDialog(HWND hDlg,INT_PTR nResult)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndDialog(hDlg,nResult);
  return BVar1;
}


