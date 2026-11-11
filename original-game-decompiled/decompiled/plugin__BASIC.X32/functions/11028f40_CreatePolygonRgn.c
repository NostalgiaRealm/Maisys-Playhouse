
/* ==== GDI32.DLL::CreatePolygonRgn @ 11028f40 ==== 
 * signature: HRGN __stdcall CreatePolygonRgn(POINT * pptl, int cPoint, int iMode)
 * body: 11028f40-11028f45
 * thunk to: GDI32.DLL::CreatePolygonRgn
 */

HRGN CreatePolygonRgn(POINT *pptl,int cPoint,int iMode)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePolygonRgn(pptl,cPoint,iMode);
  return pHVar1;
}


