
/* ==== FUN_004545a0 @ 004545a0 ==== 
 * signature: undefined4 __cdecl FUN_004545a0(short * param_1, short * param_2)
 * body: 004545a0-00454619
 */

undefined4 __cdecl FUN_004545a0(short *param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0xd;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  sVar1 = *param_1;
  if (sVar1 == 0xd) {
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
    param_2[4] = param_1[4];
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


