
/* ==== FUN_00482c40 @ 00482c40 ==== 
 * signature: undefined4 __cdecl FUN_00482c40(undefined4 param_1, int * param_2, undefined4 param_3)
 * body: 00482c40-00482c5e
 */

undefined4 __cdecl FUN_00482c40(undefined4 param_1,int *param_2,undefined4 param_3)

{
  if (param_2 == (int *)0x0) {
    return 0x10001;
  }
  (**(code **)(*param_2 + 0x4c))(param_3);
  return 0;
}


