
/* ==== USER32.DLL::SetSysColors @ 004a245e ==== 
 * signature: BOOL __stdcall SetSysColors(int cElements, INT * lpaElements, COLORREF * lpaRgbValues)
 * body: 004a245e-004a2463
 * thunk to: USER32.DLL::SetSysColors
 */

BOOL SetSysColors(int cElements,INT *lpaElements,COLORREF *lpaRgbValues)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a245e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetSysColors(cElements,lpaElements,lpaRgbValues);
  return BVar1;
}


