
/* ==== USER32.DLL::SetDlgItemInt @ 004a259c ==== 
 * signature: BOOL __stdcall SetDlgItemInt(HWND hDlg, int nIDDlgItem, UINT uValue, BOOL bSigned)
 * body: 004a259c-004a25a1
 * thunk to: USER32.DLL::SetDlgItemInt
 */

BOOL SetDlgItemInt(HWND hDlg,int nIDDlgItem,UINT uValue,BOOL bSigned)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a259c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetDlgItemInt(hDlg,nIDDlgItem,uValue,bSigned);
  return BVar1;
}


