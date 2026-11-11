
/* ==== KERNEL32.DLL::GetCurrentThread @ 1103389e ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 1103389e-110338a3
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103389e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


