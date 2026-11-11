
/* ==== USER32.DLL::SetActiveWindow @ 004a24f4 ==== 
 * signature: HWND __stdcall SetActiveWindow(HWND hWnd)
 * body: 004a24f4-004a24f9
 * thunk to: USER32.DLL::SetActiveWindow
 */

HWND SetActiveWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetActiveWindow(hWnd);
  return pHVar1;
}


