
/* ==== GDI32.DLL::GetPaletteEntries @ 11028eec ==== 
 * signature: UINT __stdcall GetPaletteEntries(HPALETTE hpal, UINT iStart, UINT cEntries, LPPALETTEENTRY pPalEntries)
 * body: 11028eec-11028ef1
 * thunk to: GDI32.DLL::GetPaletteEntries
 */

UINT GetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPaletteEntries(hpal,iStart,cEntries,pPalEntries);
  return UVar1;
}


