
/* ==== GDI32.DLL::ExtTextOutA @ 5f004ae6 ==== 
 * signature: BOOL __stdcall ExtTextOutA(HDC hdc, int x, int y, UINT options, RECT * lprect, LPCSTR lpString, UINT c, INT * lpDx)
 * body: 5f004ae6-5f004aeb
 * thunk to: GDI32.DLL::ExtTextOutA
 */

BOOL ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ExtTextOutA(hdc,x,y,options,lprect,lpString,c,lpDx);
  return BVar1;
}


