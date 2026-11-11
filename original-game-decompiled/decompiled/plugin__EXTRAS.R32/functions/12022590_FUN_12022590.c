
/* ==== FUN_12022590 @ 12022590 ==== 
 * signature: undefined4 __cdecl FUN_12022590(undefined4 * param_1, undefined4 * param_2)
 * body: 12022590-120225ef
 */

undefined4 __cdecl FUN_12022590(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  uVar1 = *(undefined2 *)((int)param_2 + 0xe);
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = uVar1;
  if (param_2[4] != 0) {
    FUN_12023290((int)param_1);
    if (param_1[4] != 0) {
      FUN_120231d0((int)param_1,param_1[4],param_2[4]);
    }
  }
  param_1[5] = param_2[5];
  return 0;
}


