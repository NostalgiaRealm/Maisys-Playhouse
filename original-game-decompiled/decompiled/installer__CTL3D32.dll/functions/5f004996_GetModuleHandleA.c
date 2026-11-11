
/* ==== KERNEL32.DLL::GetModuleHandleA @ 5f004996 ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 5f004996-5f00499b
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


