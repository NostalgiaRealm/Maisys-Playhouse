
/* ==== FUN_10004930 @ 10004930 ==== 
 * signature: undefined4 __cdecl FUN_10004930(undefined4 * param_1, undefined4 * param_2)
 * body: 10004930-10004982
 */

undefined4 __cdecl FUN_10004930(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_10004990((int)param_1,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  FUN_10004990((int)param_1,(undefined2 *)((int)param_1 + 0x3e),(int)param_2 + 0x3e);
  return 0;
}


