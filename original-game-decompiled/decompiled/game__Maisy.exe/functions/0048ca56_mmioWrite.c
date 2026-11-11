
/* ==== WINMM.DLL::mmioWrite @ 0048ca56 ==== 
 * signature: LONG __stdcall mmioWrite(HMMIO hmmio, char * pch, LONG cch)
 * body: 0048ca56-0048ca5b
 * thunk to: WINMM.DLL::mmioWrite
 */

LONG mmioWrite(HMMIO hmmio,char *pch,LONG cch)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = mmioWrite(hmmio,pch,cch);
  return LVar1;
}


