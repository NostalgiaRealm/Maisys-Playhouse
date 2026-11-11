
/* ==== USER32.DLL::GetWindowLongA @ 14018394 ==== 
 * signature: LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
 * body: 14018394-14018399
 * thunk to: USER32.DLL::GetWindowLongA
 */

LONG GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14018394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


