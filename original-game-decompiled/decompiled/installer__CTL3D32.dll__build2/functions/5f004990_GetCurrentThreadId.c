
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 5f004990 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 5f004990-5f004995
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


