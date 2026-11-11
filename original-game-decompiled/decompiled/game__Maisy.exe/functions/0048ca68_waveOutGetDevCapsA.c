
/* ==== WINMM.DLL::waveOutGetDevCapsA @ 0048ca68 ==== 
 * signature: MMRESULT __stdcall waveOutGetDevCapsA(UINT_PTR uDeviceID, LPWAVEOUTCAPSA pwoc, UINT cbwoc)
 * body: 0048ca68-0048ca6d
 * thunk to: WINMM.DLL::waveOutGetDevCapsA
 */

MMRESULT waveOutGetDevCapsA(UINT_PTR uDeviceID,LPWAVEOUTCAPSA pwoc,UINT cbwoc)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutGetDevCapsA(uDeviceID,pwoc,cbwoc);
  return MVar1;
}


