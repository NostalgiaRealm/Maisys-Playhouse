
/* ==== KERNEL32.DLL::GetLastError @ 004a20aa ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 004a20aa-004a20af
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


