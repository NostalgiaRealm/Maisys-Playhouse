
/* ==== USER32.DLL::DrawTextW @ 5f004aec ==== 
 * signature: int __stdcall DrawTextW(HDC hdc, LPCWSTR lpchText, int cchText, LPRECT lprc, UINT format)
 * body: 5f004aec-5f004af1
 * thunk to: USER32.DLL::DrawTextW
 */

int DrawTextW(HDC hdc,LPCWSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextW(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}


