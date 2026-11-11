
/* ==== GDI32.DLL::AnimatePalette @ 11028ec8 ==== 
 * signature: BOOL __stdcall AnimatePalette(HPALETTE hPal, UINT iStartIndex, UINT cEntries, PALETTEENTRY * ppe)
 * body: 11028ec8-11028ecd
 * thunk to: GDI32.DLL::AnimatePalette
 */

BOOL AnimatePalette(HPALETTE hPal,UINT iStartIndex,UINT cEntries,PALETTEENTRY *ppe)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AnimatePalette(hPal,iStartIndex,cEntries,ppe);
  return BVar1;
}


