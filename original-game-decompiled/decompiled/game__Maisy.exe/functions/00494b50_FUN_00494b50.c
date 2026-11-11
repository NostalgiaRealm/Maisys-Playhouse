
/* ==== FUN_00494b50 @ 00494b50 ==== 
 * signature: undefined4 __cdecl FUN_00494b50(int param_1, byte * param_2)
 * body: 00494b50-00494cca
 */

undefined4 __cdecl FUN_00494b50(int param_1,byte *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint local_a0;
  undefined2 local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  undefined2 local_88;
  char local_84 [132];
  
  pcVar3 = FUN_00494dc0(param_2,local_84,&local_a0,&local_98);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_84;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_00490210(~uVar5);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  puVar2 = (undefined1 *)(&DAT_004de534)[param_1 * 3];
  local_94 = *(undefined4 *)(&DAT_004de698 + param_1 * 4);
  iVar4 = param_1 * 6;
  local_8c = *(uint *)(&DAT_004df3e8 + iVar4);
  local_88 = *(undefined2 *)(&DAT_004df3ec + iVar4);
  local_90 = DAT_004de6b0;
  uVar5 = 0xffffffff;
  pcVar7 = local_84;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = pcVar3;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  (&DAT_004de534)[param_1 * 3] = pcVar3;
  *(uint *)(&DAT_004de698 + param_1 * 4) = local_a0 & 0xffff;
  *(uint *)(&DAT_004df3e8 + iVar4) = local_a0;
  *(undefined2 *)(&DAT_004df3ec + iVar4) = local_9c;
  if (param_1 == 2) {
    DAT_004de6b0 = local_98;
  }
  iVar4 = (*(code *)(&PTR_FUN_004de538)[param_1 * 3])();
  if (iVar4 != 0) {
    (&DAT_004de534)[param_1 * 3] = puVar2;
    FUN_0048e750(pcVar3);
    *(undefined4 *)(&DAT_004de698 + param_1 * 4) = local_94;
    DAT_004de6b0 = local_90;
    return 0;
  }
  if (puVar2 != &DAT_004de528) {
    FUN_0048e750(puVar2);
  }
  return (&DAT_004de534)[param_1 * 3];
}


