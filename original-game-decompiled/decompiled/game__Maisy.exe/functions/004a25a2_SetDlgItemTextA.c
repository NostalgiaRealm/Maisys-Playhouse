
/* ==== USER32.DLL::SetDlgItemTextA @ 004a25a2 ==== 
 * signature: BOOL __stdcall SetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPCSTR lpString)
 * body: 004a25a2-004a25a7
 * thunk to: USER32.DLL::SetDlgItemTextA
 */

BOOL SetDlgItemTextA(HWND hDlg,int nIDDlgItem,LPCSTR lpString)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetDlgItemTextA(hDlg,nIDDlgItem,lpString);
  return BVar1;
}


