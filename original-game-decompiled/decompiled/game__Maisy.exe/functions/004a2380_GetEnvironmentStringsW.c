
/* ==== KERNEL32.DLL::GetEnvironmentStringsW @ 004a2380 ==== 
 * signature: LPWCH __stdcall GetEnvironmentStringsW(void)
 * body: 004a2380-004a2385
 * thunk to: KERNEL32.DLL::GetEnvironmentStringsW
 */

LPWCH GetEnvironmentStringsW(void)

{
  LPWCH pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = GetEnvironmentStringsW();
  return pWVar1;
}


