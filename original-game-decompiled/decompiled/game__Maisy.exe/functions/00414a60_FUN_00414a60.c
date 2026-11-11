
/* ==== FUN_00414a60 @ 00414a60 ==== 
 * signature: uint __stdcall FUN_00414a60(undefined4 * param_1, byte * param_2)
 * body: 00414a60-00414bb0
 */

uint FUN_00414a60(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  uVar1 = FUN_004149b0(param_1,*(int *)(param_2 + 0x20));
  if ((uVar1 == 0) && ((*param_2 & 1) == 0)) {
    if (*(int *)((int)param_1 + 0x2e) == 0) {
      FUN_00451f80();
      FUN_00451f90();
      piVar2 = (int *)FUN_0044ccb0(*(int *)(param_2 + 8));
      *(int **)((int)param_1 + 0x2e) = piVar2;
      if (piVar2 != (int *)0x0) {
        *(int *)((int)param_1 + 0x32) = piVar2[0x21];
        (**(code **)(*piVar2 + 0x298))(&local_c);
        *(int *)((int)param_1 + 0x36) = (int)local_8 - (int)local_c;
        *(int *)((int)param_1 + 0x3a) = (int)local_6 - (int)local_a;
      }
      FUN_00451f90();
    }
    if (*(int *)((int)param_1 + 0x32) == 0) {
      param_1[1] = *(undefined4 *)(param_2 + 0xc);
    }
    else {
      param_1[1] = *(int *)((int)param_1 + 0x32);
    }
    param_1[2] = *(undefined4 *)(param_2 + 0x10);
    param_1[3] = *(undefined4 *)(param_2 + 0x14);
    if (*(int *)((int)param_1 + 0x2e) == 0) {
      param_1[4] = *(undefined4 *)(param_2 + 0x18);
      param_1[5] = *(undefined4 *)(param_2 + 0x1c);
    }
    else {
      param_1[4] = *(undefined4 *)((int)param_1 + 0x36);
      param_1[5] = *(undefined4 *)((int)param_1 + 0x3a);
    }
    param_1[6] = *(undefined4 *)(param_2 + 0x24);
    param_1[7] = *(undefined4 *)(param_2 + 0x28);
    param_1[8] = *(undefined4 *)(param_2 + 0x2c);
    param_1[9] = *(undefined4 *)(param_2 + 0x30);
    param_1[10] = *(undefined4 *)(param_2 + 8);
    SetStretchBltMode((HDC)param_1[1],3);
    FUN_00451f80();
    FUN_00451f90();
    iVar3 = (*DAT_004e01ac)(*param_1,param_1[1],param_1[4],param_1[5],
                            *(undefined4 *)(param_2 + 0x20),param_1[8],param_1[9],0);
    if (iVar3 == 0) {
      FUN_00451f90();
      return 0xffffffff;
    }
    FUN_00451f90();
    uVar1 = 0;
  }
  return uVar1;
}


