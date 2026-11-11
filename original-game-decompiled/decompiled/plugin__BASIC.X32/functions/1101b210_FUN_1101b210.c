
/* ==== FUN_1101b210 @ 1101b210 ==== 
 * signature: undefined4 __cdecl FUN_1101b210(undefined4 param_1, undefined2 * param_2, short * param_3, short * param_4)
 * body: 1101b210-1101b26a
 */

undefined4 __cdecl
FUN_1101b210(undefined4 param_1,undefined2 *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  
  FUN_11019b70(param_3);
  uVar1 = FUN_11019b70(param_4);
  if ((*param_3 == 0x15) && (*param_4 == 0x15)) {
    if ((*(uint *)(param_4 + 3) & 0x7fffffff) == 0 && *(int *)(param_4 + 1) == 0) {
      return 0xffff;
    }
    *param_2 = 0x15;
    *(double *)(param_2 + 1) = *(double *)(param_3 + 1) / *(double *)(param_4 + 1);
    return (uint)param_2 & 0xffff0000;
  }
  return CONCAT22((short)(uVar1 >> 0x10),0xffff);
}


