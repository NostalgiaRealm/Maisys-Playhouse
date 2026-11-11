
/* ==== FUN_11018440 @ 11018440 ==== 
 * signature: undefined __cdecl FUN_11018440(undefined4 * param_1, int param_2, short * param_3)
 * body: 11018440-110185a8
 */

void __cdecl FUN_11018440(undefined4 *param_1,int param_2,short *param_3)

{
  char cVar1;
  short sVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_108 [8];
  char local_100 [256];
  
  sVar2 = *param_3;
  if (sVar2 != 0xd) {
    if (sVar2 != 0x16) {
      if (sVar2 != 0x17) {
        *param_3 = 0;
        return;
      }
      *param_3 = 0x16;
    }
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_2 + 0x18);
    return;
  }
  pcVar8 = *(char **)(param_3 + 2);
  dVar3 = *(double *)(param_2 + 0x10) * 180.0 * 0.3183098861837907;
  FUN_11013be0(param_1,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),pcVar8);
  builtin_strncpy(local_108," deg, ",7);
  uVar4 = 0xffffffff;
  pcVar7 = local_108;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = local_100;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = local_100;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = pcVar8;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_11013be0(param_1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),local_100);
  uVar4 = 0xffffffff;
  pcVar7 = local_100;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  do {
    pcVar7 = pcVar8;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar7 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}


