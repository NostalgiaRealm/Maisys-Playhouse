
/* ==== KERNEL32.DLL::GetCurrentThread @ 00493d00 ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 00493d00-00493d05
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00493d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


