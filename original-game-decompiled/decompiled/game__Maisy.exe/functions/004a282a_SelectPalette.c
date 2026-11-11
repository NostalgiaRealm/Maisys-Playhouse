
/* ==== GDI32.DLL::SelectPalette @ 004a282a ==== 
 * signature: HPALETTE __stdcall SelectPalette(HDC hdc, HPALETTE hPal, BOOL bForceBkgd)
 * body: 004a282a-004a282f
 * thunk to: GDI32.DLL::SelectPalette
 */

HPALETTE SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a282a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SelectPalette(hdc,hPal,bForceBkgd);
  return pHVar1;
}


