
/* ==== GDI32.DLL::CreateHatchBrush @ 004a2986 ==== 
 * signature: HBRUSH __stdcall CreateHatchBrush(int iHatch, COLORREF color)
 * body: 004a2986-004a298b
 * thunk to: GDI32.DLL::CreateHatchBrush
 */

HBRUSH CreateHatchBrush(int iHatch,COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateHatchBrush(iHatch,color);
  return pHVar1;
}


