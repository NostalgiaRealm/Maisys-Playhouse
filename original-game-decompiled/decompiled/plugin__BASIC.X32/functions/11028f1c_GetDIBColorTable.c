
/* ==== GDI32.DLL::GetDIBColorTable @ 11028f1c ==== 
 * signature: UINT __stdcall GetDIBColorTable(HDC hdc, UINT iStart, UINT cEntries, RGBQUAD * prgbq)
 * body: 11028f1c-11028f21
 * thunk to: GDI32.DLL::GetDIBColorTable
 */

UINT GetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


