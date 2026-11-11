
/* ==== FUN_00458270 @ 00458270 ==== 
 * signature: undefined4 __cdecl FUN_00458270(short * param_1, int * param_2, undefined2 * param_3)
 * body: 00458270-004583bd
 */

undefined4 __cdecl FUN_00458270(short *param_1,int *param_2,undefined2 *param_3)

{
  short sVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  
  sVar1 = *param_1;
  if (sVar1 != 10) {
    if (sVar1 == 0xb) {
      bVar2 = FUN_00437430(param_2,(int *)s_start_004dbd58);
      if (CONCAT31(extraout_var_03,bVar2) != 0) {
        *param_3 = 1;
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
        return 0;
      }
      bVar2 = FUN_00437430(param_2,(int *)&DAT_004dbd44);
      if (CONCAT31(extraout_var_04,bVar2) != 0) {
        *param_3 = 1;
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 3);
        return 0;
      }
    }
    else {
      if (sVar1 != 0x10) {
        return 0x10000;
      }
      bVar2 = FUN_00437430(param_2,(int *)s_angle_004dbd30);
      if (CONCAT31(extraout_var_05,bVar2) != 0) {
        *param_3 = 0xf;
        *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
        return 0;
      }
      bVar2 = FUN_00437430(param_2,(int *)s_magnitude_004dbd1c);
      if (CONCAT31(extraout_var_06,bVar2) != 0) {
        *param_3 = 0xf;
        *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 7);
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 5);
      }
    }
    return 0;
  }
  bVar2 = FUN_00437430(param_2,(int *)&DAT_004dbda8);
  if ((CONCAT31(extraout_var,bVar2) != 0) ||
     (bVar2 = FUN_00437430(param_2,(int *)&DAT_004dbd94), CONCAT31(extraout_var_00,bVar2) != 0)) {
    *param_3 = 1;
    *(int *)(param_3 + 1) = (int)param_1[1];
    return 0;
  }
  bVar2 = FUN_00437430(param_2,(int *)&DAT_004dbd80);
  if ((CONCAT31(extraout_var_01,bVar2) == 0) &&
     (bVar2 = FUN_00437430(param_2,(int *)&DAT_004dbd6c), CONCAT31(extraout_var_02,bVar2) == 0)) {
    return 0;
  }
  *param_3 = 1;
  *(int *)(param_3 + 1) = (int)param_1[2];
  return 0;
}


