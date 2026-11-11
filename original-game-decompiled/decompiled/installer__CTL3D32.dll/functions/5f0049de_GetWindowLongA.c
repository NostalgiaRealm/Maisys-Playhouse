
/* ==== USER32.DLL::GetWindowLongA @ 5f0049de ==== 
 * signature: LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
 * body: 5f0049de-5f0049e3
 * thunk to: USER32.DLL::GetWindowLongA
 */

LONG GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


