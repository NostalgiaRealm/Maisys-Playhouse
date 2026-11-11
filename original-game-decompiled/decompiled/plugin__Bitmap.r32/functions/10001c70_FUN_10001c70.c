
/* ==== FUN_10001c70 @ 10001c70 ==== 
 * signature: undefined4 __cdecl FUN_10001c70(undefined4 * param_1, undefined4 * param_2)
 * body: 10001c70-10001cbd
 */

undefined4 __cdecl FUN_10001c70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  FUN_10002550((int)param_1,(undefined2 *)(param_1 + 5),param_2 + 5);
  return 0;
}


