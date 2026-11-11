
/* ==== USER32.DLL::SetCapture @ 004a24ca ==== 
 * signature: HWND __stdcall SetCapture(HWND hWnd)
 * body: 004a24ca-004a24cf
 * thunk to: USER32.DLL::SetCapture
 */

HWND SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}


