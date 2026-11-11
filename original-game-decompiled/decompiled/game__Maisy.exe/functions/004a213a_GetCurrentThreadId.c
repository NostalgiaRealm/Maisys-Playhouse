
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 004a213a ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 004a213a-004a213f
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a213a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


