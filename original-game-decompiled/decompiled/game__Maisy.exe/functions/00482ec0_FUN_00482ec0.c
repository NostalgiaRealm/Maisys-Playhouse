
/* ==== FUN_00482ec0 @ 00482ec0 ==== 
 * signature: undefined4 __cdecl FUN_00482ec0(undefined4 param_1, short * param_2, short * param_3)
 * body: 00482ec0-004830a4
 */

undefined4 __cdecl FUN_00482ec0(undefined4 param_1,short *param_2,short *param_3)

{
  short sVar1;
  char *pcVar2;
  int iVar3;
  
  sVar1 = *param_2;
  if (*param_3 != sVar1) {
    if ((sVar1 != 0) && (sVar1 != 0x6a)) {
      return 0x60002;
    }
    FUN_00482e70(param_1,param_2,*param_3);
  }
  sVar1 = *param_3;
  switch(sVar1) {
  case 0:
  case 0x6a:
  case 0x6e:
    break;
  case 1:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    param_2[2] = param_3[2];
    return 0;
  default:
    return 0x60002;
  case 9:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
    param_2[6] = param_3[6];
    return 0;
  case 10:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    param_2[2] = param_3[2];
    return 0;
  case 0xb:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    param_2[4] = param_3[4];
    return 0;
  case 0xd:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    param_2[4] = param_3[4];
    return 0;
  case 0xf:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    param_2[4] = param_3[4];
    return 0;
  case 0x10:
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
    *param_2 = *param_3;
    return 0;
  case 0x14:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    return 0;
  case 0x17:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    param_2[4] = param_3[4];
    return 0;
  case 100:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    param_2[4] = param_3[4];
    return 0;
  case 0x65:
    FUN_0048b9a0(0xffffffff,param_2,(int)param_3);
    return 0;
  case 0x66:
  case 0x6f:
  case 0x76:
    FUN_0048b5f0(0xffffffff,param_2,param_3);
    return 0;
  case 0x68:
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
    *param_2 = *param_3;
    return 0;
  case 0x69:
    FUN_0048b6e0(param_2,param_3);
    return 0;
  case 0x6b:
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      param_3 = param_3 + 2;
      param_2 = param_2 + 2;
    }
    *param_2 = *param_3;
    return 0;
  case 0x6c:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    param_2[2] = param_3[2];
    return 0;
  case 0x6d:
    FUN_0048b8d0(param_2,(int)param_3);
    return 0;
  case 0x73:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = sVar1;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
    pcVar2 = FUN_0043b970(*(char **)(param_3 + 5));
    *(char **)(param_2 + 5) = pcVar2;
    return 0;
  case 0x7c:
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
    param_2[6] = param_3[6];
  }
  return 0;
}


