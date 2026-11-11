
/* ==== KERNEL32.DLL::FreeEnvironmentStringsW @ 1103390a ==== 
 * signature: BOOL __stdcall FreeEnvironmentStringsW(LPWCH param_1)
 * body: 1103390a-1103390f
 * thunk to: KERNEL32.DLL::FreeEnvironmentStringsW
 */

BOOL FreeEnvironmentStringsW(LPWCH param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103390a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeEnvironmentStringsW(param_1);
  return BVar1;
}


