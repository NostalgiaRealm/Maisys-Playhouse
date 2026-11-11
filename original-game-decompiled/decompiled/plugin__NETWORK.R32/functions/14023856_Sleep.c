
/* ==== KERNEL32.DLL::Sleep @ 14023856 ==== 
 * signature: void __stdcall Sleep(DWORD dwMilliseconds)
 * body: 14023856-1402385b
 * thunk to: KERNEL32.DLL::Sleep
 */

void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x14023856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


