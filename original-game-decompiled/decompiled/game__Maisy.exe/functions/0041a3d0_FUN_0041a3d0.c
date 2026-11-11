
/* ==== FUN_0041a3d0 @ 0041a3d0 ==== 
 * signature: undefined4 __thiscall FUN_0041a3d0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0041a3d0-0041a60a
 */

undefined4 __thiscall FUN_0041a3d0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined4 uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar5;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  char local_108 [252];
  int local_c;
  int local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_rangesymbol_004d9f18);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if ((param_2 != (short *)0x0) && (*param_2 == 100)) {
      pvVar3 = FUN_0046da90(this,'\x01','\x01');
      cVar2 = FUN_00422620(pvVar3,*(int *)(param_2 + 1),&local_c,&local_8);
      if (cVar2 != '\0') {
        uVar4 = FUN_00454e70(param_3,local_c + 1,local_8 + 1);
        return uVar4;
      }
      return 0x60002;
    }
    return 0x60002;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_classname_004d9f04);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_celcount_004d9ef0);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      iVar5 = FUN_00419d60((int)this);
      uVar4 = FUN_00454d00(param_3,iVar5);
      return uVar4;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_regpoint_004d9edc);
    if (CONCAT31(extraout_var_02,bVar1) != 0) {
      pvVar3 = FUN_0046da90(this,'\x01','\x01');
      if (pvVar3 != (void *)0x0) {
        piVar10 = &local_c;
        pvVar3 = FUN_0046da90(this,'\x01','\x01');
        FUN_00422690(pvVar3,(short *)piVar10);
        uVar4 = FUN_00454db0(param_3,&local_c);
        return uVar4;
      }
      return 0x60002;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
    if (CONCAT31(extraout_var_03,bVar1) != 0) {
      if (*(int **)((int)this + 0x52) != (int *)0x0) {
        uVar4 = (**(code **)(**(int **)((int)this + 0x52) + 0x98))(param_1,param_2,param_3);
        return uVar4;
      }
      uVar4 = FUN_00454c50(param_3,0);
      return uVar4;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_maintainrate_004d9ec8);
    if (CONCAT31(extraout_var_04,bVar1) != 0) {
      cVar2 = (**(code **)(*(int *)this + 0x49c))();
      uVar4 = FUN_00454c50(param_3,cVar2 == '\0');
      return uVar4;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
    if (CONCAT31(extraout_var_05,bVar1) != 0) {
      uVar4 = FUN_00455210(0xffffffff,param_3,s_mToonElement_004d9f2c);
      return uVar4;
    }
    uVar4 = FUN_0044f8c0(this,param_1,param_2,param_3);
    return uVar4;
  }
  uVar6 = 0xffffffff;
  pcVar8 = (char *)&DAT_004d9f3c;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = local_108;
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
  uVar4 = FUN_00455210(0xffffffff,param_3,local_108);
  return uVar4;
}


