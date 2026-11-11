
/* ==== KERNEL32.DLL::Sleep @ 11033958 ==== 
 * signature: void __stdcall Sleep(DWORD dwMilliseconds)
 * body: 11033958-1103395d
 * thunk to: KERNEL32.DLL::Sleep
 */

void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x11033958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


