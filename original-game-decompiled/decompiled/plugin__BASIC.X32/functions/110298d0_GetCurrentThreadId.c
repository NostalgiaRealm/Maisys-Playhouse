
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 110298d0 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 110298d0-110298d5
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110298d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


