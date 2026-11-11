
/* ==== FUN_00414bc0 @ 00414bc0 ==== 
 * signature: int __stdcall FUN_00414bc0(undefined4 * param_1, uint * param_2)
 * body: 00414bc0-00414ca6
 */

int FUN_00414bc0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    uVar3 = 4;
    uVar1 = *param_2;
    if (((uVar1 & 0x10000000) != 0) || (param_2[2] == 0)) {
      if ((uVar1 & 0x40000000) == 0) {
        return 0;
      }
      uVar3 = 6;
    }
    if ((uVar1 & 0x20000000) != 0) {
      uVar3 = uVar3 | 0x10;
    }
    if ((uVar1 & 0x80000000) != 0) {
      uVar3 = uVar3 | 0x800;
    }
    FUN_00451f80();
    FUN_00451f90();
    iVar2 = (*DAT_004e01c0)(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                            param_2[1],param_2[2],param_1[6],param_1[7],param_1[8],param_1[9],uVar3)
    ;
    if (iVar2 == 0) {
      local_8 = (-(uint)((uVar3 & 2) == 0) & 8) - 9;
    }
    else {
      *(undefined1 *)(*(int *)((int)param_1 + 0x2e) + 0x96) = 1;
    }
    FUN_00451f90();
  }
  return local_8;
}


