
/* ==== FUN_11013f20 @ 11013f20 ==== 
 * signature: int __cdecl FUN_11013f20(undefined4 param_1, int param_2)
 * body: 11013f20-11013fbb
 */

int __cdecl FUN_11013f20(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar5 = 0;
  iVar4 = (*(int *)(param_2 + 0x14) * 3 + *(int *)(param_2 + 0x20)) * 2 + 0x14 +
          *(int *)(param_2 + 4);
  FUN_11013e60();
  if (0 < *(int *)(param_2 + 0x14)) {
    iVar3 = 0;
    do {
      pcVar6 = *(char **)(*(int *)(param_2 + 0x1c) + 10 + iVar3);
      if (pcVar6 != (char *)0x0) {
        uVar2 = 0xffffffff;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar4 = iVar4 + ~uVar2;
      }
      iVar3 = iVar3 + 0xe;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x14));
  }
  iVar5 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0x20)) {
    do {
      pcVar6 = *(char **)(*(int *)(param_2 + 0x28) + iVar5);
      if (pcVar6 != (char *)0x0) {
        uVar2 = 0xffffffff;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar4 = iVar4 + ~uVar2;
      }
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 0x20));
  }
  FUN_11013e70();
  return iVar4;
}


