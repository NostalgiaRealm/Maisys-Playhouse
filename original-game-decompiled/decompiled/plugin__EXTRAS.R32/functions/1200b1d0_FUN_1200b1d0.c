
/* ==== FUN_1200b1d0 @ 1200b1d0 ==== 
 * signature: undefined4 __cdecl FUN_1200b1d0(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1200b1d0-1200b4a1
 */

undefined4 __cdecl FUN_1200b1d0(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int local_4;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)((int)param_1 + 10),
                         (undefined4 *)((int)param_1 + 0x3e));
    return uVar2;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_destination_1203739c);
  if ((char)uVar1 != '\0') {
    if (*param_4 == 10) {
      *(undefined4 *)param_4 = param_1[5];
      param_4[2] = *(short *)(param_1 + 6);
      return 0;
    }
    if (*param_4 == 0x6a) {
      *param_4 = 10;
      param_4[2] = *(short *)(param_1 + 6);
      param_4[1] = *(short *)((int)param_1 + 0x16);
      return 0;
    }
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,param_1,param_1 + 5,param_4);
    return DAT_12039a9c;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_speed_12037388);
  if ((char)uVar1 != '\0') {
    if (*param_4 == 0xf) {
      *(undefined4 *)param_4 = param_1[8];
      *(undefined4 *)(param_4 + 2) = param_1[9];
      param_4[4] = *(short *)(param_1 + 10);
      return 0;
    }
    if (*param_4 == 0x6a) {
      *param_4 = 0xf;
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)((int)param_1 + 0x26);
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)((int)param_1 + 0x22);
      return 0;
    }
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,param_1,param_1 + 8,param_4);
    return DAT_12039a9c;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_duration_12037374);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_120271d0(param_2,(uint *)s_updaterate_12037360);
    if ((char)uVar1 == '\0') {
      return 0x10000;
    }
    if (*param_4 == 1) {
      *(undefined4 *)param_4 = param_1[0xd];
      param_4[2] = *(short *)(param_1 + 0xe);
      return 0;
    }
    if (*param_4 == 0x6a) {
      *param_4 = 1;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)((int)param_1 + 0x36);
      return 0;
    }
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,param_1,param_1 + 0xd,param_4);
    return DAT_12039a9c;
  }
  if (*param_4 == 0xf) {
    *(undefined4 *)param_4 = *(undefined4 *)((int)param_1 + 0x2a);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)((int)param_1 + 0x2e);
    param_4[4] = *(short *)((int)param_1 + 0x32);
    return 0;
  }
  if (*param_4 == 0x6a) {
    *param_4 = 0xf;
    *(undefined4 *)(param_4 + 3) = param_1[0xc];
    *(undefined4 *)(param_4 + 1) = param_1[0xb];
    return 0;
  }
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
  DAT_12039a9c = (*pcVar3)(local_4,param_1,(int)param_1 + 0x2a,param_4);
  return DAT_12039a9c;
}


