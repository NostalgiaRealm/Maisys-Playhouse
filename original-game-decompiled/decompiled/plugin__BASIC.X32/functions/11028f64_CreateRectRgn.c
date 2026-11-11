
/* ==== GDI32.DLL::CreateRectRgn @ 11028f64 ==== 
 * signature: HRGN __stdcall CreateRectRgn(int x1, int y1, int x2, int y2)
 * body: 11028f64-11028f69
 * thunk to: GDI32.DLL::CreateRectRgn
 */

HRGN CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgn(x1,y1,x2,y2);
  return pHVar1;
}


