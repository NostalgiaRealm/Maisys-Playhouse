
/* ==== KERNEL32.DLL::GetCurrentProcess @ 004a2230 ==== 
 * signature: HANDLE __stdcall GetCurrentProcess(void)
 * body: 004a2230-004a2235
 * thunk to: KERNEL32.DLL::GetCurrentProcess
 */

HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}


