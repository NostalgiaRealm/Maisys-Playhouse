
/* ==== FUN_10001220 @ 10001220 ==== 
 * signature: undefined4 __cdecl FUN_10001220(undefined4 * param_1, undefined4 * param_2)
 * body: 10001220-1000125b
 */

undefined4 __cdecl FUN_10001220(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_100019c0((int)param_1,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  return 0;
}


