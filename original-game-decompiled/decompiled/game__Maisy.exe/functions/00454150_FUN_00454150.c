
/* ==== FUN_00454150 @ 00454150 ==== 
 * signature: undefined4 __cdecl FUN_00454150(undefined4 * param_1, short * param_2)
 * body: 00454150-004542a0
 */

undefined4 __cdecl FUN_00454150(undefined4 *param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte local_1c;
  byte local_1b;
  byte local_19;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 9;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  switch(*(undefined2 *)param_1) {
  case 1:
    iVar1 = *(int *)((int)param_1 + 2);
    param_2[3] = 100;
    param_2[4] = 0;
    param_2[5] = 0x3c;
    param_2[6] = 0;
    *(int *)(param_2 + 1) = iVar1 * 100;
    return 0;
  default:
    return 0x10000;
  case 9:
    *(undefined4 *)param_2 = *param_1;
    *(undefined4 *)(param_2 + 2) = param_1[1];
    *(undefined4 *)(param_2 + 4) = param_1[2];
    param_2[6] = *(short *)(param_1 + 3);
    return 0;
  case 0xf:
    lVar3 = __ftol();
    param_2[5] = 0x3c;
    param_2[6] = 0;
    param_2[3] = 100;
    param_2[4] = 0;
    *(int *)(param_2 + 1) = (int)lVar3;
    return 0;
  case 0x66:
    break;
  case 0x69:
    uVar2 = FUN_00453ed0(*(int **)((int)param_1 + 2),param_2);
    return uVar2;
  case 0x73:
    uVar2 = FUN_00453ed0(*(int **)((int)param_1 + 2),param_2);
    return uVar2;
  }
  if ((*(byte **)((int)param_1 + 0xe) != (byte *)0x0) && (*(int *)((int)param_1 + 10) != 0)) {
    FUN_0043d640(*(byte **)((int)param_1 + 0xe),&local_1c);
    param_2[3] = 1000;
    param_2[4] = 0;
    *(uint *)(param_2 + 1) = (((uint)local_1c * 0x3c + (uint)local_1b) * 6000 + (uint)local_19) * 10
    ;
    return 0;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0x3c;
  param_2[6] = 0;
  param_2[3] = 100;
  param_2[4] = 0;
  return 0;
}


