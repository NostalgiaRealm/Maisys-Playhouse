
/* ==== FUN_11012170 @ 11012170 ==== 
 * signature: uint __cdecl FUN_11012170(undefined4 param_1, int param_2, uint param_3)
 * body: 11012170-110121ed
 */

uint __cdecl FUN_11012170(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
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
    iVar5 = ~uVar2 - 1;
  }
  else {
    iVar5 = 0;
  }
  uVar2 = 0xffffffff;
  pcVar6 = *(char **)(param_2 + 0x4e);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar6 = *(char **)(param_2 + 0x52);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_3 + 0xc) = 1;
  *(uint *)(param_3 + 8) = ~uVar3 + ~uVar2 + iVar4 + iVar5 + 0x4c;
  return param_3 & 0xffffff00;
}


