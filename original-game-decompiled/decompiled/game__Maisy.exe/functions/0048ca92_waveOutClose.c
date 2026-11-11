
/* ==== WINMM.DLL::waveOutClose @ 0048ca92 ==== 
 * signature: MMRESULT __stdcall waveOutClose(HWAVEOUT hwo)
 * body: 0048ca92-0048ca97
 * thunk to: WINMM.DLL::waveOutClose
 */

MMRESULT waveOutClose(HWAVEOUT hwo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutClose(hwo);
  return MVar1;
}


