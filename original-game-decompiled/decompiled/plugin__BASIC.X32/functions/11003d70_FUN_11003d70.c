
/* ==== FUN_11003d70 @ 11003d70 ==== 
 * signature: uint __cdecl FUN_11003d70(undefined4 * param_1, int param_2)
 * body: 11003d70-11003f26
 */

uint __cdecl FUN_11003d70(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  undefined2 extraout_var;
  undefined4 local_40;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  undefined4 local_34;
  undefined4 local_30;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar3 = FUN_1100fc30((int)param_1);
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  FUN_1100fc50(param_1,uVar3,&local_30);
  *(undefined4 *)(param_2 + 0x40) = local_10;
  *(undefined4 *)(param_2 + 0x44) = local_c;
  local_34 = CONCAT22(local_2a - local_10._2_2_,local_2c - (short)local_10);
  FUN_1100fca0(param_1,&local_3c);
  FUN_11028c90(&local_3c,-(short)local_10,-local_10._2_2_);
  local_40 = local_34;
  uVar2 = local_40;
  uVar1 = *(ushort *)(param_2 + 0x1e);
  local_40._2_2_ = (short)(local_34 >> 0x10);
  if (*(short *)(param_2 + 0x1c) == 2) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 8) != 0) goto LAB_11003e28;
    }
    else {
      local_38 = (local_3c - local_28) + local_2c;
LAB_11003e28:
      local_40 = CONCAT22(local_40._2_2_,local_38);
      uVar2 = local_40;
    }
    local_40 = uVar2;
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) == 0) goto LAB_11003e88;
    }
    else {
LAB_11003e74:
      local_36 = (local_3a - local_26) + local_2a;
    }
  }
  else {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 8) != 0) {
        local_38 = (local_3c - local_28) + local_2c;
        goto LAB_11003e5e;
      }
    }
    else {
LAB_11003e5e:
      local_40 = CONCAT22(local_40._2_2_,local_38);
      uVar2 = local_40;
    }
    local_40 = uVar2;
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) == 0) goto LAB_11003e88;
      goto LAB_11003e74;
    }
  }
  local_40 = CONCAT22(local_36,(short)local_40);
LAB_11003e88:
  *(undefined1 *)(param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 0x36) = 1;
  *(undefined2 *)(param_2 + 0x5a) = 0;
  FUN_11003980(0x1f5,param_1);
  DVar4 = timeGetTime();
  *(uint *)(param_2 + 0x56) = (DVar4 * 6) / 100 + *(int *)(param_2 + 0x52) / 100000;
  if (*(short *)(param_2 + 0x1c) != 2) {
    *(uint *)(param_2 + 0x28) = local_34;
    *(uint *)(param_2 + 0x2c) = local_40;
    return local_34 & 0xffffff00;
  }
  FUN_1101db80(param_1,uVar3,1,(int)(short)local_40,(int)local_40._2_2_,0,0);
  *(undefined2 *)(param_2 + 0x2c) = *(undefined2 *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x28) = local_40;
  *(undefined2 *)(param_2 + 0x2e) = *(undefined2 *)(param_2 + 0x22);
  return CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x22)) & 0xffffff00;
}


