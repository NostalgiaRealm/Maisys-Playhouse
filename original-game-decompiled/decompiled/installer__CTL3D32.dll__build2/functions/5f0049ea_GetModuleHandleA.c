
/* ==== KERNEL32.DLL::GetModuleHandleA @ 5f0049ea ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 5f0049ea-5f0049ef
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


