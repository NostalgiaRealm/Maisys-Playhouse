
/* ==== WINMM.DLL::timeSetEvent @ 12027c80 ==== 
 * signature: MMRESULT __stdcall timeSetEvent(UINT uDelay, UINT uResolution, LPTIMECALLBACK fptc, DWORD_PTR dwUser, UINT fuEvent)
 * body: 12027c80-12027c85
 * thunk to: WINMM.DLL::timeSetEvent
 */

MMRESULT timeSetEvent(UINT uDelay,UINT uResolution,LPTIMECALLBACK fptc,DWORD_PTR dwUser,UINT fuEvent
                     )

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = timeSetEvent(uDelay,uResolution,fptc,dwUser,fuEvent);
  return MVar1;
}


