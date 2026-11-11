
/* ==== FUN_11028080 @ 11028080 ==== 
 * signature: uint __cdecl FUN_11028080(undefined4 param_1, int param_2, uint param_3)
 * body: 11028080-11028169
 */

uint __cdecl FUN_11028080(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_8;
  int local_4;
  
  if (*(short *)(param_2 + 0x18) == 0x1c) {
    uVar2 = 0xffffffff;
    pcVar7 = *(char **)(param_2 + 0x22);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = ~uVar2 - 1;
  }
  else {
    iVar6 = 0;
  }
  if (*(short *)(param_2 + 0x46) == 0x1c) {
    uVar2 = 0xffffffff;
    pcVar7 = *(char **)(param_2 + 0x50);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar2 - 1;
  }
  else {
    iVar4 = 0;
  }
  if (*(short *)(param_2 + 0x46) == 0xd) {
    uVar2 = 0xffffffff;
    pcVar7 = *(char **)(param_2 + 0x4a);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_8 = ~uVar2 - 1;
  }
  else {
    local_8 = 0;
  }
  if (*(short *)(param_2 + 0x18) == 0xd) {
    uVar2 = 0xffffffff;
    pcVar7 = *(char **)(param_2 + 0x1c);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_4 = ~uVar2 - 1;
  }
  else {
    local_4 = 0;
  }
  if (*(short *)(param_2 + 0x46) == 0x1f) {
    uVar2 = 0xffffffff;
    pcVar7 = *(char **)(param_2 + 0x4a);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar2 - 1;
  }
  else {
    iVar5 = 0;
  }
  iVar3 = 0;
  if (*(short *)(param_2 + 0x18) == 0x1f) {
    uVar2 = 0xffffffff;
    pcVar7 = *(char **)(param_2 + 0x1c);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar3 = ~uVar2 - 1;
  }
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(int *)(param_3 + 8) = iVar4 + iVar6 + local_8 + local_4 + iVar5 + iVar3 + 0x6e;
  return param_3 & 0xffffff00;
}


