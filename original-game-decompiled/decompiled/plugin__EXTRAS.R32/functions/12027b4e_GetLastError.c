
/* ==== KERNEL32.DLL::GetLastError @ 12027b4e ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 12027b4e-12027b53
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


