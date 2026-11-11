
/* ==== FUN_10003710 @ 10003710 ==== 
 * signature: undefined4 __cdecl FUN_10003710(undefined2 * param_1)
 * body: 10003710-1000375b
 */

undefined4 __cdecl FUN_10003710(undefined2 *param_1)

{
  param_1[0x1b] = 0x14;
  param_1[0x1d] = 0x14;
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 1;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x25] = 0;
  param_1[0x3b] = 0;
  return 0;
}


