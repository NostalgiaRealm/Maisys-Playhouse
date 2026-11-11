
/* ==== KERNEL32.DLL::QueryPerformanceCounter @ 004a20c2 ==== 
 * signature: BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER * lpPerformanceCount)
 * body: 004a20c2-004a20c7
 * thunk to: KERNEL32.DLL::QueryPerformanceCounter
 */

BOOL QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}


