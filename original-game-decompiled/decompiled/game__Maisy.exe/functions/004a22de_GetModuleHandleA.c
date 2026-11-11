
/* ==== KERNEL32.DLL::GetModuleHandleA @ 004a22de ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 004a22de-004a22e3
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a22de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


