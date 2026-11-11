
/* ==== FUN_1000b94f @ 1000b94f ==== 
 * signature: LPCSTR __cdecl FUN_1000b94f(LPCSTR param_1)
 * body: 1000b94f-1000b962
 */

LPCSTR __cdecl FUN_1000b94f(LPCSTR param_1)

{
  LPCSTR pCVar1;
  
  pCVar1 = FUN_10014834(param_1,0x5c);
  if (*pCVar1 == '\\') {
    pCVar1 = pCVar1 + 1;
  }
  return pCVar1;
}


