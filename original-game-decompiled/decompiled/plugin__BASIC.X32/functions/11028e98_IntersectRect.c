
/* ==== USER32.DLL::IntersectRect @ 11028e98 ==== 
 * signature: BOOL __stdcall IntersectRect(LPRECT lprcDst, RECT * lprcSrc1, RECT * lprcSrc2)
 * body: 11028e98-11028e9d
 * thunk to: USER32.DLL::IntersectRect
 */

BOOL IntersectRect(LPRECT lprcDst,RECT *lprcSrc1,RECT *lprcSrc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IntersectRect(lprcDst,lprcSrc1,lprcSrc2);
  return BVar1;
}


