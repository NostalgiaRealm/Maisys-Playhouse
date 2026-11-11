
/* ==== FUN_00416390 @ 00416390 ==== 
 * signature: undefined4 __cdecl FUN_00416390(short * param_1, int * param_2)
 * body: 00416390-004164d0
 */

int __cdecl FUN_00416390(short *param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint3 extraout_var_02;
  undefined3 extraout_var_03;
  uint3 extraout_var_04;
  undefined3 extraout_var_05;
  uint3 extraout_var_06;
  
  sVar1 = *param_1;
  if (sVar1 == 0x10) {
    bVar2 = FUN_00437430(param_2,(int *)&DAT_004d9db0);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      bVar2 = FUN_00437430(param_2,(int *)&DAT_004d9de0);
      if (CONCAT31(extraout_var_00,bVar2) == 0) {
        bVar2 = FUN_00437430(param_2,(int *)&DAT_004d9dc8);
        if (CONCAT31(extraout_var_01,bVar2) == 0) {
          bVar2 = FUN_00437430(param_2,(int *)&DAT_004d9df8);
          if (CONCAT31(extraout_var_02,bVar2) == 0) {
            return (uint)extraout_var_02 << 8;
          }
        }
        *param_1 = 1;
        *(int *)(param_1 + 1) = (int)param_1[2];
        return CONCAT31((int3)(char)((ushort)param_1[2] >> 8),1);
      }
    }
    *param_1 = 1;
    sVar1 = param_1[1];
    *(int *)(param_1 + 1) = (int)sVar1;
    return CONCAT31((int3)(char)((ushort)sVar1 >> 8),1);
  }
  if (sVar1 == 0x11) {
    bVar2 = FUN_00437430(param_2,(int *)s_start_004d9e10);
    if (CONCAT31(extraout_var_03,bVar2) != 0) {
      *param_1 = 1;
      return CONCAT31(extraout_var_03,1);
    }
    bVar2 = FUN_00437430(param_2,(int *)&DAT_004d9e28);
    if (CONCAT31(extraout_var_04,bVar2) != 0) {
      *param_1 = 1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 3);
      return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 3) >> 8),1);
    }
    return (uint)extraout_var_04 << 8;
  }
  if (sVar1 != 0x16) {
    return (uint)(uint3)(int3)(char)((ushort)sVar1 >> 8) << 8;
  }
  bVar2 = FUN_00437430(param_2,(int *)s_angle_004d9e40);
  if (CONCAT31(extraout_var_05,bVar2) != 0) {
    *param_1 = 0x15;
    *(double *)(param_1 + 1) = *(double *)(param_1 + 1) * 57.29577951308232;
    return CONCAT31(extraout_var_05,1);
  }
  bVar2 = FUN_00437430(param_2,(int *)s_magnitude_004d9e58);
  if (CONCAT31(extraout_var_06,bVar2) != 0) {
    *param_1 = 0x15;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 7);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 5);
    return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 7) >> 8),1);
  }
  return (uint)extraout_var_06 << 8;
}


