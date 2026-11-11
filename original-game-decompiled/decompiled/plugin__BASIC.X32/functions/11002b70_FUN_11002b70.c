
/* ==== FUN_11002b70 @ 11002b70 ==== 
 * signature: undefined __cdecl FUN_11002b70(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11002b70-11002be1
 */

void __cdecl FUN_11002b70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  int local_8 [2];
  
  if (*(char **)(param_2 + 0x10) == (char *)0x0) {
    sVar2 = 0;
  }
  else {
    iVar3 = -1;
    pcVar4 = *(char **)(param_2 + 0x10);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    sVar2 = ~(ushort)iVar3 - 1;
  }
  local_8[1] = 0;
  local_8[0] = (int)sVar2;
  FUN_11011780(param_1,*param_3,local_8,8);
  if (sVar2 != 0) {
    FUN_11011780(param_1,*param_3,*(undefined4 *)(param_2 + 0x10),(int)sVar2);
  }
  return;
}


