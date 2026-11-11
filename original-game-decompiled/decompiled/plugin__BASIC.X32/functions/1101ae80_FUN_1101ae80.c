
/* ==== FUN_1101ae80 @ 1101ae80 ==== 
 * signature: uint __cdecl FUN_1101ae80(undefined4 * param_1, undefined2 * param_2, short * param_3, short * param_4)
 * body: 1101ae80-1101b009
 */

uint __cdecl FUN_1101ae80(undefined4 *param_1,undefined2 *param_2,short *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  ushort extraout_var;
  undefined8 local_30;
  double local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  double local_10;
  double local_8;
  
  if ((*param_3 == 0x10) && (*param_4 == 0x10)) {
    *param_2 = 0x10;
    param_2[1] = param_4[1] + param_3[1];
    param_2[2] = param_4[2] + param_3[2];
    return in_EAX & 0xffff0000;
  }
  if ((*param_3 == 0x16) && (*param_4 == 0x16)) {
    uVar3 = FUN_1101ae10(param_1,*(undefined4 *)(param_3 + 1),*(undefined4 *)(param_3 + 3),
                         *(double *)(param_3 + 5),&local_28,(double *)&local_30);
    if ((short)uVar3 == 0) {
      uVar3 = FUN_1101ae10(param_1,*(undefined4 *)(param_4 + 1),*(undefined4 *)(param_4 + 3),
                           *(double *)(param_4 + 5),&local_10,&local_8);
      if ((short)uVar3 != 0) {
        return uVar3;
      }
      local_28 = local_10 + local_28;
      local_8 = local_8 + local_30;
      local_30._4_4_ = (uint)((ulonglong)local_8 >> 0x20);
      uVar3 = local_30._4_4_;
      local_30._0_4_ = SUB84(local_8,0);
      iVar1 = (int)local_30;
      local_30 = local_8;
      uVar3 = FUN_1101acf0(param_1,local_28,iVar1,uVar3,&local_20,(double *)&local_18);
    }
    if ((short)uVar3 == 0) {
      *param_2 = 0x16;
      *(undefined4 *)(param_2 + 3) = local_1c;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)(param_2 + 7) = local_14;
      *(undefined4 *)(param_2 + 5) = local_18;
      return uVar3;
    }
  }
  else {
    FUN_11019aa0(param_3,param_4);
    if ((*param_3 == 0x15) && (*param_4 == 0x15)) {
      *param_2 = 0x15;
      *(double *)(param_2 + 1) = *(double *)(param_4 + 1) + *(double *)(param_3 + 1);
      return (uint)extraout_var << 0x10;
    }
    if ((*param_3 == 1) && (*param_4 == 1)) {
      *param_2 = 1;
      iVar1 = *(int *)(param_4 + 1);
      iVar2 = *(int *)(param_3 + 1);
      *(int *)(param_2 + 1) = iVar1 + iVar2;
      return iVar1 + iVar2 & 0xffff0000;
    }
    uVar3 = CONCAT22(extraout_var,0xfff2);
  }
  return uVar3;
}


