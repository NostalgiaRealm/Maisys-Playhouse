
/* ==== FUN_100056d0 @ 100056d0 ==== 
 * signature: undefined4 __cdecl FUN_100056d0(undefined4 * param_1, undefined4 * param_2)
 * body: 100056d0-10005728
 */

undefined4 __cdecl FUN_100056d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_10005fa0((int)param_1,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  FUN_10005fa0((int)param_1,(undefined2 *)((int)param_1 + 0x36),(int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x62) = *(undefined4 *)((int)param_2 + 0x62);
  *(undefined2 *)((int)param_1 + 0x66) = *(undefined2 *)((int)param_2 + 0x66);
  return 0;
}


