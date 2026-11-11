
/* ==== KERNEL32.DLL::ExitThread @ 004a2308 ==== 
 * signature: noreturn void __stdcall ExitThread(DWORD dwExitCode)
 * body: 004a2308-004a230d
 * thunk to: KERNEL32.DLL::ExitThread
 */

void ExitThread(DWORD dwExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004a2308. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitThread(dwExitCode);
  return;
}


