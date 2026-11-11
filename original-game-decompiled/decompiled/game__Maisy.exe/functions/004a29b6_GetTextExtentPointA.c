
/* ==== GDI32.DLL::GetTextExtentPointA @ 004a29b6 ==== 
 * signature: BOOL __stdcall GetTextExtentPointA(HDC hdc, LPCSTR lpString, int c, LPSIZE lpsz)
 * body: 004a29b6-004a29bb
 * thunk to: GDI32.DLL::GetTextExtentPointA
 */

BOOL GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextExtentPointA(hdc,lpString,c,lpsz);
  return BVar1;
}


