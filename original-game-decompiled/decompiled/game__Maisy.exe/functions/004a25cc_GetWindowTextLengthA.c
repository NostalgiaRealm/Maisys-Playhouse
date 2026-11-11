
/* ==== USER32.DLL::GetWindowTextLengthA @ 004a25cc ==== 
 * signature: int __stdcall GetWindowTextLengthA(HWND hWnd)
 * body: 004a25cc-004a25d1
 * thunk to: USER32.DLL::GetWindowTextLengthA
 */

int GetWindowTextLengthA(HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextLengthA(hWnd);
  return iVar1;
}


