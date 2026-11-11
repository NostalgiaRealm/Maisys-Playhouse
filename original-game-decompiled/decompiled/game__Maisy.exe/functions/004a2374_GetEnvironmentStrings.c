
/* ==== KERNEL32.DLL::GetEnvironmentStrings @ 004a2374 ==== 
 * signature: LPCH __stdcall GetEnvironmentStrings(void)
 * body: 004a2374-004a2379
 * thunk to: KERNEL32.DLL::GetEnvironmentStrings
 */

LPCH GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}


