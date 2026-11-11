
/* ==== FUN_1000c339 @ 1000c339 ==== 
 * signature: undefined __cdecl FUN_1000c339(LPCSTR param_1)
 * body: 1000c339-1000c358
 */

void __cdecl FUN_1000c339(LPCSTR param_1)

{
  int iVar1;
  
  iVar1 = lstrlenA(param_1);
  if ((0 < iVar1) && (param_1[iVar1 + -1] == '\n')) {
    param_1[iVar1 + -1] = '\0';
  }
  return;
}


