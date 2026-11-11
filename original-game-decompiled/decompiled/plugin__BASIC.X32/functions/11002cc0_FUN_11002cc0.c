
/* ==== FUN_11002cc0 @ 11002cc0 ==== 
 * signature: undefined __cdecl FUN_11002cc0(undefined4 * param_1, int param_2, short * param_3)
 * body: 11002cc0-11002d9b
 */

void __cdecl FUN_11002cc0(undefined4 *param_1,int param_2,short *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (*param_3 == 0xd) {
    iVar5 = 0;
    if (*(char **)(param_2 + 0x10) != (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar6 = *(char **)(param_2 + 0x10);
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar5 = ~uVar3 - 1;
    }
    if (iVar5 == 0) {
      **(undefined1 **)(param_3 + 2) = 0;
      return;
    }
    if (param_3[1] < iVar5) {
      _strncpy(*(char **)(param_3 + 2),*(char **)(param_2 + 0x10),(int)param_3[1]);
      *(undefined1 *)(param_3[1] + -1 + *(int *)(param_3 + 2)) = 0;
      return;
    }
    uVar3 = 0xffffffff;
    pcVar6 = *(char **)(param_2 + 0x10);
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = *(char **)(param_3 + 2);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    return;
  }
  if (*param_3 != 0x17) {
    *param_3 = 0;
    return;
  }
  *param_3 = 0xd;
  uVar2 = FUN_110024d0(param_1,*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_3 + 2) = uVar2;
  if (*(char **)(param_2 + 0x10) == (char *)0x0) {
    param_3[1] = 0;
    return;
  }
  iVar5 = -1;
  pcVar6 = *(char **)(param_2 + 0x10);
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  param_3[1] = ~(ushort)iVar5;
  return;
}


