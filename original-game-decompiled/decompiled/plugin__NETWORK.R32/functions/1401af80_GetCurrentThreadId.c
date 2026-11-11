
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 1401af80 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 1401af80-1401af85
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1401af80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


