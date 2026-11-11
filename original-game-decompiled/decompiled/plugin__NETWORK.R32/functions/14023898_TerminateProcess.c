
/* ==== KERNEL32.DLL::TerminateProcess @ 14023898 ==== 
 * signature: BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
 * body: 14023898-1402389d
 * thunk to: KERNEL32.DLL::TerminateProcess
 */

BOOL TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}


