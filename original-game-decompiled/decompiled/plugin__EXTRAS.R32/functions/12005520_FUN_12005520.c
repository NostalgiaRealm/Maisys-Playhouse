
/* ==== FUN_12005520 @ 12005520 ==== 
 * signature: undefined4 __cdecl FUN_12005520(undefined4 * param_1, undefined4 * param_2)
 * body: 12005520-12005590
 */

undefined4 __cdecl FUN_12005520(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  if (param_1[6] != 0) {
    *(undefined1 *)(param_1[5] + param_1[6]) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_2 + 0x1e);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  param_1[9] = param_2[9];
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x2a) = *(undefined4 *)((int)param_2 + 0x2a);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return 0;
}


