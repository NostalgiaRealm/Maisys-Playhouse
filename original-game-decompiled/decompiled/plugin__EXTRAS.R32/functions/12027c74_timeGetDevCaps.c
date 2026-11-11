
/* ==== WINMM.DLL::timeGetDevCaps @ 12027c74 ==== 
 * signature: MMRESULT __stdcall timeGetDevCaps(LPTIMECAPS ptc, UINT cbtc)
 * body: 12027c74-12027c79
 * thunk to: WINMM.DLL::timeGetDevCaps
 */

MMRESULT timeGetDevCaps(LPTIMECAPS ptc,UINT cbtc)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = timeGetDevCaps(ptc,cbtc);
  return MVar1;
}


