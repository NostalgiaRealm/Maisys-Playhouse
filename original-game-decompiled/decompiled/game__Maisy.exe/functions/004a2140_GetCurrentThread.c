
/* ==== KERNEL32.DLL::GetCurrentThread @ 004a2140 ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 004a2140-004a2145
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


