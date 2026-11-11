
/* ==== FUN_1202d490 @ 1202d490 ==== 
 * signature: undefined4 __cdecl FUN_1202d490(int param_1, byte * param_2)
 * body: 1202d490-1202d60a
 */

undefined4 __cdecl FUN_1202d490(int param_1,byte *param_2)

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
  
  pcVar3 = FUN_1202d700(param_2,local_84,&local_a0,&local_98);
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
  pcVar3 = (char *)FUN_1202c7e0(~uVar5);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  puVar2 = (undefined1 *)(&DAT_120385ac)[param_1 * 3];
  local_94 = *(undefined4 *)(&DAT_12038550 + param_1 * 4);
  iVar4 = param_1 * 6;
  local_8c = *(uint *)(&DAT_12038b30 + iVar4);
  local_88 = *(undefined2 *)(&DAT_12038b34 + iVar4);
  local_90 = DAT_12038568;
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
  (&DAT_120385ac)[param_1 * 3] = pcVar3;
  *(uint *)(&DAT_12038550 + param_1 * 4) = local_a0 & 0xffff;
  *(uint *)(&DAT_12038b30 + iVar4) = local_a0;
  *(undefined2 *)(&DAT_12038b34 + iVar4) = local_9c;
  if (param_1 == 2) {
    DAT_12038568 = local_98;
  }
  iVar4 = (*(code *)(&PTR_FUN_120385b0)[param_1 * 3])();
  if (iVar4 != 0) {
    (&DAT_120385ac)[param_1 * 3] = puVar2;
    FUN_1202c7c0(pcVar3);
    *(undefined4 *)(&DAT_12038550 + param_1 * 4) = local_94;
    DAT_12038568 = local_90;
    return 0;
  }
  if (puVar2 != &DAT_120385a0) {
    FUN_1202c7c0(puVar2);
  }
  return (&DAT_120385ac)[param_1 * 3];
}


