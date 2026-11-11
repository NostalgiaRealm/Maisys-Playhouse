
/* ==== FUN_00454a40 @ 00454a40 ==== 
 * signature: undefined4 __cdecl FUN_00454a40(undefined4 * param_1, short * param_2)
 * body: 00454a40-00454ad6
 */

undefined4 __cdecl FUN_00454a40(undefined4 *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0x17;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  switch(*(undefined2 *)param_1) {
  case 0x17:
    *(undefined4 *)param_2 = *param_1;
    *(undefined4 *)(param_2 + 2) = param_1[1];
    param_2[4] = *(short *)(param_1 + 2);
    return 0;
  default:
    return 0x10000;
  case 100:
    return 0x10000;
  case 0x65:
    return 0x10000;
  case 0x66:
    return 0x10000;
  case 0x69:
    uVar1 = FUN_00453ed0(*(int **)((int)param_1 + 2),param_2);
    return uVar1;
  case 0x73:
    uVar1 = FUN_00453ed0(*(int **)((int)param_1 + 2),param_2);
    return uVar1;
  }
}


