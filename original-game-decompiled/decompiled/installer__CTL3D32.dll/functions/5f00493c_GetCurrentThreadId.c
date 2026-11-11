
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 5f00493c ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 5f00493c-5f004941
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f00493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


