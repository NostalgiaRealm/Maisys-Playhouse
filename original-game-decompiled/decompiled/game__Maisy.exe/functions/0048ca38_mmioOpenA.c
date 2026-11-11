
/* ==== WINMM.DLL::mmioOpenA @ 0048ca38 ==== 
 * signature: HMMIO __stdcall mmioOpenA(LPSTR pszFileName, LPMMIOINFO pmmioinfo, DWORD fdwOpen)
 * body: 0048ca38-0048ca3d
 * thunk to: WINMM.DLL::mmioOpenA
 */

HMMIO mmioOpenA(LPSTR pszFileName,LPMMIOINFO pmmioinfo,DWORD fdwOpen)

{
  HMMIO pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = mmioOpenA(pszFileName,pmmioinfo,fdwOpen);
  return pHVar1;
}


