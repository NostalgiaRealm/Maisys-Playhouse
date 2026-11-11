
/* ==== FUN_10001c40 @ 10001c40 ==== 
 * signature: undefined4 __cdecl FUN_10001c40(undefined2 * param_1)
 * body: 10001c40-10001c6e
 */

undefined4 __cdecl FUN_10001c40(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 6) = 0x12e;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}


