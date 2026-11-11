
/* ==== USER32.DLL::OffsetRect @ 5f004a20 ==== 
 * signature: BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
 * body: 5f004a20-5f004a25
 * thunk to: USER32.DLL::OffsetRect
 */

BOOL OffsetRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetRect(lprc,dx,dy);
  return BVar1;
}


