
/* ==== KERNEL32.DLL::GetCurrentThread @ 1401af90 ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 1401af90-1401af95
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1401af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


