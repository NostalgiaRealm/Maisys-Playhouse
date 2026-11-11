
/* ==== FUN_004164e0 @ 004164e0 ==== 
 * signature: undefined4 __cdecl FUN_004164e0(short * param_1, int * param_2, short * param_3)
 * body: 004164e0-0041666d
 */

int __cdecl FUN_004164e0(short *param_1,int *param_2,short *param_3)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined4 uVar4;
  undefined3 extraout_var_06;
  uint uVar5;
  
  sVar1 = *param_1;
  if (sVar1 != 0x10) {
    if (sVar1 != 0x11) {
      if (sVar1 != 0x16) {
        return (uint)(uint3)(int3)(char)((ushort)sVar1 >> 8) << 8;
      }
      bVar3 = FUN_00437430(param_2,(int *)s_angle_004d9e40);
      if ((CONCAT31(extraout_var_05,bVar3) != 0) &&
         (uVar4 = FUN_00416670(param_3), (char)uVar4 != '\0')) {
        *(double *)(param_1 + 1) = *(double *)(param_3 + 1) * 0.017453292519943295;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      bVar3 = FUN_00437430(param_2,(int *)s_magnitude_004d9e58);
      uVar5 = 0;
      if ((CONCAT31(extraout_var_06,bVar3) != 0) &&
         (uVar5 = FUN_00416670(param_3), (char)uVar5 != '\0')) {
        uVar4 = *(undefined4 *)(param_3 + 3);
        *(undefined4 *)(param_1 + 7) = uVar4;
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      return uVar5 & 0xffffff00;
    }
    bVar3 = FUN_00437430(param_2,(int *)s_start_004d9e10);
    if ((CONCAT31(extraout_var_03,bVar3) != 0) && (cVar2 = FUN_00416690(param_3), cVar2 != '\0')) {
      uVar4 = *(undefined4 *)(param_3 + 1);
      *(undefined4 *)(param_1 + 1) = uVar4;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    bVar3 = FUN_00437430(param_2,(int *)&DAT_004d9e28);
    uVar5 = 0;
    if ((CONCAT31(extraout_var_04,bVar3) != 0) &&
       (uVar5 = FUN_00416690(param_3), (char)uVar5 != '\0')) {
      uVar4 = *(undefined4 *)(param_3 + 1);
      *(undefined4 *)(param_1 + 3) = uVar4;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    return uVar5 & 0xffffff00;
  }
  bVar3 = FUN_00437430(param_2,(int *)&DAT_004d9db0);
  if (((CONCAT31(extraout_var,bVar3) != 0) ||
      (bVar3 = FUN_00437430(param_2,(int *)&DAT_004d9de0), CONCAT31(extraout_var_00,bVar3) != 0)) &&
     (cVar2 = FUN_00416690(param_3), cVar2 != '\0')) {
    uVar4 = *(undefined4 *)(param_3 + 1);
    param_1[1] = (short)uVar4;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  bVar3 = FUN_00437430(param_2,(int *)&DAT_004d9dc8);
  if (CONCAT31(extraout_var_01,bVar3) == 0) {
    bVar3 = FUN_00437430(param_2,(int *)&DAT_004d9df8);
    uVar5 = 0;
    if (CONCAT31(extraout_var_02,bVar3) == 0) goto LAB_00416591;
  }
  uVar5 = FUN_00416690(param_3);
  if ((char)uVar5 != '\0') {
    uVar4 = *(undefined4 *)(param_3 + 1);
    param_1[2] = (short)uVar4;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
LAB_00416591:
  return uVar5 & 0xffffff00;
}


