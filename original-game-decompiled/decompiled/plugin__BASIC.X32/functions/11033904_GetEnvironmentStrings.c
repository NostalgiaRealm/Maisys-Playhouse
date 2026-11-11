
/* ==== KERNEL32.DLL::GetEnvironmentStrings @ 11033904 ==== 
 * signature: LPCH __stdcall GetEnvironmentStrings(void)
 * body: 11033904-11033909
 * thunk to: KERNEL32.DLL::GetEnvironmentStrings
 */

LPCH GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}


