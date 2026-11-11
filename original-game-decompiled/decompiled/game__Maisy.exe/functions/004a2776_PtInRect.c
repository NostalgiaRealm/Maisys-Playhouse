
/* ==== USER32.DLL::PtInRect @ 004a2776 ==== 
 * signature: BOOL __stdcall PtInRect(RECT * lprc, POINT pt)
 * body: 004a2776-004a277b
 * thunk to: USER32.DLL::PtInRect
 */

BOOL PtInRect(RECT *lprc,POINT pt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtInRect(lprc,pt);
  return BVar1;
}


