
/* ==== GDI32.DLL::SetBkColor @ 004a27ee ==== 
 * signature: COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
 * body: 004a27ee-004a27f3
 * thunk to: GDI32.DLL::SetBkColor
 */

COLORREF SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}


