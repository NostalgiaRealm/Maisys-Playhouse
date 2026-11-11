
/* ==== FUN_00473bb0 @ 00473bb0 ==== 
 * signature: int __thiscall FUN_00473bb0(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 00473bb0-00473fe4
 */

int __thiscall FUN_00473bb0(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar4;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  char local_13c [256];
  short local_3c;
  short local_3a;
  int local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  local_10 = (int *)0x0;
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004dca18);
  if ((CONCAT31(extraout_var,bVar1) != 0) ||
     (bVar1 = FUN_00437430(param_1,(int *)s_balance_004da254), CONCAT31(extraout_var_00,bVar1) != 0)
     ) {
    iVar4 = FUN_00455c10(param_3,&local_c,(int *)0x0);
    if (iVar4 == 0) {
      FUN_00473610(this,(short)local_c);
    }
    return iVar4;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_volume_004da2b4);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    iVar4 = FUN_00455c10(param_3,&local_c,(int *)0x0);
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_00473660(this,(short)local_c);
    return 0;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_pitch_004dca04);
  if (CONCAT31(extraout_var_02,bVar1) != 0) {
    iVar4 = FUN_00455c10(param_3,&local_c,(int *)0x0);
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_004736b0(this,(short)local_c);
    return 0;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_paused_004db88c);
  if (CONCAT31(extraout_var_03,bVar1) != 0) {
    iVar4 = FUN_00455730(param_3,&local_5,(int *)0x0);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_5 == '\0') {
      (**(code **)(*(int *)this + 0x334))();
      return 0;
    }
    (**(code **)(*(int *)this + 0x330))();
    return 0;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_visible_004dbebc);
  if ((CONCAT31(extraout_var_04,bVar1) != 0) ||
     (bVar1 = FUN_00437430(param_1,(int *)&DAT_004da268), CONCAT31(extraout_var_05,bVar1) != 0)) {
    sVar3 = *param_3;
    if (sVar3 == 0x14) {
      sVar3 = (ushort)(param_3[1] != 0) * 0x7fff;
      *(short *)((int)this + 0x98) = sVar3;
      FUN_00468430(*(void **)((int)this + 0x5a),sVar3);
      return 0;
    }
    if ((sVar3 != 0x73) && (sVar3 != 0x69)) {
      iVar4 = FUN_00455c10(param_3,&local_c,(int *)0x0);
      if (iVar4 != 0) {
        return 0x10000;
      }
      iVar4 = 0;
      if (-1 < local_c) {
        iVar4 = local_c;
      }
      if (0x7ffe < iVar4) {
        iVar4 = 0x7fff;
      }
      *(short *)((int)this + 0x98) = (short)iVar4;
      FUN_00468430(*(void **)((int)this + 0x5a),(short)local_c);
      return 0;
    }
    iVar4 = FUN_00455ee0(param_3,(int *)&local_10,(int *)0x0);
    if (((iVar4 != 0) || (local_10 == (int *)0x0)) ||
       ((*(byte *)((int)local_10 + 0x1e) & 0x10) == 0)) {
      return 0x10000;
    }
    local_3c = 0x6a;
    (**(code **)(*local_10 + 0x98))(s_value_004d9864,0,&local_3c);
    if (local_3c == 0x14) {
      sVar3 = (ushort)(local_3a != 0) * 0x7fff;
      *(short *)((int)this + 0x98) = sVar3;
      FUN_00468430(*(void **)((int)this + 0x5a),sVar3);
      return 0;
    }
    iVar4 = FUN_00455c10(&local_3c,&local_c,(int *)0x0);
    if (iVar4 != 0) {
      return 0x10000;
    }
    iVar4 = 0;
    if (-1 < local_c) {
      iVar4 = local_c;
    }
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    *(short *)((int)this + 0x98) = (short)iVar4;
    FUN_00468430(*(void **)((int)this + 0x5a),(short)local_c);
    return 0;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_asset_004da304);
  if (CONCAT31(extraout_var_06,bVar1) == 0) {
    iVar4 = FUN_0046b470(this,param_1,param_2,param_3);
    return iVar4;
  }
  piVar8 = (int *)0x0;
  iVar4 = FUN_00456560(param_3,local_13c,0x100,(int *)0x0);
  if (iVar4 == 0) {
    iVar5 = FUN_0046ca60((int)this);
    iVar4 = 0;
    if (iVar5 == 0) goto LAB_00473da9;
    local_14 = **(int **)(*(int *)((int)this + 4) + 0x48);
    iVar5 = FUN_0046ca60((int)this);
    sVar3 = (**(code **)(local_14 + 0x120))(*(undefined4 *)(iVar5 + 0x96),0);
    pcVar9 = local_13c;
    pvVar6 = (void *)FUN_00466a70(*(int *)((int)this + 4));
    piVar7 = FUN_0044de20(pvVar6,pcVar9,sVar3);
  }
  else {
    iVar4 = FUN_00455ee0(param_3,(int *)&local_10,(int *)0x0);
    if (((iVar4 != 0) || (local_10 == (int *)0x0)) ||
       (piVar7 = local_10, (*(byte *)(local_10 + 8) & 1) == 0)) goto LAB_00473da9;
  }
  piVar8 = piVar7;
LAB_00473da9:
  if (piVar8 == (int *)0x0) {
    return iVar4;
  }
  pvVar6 = FUN_0046da90(this,'\x01','\x01');
  if (pvVar6 == (void *)0x0) {
    return iVar4;
  }
  if (*(short *)(*(int *)((int)this + 0x52) + 0x22) != *(short *)((int)piVar8 + 0x22)) {
    return iVar4;
  }
  cVar2 = (**(code **)(*(int *)this + 0x250))(0);
  (**(code **)(*(int *)this + 0x2a4))(piVar8);
  if (cVar2 != '\0') {
    (**(code **)(*(int *)this + 0x24c))();
  }
  return 0;
}


