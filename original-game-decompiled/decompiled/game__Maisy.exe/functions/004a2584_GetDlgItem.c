
/* ==== USER32.DLL::GetDlgItem @ 004a2584 ==== 
 * signature: HWND __stdcall GetDlgItem(HWND hDlg, int nIDDlgItem)
 * body: 004a2584-004a2589
 * thunk to: USER32.DLL::GetDlgItem
 */

HWND GetDlgItem(HWND hDlg,int nIDDlgItem)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDlgItem(hDlg,nIDDlgItem);
  return pHVar1;
}


