
/* ==== KERNEL32.DLL::GetCurrentProcess @ 110338bc ==== 
 * signature: HANDLE __stdcall GetCurrentProcess(void)
 * body: 110338bc-110338c1
 * thunk to: KERNEL32.DLL::GetCurrentProcess
 */

HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110338bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}


