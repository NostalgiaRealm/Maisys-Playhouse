
/* ==== USER32.DLL::GetWindowTextLengthA @ 5f004ace ==== 
 * signature: int __stdcall GetWindowTextLengthA(HWND hWnd)
 * body: 5f004ace-5f004ad3
 * thunk to: USER32.DLL::GetWindowTextLengthA
 */

int GetWindowTextLengthA(HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextLengthA(hWnd);
  return iVar1;
}


