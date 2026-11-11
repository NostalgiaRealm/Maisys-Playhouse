
/* ==== GDI32.DLL::CreateSolidBrush @ 11028f7c ==== 
 * signature: HBRUSH __stdcall CreateSolidBrush(COLORREF color)
 * body: 11028f7c-11028f81
 * thunk to: GDI32.DLL::CreateSolidBrush
 */

HBRUSH CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}


