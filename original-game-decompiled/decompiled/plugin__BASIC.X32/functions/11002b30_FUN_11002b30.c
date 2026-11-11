
/* ==== FUN_11002b30 @ 11002b30 ==== 
 * signature: uint __cdecl FUN_11002b30(undefined4 param_1, int param_2, uint param_3)
 * body: 11002b30-11002b60
 */

uint __cdecl FUN_11002b30(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = 0;
  if (*(char **)(param_2 + 0x10) != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar4 = *(char **)(param_2 + 0x10);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar3 - 1;
  }
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(int *)(param_3 + 8) = iVar2 + 8;
  return param_3 & 0xffffff00;
}


