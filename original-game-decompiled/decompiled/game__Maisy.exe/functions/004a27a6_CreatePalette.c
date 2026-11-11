
/* ==== GDI32.DLL::CreatePalette @ 004a27a6 ==== 
 * signature: HPALETTE __stdcall CreatePalette(LOGPALETTE * plpal)
 * body: 004a27a6-004a27ab
 * thunk to: GDI32.DLL::CreatePalette
 */

HPALETTE CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}


