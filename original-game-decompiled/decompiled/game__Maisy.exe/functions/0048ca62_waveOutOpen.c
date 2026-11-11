
/* ==== WINMM.DLL::waveOutOpen @ 0048ca62 ==== 
 * signature: MMRESULT __stdcall waveOutOpen(LPHWAVEOUT phwo, UINT uDeviceID, LPCWAVEFORMATEX pwfx, DWORD_PTR dwCallback, DWORD_PTR dwInstance, DWORD fdwOpen)
 * body: 0048ca62-0048ca67
 * thunk to: WINMM.DLL::waveOutOpen
 */

MMRESULT waveOutOpen(LPHWAVEOUT phwo,UINT uDeviceID,LPCWAVEFORMATEX pwfx,DWORD_PTR dwCallback,
                    DWORD_PTR dwInstance,DWORD fdwOpen)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutOpen(phwo,uDeviceID,pwfx,dwCallback,dwInstance,fdwOpen);
  return MVar1;
}


