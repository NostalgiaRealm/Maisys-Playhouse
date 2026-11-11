
/* ==== WINMM.DLL::midiOutOpen @ 12027c62 ==== 
 * signature: MMRESULT __stdcall midiOutOpen(LPHMIDIOUT phmo, UINT uDeviceID, DWORD_PTR dwCallback, DWORD_PTR dwInstance, DWORD fdwOpen)
 * body: 12027c62-12027c67
 * thunk to: WINMM.DLL::midiOutOpen
 */

MMRESULT midiOutOpen(LPHMIDIOUT phmo,UINT uDeviceID,DWORD_PTR dwCallback,DWORD_PTR dwInstance,
                    DWORD fdwOpen)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = midiOutOpen(phmo,uDeviceID,dwCallback,dwInstance,fdwOpen);
  return MVar1;
}


