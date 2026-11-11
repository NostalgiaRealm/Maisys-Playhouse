
/* ==== USER32.DLL::SetFocus @ 004a25e4 ==== 
 * signature: HWND __stdcall SetFocus(HWND hWnd)
 * body: 004a25e4-004a25e9
 * thunk to: USER32.DLL::SetFocus
 */

HWND SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}


