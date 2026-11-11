
/* ==== USER32.DLL::CharToOemA @ 004a26f8 ==== 
 * signature: BOOL __stdcall CharToOemA(LPCSTR pSrc, LPSTR pDst)
 * body: 004a26f8-004a26fd
 * thunk to: USER32.DLL::CharToOemA
 */

BOOL CharToOemA(LPCSTR pSrc,LPSTR pDst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CharToOemA(pSrc,pDst);
  return BVar1;
}


