
/* ==== FUN_12017100 @ 12017100 ==== 
 * signature: int __cdecl FUN_12017100(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 12017100-12017525
 */

int __cdecl FUN_12017100(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  char local_2d;
  int local_2c [3];
  int iStack_1e;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined4 uStack_12;
  undefined4 uStack_e;
  undefined4 uStack_a;
  int iStack_4;
  
  local_2d = '\0';
  pcVar2 = (code *)FUN_12027370((int)param_1,0,0x2a,local_2c);
  DAT_12039a9c = (*pcVar2)(local_2c[0],&local_2d);
  if (local_2d != '\0') {
    uStack_18._0_1_ = '\0';
    pcVar2 = (code *)FUN_12027370((int)param_1,0,0x2c,local_2c);
    DAT_12039a9c = (*pcVar2)(local_2c[0],param_2,param_3,param_4,&uStack_18);
    if ((char)uStack_18 != '\0') {
      return DAT_12039a9c;
    }
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar3 != '\0') {
    if (param_3 == (short *)0x0) {
      return 0x40004;
    }
    iVar4 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)0x0,(undefined4 *)0x0);
    return iVar4;
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_value_120370b8);
  if (((char)uVar3 == '\0') &&
     (uVar3 = FUN_120271d0(param_2,(uint *)s_object_120378e4), (char)uVar3 == '\0')) {
    uVar3 = FUN_120271d0(param_2,(uint *)&DAT_12037340);
    if ((char)uVar3 != '\0') {
      if ((*param_4 != 0x66) && (*param_4 != 0x6a)) {
        return 0x10000;
      }
      FUN_12027790(0,(undefined2 *)local_2c,0);
      if (*param_4 == 0x6a) {
        FUN_12027790(0,param_4,0);
      }
      if ((param_1[0x16] & 0x10) == 0) {
        if (((param_1[0x16] & 1) == 0) || (*(int *)((int)param_1 + 0x2e) == 0)) {
          FUN_12027790(0,param_4,0x12037220);
        }
        else {
          FUN_120273e0(0,param_4,(int)(param_1 + 8));
        }
      }
      else {
        iVar4 = FUN_12017ae0((int)param_1,(undefined2 *)local_2c,0);
        if (iVar4 != 0x10000) {
          FUN_120273e0(0,param_4,(int)local_2c);
        }
      }
      if (iStack_1e != 0) {
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&uStack_18);
        DAT_12039a9c = (*pcVar2)(CONCAT22(uStack_18._2_2_,CONCAT11(uStack_18._1_1_,(char)uStack_18))
                                 ,iStack_1e);
      }
      return 0;
    }
    uVar3 = FUN_120271d0(param_2,(uint *)s_fullpath_120378f8);
    if ((char)uVar3 == '\0') {
      return 0x10000;
    }
    if ((*param_4 != 0x66) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    uStack_18._0_1_ = 0x69;
    uStack_18._1_1_ = 0;
    uStack_12 = 0;
    uStack_e = 0;
    uStack_18._2_2_ = 0;
    uStack_14 = 0;
    uStack_a = 0;
    FUN_12027790(0,(undefined2 *)local_2c,0);
    if (*param_4 == 0x6a) {
      FUN_12027790(0,param_4,0);
    }
    iVar4 = FUN_12017ae0((int)param_1,(undefined2 *)local_2c,1);
    if (((iVar4 == 0) && (iVar4 = FUN_12017a10((int)param_1,(undefined2 *)&uStack_18), iVar4 == 0))
       && (CONCAT22(uStack_14,uStack_18._2_2_) != 0)) {
      FUN_120273e0(0,param_4,(int)local_2c);
    }
    else {
      FUN_12027790(0,param_4,0x12037220);
    }
    if (iStack_1e != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_4);
      DAT_12039a9c = (*pcVar2)(iStack_4,iStack_1e);
    }
    return 0;
  }
  if ((*param_4 != 0x69) && (*param_4 != 0x6a)) {
    return 0x10000;
  }
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  *param_4 = 0x69;
  if ((param_1[0x16] & 0x10) != 0) {
    if (param_1[4] == 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,9,local_2c);
      DAT_12039a9c = (*pcVar2)(local_2c[0],(int)param_1 + 0xe,param_1[7]);
      if (DAT_12039a9c == 0) {
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,8,local_2c);
        DAT_12039a9c = (*pcVar2)(local_2c[0],(int)param_1 + 0xe);
      }
    }
    param_4[3] = 0;
    param_4[4] = 0;
    *param_4 = 0x69;
    param_4[5] = 0;
    param_4[6] = 0;
    uVar1 = param_1[4];
    param_4[7] = 0;
    param_4[8] = 0;
    *(undefined4 *)(param_4 + 1) = uVar1;
    return 0;
  }
  if ((param_1[0x16] & 1) == 0) {
    return 0;
  }
  iVar4 = FUN_12017a10((int)param_1,param_4);
  if (iVar4 == 0x10000) {
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    *param_4 = 0x69;
  }
  return 0;
}


