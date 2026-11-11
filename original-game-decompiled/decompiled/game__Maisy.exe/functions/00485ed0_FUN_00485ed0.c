
/* ==== FUN_00485ed0 @ 00485ed0 ==== 
 * signature: undefined4 __thiscall FUN_00485ed0(void * this, short * param_1)
 * body: 00485ed0-00486197
 */

undefined4 __thiscall FUN_00485ed0(void *this,short *param_1)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  int local_14;
  short local_10;
  uint local_e;
  uint local_a;
  short local_6;
  
  local_14 = 0;
  FUN_00486d60(this,&local_6,2);
  *param_1 = local_6;
  iVar1 = FUN_00485e50(this,param_1,&local_14,(int)&local_10);
  if (iVar1 != 0) {
    return 0x60001;
  }
  local_14 = local_14 + -2;
  local_10 = local_6;
  switch(*param_1) {
  case 0xf:
    FUN_00486d60(this,&local_1e,local_14);
    *param_1 = local_6;
    *(undefined4 *)(param_1 + 3) = local_1a;
    *(undefined4 *)(param_1 + 1) = local_1e;
    return 0;
  case 0x10:
    FUN_00486d60(this,&local_2e,local_14);
    *param_1 = local_6;
    *(undefined4 *)(param_1 + 3) = local_2a;
    *(undefined4 *)(param_1 + 1) = local_2e;
    *(undefined4 *)(param_1 + 7) = local_22;
    *(undefined4 *)(param_1 + 5) = local_26;
    *(undefined4 *)(param_1 + 0xb) = local_1a;
    *(undefined4 *)(param_1 + 9) = local_1e;
    return 0;
  default:
    FUN_00486d60(this,param_1 + 1,local_14);
    *param_1 = local_6;
    return 0;
  case 0x65:
    *param_1 = local_6;
    *(uint *)(param_1 + 5) = local_a;
    *(uint *)(param_1 + 3) = local_e;
    param_1[1] = -1;
    param_1[2] = -1;
    if (local_e == 0) {
      param_1[7] = 0;
      param_1[8] = 0;
      return 0;
    }
    iVar1 = FUN_00434920(DAT_004d99ac,local_e,0);
    *(int *)(param_1 + 7) = iVar1;
    if (iVar1 == 0) {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return 0x10000;
    }
    FUN_00486d60(this,iVar1,local_a);
    return 0;
  case 0x66:
  case 0x6f:
  case 0x76:
    *param_1 = local_6;
    if ((int)local_a < 1) {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[1] = -1;
      param_1[2] = -1;
      param_1[7] = 0;
      param_1[8] = 0;
      return 0;
    }
    if (local_e == 0) {
      local_e = local_a;
    }
    *(uint *)(param_1 + 5) = local_a - 1;
    *(uint *)(param_1 + 3) = local_e;
    param_1[1] = -1;
    param_1[2] = -1;
    iVar1 = FUN_0043b950(local_e);
    *(int *)(param_1 + 7) = iVar1;
    if (iVar1 == 0) {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return 0x10000;
    }
    FUN_00486d60(this,iVar1,local_a);
    return 0;
  case 0x6d:
    *param_1 = local_6;
    param_1[1] = (short)(local_e >> 2);
    if (local_e == 0) {
      local_e = local_a;
    }
    sVar3 = 0;
    uVar2 = FUN_00434920(DAT_004d99ac,local_e,0);
    *(undefined4 *)(param_1 + 2) = uVar2;
    if (0 < param_1[1]) {
      do {
        iVar1 = (int)sVar3;
        sVar3 = sVar3 + 1;
        FUN_00486d60(this,iVar1 * 4 + *(int *)(param_1 + 2),4);
      } while (sVar3 < param_1[1]);
      return 0;
    }
    break;
  case 0x73:
    *param_1 = local_6;
    *(uint *)(param_1 + 3) = local_e;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar1 = FUN_0043b950(local_a);
    *(int *)(param_1 + 5) = iVar1;
    if (iVar1 == 0) {
      return 0x10000;
    }
    FUN_00486d60(this,iVar1,local_a);
  }
  return 0;
}


