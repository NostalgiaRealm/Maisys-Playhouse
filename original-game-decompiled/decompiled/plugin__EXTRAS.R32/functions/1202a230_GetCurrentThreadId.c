
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 1202a230 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 1202a230-1202a235
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1202a230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


