
/* ==== FUN_1100aeb0 @ 1100aeb0 ==== 
 * signature: uint __cdecl FUN_1100aeb0(undefined4 param_1, int param_2, uint param_3)
 * body: 1100aeb0-1100af66
 */

uint __cdecl FUN_1100aeb0(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_4;
  
  if (*(short *)(param_2 + 0x20) == 0x1c) {
    uVar2 = 0xffffffff;
    pcVar6 = *(char **)(param_2 + 0x2a);
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
  if (*(short *)(param_2 + 0x20) == 0xd) {
    uVar2 = 0xffffffff;
    pcVar6 = *(char **)(param_2 + 0x24);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_4 = ~uVar2 - 1;
  }
  else {
    local_4 = 0;
  }
  if (*(short *)(param_2 + 0x4e) == 0x1c) {
    uVar2 = 0xffffffff;
    pcVar6 = *(char **)(param_2 + 0x58);
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
  if (*(short *)(param_2 + 0x4e) == 0xd) {
    uVar2 = 0xffffffff;
    pcVar6 = *(char **)(param_2 + 0x52);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~uVar2 - 1;
  }
  else {
    iVar3 = 0;
  }
  uVar2 = 0xffffffff;
  pcVar6 = *(char **)(param_2 + 0x7c);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(uint *)(param_3 + 8) = ~uVar2 + iVar4 + local_4 + iVar5 + iVar3 + 0x79;
  return param_3 & 0xffffff00;
}


