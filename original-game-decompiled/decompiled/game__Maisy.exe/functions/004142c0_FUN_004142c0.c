
/* ==== FUN_004142c0 @ 004142c0 ==== 
 * signature: undefined __stdcall FUN_004142c0(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 004142c0-004142f2
 */

void FUN_004142c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_5;
  param_1[2] = param_4;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[1] = 0xaaaa5555;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  return;
}


