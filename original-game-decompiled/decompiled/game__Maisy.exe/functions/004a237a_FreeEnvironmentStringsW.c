
/* ==== KERNEL32.DLL::FreeEnvironmentStringsW @ 004a237a ==== 
 * signature: BOOL __stdcall FreeEnvironmentStringsW(LPWCH param_1)
 * body: 004a237a-004a237f
 * thunk to: KERNEL32.DLL::FreeEnvironmentStringsW
 */

BOOL FreeEnvironmentStringsW(LPWCH param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a237a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeEnvironmentStringsW(param_1);
  return BVar1;
}


