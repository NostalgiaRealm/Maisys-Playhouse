
/* ==== WINMM.DLL::timeBeginPeriod @ 12027c6e ==== 
 * signature: MMRESULT __stdcall timeBeginPeriod(UINT uPeriod)
 * body: 12027c6e-12027c73
 * thunk to: WINMM.DLL::timeBeginPeriod
 */

MMRESULT timeBeginPeriod(UINT uPeriod)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = timeBeginPeriod(uPeriod);
  return MVar1;
}


