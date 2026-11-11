
/* ==== FUN_004738d0 @ 004738d0 ==== 
 * signature: undefined4 __thiscall FUN_004738d0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 004738d0-00473ba3
 */

undefined4 __thiscall FUN_004738d0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined4 uVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_108 [252];
  int local_c;
  int local_8;
  
  if (((param_2 != (short *)0x0) &&
      (bVar1 = FUN_00437430(param_1,(int *)s_rangesymbol_004d9f18),
      CONCAT31(extraout_var,bVar1) != 0)) && (*param_2 == 100)) {
    piVar4 = FUN_0046da90(this,'\x01','\x01');
    if (piVar4 == (int *)0x0) {
      return 0x10000;
    }
    cVar2 = (**(code **)(*piVar4 + 0x1d4))(*(undefined4 *)(param_2 + 1),&local_c,&local_8);
    if (cVar2 == '\0') {
      return 0x60002;
    }
    uVar5 = FUN_00454e70(param_3,local_c + 1,local_8 + 1);
    return uVar5;
  }
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004dca18);
  if ((CONCAT31(extraout_var_00,bVar1) != 0) ||
     (bVar1 = FUN_00437430(param_1,(int *)s_balance_004da254), CONCAT31(extraout_var_01,bVar1) != 0)
     ) {
    sVar3 = FUN_00473600((int)this);
    uVar5 = FUN_00454d00(param_3,(int)sVar3);
    return uVar5;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_volume_004da2b4);
  if (CONCAT31(extraout_var_02,bVar1) != 0) {
    sVar3 = FUN_00473650((int)this);
    uVar5 = FUN_00454d00(param_3,(int)sVar3);
    return uVar5;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_pitch_004dca04);
  if (CONCAT31(extraout_var_03,bVar1) != 0) {
    sVar3 = FUN_004736a0((int)this);
    uVar5 = FUN_00454d00(param_3,(int)sVar3);
    return uVar5;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_classname_004d9f04);
  if (CONCAT31(extraout_var_04,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_visible_004dbebc);
    if ((CONCAT31(extraout_var_05,bVar1) != 0) ||
       (bVar1 = FUN_00437430(param_1,(int *)&DAT_004da268), CONCAT31(extraout_var_06,bVar1) != 0)) {
      uVar5 = FUN_00454c50(param_3,1 - (*(short *)((int)this + 0x98) == 0));
      return uVar5;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_position_004dc35c);
    if ((CONCAT31(extraout_var_07,bVar1) == 0) &&
       ((bVar1 = FUN_00437430(param_1,(int *)&DAT_004d98f4), CONCAT31(extraout_var_08,bVar1) == 0 &&
        (bVar1 = FUN_00437430(param_1,(int *)s_globaloffset_004dc2e4),
        CONCAT31(extraout_var_09,bVar1) == 0)))) {
      bVar1 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
      if (CONCAT31(extraout_var_10,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
        if (CONCAT31(extraout_var_11,bVar1) == 0) {
          uVar5 = FUN_0046b080(this,param_1,param_2,param_3);
          return uVar5;
        }
        uVar5 = FUN_00455210(0xffffffff,param_3,s_SoundElement_004dca2c);
        return uVar5;
      }
      if (*(int **)((int)this + 0x52) == (int *)0x0) {
        uVar5 = FUN_00454c50(param_3,0);
        return uVar5;
      }
      uVar5 = (**(code **)(**(int **)((int)this + 0x52) + 0x98))(param_1,param_2,param_3);
      return uVar5;
    }
    uVar5 = (**(code **)(**(int **)((int)this + 0x62) + 0x98))(param_1,param_2,param_3);
    return uVar5;
  }
  uVar6 = 0xffffffff;
  pcVar8 = (char *)&DAT_004dca3c;
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
  uVar5 = FUN_00455210(0xffffffff,param_3,local_108);
  return uVar5;
}


