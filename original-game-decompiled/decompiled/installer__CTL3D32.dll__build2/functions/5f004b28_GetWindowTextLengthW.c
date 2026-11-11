
/* ==== USER32.DLL::GetWindowTextLengthW @ 5f004b28 ==== 
 * signature: int __stdcall GetWindowTextLengthW(HWND hWnd)
 * body: 5f004b28-5f004b2d
 * thunk to: USER32.DLL::GetWindowTextLengthW
 */

int GetWindowTextLengthW(HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextLengthW(hWnd);
  return iVar1;
}


