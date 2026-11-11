
/* ==== FUN_14009800 @ 14009800 ==== 
 * signature: uint __cdecl FUN_14009800(int param_1, char * param_2)
 * body: 14009800-140098b3
 */

uint __cdecl FUN_14009800(int param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_18;
  undefined4 uStack_12;
  undefined4 uStack_c;
  
  local_18 = 0x10;
  if (param_1 != 0) {
    uVar3 = (*DAT_14026428)(param_2,(int)&uStack_12 + 2,&local_18);
    *(undefined4 *)(param_1 + 2) = uVar3;
  }
  if (*(int *)(param_1 + 2) == -1) {
    uVar4 = (*DAT_14026410)();
    return (uVar4 == 0x2733) - 1 & uVar4;
  }
  pcVar5 = (char *)(*DAT_14026450)(uStack_c);
  uVar4 = 0xffffffff;
  pcVar8 = pcVar5;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar5;
  pcVar8 = param_2;
  for (uVar6 = ~uVar4 - 1 >> 2; pcVar8 = pcVar8 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = ~uVar4 - 1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  param_2[~uVar4 + 3] = '\0';
  uVar2 = (*DAT_14026440)(uStack_12);
  *(undefined2 *)(param_2 + 0x48) = uVar2;
  return 0;
}


