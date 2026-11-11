
/* ==== WINMM.DLL::timeEndPeriod @ 12027c7a ==== 
 * signature: MMRESULT __stdcall timeEndPeriod(UINT uPeriod)
 * body: 12027c7a-12027c7f
 * thunk to: WINMM.DLL::timeEndPeriod
 */

MMRESULT timeEndPeriod(UINT uPeriod)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = timeEndPeriod(uPeriod);
  return MVar1;
}


