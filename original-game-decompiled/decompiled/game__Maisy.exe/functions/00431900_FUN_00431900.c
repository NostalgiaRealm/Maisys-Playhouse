
/* ==== FUN_00431900 @ 00431900 ==== 
 * signature: undefined __cdecl FUN_00431900(undefined1 * param_1, undefined2 * param_2, undefined2 param_3)
 * body: 00431900-00431931
 */

void __cdecl FUN_00431900(undefined1 *param_1,undefined2 *param_2,undefined2 param_3)

{
  *param_2 = 6;
  param_2[1] = (short)*(undefined4 *)(param_1 + 2);
  *(undefined1 *)(param_2 + 2) = *param_1;
  *(undefined1 *)((int)param_2 + 5) = param_1[1];
  param_2[5] = param_3;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 6);
  return;
}


