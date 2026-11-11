
/* ==== USER32.DLL::GetForegroundWindow @ 004a2620 ==== 
 * signature: HWND __stdcall GetForegroundWindow(void)
 * body: 004a2620-004a2625
 * thunk to: USER32.DLL::GetForegroundWindow
 */

HWND GetForegroundWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetForegroundWindow();
  return pHVar1;
}


