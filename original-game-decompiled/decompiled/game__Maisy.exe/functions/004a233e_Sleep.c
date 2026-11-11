
/* ==== KERNEL32.DLL::Sleep @ 004a233e ==== 
 * signature: void __stdcall Sleep(DWORD dwMilliseconds)
 * body: 004a233e-004a2343
 * thunk to: KERNEL32.DLL::Sleep
 */

void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x004a233e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


