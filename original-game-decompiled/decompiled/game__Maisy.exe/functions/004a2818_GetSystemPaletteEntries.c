
/* ==== GDI32.DLL::GetSystemPaletteEntries @ 004a2818 ==== 
 * signature: UINT __stdcall GetSystemPaletteEntries(HDC hdc, UINT iStart, UINT cEntries, LPPALETTEENTRY pPalEntries)
 * body: 004a2818-004a281d
 * thunk to: GDI32.DLL::GetSystemPaletteEntries
 */

UINT GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}


