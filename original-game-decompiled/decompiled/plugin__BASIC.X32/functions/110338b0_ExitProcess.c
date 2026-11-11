
/* ==== KERNEL32.DLL::ExitProcess @ 110338b0 ==== 
 * signature: noreturn void __stdcall ExitProcess(UINT uExitCode)
 * body: 110338b0-110338b5
 * thunk to: KERNEL32.DLL::ExitProcess
 */

void ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x110338b0. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


