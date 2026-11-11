
/* ==== GDI32.DLL::CreatePatternBrush @ 004a298c ==== 
 * signature: HBRUSH __stdcall CreatePatternBrush(HBITMAP hbm)
 * body: 004a298c-004a2991
 * thunk to: GDI32.DLL::CreatePatternBrush
 */

HBRUSH CreatePatternBrush(HBITMAP hbm)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePatternBrush(hbm);
  return pHVar1;
}


