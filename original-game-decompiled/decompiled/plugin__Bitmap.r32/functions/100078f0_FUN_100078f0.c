
/* ==== FUN_100078f0 @ 100078f0 ==== 
 * signature: undefined __cdecl FUN_100078f0(LPSTR param_1)
 * body: 100078f0-10007925
 */

void __cdecl FUN_100078f0(LPSTR param_1)

{
  char cVar1;
  uint uVar2;
  LPSTR pCVar3;
  
  GetSystemDirectoryA(param_1,0x100);
  uVar2 = 0xffffffff;
  pCVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pCVar3;
    pCVar3 = pCVar3 + 1;
  } while (cVar1 != '\0');
  if ((1 < ~uVar2 - 1) && (param_1[1] == ':')) {
    param_1[2] = '\0';
    return;
  }
  *param_1 = '\0';
  return;
}


