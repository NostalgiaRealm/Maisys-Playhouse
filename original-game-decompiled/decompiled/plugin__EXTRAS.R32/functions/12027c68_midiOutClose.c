
/* ==== WINMM.DLL::midiOutClose @ 12027c68 ==== 
 * signature: MMRESULT __stdcall midiOutClose(HMIDIOUT hmo)
 * body: 12027c68-12027c6d
 * thunk to: WINMM.DLL::midiOutClose
 */

MMRESULT midiOutClose(HMIDIOUT hmo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = midiOutClose(hmo);
  return MVar1;
}


