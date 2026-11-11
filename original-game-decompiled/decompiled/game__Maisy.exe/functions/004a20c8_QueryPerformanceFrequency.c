
/* ==== KERNEL32.DLL::QueryPerformanceFrequency @ 004a20c8 ==== 
 * signature: BOOL __stdcall QueryPerformanceFrequency(LARGE_INTEGER * lpFrequency)
 * body: 004a20c8-004a20cd
 * thunk to: KERNEL32.DLL::QueryPerformanceFrequency
 */

BOOL QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryPerformanceFrequency(lpFrequency);
  return BVar1;
}


