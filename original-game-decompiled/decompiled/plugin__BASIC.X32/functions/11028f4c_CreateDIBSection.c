
/* ==== GDI32.DLL::CreateDIBSection @ 11028f4c ==== 
 * signature: HBITMAP __stdcall CreateDIBSection(HDC hdc, BITMAPINFO * lpbmi, UINT usage, void * * ppvBits, HANDLE hSection, DWORD offset)
 * body: 11028f4c-11028f51
 * thunk to: GDI32.DLL::CreateDIBSection
 */

HBITMAP CreateDIBSection(HDC hdc,BITMAPINFO *lpbmi,UINT usage,void **ppvBits,HANDLE hSection,
                        DWORD offset)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDIBSection(hdc,lpbmi,usage,ppvBits,hSection,offset);
  return pHVar1;
}


