
/* ==== GDI32.DLL::SetDIBColorTable @ 004a2884 ==== 
 * signature: UINT __stdcall SetDIBColorTable(HDC hdc, UINT iStart, UINT cEntries, RGBQUAD * prgbq)
 * body: 004a2884-004a2889
 * thunk to: GDI32.DLL::SetDIBColorTable
 */

UINT SetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetDIBColorTable(hdc,iStart,cEntries,prgbq);
  return UVar1;
}


