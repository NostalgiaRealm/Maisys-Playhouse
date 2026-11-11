
/* ==== USER32.DLL::GetNextDlgTabItem @ 004a250c ==== 
 * signature: HWND __stdcall GetNextDlgTabItem(HWND hDlg, HWND hCtl, BOOL bPrevious)
 * body: 004a250c-004a2511
 * thunk to: USER32.DLL::GetNextDlgTabItem
 */

HWND GetNextDlgTabItem(HWND hDlg,HWND hCtl,BOOL bPrevious)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a250c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetNextDlgTabItem(hDlg,hCtl,bPrevious);
  return pHVar1;
}


