
/* ==== USER32.DLL::GetWindowDC @ 004a270a ==== 
 * signature: HDC __stdcall GetWindowDC(HWND hWnd)
 * body: 004a270a-004a270f
 * thunk to: USER32.DLL::GetWindowDC
 */

HDC GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a270a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}


