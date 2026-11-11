
/* ==== USER32.DLL::GetDlgItemInt @ 004a258a ==== 
 * signature: UINT __stdcall GetDlgItemInt(HWND hDlg, int nIDDlgItem, BOOL * lpTranslated, BOOL bSigned)
 * body: 004a258a-004a258f
 * thunk to: USER32.DLL::GetDlgItemInt
 */

UINT GetDlgItemInt(HWND hDlg,int nIDDlgItem,BOOL *lpTranslated,BOOL bSigned)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a258a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDlgItemInt(hDlg,nIDDlgItem,lpTranslated,bSigned);
  return UVar1;
}


