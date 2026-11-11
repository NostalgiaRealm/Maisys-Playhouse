
/* ==== GDI32.DLL::AnimatePalette @ 004a284e ==== 
 * signature: BOOL __stdcall AnimatePalette(HPALETTE hPal, UINT iStartIndex, UINT cEntries, PALETTEENTRY * ppe)
 * body: 004a284e-004a2853
 * thunk to: GDI32.DLL::AnimatePalette
 */

BOOL AnimatePalette(HPALETTE hPal,UINT iStartIndex,UINT cEntries,PALETTEENTRY *ppe)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a284e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AnimatePalette(hPal,iStartIndex,cEntries,ppe);
  return BVar1;
}


