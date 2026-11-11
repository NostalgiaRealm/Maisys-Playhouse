
/* ==== FUN_10014819 @ 10014819 ==== 
 * signature: CHAR __cdecl FUN_10014819(LPCSTR param_1)
 * body: 10014819-10014833
 */

CHAR __cdecl FUN_10014819(LPCSTR param_1)

{
  LPCSTR lpsz;
  LPCSTR pCVar1;
  
  pCVar1 = param_1;
  while (lpsz = param_1, *lpsz != '\0') {
    param_1 = CharNextA(lpsz);
    pCVar1 = lpsz;
  }
  return *pCVar1;
}


