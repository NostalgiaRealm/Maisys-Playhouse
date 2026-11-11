
/* ==== WINMM.DLL::midiOutShortMsg @ 12027c5c ==== 
 * signature: MMRESULT __stdcall midiOutShortMsg(HMIDIOUT hmo, DWORD dwMsg)
 * body: 12027c5c-12027c61
 * thunk to: WINMM.DLL::midiOutShortMsg
 */

MMRESULT midiOutShortMsg(HMIDIOUT hmo,DWORD dwMsg)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = midiOutShortMsg(hmo,dwMsg);
  return MVar1;
}


