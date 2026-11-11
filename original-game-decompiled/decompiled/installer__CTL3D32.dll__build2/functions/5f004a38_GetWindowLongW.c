
/* ==== USER32.DLL::GetWindowLongW @ 5f004a38 ==== 
 * signature: LONG __stdcall GetWindowLongW(HWND hWnd, int nIndex)
 * body: 5f004a38-5f004a3d
 * thunk to: USER32.DLL::GetWindowLongW
 */

LONG GetWindowLongW(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongW(hWnd,nIndex);
  return LVar1;
}


