
/* ==== KERNEL32.DLL::GetCurrentThread @ 110298e0 ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 110298e0-110298e5
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110298e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


