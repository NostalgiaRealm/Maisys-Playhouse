
/* ==== USER32.DLL::ReuseDDElParam @ 004a2758 ==== 
 * signature: LPARAM __stdcall ReuseDDElParam(LPARAM lParam, UINT msgIn, UINT msgOut, UINT_PTR uiLo, UINT_PTR uiHi)
 * body: 004a2758-004a275d
 * thunk to: USER32.DLL::ReuseDDElParam
 */

LPARAM ReuseDDElParam(LPARAM lParam,UINT msgIn,UINT msgOut,UINT_PTR uiLo,UINT_PTR uiHi)

{
  LPARAM LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = ReuseDDElParam(lParam,msgIn,msgOut,uiLo,uiHi);
  return LVar1;
}


