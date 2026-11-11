
/* ==== FUN_120070c0 @ 120070c0 ==== 
 * signature: undefined4 __cdecl FUN_120070c0(undefined2 * param_1)
 * body: 120070c0-12007111
 */

undefined4 __cdecl FUN_120070c0(undefined2 *param_1)

{
  *param_1 = 0x17;
  param_1[5] = 1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 1;
  *(undefined4 *)(param_1 + 0x12) = 1;
  param_1[0x14] = 1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[8] = 0x66;
  param_1[0x17] = 0x14;
  param_1[0x18] = 0;
  return 0;
}


