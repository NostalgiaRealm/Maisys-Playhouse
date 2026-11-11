
/* ==== GDI32.DLL::GetTextExtentPointW @ 5f004b4c ==== 
 * signature: BOOL __stdcall GetTextExtentPointW(HDC hdc, LPCWSTR lpString, int c, LPSIZE lpsz)
 * body: 5f004b4c-5f004b51
 * thunk to: GDI32.DLL::GetTextExtentPointW
 */

BOOL GetTextExtentPointW(HDC hdc,LPCWSTR lpString,int c,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPointW(hdc,lpString,c,lpsz);
  return BVar1;
}


