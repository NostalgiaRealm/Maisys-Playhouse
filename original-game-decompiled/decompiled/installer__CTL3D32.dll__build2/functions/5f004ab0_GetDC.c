
/* ==== USER32.DLL::GetDC @ 5f004ab0 ==== 
 * signature: HDC __stdcall GetDC(HWND hWnd)
 * body: 5f004ab0-5f004ab5
 * thunk to: USER32.DLL::GetDC
 */

HDC GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}


