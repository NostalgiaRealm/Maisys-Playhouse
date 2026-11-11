
/* ==== USER32.DLL::EqualRect @ 004a26ce ==== 
 * signature: BOOL __stdcall EqualRect(RECT * lprc1, RECT * lprc2)
 * body: 004a26ce-004a26d3
 * thunk to: USER32.DLL::EqualRect
 */

BOOL EqualRect(RECT *lprc1,RECT *lprc2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EqualRect(lprc1,lprc2);
  return BVar1;
}


