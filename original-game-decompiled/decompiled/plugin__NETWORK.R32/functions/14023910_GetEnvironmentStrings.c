
/* ==== KERNEL32.DLL::GetEnvironmentStrings @ 14023910 ==== 
 * signature: LPCH __stdcall GetEnvironmentStrings(void)
 * body: 14023910-14023915
 * thunk to: KERNEL32.DLL::GetEnvironmentStrings
 */

LPCH GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}


