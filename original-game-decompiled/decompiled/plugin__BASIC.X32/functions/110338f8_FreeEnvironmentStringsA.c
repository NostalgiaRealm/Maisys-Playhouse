
/* ==== KERNEL32.DLL::FreeEnvironmentStringsA @ 110338f8 ==== 
 * signature: BOOL __stdcall FreeEnvironmentStringsA(LPCH param_1)
 * body: 110338f8-110338fd
 * thunk to: KERNEL32.DLL::FreeEnvironmentStringsA
 */

BOOL FreeEnvironmentStringsA(LPCH param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110338f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeEnvironmentStringsA(param_1);
  return BVar1;
}


