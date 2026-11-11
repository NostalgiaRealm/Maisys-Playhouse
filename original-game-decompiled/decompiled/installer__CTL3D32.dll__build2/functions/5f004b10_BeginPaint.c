
/* ==== USER32.DLL::BeginPaint @ 5f004b10 ==== 
 * signature: HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
 * body: 5f004b10-5f004b15
 * thunk to: USER32.DLL::BeginPaint
 */

HDC BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}


