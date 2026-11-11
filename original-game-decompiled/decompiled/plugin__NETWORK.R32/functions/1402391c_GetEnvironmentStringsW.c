
/* ==== KERNEL32.DLL::GetEnvironmentStringsW @ 1402391c ==== 
 * signature: LPWCH __stdcall GetEnvironmentStringsW(void)
 * body: 1402391c-14023921
 * thunk to: KERNEL32.DLL::GetEnvironmentStringsW
 */

LPWCH GetEnvironmentStringsW(void)

{
  LPWCH pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402391c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = GetEnvironmentStringsW();
  return pWVar1;
}


