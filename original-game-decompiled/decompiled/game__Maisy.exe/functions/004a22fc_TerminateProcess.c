
/* ==== KERNEL32.DLL::TerminateProcess @ 004a22fc ==== 
 * signature: BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
 * body: 004a22fc-004a2301
 * thunk to: KERNEL32.DLL::TerminateProcess
 */

BOOL TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a22fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}


