
/* ==== GDI32.DLL::SetTextAlign @ 004a2902 ==== 
 * signature: UINT __stdcall SetTextAlign(HDC hdc, UINT align)
 * body: 004a2902-004a2907
 * thunk to: GDI32.DLL::SetTextAlign
 */

UINT SetTextAlign(HDC hdc,UINT align)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTextAlign(hdc,align);
  return UVar1;
}


