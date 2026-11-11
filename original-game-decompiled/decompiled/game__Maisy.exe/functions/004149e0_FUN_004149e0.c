
/* ==== FUN_004149e0 @ 004149e0 ==== 
 * signature: int __stdcall FUN_004149e0(undefined4 param_1, undefined4 * param_2)
 * body: 004149e0-00414a5e
 */

int FUN_004149e0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2[1] == 0) {
    return 0x428;
  }
  FUN_00451f80();
  FUN_00451f90();
  iVar1 = (*DAT_004e01b4)(0,*param_2,param_2[1],0,param_2[4],param_2[5]);
  if (iVar1 != 0) {
    (*DAT_004e01d0)(iVar1);
  }
  FUN_00451f90();
  iVar1 = param_2[1];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) == 1)) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return *(int *)(param_2[1] + 0x20) * 4 + 0x28;
}


