
/* ==== GDI32.DLL::SelectPalette @ 11028ec2 ==== 
 * signature: HPALETTE __stdcall SelectPalette(HDC hdc, HPALETTE hPal, BOOL bForceBkgd)
 * body: 11028ec2-11028ec7
 * thunk to: GDI32.DLL::SelectPalette
 */

HPALETTE SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SelectPalette(hdc,hPal,bForceBkgd);
  return pHVar1;
}


