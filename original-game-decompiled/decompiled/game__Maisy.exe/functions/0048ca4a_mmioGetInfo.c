
/* ==== WINMM.DLL::mmioGetInfo @ 0048ca4a ==== 
 * signature: MMRESULT __stdcall mmioGetInfo(HMMIO hmmio, LPMMIOINFO pmmioinfo, UINT fuInfo)
 * body: 0048ca4a-0048ca4f
 * thunk to: WINMM.DLL::mmioGetInfo
 */

MMRESULT mmioGetInfo(HMMIO hmmio,LPMMIOINFO pmmioinfo,UINT fuInfo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mmioGetInfo(hmmio,pmmioinfo,fuInfo);
  return MVar1;
}


