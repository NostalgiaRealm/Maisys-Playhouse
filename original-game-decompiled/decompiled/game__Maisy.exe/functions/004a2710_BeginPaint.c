
/* ==== USER32.DLL::BeginPaint @ 004a2710 ==== 
 * signature: HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
 * body: 004a2710-004a2715
 * thunk to: USER32.DLL::BeginPaint
 */

HDC BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}


