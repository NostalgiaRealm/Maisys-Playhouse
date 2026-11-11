
/* ==== FUN_12015760 @ 12015760 ==== 
 * signature: undefined4 __cdecl FUN_12015760(int param_1, undefined4 param_2)
 * body: 12015760-12015da4
 */

undefined4 __cdecl FUN_12015760(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  int *piVar10;
  char cStack_774;
  char cStack_773;
  int local_770;
  int iStack_76c;
  int iStack_768;
  int iStack_764;
  undefined4 local_760;
  undefined2 uStack_75c;
  undefined4 uStack_75a;
  undefined4 uStack_756;
  undefined4 uStack_752;
  int iStack_74e;
  undefined4 uStack_748;
  undefined2 uStack_744;
  undefined4 uStack_742;
  undefined4 uStack_73e;
  undefined4 uStack_73a;
  undefined4 uStack_736;
  int local_730 [132];
  undefined1 local_520;
  undefined4 local_51f;
  code *apcStack_420 [132];
  char local_210 [528];
  
  local_520 = DAT_12037220;
  local_760 = 0xa0004;
  local_770 = -1;
  puVar5 = &local_51f;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    return 0xa0004;
  }
  if ((*(int *)(param_1 + 0x1e) == 0) || (0x20e < *(int *)(param_1 + 0x1e))) {
    return 0xa0001;
  }
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,10,local_730);
  DAT_12039a9c = (*pcVar2)(local_730[0],param_1,*(undefined4 *)(param_1 + 0x22),local_210);
  if (DAT_12039a9c != 0) {
    return 0xa0004;
  }
  uStack_744 = 0x69;
  uStack_75a = 0xffffffff;
  uStack_75c = 0x66;
  uStack_73e = 0;
  uStack_73a = 0;
  uStack_742 = 0;
  uStack_736 = 0;
  uStack_756 = 0;
  uStack_752 = 0;
  iStack_74e = 0;
  apcStack_420[0] = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,local_730);
  puVar9 = &uStack_744;
  uVar7 = 0;
  pcVar6 = s_system_120378b0;
  uVar3 = FUN_12027340(param_1);
  DAT_12039a9c = (*apcStack_420[0])(local_730[0],uVar3,pcVar6,uVar7,puVar9);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_76c);
  DAT_12039a9c = (*pcVar2)(iStack_76c,uStack_742,s_playertype_1203789c,0,&uStack_75c);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,4,&iStack_768);
  DAT_12039a9c = (*pcVar2)(iStack_768,&iStack_764,iStack_74e,s_plug_in_12037894);
  FUN_12027640((int)&uStack_744);
  if (iStack_74e != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,local_730);
    DAT_12039a9c = (*pcVar2)(local_730[0],iStack_74e);
    iStack_74e = 0;
    uStack_756 = 0;
    uStack_752 = 0;
  }
  uVar1 = DAT_12037890;
  if (iStack_764 == 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&iStack_76c);
    DAT_12039a9c = (*pcVar2)(iStack_76c,local_730,local_210);
    FUN_12015db0((char *)local_730);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,10,&iStack_768);
    DAT_12039a9c = (*pcVar2)(iStack_768,param_1,s_<Title_Folder>_12037880,apcStack_420);
    if (DAT_12039a9c != 0) {
      return 0xa0004;
    }
    FUN_12015db0((char *)apcStack_420);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&iStack_76c);
    DAT_12039a9c = (*pcVar2)(iStack_76c,&uStack_748,apcStack_420);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,5,&iStack_768);
    DAT_12039a9c = (*pcVar2)(iStack_768,&iStack_764,local_730,apcStack_420,uStack_748);
    if (iStack_764 != 0) {
      return 0xa0004;
    }
    pcVar6 = local_210;
    while (local_210[0] != '\0') {
      cStack_774 = (char)uVar1;
      if ((*pcVar6 == cStack_774) &&
         (cStack_773 = (char)((ushort)uVar1 >> 8), pcVar6[1] == cStack_773)) {
        return 0xa0004;
      }
      pcVar6 = pcVar6 + 1;
      local_210[0] = *pcVar6;
    }
  }
  apcStack_420[0] = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,9,local_730);
  puVar8 = &local_520;
  uVar7 = 0x100;
  uVar3 = FUN_12027340(param_1);
  DAT_12039a9c = (*apcStack_420[0])(local_730[0],param_2,uVar3,puVar8,uVar7);
  if (DAT_12039a9c == 0) {
    uVar3 = 0;
    if (local_770 == -1) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x1d,local_730);
      DAT_12039a9c = (*pcVar2)(local_730[0],apcStack_420,&local_520,&DAT_120357fc);
      if (apcStack_420[0] == (code *)0x0) {
        local_770 = 0;
      }
      if (local_770 == -1) {
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x1d,local_730);
        uVar3 = (*pcVar2)(local_730[0],apcStack_420,&local_520,"readwrite");
        if (apcStack_420[0] == (code *)0x0) {
          local_770 = 2;
        }
        goto LAB_12015c1e;
      }
LAB_12015c7a:
      if (local_770 != -1) goto LAB_12015d60;
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x1d,local_730);
      DAT_12039a9c = (*pcVar2)(local_730[0],apcStack_420,&local_520,"default");
      if (apcStack_420[0] == (code *)0x0) {
        local_770 = *(int *)(param_1 + 0x5e);
      }
    }
    else {
LAB_12015c1e:
      DAT_12039a9c = uVar3;
      if (local_770 == -1) {
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x1d,local_730);
        DAT_12039a9c = (*pcVar2)(local_730[0],apcStack_420,&local_520,"overwrite");
        if (apcStack_420[0] == (code *)0x0) {
          local_770 = 1;
        }
        goto LAB_12015c7a;
      }
    }
    if (local_770 == -1) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x1e,local_730);
      DAT_12039a9c = (*pcVar2)(local_730[0],&local_770,&local_520);
      goto LAB_12015d60;
    }
  }
  else {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,5,local_730);
    piVar10 = &local_770;
    uVar3 = FUN_12027340(param_1);
    DAT_12039a9c = (*pcVar2)(local_730[0],param_2,uVar3,piVar10);
LAB_12015d60:
    if (local_770 == -1) goto LAB_12015d83;
  }
  *(int *)(param_1 + 0x5e) = local_770;
  local_760 = FUN_12004650(param_1,local_210);
LAB_12015d83:
  *(undefined4 *)(param_1 + 100) = local_760;
  return local_760;
}


