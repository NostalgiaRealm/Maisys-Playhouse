
/* ==== USER32.DLL::GetDesktopWindow @ 004a274c ==== 
 * signature: HWND __stdcall GetDesktopWindow(void)
 * body: 004a274c-004a2751
 * thunk to: USER32.DLL::GetDesktopWindow
 */

HWND GetDesktopWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a274c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDesktopWindow();
  return pHVar1;
}


