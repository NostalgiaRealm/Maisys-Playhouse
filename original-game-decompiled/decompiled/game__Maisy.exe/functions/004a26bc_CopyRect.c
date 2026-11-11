
/* ==== USER32.DLL::CopyRect @ 004a26bc ==== 
 * signature: BOOL __stdcall CopyRect(LPRECT lprcDst, RECT * lprcSrc)
 * body: 004a26bc-004a26c1
 * thunk to: USER32.DLL::CopyRect
 */

BOOL CopyRect(LPRECT lprcDst,RECT *lprcSrc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CopyRect(lprcDst,lprcSrc);
  return BVar1;
}


