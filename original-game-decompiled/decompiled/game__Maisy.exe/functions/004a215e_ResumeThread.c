
/* ==== KERNEL32.DLL::ResumeThread @ 004a215e ==== 
 * signature: DWORD __stdcall ResumeThread(HANDLE hThread)
 * body: 004a215e-004a2163
 * thunk to: KERNEL32.DLL::ResumeThread
 */

DWORD ResumeThread(HANDLE hThread)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a215e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ResumeThread(hThread);
  return DVar1;
}


