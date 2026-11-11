
/* ==== GDI32.DLL::SetTextColor @ 5f004b52 ==== 
 * signature: COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
 * body: 5f004b52-5f004b57
 * thunk to: GDI32.DLL::SetTextColor
 */

COLORREF SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}


