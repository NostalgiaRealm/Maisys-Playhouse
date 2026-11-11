
/* ==== GDI32.DLL::SetBkColor @ 5f004ae0 ==== 
 * signature: COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
 * body: 5f004ae0-5f004ae5
 * thunk to: GDI32.DLL::SetBkColor
 */

COLORREF SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}


