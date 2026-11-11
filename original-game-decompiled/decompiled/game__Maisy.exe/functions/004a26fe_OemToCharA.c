
/* ==== USER32.DLL::OemToCharA @ 004a26fe ==== 
 * signature: BOOL __stdcall OemToCharA(LPCSTR pSrc, LPSTR pDst)
 * body: 004a26fe-004a2703
 * thunk to: USER32.DLL::OemToCharA
 */

BOOL OemToCharA(LPCSTR pSrc,LPSTR pDst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OemToCharA(pSrc,pDst);
  return BVar1;
}


