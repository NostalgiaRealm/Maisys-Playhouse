
/* ==== USER32.DLL::EndPaint @ 5f004ab0 ==== 
 * signature: BOOL __stdcall EndPaint(HWND hWnd, PAINTSTRUCT * lpPaint)
 * body: 5f004ab0-5f004ab5
 * thunk to: USER32.DLL::EndPaint
 */

BOOL EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}


