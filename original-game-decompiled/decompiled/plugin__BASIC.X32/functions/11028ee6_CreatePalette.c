
/* ==== GDI32.DLL::CreatePalette @ 11028ee6 ==== 
 * signature: HPALETTE __stdcall CreatePalette(LOGPALETTE * plpal)
 * body: 11028ee6-11028eeb
 * thunk to: GDI32.DLL::CreatePalette
 */

HPALETTE CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}


