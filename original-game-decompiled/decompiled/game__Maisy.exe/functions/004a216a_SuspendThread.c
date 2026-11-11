
/* ==== KERNEL32.DLL::SuspendThread @ 004a216a ==== 
 * signature: DWORD __stdcall SuspendThread(HANDLE hThread)
 * body: 004a216a-004a216f
 * thunk to: KERNEL32.DLL::SuspendThread
 */

DWORD SuspendThread(HANDLE hThread)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a216a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SuspendThread(hThread);
  return DVar1;
}


