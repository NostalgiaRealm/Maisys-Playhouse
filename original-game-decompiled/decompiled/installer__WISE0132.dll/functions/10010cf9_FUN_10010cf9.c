
/* ==== FUN_10010cf9 @ 10010cf9 ==== 
 * signature: undefined __cdecl FUN_10010cf9(LPCSTR param_1)
 * body: 10010cf9-10010d17
 */

void __cdecl FUN_10010cf9(LPCSTR param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  
  iVar1 = lstrlenA(param_1);
  if (iVar1 != 0) {
    pCVar2 = FUN_10014834(param_1,0x5c);
    *pCVar2 = '\0';
  }
  return;
}


