
/* ==== USER32.DLL::EndPaint @ 5f004b0a ==== 
 * signature: BOOL __stdcall EndPaint(HWND hWnd, PAINTSTRUCT * lpPaint)
 * body: 5f004b0a-5f004b0f
 * thunk to: USER32.DLL::EndPaint
 */

BOOL EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}


