
/* ==== USER32.DLL::CharPrevA @ 5f004a5c ==== 
 * signature: LPSTR __stdcall CharPrevA(LPCSTR lpszStart, LPCSTR lpszCurrent)
 * body: 5f004a5c-5f004a61
 * thunk to: USER32.DLL::CharPrevA
 */

LPSTR CharPrevA(LPCSTR lpszStart,LPCSTR lpszCurrent)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharPrevA(lpszStart,lpszCurrent);
  return pCVar1;
}


