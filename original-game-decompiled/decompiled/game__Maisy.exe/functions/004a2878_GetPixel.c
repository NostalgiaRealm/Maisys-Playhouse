
/* ==== GDI32.DLL::GetPixel @ 004a2878 ==== 
 * signature: COLORREF __stdcall GetPixel(HDC hdc, int x, int y)
 * body: 004a2878-004a287d
 * thunk to: GDI32.DLL::GetPixel
 */

COLORREF GetPixel(HDC hdc,int x,int y)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetPixel(hdc,x,y);
  return CVar1;
}


