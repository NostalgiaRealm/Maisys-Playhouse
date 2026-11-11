
/* ==== FUN_1101cd60 @ 1101cd60 ==== 
 * signature: short __cdecl FUN_1101cd60(undefined4 * param_1, int param_2, short * param_3, short * param_4, undefined2 * param_5)
 * body: 1101cd60-1101cf35
 */

short __cdecl
FUN_1101cd60(undefined4 *param_1,int param_2,short *param_3,short *param_4,undefined2 *param_5)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  short local_30;
  undefined4 local_2e;
  
  sVar1 = *param_4;
  if (sVar1 == 0x19) {
    sVar1 = FUN_1101c640(param_1,param_3,*(undefined4 *)(param_4 + 1),param_5);
    return sVar1;
  }
  if ((sVar1 < 0x1fb) || (0x1fc < sVar1)) {
    return -1;
  }
  if ((*(uint *)(param_4 + 1) & 1) == 0) {
    if (sVar1 != 0x1fc) {
      return -1;
    }
    sVar1 = FUN_1101c640(param_1,&local_30,*(undefined4 *)(param_4 + 3),param_5);
  }
  else {
    if ((*(uint *)(param_4 + 1) & 2) != 0) {
      return -1;
    }
    sVar1 = FUN_1101d0b0(param_1,param_2,param_4,&local_40);
    if (sVar1 != 0) {
      return sVar1;
    }
    local_30 = 0x17;
    sVar1 = FUN_11024d70(param_1,&local_40,
                         *(undefined4 *)(*(int *)(param_2 + 0x28) + *(int *)(param_4 + 5) * 4),
                         &local_30,0);
    if (sVar1 != 0) {
      FUN_1101ca20(param_1,param_5,*(undefined4 *)(param_4 + 3));
    }
    if (local_30 != 0x19) {
      return -1;
    }
    sVar1 = FUN_1101c640(param_1,&local_30,local_2e,param_5);
  }
  if (sVar1 == 0) {
    if ((local_30 != 3) && (local_30 != 0x19)) {
      local_40._0_1_ = 0x6f;
      local_40._1_1_ = 0x62;
      local_3e = 0x6a;
      local_3d = 0x65;
      local_3c = 99;
      local_3b = 0x74;
      local_3a = 0;
      FUN_1101ca20(param_1,param_5,*(undefined4 *)(param_4 + 3));
      return -0x1d;
    }
    psVar3 = param_3;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)psVar3 = *(undefined4 *)param_4;
      param_4 = param_4 + 2;
      psVar3 = psVar3 + 2;
    }
    if (local_30 == 3) {
      *param_3 = 0x1fb;
    }
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 3) = local_2e;
    sVar1 = 0;
  }
  return sVar1;
}


