
/* ==== FUN_12008510 @ 12008510 ==== 
 * signature: undefined4 __cdecl FUN_12008510(undefined4 * param_1, undefined4 * param_2)
 * body: 12008510-12008568
 */

undefined4 __cdecl FUN_12008510(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  if (param_1[6] != 0) {
    *(undefined1 *)(param_1[5] + param_1[6]) = 0;
  }
  param_1[7] = param_2[7];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)((int)param_1 + 0x22) = *(undefined1 *)((int)param_2 + 0x22);
  return 0;
}


