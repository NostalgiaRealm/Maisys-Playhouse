
/* ==== WINMM.DLL::waveOutWrite @ 0048ca7a ==== 
 * signature: MMRESULT __stdcall waveOutWrite(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh)
 * body: 0048ca7a-0048ca7f
 * thunk to: WINMM.DLL::waveOutWrite
 */

MMRESULT waveOutWrite(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutWrite(hwo,pwh,cbwh);
  return MVar1;
}


