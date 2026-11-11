
/* ==== GDI32.DLL::CreatePatternBrush @ 11028f34 ==== 
 * signature: HBRUSH __stdcall CreatePatternBrush(HBITMAP hbm)
 * body: 11028f34-11028f39
 * thunk to: GDI32.DLL::CreatePatternBrush
 */

HBRUSH CreatePatternBrush(HBITMAP hbm)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePatternBrush(hbm);
  return pHVar1;
}


