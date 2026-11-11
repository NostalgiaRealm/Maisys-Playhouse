
/* ==== USER32.DLL::OffsetRect @ 11028e9e ==== 
 * signature: BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
 * body: 11028e9e-11028ea3
 * thunk to: USER32.DLL::OffsetRect
 */

BOOL OffsetRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetRect(lprc,dx,dy);
  return BVar1;
}


