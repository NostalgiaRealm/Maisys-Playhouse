
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 00493cf0 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 00493cf0-00493cf5
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00493cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


