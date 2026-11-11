
/* ==== USER32.DLL::GetFocus @ 5f004a8c ==== 
 * signature: HWND __stdcall GetFocus(void)
 * body: 5f004a8c-5f004a91
 * thunk to: USER32.DLL::GetFocus
 */

HWND GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}


