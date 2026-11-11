
/* ==== FUN_0046b080 @ 0046b080 ==== 
 * signature: undefined __thiscall FUN_0046b080(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0046b080-0046b46f
 */

void __thiscall FUN_0046b080(void *this,int *param_1,short *param_2,short *param_3)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  void *pvVar3;
  undefined3 extraout_var_03;
  int iVar4;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined4 uVar5;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_104 [256];
  
  bVar2 = FUN_00437430(param_1,(int *)s_worldmanager_004dc09c);
  if ((CONCAT31(extraout_var,bVar2) != 0) ||
     (bVar2 = FUN_00437430(param_1,(int *)&DAT_004dc088), CONCAT31(extraout_var_00,bVar2) != 0)) {
    uVar5 = FUN_0040c620(this);
    FUN_00454d50(param_3,uVar5);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_paused_004db88c);
  if (CONCAT31(extraout_var_01,bVar2) != 0) {
    FUN_00454c50(param_3,1 - ((*(uint *)((int)this + 0x26) & 0x1000000) == 0));
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_asset_004da304);
  if (CONCAT31(extraout_var_02,bVar2) != 0) {
    pvVar3 = FUN_0046da90(this,'\x01','\x01');
    FUN_00454d50(param_3,pvVar3);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_project_004d9b38);
  if (CONCAT31(extraout_var_03,bVar2) != 0) {
    iVar4 = FUN_0046c9f0((int)this);
    FUN_00454d50(param_3,iVar4);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_section_004d9b24);
  if (CONCAT31(extraout_var_04,bVar2) != 0) {
    iVar4 = FUN_0046ca60((int)this);
    FUN_00454d50(param_3,iVar4);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_subsection_004d9b10);
  if (CONCAT31(extraout_var_05,bVar2) != 0) {
    iVar4 = FUN_0046cac0((int)this);
    FUN_00454d50(param_3,iVar4);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_firstscene_004dc41c);
  if (CONCAT31(extraout_var_06,bVar2) != 0) {
    FUN_0046c9f0((int)this);
    uVar5 = FUN_0043ed20();
    FUN_00454d50(param_3,uVar5);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_nextscene_004dc430);
  if (CONCAT31(extraout_var_07,bVar2) != 0) {
    FUN_0046ca10((int)this);
    uVar5 = FUN_0043ed30();
    FUN_00454d50(param_3,uVar5);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_scene_004d9afc);
  if (CONCAT31(extraout_var_08,bVar2) != 0) {
    iVar4 = FUN_0046ca10((int)this);
    FUN_00454d50(param_3,iVar4);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_elementnumber_004dc444);
  if (CONCAT31(extraout_var_09,bVar2) != 0) {
    iVar4 = 1;
    if (*(int **)((int)this + 0x62) != (int *)0x0) {
      for (pvVar3 = (void *)FUN_00469fb0(*(int **)((int)this + 0x62));
          (pvVar3 != (void *)0x0 && (this != pvVar3)); pvVar3 = *(void **)((int)pvVar3 + 0x6a)) {
        iVar4 = iVar4 + 1;
      }
    }
    FUN_00454d00(param_3,iVar4);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_element_004d9ae8);
  if (CONCAT31(extraout_var_10,bVar2) != 0) {
    FUN_00454d50(param_3,*(undefined4 *)((int)this + 0x62));
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_elementindex_004d95f8);
  if (CONCAT31(extraout_var_11,bVar2) != 0) {
    uVar5 = (**(code **)(*(int *)this + 0x1a0))();
    FUN_00454d00(param_3,uVar5);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_purgesize_004d9908);
  if (CONCAT31(extraout_var_12,bVar2) != 0) {
    uVar5 = (**(code **)(*(int *)this + 0x84))();
    FUN_00454d00(param_3,uVar5);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_inmemory_004da02c);
  if (CONCAT31(extraout_var_13,bVar2) != 0) {
    if (*(int **)((int)this + 0x52) == (int *)0x0) {
      FUN_00454c50(param_3,1);
      return;
    }
    (**(code **)(**(int **)((int)this + 0x52) + 0x98))(param_1,param_2,param_3);
    return;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_playertype_004dc3f4);
  if (CONCAT31(extraout_var_14,bVar2) == 0) {
    bVar2 = FUN_00437430(param_1,(int *)s_classid_004d9988);
    if (CONCAT31(extraout_var_15,bVar2) != 0) {
      FUN_00455210(0xffffffff,param_3,s_InternalElement_004dc49c);
      return;
    }
    bVar2 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
    if (CONCAT31(extraout_var_16,bVar2) == 0) {
      FUN_0040b670(this,param_1,param_2,param_3);
      return;
    }
    FUN_00455210(0xffffffff,param_3,s_element_004dc494);
    return;
  }
  if (((*(short *)((int)this + 0x60) == 0) && ((*(byte *)((int)this + 0x21) & 0x40) == 0)) &&
     (*(short *)((int)this + 0x22) != 0x43)) {
    pcVar8 = s_Scene_004dc4b4;
  }
  else {
    pcVar8 = s_Element_004dc4ac;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = local_104;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_00455210(0xffffffff,param_3,local_104);
  return;
}


