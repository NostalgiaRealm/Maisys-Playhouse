
/* ==== FUN_130014e0 @ 130014e0 ==== 
 * signature: undefined4 __cdecl FUN_130014e0(undefined4 * param_1, undefined4 * param_2)
 * body: 130014e0-13001530
 */

undefined4 __cdecl FUN_130014e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return 0;
}


