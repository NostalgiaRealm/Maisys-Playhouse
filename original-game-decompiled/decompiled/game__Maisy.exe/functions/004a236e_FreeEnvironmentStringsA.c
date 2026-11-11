
/* ==== KERNEL32.DLL::FreeEnvironmentStringsA @ 004a236e ==== 
 * signature: BOOL __stdcall FreeEnvironmentStringsA(LPCH param_1)
 * body: 004a236e-004a2373
 * thunk to: KERNEL32.DLL::FreeEnvironmentStringsA
 */

BOOL FreeEnvironmentStringsA(LPCH param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a236e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeEnvironmentStringsA(param_1);
  return BVar1;
}


