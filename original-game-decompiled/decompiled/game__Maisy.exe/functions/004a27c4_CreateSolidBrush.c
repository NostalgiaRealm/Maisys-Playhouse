
/* ==== GDI32.DLL::CreateSolidBrush @ 004a27c4 ==== 
 * signature: HBRUSH __stdcall CreateSolidBrush(COLORREF color)
 * body: 004a27c4-004a27c9
 * thunk to: GDI32.DLL::CreateSolidBrush
 */

HBRUSH CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}


