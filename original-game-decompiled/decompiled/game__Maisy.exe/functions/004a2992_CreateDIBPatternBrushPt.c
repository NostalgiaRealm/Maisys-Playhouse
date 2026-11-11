
/* ==== GDI32.DLL::CreateDIBPatternBrushPt @ 004a2992 ==== 
 * signature: HBRUSH __stdcall CreateDIBPatternBrushPt(void * lpPackedDIB, UINT iUsage)
 * body: 004a2992-004a2997
 * thunk to: GDI32.DLL::CreateDIBPatternBrushPt
 */

HBRUSH CreateDIBPatternBrushPt(void *lpPackedDIB,UINT iUsage)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBPatternBrushPt(lpPackedDIB,iUsage);
  return pHVar1;
}


