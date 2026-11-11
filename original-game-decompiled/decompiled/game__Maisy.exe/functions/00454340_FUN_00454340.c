
/* ==== FUN_00454340 @ 00454340 ==== 
 * signature: undefined4 __cdecl FUN_00454340(undefined4 * param_1, short * param_2)
 * body: 00454340-004543dd
 */

undefined4 __cdecl FUN_00454340(undefined4 *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 10;
    param_2[2] = 0;
    param_2[1] = 0;
  }
  switch(*(undefined2 *)param_1) {
  case 10:
    *(undefined4 *)param_2 = *param_1;
    param_2[2] = *(short *)(param_1 + 1);
    return 0;
  case 0xb:
    param_2[1] = (short)*(undefined4 *)((int)param_1 + 2);
    param_2[2] = (short)*(undefined4 *)((int)param_1 + 6);
    return 0;
  default:
    return 0x10000;
  case 0x10:
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


