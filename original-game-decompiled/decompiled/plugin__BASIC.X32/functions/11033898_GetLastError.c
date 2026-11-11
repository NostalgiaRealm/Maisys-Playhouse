
/* ==== KERNEL32.DLL::GetLastError @ 11033898 ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 11033898-1103389d
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


