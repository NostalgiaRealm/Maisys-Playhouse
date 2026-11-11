
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 11033874 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 11033874-11033879
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


