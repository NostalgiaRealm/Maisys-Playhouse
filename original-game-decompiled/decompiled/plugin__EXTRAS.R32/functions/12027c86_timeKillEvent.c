
/* ==== WINMM.DLL::timeKillEvent @ 12027c86 ==== 
 * signature: MMRESULT __stdcall timeKillEvent(UINT uTimerID)
 * body: 12027c86-12027c8b
 * thunk to: WINMM.DLL::timeKillEvent
 */

MMRESULT timeKillEvent(UINT uTimerID)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = timeKillEvent(uTimerID);
  return MVar1;
}


