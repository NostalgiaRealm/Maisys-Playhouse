
/* ==== FUN_1101b3a0 @ 1101b3a0 ==== 
 * signature: undefined4 __cdecl FUN_1101b3a0(undefined4 param_1, undefined2 * param_2, short * param_3)
 * body: 1101b3a0-1101b3e1
 */

uint __cdecl FUN_1101b3a0(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  undefined4 in_EAX;
  
  if (*param_3 == 0x15) {
    *param_2 = 0x15;
    *(double *)(param_2 + 1) = -*(double *)(param_3 + 1);
    return (uint)param_2 & 0xffff0000;
  }
  if (*param_3 == 1) {
    *param_2 = 1;
    *(int *)(param_2 + 1) = -*(int *)(param_3 + 1);
    return (uint)param_2 & 0xffff0000;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),0xffed);
}


