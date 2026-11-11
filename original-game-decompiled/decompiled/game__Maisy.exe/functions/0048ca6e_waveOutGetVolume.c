
/* ==== WINMM.DLL::waveOutGetVolume @ 0048ca6e ==== 
 * signature: MMRESULT __stdcall waveOutGetVolume(HWAVEOUT hwo, LPDWORD pdwVolume)
 * body: 0048ca6e-0048ca73
 * thunk to: WINMM.DLL::waveOutGetVolume
 */

MMRESULT waveOutGetVolume(HWAVEOUT hwo,LPDWORD pdwVolume)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutGetVolume(hwo,pdwVolume);
  return MVar1;
}


