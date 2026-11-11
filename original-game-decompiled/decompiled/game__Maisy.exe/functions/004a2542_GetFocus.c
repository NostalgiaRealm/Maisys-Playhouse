
/* ==== USER32.DLL::GetFocus @ 004a2542 ==== 
 * signature: HWND __stdcall GetFocus(void)
 * body: 004a2542-004a2547
 * thunk to: USER32.DLL::GetFocus
 */

HWND GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}


