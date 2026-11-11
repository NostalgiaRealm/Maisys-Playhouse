
/* ==== KERNEL32.DLL::WaitForSingleObject @ 004a2158 ==== 
 * signature: DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)
 * body: 004a2158-004a215d
 * thunk to: KERNEL32.DLL::WaitForSingleObject
 */

DWORD WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}


