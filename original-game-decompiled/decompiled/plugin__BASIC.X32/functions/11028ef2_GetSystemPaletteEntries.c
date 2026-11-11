
/* ==== GDI32.DLL::GetSystemPaletteEntries @ 11028ef2 ==== 
 * signature: UINT __stdcall GetSystemPaletteEntries(HDC hdc, UINT iStart, UINT cEntries, LPPALETTEENTRY pPalEntries)
 * body: 11028ef2-11028ef7
 * thunk to: GDI32.DLL::GetSystemPaletteEntries
 */

UINT GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028ef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}


