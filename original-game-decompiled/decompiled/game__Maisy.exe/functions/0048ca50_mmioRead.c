
/* ==== WINMM.DLL::mmioRead @ 0048ca50 ==== 
 * signature: LONG __stdcall mmioRead(HMMIO hmmio, HPSTR pch, LONG cch)
 * body: 0048ca50-0048ca55
 * thunk to: WINMM.DLL::mmioRead
 */

LONG mmioRead(HMMIO hmmio,HPSTR pch,LONG cch)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = mmioRead(hmmio,pch,cch);
  return LVar1;
}


