
/* ==== KERNEL32.DLL::GetCurrentProcess @ 1402389e ==== 
 * signature: HANDLE __stdcall GetCurrentProcess(void)
 * body: 1402389e-140238a3
 * thunk to: KERNEL32.DLL::GetCurrentProcess
 */

HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402389e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}


