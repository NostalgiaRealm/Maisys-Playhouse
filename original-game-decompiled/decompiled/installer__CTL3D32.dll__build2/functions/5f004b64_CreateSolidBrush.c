
/* ==== GDI32.DLL::CreateSolidBrush @ 5f004b64 ==== 
 * signature: HBRUSH __stdcall CreateSolidBrush(COLORREF color)
 * body: 5f004b64-5f004b69
 * thunk to: GDI32.DLL::CreateSolidBrush
 */

HBRUSH CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}


