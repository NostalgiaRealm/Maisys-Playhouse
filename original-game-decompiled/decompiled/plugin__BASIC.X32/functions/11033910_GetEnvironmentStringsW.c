
/* ==== KERNEL32.DLL::GetEnvironmentStringsW @ 11033910 ==== 
 * signature: LPWCH __stdcall GetEnvironmentStringsW(void)
 * body: 11033910-11033915
 * thunk to: KERNEL32.DLL::GetEnvironmentStringsW
 */

LPWCH GetEnvironmentStringsW(void)

{
  LPWCH pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = GetEnvironmentStringsW();
  return pWVar1;
}


