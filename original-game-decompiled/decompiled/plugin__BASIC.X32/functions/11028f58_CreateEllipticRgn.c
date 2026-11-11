
/* ==== GDI32.DLL::CreateEllipticRgn @ 11028f58 ==== 
 * signature: HRGN __stdcall CreateEllipticRgn(int x1, int y1, int x2, int y2)
 * body: 11028f58-11028f5d
 * thunk to: GDI32.DLL::CreateEllipticRgn
 */

HRGN CreateEllipticRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateEllipticRgn(x1,y1,x2,y2);
  return pHVar1;
}


