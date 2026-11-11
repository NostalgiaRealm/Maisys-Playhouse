
/* ==== GDI32.DLL::ExtTextOutW @ 5f004b40 ==== 
 * signature: BOOL __stdcall ExtTextOutW(HDC hdc, int x, int y, UINT options, RECT * lprect, LPCWSTR lpString, UINT c, INT * lpDx)
 * body: 5f004b40-5f004b45
 * thunk to: GDI32.DLL::ExtTextOutW
 */

BOOL ExtTextOutW(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCWSTR lpString,UINT c,INT *lpDx)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExtTextOutW(hdc,x,y,options,lprect,lpString,c,lpDx);
  return BVar1;
}


