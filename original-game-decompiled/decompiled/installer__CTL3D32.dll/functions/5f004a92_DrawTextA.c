
/* ==== USER32.DLL::DrawTextA @ 5f004a92 ==== 
 * signature: int __stdcall DrawTextA(HDC hdc, LPCSTR lpchText, int cchText, LPRECT lprc, UINT format)
 * body: 5f004a92-5f004a97
 * thunk to: USER32.DLL::DrawTextA
 */

int DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}


