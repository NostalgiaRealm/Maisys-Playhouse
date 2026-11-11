
/* ==== KERNEL32.DLL::ExitProcess @ 004a22f6 ==== 
 * signature: noreturn void __stdcall ExitProcess(UINT uExitCode)
 * body: 004a22f6-004a22fb
 * thunk to: KERNEL32.DLL::ExitProcess
 */

void ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004a22f6. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


