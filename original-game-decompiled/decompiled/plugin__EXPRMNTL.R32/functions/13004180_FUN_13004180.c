
/* ==== FUN_13004180 @ 13004180 ==== 
 * signature: undefined4 __cdecl FUN_13004180(undefined4 * param_1, undefined4 * param_2)
 * body: 13004180-130041b4
 */

undefined4 __cdecl FUN_13004180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  return 0;
}


