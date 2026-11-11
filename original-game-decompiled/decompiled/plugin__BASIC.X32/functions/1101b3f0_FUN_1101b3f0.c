
/* ==== FUN_1101b3f0 @ 1101b3f0 ==== 
 * signature: undefined4 __cdecl FUN_1101b3f0(undefined4 * param_1, undefined2 * param_2, short * param_3, short * param_4)
 * body: 1101b3f0-1101b4b7
 */

uint __cdecl FUN_1101b3f0(undefined4 *param_1,undefined2 *param_2,short *param_3,short *param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  if ((*param_3 != 0xd) || (*param_4 != 0xd)) {
    return CONCAT22((short)((uint)param_3 >> 0x10),0xffde);
  }
  pcVar7 = *(char **)(param_3 + 2);
  pcVar9 = *(char **)(param_4 + 2);
  uVar4 = 0xffffffff;
  pcVar3 = pcVar9;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar5 = 0xffffffff;
  pcVar3 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  iVar1 = ~uVar5 + (~uVar4 - 2);
  pcVar3 = (char *)FUN_11002580(param_1,iVar1);
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = pcVar3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar7;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar9 = pcVar3;
  do {
    pcVar8 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar2 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  *param_2 = 0xd;
  param_2[1] = (short)iVar1 + 1;
  *(char **)(param_2 + 2) = pcVar3;
  return (uint)param_2 & 0xffff0000;
}


