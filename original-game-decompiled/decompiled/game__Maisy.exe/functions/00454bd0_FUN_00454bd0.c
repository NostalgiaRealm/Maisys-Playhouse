
/* ==== FUN_00454bd0 @ 00454bd0 ==== 
 * signature: undefined4 __cdecl FUN_00454bd0(short * param_1, short * param_2)
 * body: 00454bd0-00454c40
 */

undefined4 __cdecl FUN_00454bd0(short *param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0x65;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[1] = -1;
    param_2[2] = -1;
  }
  sVar1 = *param_1;
  if (sVar1 == 0x65) {
    FUN_0048b9a0(0xffffffff,param_2,(int)param_1);
    return 0;
  }
  if (sVar1 == 0x69) {
    uVar2 = FUN_00453ed0(*(int **)(param_1 + 1),param_2);
    return uVar2;
  }
  if (sVar1 != 0x73) {
    return 0x10000;
  }
  uVar2 = FUN_00453ed0(*(int **)(param_1 + 1),param_2);
  return uVar2;
}


