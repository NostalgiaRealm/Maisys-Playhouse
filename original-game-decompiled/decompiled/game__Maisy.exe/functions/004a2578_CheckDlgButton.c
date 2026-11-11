
/* ==== USER32.DLL::CheckDlgButton @ 004a2578 ==== 
 * signature: BOOL __stdcall CheckDlgButton(HWND hDlg, int nIDButton, UINT uCheck)
 * body: 004a2578-004a257d
 * thunk to: USER32.DLL::CheckDlgButton
 */

BOOL CheckDlgButton(HWND hDlg,int nIDButton,UINT uCheck)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CheckDlgButton(hDlg,nIDButton,uCheck);
  return BVar1;
}


