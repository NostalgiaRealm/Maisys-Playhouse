
/* ==== KERNEL32.DLL::GlobalMemoryStatus @ 004a2056 ==== 
 * signature: void __stdcall GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)
 * body: 004a2056-004a205b
 * thunk to: KERNEL32.DLL::GlobalMemoryStatus
 */

void GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)

{
                    /* WARNING: Could not recover jumptable at 0x004a2056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GlobalMemoryStatus(lpBuffer);
  return;
}


