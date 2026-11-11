
/* ==== KERNEL32.DLL::GetCurrentThread @ 140238ce ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 140238ce-140238d3
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


