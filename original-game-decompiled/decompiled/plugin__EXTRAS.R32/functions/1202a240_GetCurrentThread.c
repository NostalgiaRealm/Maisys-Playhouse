
/* ==== KERNEL32.DLL::GetCurrentThread @ 1202a240 ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 1202a240-1202a245
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1202a240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


