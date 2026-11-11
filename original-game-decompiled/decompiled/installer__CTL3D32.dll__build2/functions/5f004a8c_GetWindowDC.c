
/* ==== USER32.DLL::GetWindowDC @ 5f004a8c ==== 
 * signature: HDC __stdcall GetWindowDC(HWND hWnd)
 * body: 5f004a8c-5f004a91
 * thunk to: USER32.DLL::GetWindowDC
 */

HDC GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}


