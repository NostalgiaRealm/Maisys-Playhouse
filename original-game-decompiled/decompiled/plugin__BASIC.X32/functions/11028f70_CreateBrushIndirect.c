
/* ==== GDI32.DLL::CreateBrushIndirect @ 11028f70 ==== 
 * signature: HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH * plbrush)
 * body: 11028f70-11028f75
 * thunk to: GDI32.DLL::CreateBrushIndirect
 */

HBRUSH CreateBrushIndirect(LOGBRUSH *plbrush)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBrushIndirect(plbrush);
  return pHVar1;
}


