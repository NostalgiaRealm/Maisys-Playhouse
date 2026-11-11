
/* ==== WINMM.DLL::waveOutPrepareHeader @ 0048ca80 ==== 
 * signature: MMRESULT __stdcall waveOutPrepareHeader(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh)
 * body: 0048ca80-0048ca85
 * thunk to: WINMM.DLL::waveOutPrepareHeader
 */

MMRESULT waveOutPrepareHeader(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutPrepareHeader(hwo,pwh,cbwh);
  return MVar1;
}


