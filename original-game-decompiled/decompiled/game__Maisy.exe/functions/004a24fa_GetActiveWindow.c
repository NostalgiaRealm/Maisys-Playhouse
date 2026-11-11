
/* ==== USER32.DLL::GetActiveWindow @ 004a24fa ==== 
 * signature: HWND __stdcall GetActiveWindow(void)
 * body: 004a24fa-004a24ff
 * thunk to: USER32.DLL::GetActiveWindow
 */

HWND GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}


