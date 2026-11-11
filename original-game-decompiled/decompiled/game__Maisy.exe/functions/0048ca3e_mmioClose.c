
/* ==== WINMM.DLL::mmioClose @ 0048ca3e ==== 
 * signature: MMRESULT __stdcall mmioClose(HMMIO hmmio, UINT fuClose)
 * body: 0048ca3e-0048ca43
 * thunk to: WINMM.DLL::mmioClose
 */

MMRESULT mmioClose(HMMIO hmmio,UINT fuClose)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mmioClose(hmmio,fuClose);
  return MVar1;
}


