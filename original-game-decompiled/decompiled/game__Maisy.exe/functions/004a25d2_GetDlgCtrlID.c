
/* ==== USER32.DLL::GetDlgCtrlID @ 004a25d2 ==== 
 * signature: int __stdcall GetDlgCtrlID(HWND hWnd)
 * body: 004a25d2-004a25d7
 * thunk to: USER32.DLL::GetDlgCtrlID
 */

int GetDlgCtrlID(HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDlgCtrlID(hWnd);
  return iVar1;
}


