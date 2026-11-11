
/* ==== USER32.DLL::CharPrevW @ 5f004ab6 ==== 
 * signature: LPWSTR __stdcall CharPrevW(LPCWSTR lpszStart, LPCWSTR lpszCurrent)
 * body: 5f004ab6-5f004abb
 * thunk to: USER32.DLL::CharPrevW
 */

LPWSTR CharPrevW(LPCWSTR lpszStart,LPCWSTR lpszCurrent)

{
  LPWSTR pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = CharPrevW(lpszStart,lpszCurrent);
  return pWVar1;
}


