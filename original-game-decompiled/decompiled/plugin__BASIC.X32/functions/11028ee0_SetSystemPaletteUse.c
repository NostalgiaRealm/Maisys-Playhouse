
/* ==== GDI32.DLL::SetSystemPaletteUse @ 11028ee0 ==== 
 * signature: UINT __stdcall SetSystemPaletteUse(HDC hdc, UINT use)
 * body: 11028ee0-11028ee5
 * thunk to: GDI32.DLL::SetSystemPaletteUse
 */

UINT SetSystemPaletteUse(HDC hdc,UINT use)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetSystemPaletteUse(hdc,use);
  return UVar1;
}


