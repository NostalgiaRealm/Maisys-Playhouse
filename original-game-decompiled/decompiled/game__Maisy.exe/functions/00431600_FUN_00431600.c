
/* ==== FUN_00431600 @ 00431600 ==== 
 * signature: undefined __cdecl FUN_00431600(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 00431600-00431630
 */

void __cdecl
FUN_00431600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = param_5;
  param_1[2] = param_4;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[1] = 0xaaaa5555;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  return;
}


