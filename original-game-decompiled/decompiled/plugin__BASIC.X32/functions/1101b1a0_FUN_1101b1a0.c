
/* ==== FUN_1101b1a0 @ 1101b1a0 ==== 
 * signature: undefined4 __cdecl FUN_1101b1a0(undefined4 param_1, undefined2 * param_2, short * param_3, short * param_4)
 * body: 1101b1a0-1101b206
 */

uint __cdecl FUN_1101b1a0(undefined4 param_1,undefined2 *param_2,short *param_3,short *param_4)

{
  undefined2 extraout_var;
  
  FUN_11019aa0(param_3,param_4);
  if ((*param_3 == 0x15) && (*param_4 == 0x15)) {
    *param_2 = 0x15;
    *(double *)(param_2 + 1) = *(double *)(param_4 + 1) * *(double *)(param_3 + 1);
    return (uint)param_2 & 0xffff0000;
  }
  if ((*param_3 == 1) && (*param_4 == 1)) {
    *param_2 = 1;
    *(int *)(param_2 + 1) = *(int *)(param_4 + 1) * *(int *)(param_3 + 1);
    return (uint)param_2 & 0xffff0000;
  }
  return CONCAT22(extraout_var,0xfff0);
}


