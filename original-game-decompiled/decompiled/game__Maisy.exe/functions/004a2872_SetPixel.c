
/* ==== GDI32.DLL::SetPixel @ 004a2872 ==== 
 * signature: COLORREF __stdcall SetPixel(HDC hdc, int x, int y, COLORREF color)
 * body: 004a2872-004a2877
 * thunk to: GDI32.DLL::SetPixel
 */

COLORREF SetPixel(HDC hdc,int x,int y,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetPixel(hdc,x,y,color);
  return CVar1;
}


