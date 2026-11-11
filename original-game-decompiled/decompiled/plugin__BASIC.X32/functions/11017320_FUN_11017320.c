
/* ==== FUN_11017320 @ 11017320 ==== 
 * signature: uint __cdecl FUN_11017320(undefined4 param_1, int param_2, uint param_3)
 * body: 11017320-11017394
 */

uint __cdecl FUN_11017320(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (*(short *)(param_2 + 0x34) == 0x1c) {
    uVar2 = 0xffffffff;
    pcVar6 = *(char **)(param_2 + 0x3e);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar2 - 1;
  }
  else {
    iVar4 = 0;
  }
  if (*(short *)(param_2 + 0x34) == 0x1f) {
    uVar2 = 0xffffffff;
    pcVar6 = *(char **)(param_2 + 0x38);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar2 - 1;
  }
  else {
    iVar5 = 0;
  }
  iVar3 = 0;
  if (*(short *)(param_2 + 0x34) == 0xd) {
    uVar2 = 0xffffffff;
    pcVar6 = *(char **)(param_2 + 0x38);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~uVar2 - 1;
  }
  *(int *)(param_3 + 8) = iVar5 + iVar4 + iVar3 + 0x58;
  *(undefined2 *)(param_3 + 0xc) = 3;
  return param_3 & 0xffffff00;
}


