
/* ==== WINMM.DLL::waveOutSetVolume @ 0048ca74 ==== 
 * signature: MMRESULT __stdcall waveOutSetVolume(HWAVEOUT hwo, DWORD dwVolume)
 * body: 0048ca74-0048ca79
 * thunk to: WINMM.DLL::waveOutSetVolume
 */

MMRESULT waveOutSetVolume(HWAVEOUT hwo,DWORD dwVolume)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutSetVolume(hwo,dwVolume);
  return MVar1;
}


