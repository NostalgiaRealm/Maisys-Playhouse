
/* ==== GDI32.DLL::ExtCreatePen @ 004a2980 ==== 
 * signature: HPEN __stdcall ExtCreatePen(DWORD iPenStyle, DWORD cWidth, LOGBRUSH * plbrush, DWORD cStyle, DWORD * pstyle)
 * body: 004a2980-004a2985
 * thunk to: GDI32.DLL::ExtCreatePen
 */

HPEN ExtCreatePen(DWORD iPenStyle,DWORD cWidth,LOGBRUSH *plbrush,DWORD cStyle,DWORD *pstyle)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ExtCreatePen(iPenStyle,cWidth,plbrush,cStyle,pstyle);
  return pHVar1;
}


