
/* ==== USER32.DLL::GetTopWindow @ 004a267a ==== 
 * signature: HWND __stdcall GetTopWindow(HWND hWnd)
 * body: 004a267a-004a267f
 * thunk to: USER32.DLL::GetTopWindow
 */

HWND GetTopWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a267a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetTopWindow(hWnd);
  return pHVar1;
}


