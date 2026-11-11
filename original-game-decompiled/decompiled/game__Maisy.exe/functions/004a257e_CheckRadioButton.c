
/* ==== USER32.DLL::CheckRadioButton @ 004a257e ==== 
 * signature: BOOL __stdcall CheckRadioButton(HWND hDlg, int nIDFirstButton, int nIDLastButton, int nIDCheckButton)
 * body: 004a257e-004a2583
 * thunk to: USER32.DLL::CheckRadioButton
 */

BOOL CheckRadioButton(HWND hDlg,int nIDFirstButton,int nIDLastButton,int nIDCheckButton)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a257e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CheckRadioButton(hDlg,nIDFirstButton,nIDLastButton,nIDCheckButton);
  return BVar1;
}


