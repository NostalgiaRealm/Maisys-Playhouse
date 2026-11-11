
/* ==== USER32.DLL::GetFocus @ 5f004ae6 ==== 
 * signature: HWND __stdcall GetFocus(void)
 * body: 5f004ae6-5f004aeb
 * thunk to: USER32.DLL::GetFocus
 */

HWND GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}


