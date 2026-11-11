
/* ==== USER32.DLL::GetDC @ 004a2458 ==== 
 * signature: HDC __stdcall GetDC(HWND hWnd)
 * body: 004a2458-004a245d
 * thunk to: USER32.DLL::GetDC
 */

HDC GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}


