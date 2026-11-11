
/* ==== GDI32.DLL::SetDIBColorTable @ 11028f16 ==== 
 * signature: UINT __stdcall SetDIBColorTable(HDC hdc, UINT iStart, UINT cEntries, RGBQUAD * prgbq)
 * body: 11028f16-11028f1b
 * thunk to: GDI32.DLL::SetDIBColorTable
 */

UINT SetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


