
/* ==== FUN_1101b270 @ 1101b270 ==== 
 * signature: undefined4 __cdecl FUN_1101b270(undefined4 * param_1, undefined2 * param_2, short * param_3, short * param_4)
 * body: 1101b270-1101b33f
 */

undefined4 __cdecl
FUN_1101b270(undefined4 *param_1,undefined2 *param_2,short *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  ushort extraout_var_00;
  uint uVar3;
  double local_8;
  
  FUN_11019aa0(param_3,param_4);
  if ((*param_3 == 0x15) && (*param_4 == 0x15)) {
    if ((*(uint *)(param_4 + 3) & 0x7fffffff) == 0 && *(int *)(param_4 + 1) == 0) {
      return 0xffee;
    }
    local_8 = *(double *)(param_3 + 1) / *(double *)(param_4 + 1);
    FUN_11011490(param_1,&local_8,&local_8);
    *param_2 = 0x15;
    *(double *)(param_2 + 1) = *(double *)(param_3 + 1) - *(double *)(param_4 + 1) * local_8;
    return (uint)extraout_var_00 << 0x10;
  }
  if ((*param_3 == 1) && (*param_4 == 1)) {
    iVar1 = *(int *)(param_4 + 1);
    if (iVar1 == 0) {
      return CONCAT22(extraout_var,0xffee);
    }
    iVar2 = *(int *)(param_3 + 1);
    *param_2 = 1;
    uVar3 = iVar2 / iVar1;
    *(uint *)(param_2 + 1) = *(int *)(param_3 + 1) - *(int *)(param_4 + 1) * uVar3;
    return uVar3 & 0xffff0000;
  }
  return CONCAT22(extraout_var,0xffef);
}


