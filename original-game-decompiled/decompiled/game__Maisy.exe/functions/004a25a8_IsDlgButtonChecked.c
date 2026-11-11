
/* ==== USER32.DLL::IsDlgButtonChecked @ 004a25a8 ==== 
 * signature: UINT __stdcall IsDlgButtonChecked(HWND hDlg, int nIDButton)
 * body: 004a25a8-004a25ad
 * thunk to: USER32.DLL::IsDlgButtonChecked
 */

UINT IsDlgButtonChecked(HWND hDlg,int nIDButton)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = IsDlgButtonChecked(hDlg,nIDButton);
  return UVar1;
}


