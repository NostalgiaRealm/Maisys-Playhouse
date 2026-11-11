
/* ==== KERNEL32.DLL::GetProcessVersion @ 004a2224 ==== 
 * signature: DWORD __stdcall GetProcessVersion(DWORD ProcessId)
 * body: 004a2224-004a2229
 * thunk to: KERNEL32.DLL::GetProcessVersion
 */

DWORD GetProcessVersion(DWORD ProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetProcessVersion(ProcessId);
  return DVar1;
}


