
/* ==== USER32.DLL::SetWindowLongW @ 5f004a1a ==== 
 * signature: LONG __stdcall SetWindowLongW(HWND hWnd, int nIndex, LONG dwNewLong)
 * body: 5f004a1a-5f004a1f
 * thunk to: USER32.DLL::SetWindowLongW
 */

LONG SetWindowLongW(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongW(hWnd,nIndex,dwNewLong);
  return LVar1;
}


