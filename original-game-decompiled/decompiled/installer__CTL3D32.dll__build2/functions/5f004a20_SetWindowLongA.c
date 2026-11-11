
/* ==== USER32.DLL::SetWindowLongA @ 5f004a20 ==== 
 * signature: LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
 * body: 5f004a20-5f004a25
 * thunk to: USER32.DLL::SetWindowLongA
 */

LONG SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}


