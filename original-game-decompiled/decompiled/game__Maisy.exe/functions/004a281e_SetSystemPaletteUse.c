
/* ==== GDI32.DLL::SetSystemPaletteUse @ 004a281e ==== 
 * signature: UINT __stdcall SetSystemPaletteUse(HDC hdc, UINT use)
 * body: 004a281e-004a2823
 * thunk to: GDI32.DLL::SetSystemPaletteUse
 */

UINT SetSystemPaletteUse(HDC hdc,UINT use)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a281e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetSystemPaletteUse(hdc,use);
  return UVar1;
}


