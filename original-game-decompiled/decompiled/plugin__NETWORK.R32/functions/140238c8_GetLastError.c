
/* ==== KERNEL32.DLL::GetLastError @ 140238c8 ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 140238c8-140238cd
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


