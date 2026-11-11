
/* ==== GDI32.DLL::CreatePen @ 004a297a ==== 
 * signature: HPEN __stdcall CreatePen(int iStyle, int cWidth, COLORREF color)
 * body: 004a297a-004a297f
 * thunk to: GDI32.DLL::CreatePen
 */

HPEN CreatePen(int iStyle,int cWidth,COLORREF color)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a297a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePen(iStyle,cWidth,color);
  return pHVar1;
}


