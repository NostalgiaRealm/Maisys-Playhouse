
/* ==== WINMM.DLL::mmioSeek @ 0048ca44 ==== 
 * signature: LONG __stdcall mmioSeek(HMMIO hmmio, LONG lOffset, int iOrigin)
 * body: 0048ca44-0048ca49
 * thunk to: WINMM.DLL::mmioSeek
 */

LONG mmioSeek(HMMIO hmmio,LONG lOffset,int iOrigin)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = mmioSeek(hmmio,lOffset,iOrigin);
  return LVar1;
}


