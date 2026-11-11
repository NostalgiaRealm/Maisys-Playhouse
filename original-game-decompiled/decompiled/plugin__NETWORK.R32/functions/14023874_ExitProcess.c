
/* ==== KERNEL32.DLL::ExitProcess @ 14023874 ==== 
 * signature: noreturn void __stdcall ExitProcess(UINT uExitCode)
 * body: 14023874-14023879
 * thunk to: KERNEL32.DLL::ExitProcess
 */

void ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x14023874. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


