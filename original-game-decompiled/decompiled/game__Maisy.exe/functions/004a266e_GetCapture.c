
/* ==== USER32.DLL::GetCapture @ 004a266e ==== 
 * signature: HWND __stdcall GetCapture(void)
 * body: 004a266e-004a2673
 * thunk to: USER32.DLL::GetCapture
 */

HWND GetCapture(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a266e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCapture();
  return pHVar1;
}


