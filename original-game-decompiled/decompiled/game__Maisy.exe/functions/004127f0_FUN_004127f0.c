
/* ==== FUN_004127f0 @ 004127f0 ==== 
 * signature: undefined __thiscall FUN_004127f0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 004127f0-004129d6
 */

void __thiscall FUN_004127f0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined4 uVar3;
  
  bVar1 = FUN_00437430(param_1,(int *)s_project_004d9b38);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = (**(code **)(*(int *)this + 0x10))();
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_00458a00(iVar2);
    }
    FUN_00454d50(param_3,uVar3);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_section_004d9b24);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    if (*(int *)((int)this + 0x3a) == 0) {
      FUN_00454d50(param_3,0);
      return;
    }
    iVar2 = FUN_0046ca60(*(int *)((int)this + 0x3a));
    FUN_00454d50(param_3,iVar2);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_subsection_004d9b10);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    if (*(int *)((int)this + 0x3a) == 0) {
      FUN_00454d50(param_3,0);
      return;
    }
    iVar2 = FUN_0046cac0(*(int *)((int)this + 0x3a));
    FUN_00454d50(param_3,iVar2);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_scene_004d9afc);
  if (CONCAT31(extraout_var_02,bVar1) != 0) {
    if (*(int *)((int)this + 0x3a) == 0) {
      FUN_00454d50(param_3,0);
      return;
    }
    iVar2 = FUN_0046ca10(*(int *)((int)this + 0x3a));
    FUN_00454d50(param_3,iVar2);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_element_004d9ae8);
  if (CONCAT31(extraout_var_03,bVar1) != 0) {
    FUN_00454d50(param_3,*(undefined4 *)((int)this + 0x3a));
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_collection_004d9ad4);
  if (CONCAT31(extraout_var_04,bVar1) != 0) {
    uVar3 = (**(code **)(*(int *)this + 0x218))();
    FUN_00454d50(param_3,uVar3);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
  if (CONCAT31(extraout_var_05,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_InternalMod_004d9b58);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
  if (CONCAT31(extraout_var_06,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_modifier_004d9b4c);
    return;
  }
  FUN_0040b670(this,param_1,param_2,param_3);
  return;
}


