
/* ==== WINMM.DLL::waveOutReset @ 0048ca8c ==== 
 * signature: MMRESULT __stdcall waveOutReset(HWAVEOUT hwo)
 * body: 0048ca8c-0048ca91
 * thunk to: WINMM.DLL::waveOutReset
 */

MMRESULT waveOutReset(HWAVEOUT hwo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutReset(hwo);
  return MVar1;
}


