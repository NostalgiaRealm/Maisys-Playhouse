
/* ==== USER32.DLL::GetDlgItemTextA @ 004a2590 ==== 
 * signature: UINT __stdcall GetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPSTR lpString, int cchMax)
 * body: 004a2590-004a2595
 * thunk to: USER32.DLL::GetDlgItemTextA
 */

UINT GetDlgItemTextA(HWND hDlg,int nIDDlgItem,LPSTR lpString,int cchMax)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDlgItemTextA(hDlg,nIDDlgItem,lpString,cchMax);
  return UVar1;
}


