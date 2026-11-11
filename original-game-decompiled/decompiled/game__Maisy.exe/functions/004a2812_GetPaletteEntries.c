
/* ==== GDI32.DLL::GetPaletteEntries @ 004a2812 ==== 
 * signature: UINT __stdcall GetPaletteEntries(HPALETTE hpal, UINT iStart, UINT cEntries, LPPALETTEENTRY pPalEntries)
 * body: 004a2812-004a2817
 * thunk to: GDI32.DLL::GetPaletteEntries
 */

UINT GetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPaletteEntries(hpal,iStart,cEntries,pPalEntries);
  return UVar1;
}


