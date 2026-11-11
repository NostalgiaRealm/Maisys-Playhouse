
/* ==== USER32.DLL::SendDlgItemMessageA @ 004a2596 ==== 
 * signature: LRESULT __stdcall SendDlgItemMessageA(HWND hDlg, int nIDDlgItem, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 004a2596-004a259b
 * thunk to: USER32.DLL::SendDlgItemMessageA
 */

LRESULT SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendDlgItemMessageA(hDlg,nIDDlgItem,Msg,wParam,lParam);
  return LVar1;
}


