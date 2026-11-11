
/* ==== GDI32.DLL::CreateRoundRectRgn @ 11028f5e ==== 
 * signature: HRGN __stdcall CreateRoundRectRgn(int x1, int y1, int x2, int y2, int w, int h)
 * body: 11028f5e-11028f63
 * thunk to: GDI32.DLL::CreateRoundRectRgn
 */

HRGN CreateRoundRectRgn(int x1,int y1,int x2,int y2,int w,int h)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRoundRectRgn(x1,y1,x2,y2,w,h);
  return pHVar1;
}


