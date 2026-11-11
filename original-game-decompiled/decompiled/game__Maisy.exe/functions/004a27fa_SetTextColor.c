
/* ==== GDI32.DLL::SetTextColor @ 004a27fa ==== 
 * signature: COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
 * body: 004a27fa-004a27ff
 * thunk to: GDI32.DLL::SetTextColor
 */

COLORREF SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}


