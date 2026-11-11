
/* ==== FUN_100011f0 @ 100011f0 ==== 
 * signature: undefined4 __cdecl FUN_100011f0(undefined2 * param_1)
 * body: 100011f0-10001217
 */

undefined4 __cdecl FUN_100011f0(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x12d;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x1b] = 0x14;
  param_1[0x1c] = 1;
  return 0;
}


