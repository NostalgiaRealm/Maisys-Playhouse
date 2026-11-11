
/* ==== WINMM.DLL::waveOutUnprepareHeader @ 0048ca86 ==== 
 * signature: MMRESULT __stdcall waveOutUnprepareHeader(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh)
 * body: 0048ca86-0048ca8b
 * thunk to: WINMM.DLL::waveOutUnprepareHeader
 */

MMRESULT waveOutUnprepareHeader(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutUnprepareHeader(hwo,pwh,cbwh);
  return MVar1;
}


