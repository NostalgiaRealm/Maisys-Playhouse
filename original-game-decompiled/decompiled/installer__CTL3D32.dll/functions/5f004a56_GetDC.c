
/* ==== USER32.DLL::GetDC @ 5f004a56 ==== 
 * signature: HDC __stdcall GetDC(HWND hWnd)
 * body: 5f004a56-5f004a5b
 * thunk to: USER32.DLL::GetDC
 */

HDC GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}


