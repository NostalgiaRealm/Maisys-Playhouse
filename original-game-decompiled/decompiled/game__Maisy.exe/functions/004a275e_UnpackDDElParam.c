
/* ==== USER32.DLL::UnpackDDElParam @ 004a275e ==== 
 * signature: BOOL __stdcall UnpackDDElParam(UINT msg, LPARAM lParam, PUINT_PTR puiLo, PUINT_PTR puiHi)
 * body: 004a275e-004a2763
 * thunk to: USER32.DLL::UnpackDDElParam
 */

BOOL UnpackDDElParam(UINT msg,LPARAM lParam,PUINT_PTR puiLo,PUINT_PTR puiHi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a275e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnpackDDElParam(msg,lParam,puiLo,puiHi);
  return BVar1;
}


