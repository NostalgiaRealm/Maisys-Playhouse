
/* ==== USER32.DLL::SetRectEmpty @ 004a2746 ==== 
 * signature: BOOL __stdcall SetRectEmpty(LPRECT lprc)
 * body: 004a2746-004a274b
 * thunk to: USER32.DLL::SetRectEmpty
 */

BOOL SetRectEmpty(LPRECT lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetRectEmpty(lprc);
  return BVar1;
}


