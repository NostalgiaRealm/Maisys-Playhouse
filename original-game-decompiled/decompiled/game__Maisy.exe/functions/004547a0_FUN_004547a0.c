
/* ==== FUN_004547a0 @ 004547a0 ==== 
 * signature: undefined4 __cdecl FUN_004547a0(short * param_1, short * param_2)
 * body: 004547a0-00454821
 */

undefined4 __cdecl FUN_004547a0(short *param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0x10;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0x4000;
    param_2[0xc] = 0x408f;
  }
  sVar1 = *param_1;
  if (sVar1 == 0x10) {
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
    *param_2 = *param_1;
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


