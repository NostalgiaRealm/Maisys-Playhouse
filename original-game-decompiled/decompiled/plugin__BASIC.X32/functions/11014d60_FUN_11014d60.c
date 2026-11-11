
/* ==== FUN_11014d60 @ 11014d60 ==== 
 * signature: short __cdecl FUN_11014d60(undefined4 * param_1, short * param_2, short * param_3, short * param_4, int param_5, undefined2 * param_6)
 * body: 11014d60-11014f50
 */

short __cdecl
FUN_11014d60(undefined4 *param_1,short *param_2,short *param_3,short *param_4,int param_5,
            undefined2 *param_6)

{
  short sVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*param_2 == 0x1fb) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      FUN_11014f70(param_1,param_6,*(undefined4 *)(param_2 + 3),0,0,0);
      return -0x1e;
    }
  }
  else if (*param_2 != 0x1fc) {
    return -0x1e;
  }
  if ((*(byte *)(param_2 + 1) & 2) == 0) {
    sVar1 = FUN_11014fe0(param_1,param_2,param_3,param_5,param_6);
    return sVar1;
  }
  iVar2 = FUN_1101cf40(*(char **)(*(int *)(param_5 + 0x28) + *(int *)(param_2 + 7) * 4));
  sVar1 = FUN_1101c7e0(param_1,param_5,param_3,param_6);
  if (sVar1 != 0) {
    return sVar1;
  }
  if ((iVar2 == 5) || (iVar2 == 6)) {
    FUN_11019b70(param_3);
    if (*param_3 != 0x15) {
      return -4;
    }
  }
  else {
    FUN_11019c00(extraout_ECX,extraout_EDX,param_1,param_3);
    if (*param_3 != 1) {
      return -5;
    }
  }
  sVar1 = 0;
  switch(iVar2) {
  case 1:
    if (*param_4 == 0x10) {
      param_4[1] = (short)*(undefined4 *)(param_3 + 1);
      goto LAB_11014ef5;
    }
    break;
  case 2:
    if (*param_4 == 0x10) {
      param_4[2] = (short)*(undefined4 *)(param_3 + 1);
      goto LAB_11014ef5;
    }
    break;
  case 3:
    if (*param_4 == 0x11) {
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_3 + 1);
      goto LAB_11014ef5;
    }
    break;
  case 4:
    if (*param_4 == 0x11) {
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_3 + 1);
      goto LAB_11014ef5;
    }
    break;
  case 5:
    if (*param_4 == 0x16) {
      *(double *)(param_4 + 1) = *(double *)(param_3 + 1) * 0.017453292519943295;
      goto LAB_11014ef5;
    }
    break;
  case 6:
    if (*param_4 == 0x16) {
      *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_3 + 3);
      *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_3 + 1);
      goto LAB_11014ef5;
    }
    break;
  default:
    sVar1 = -0x1e;
    goto LAB_11014ef5;
  }
  sVar1 = -0x1e;
LAB_11014ef5:
  if (sVar1 == -0x1e) {
    FUN_11014f70(param_1,param_6,*(undefined4 *)(param_2 + 3),
                 *(int *)(*(int *)(param_5 + 0x28) + *(int *)(param_2 + 5) * 4),
                 *(int *)(*(int *)(param_5 + 0x28) + *(int *)(param_2 + 7) * 4),0);
  }
  if (sVar1 == 0) {
    sVar1 = FUN_11014fe0(param_1,param_2,param_4,param_5,param_6);
  }
  return sVar1;
}


