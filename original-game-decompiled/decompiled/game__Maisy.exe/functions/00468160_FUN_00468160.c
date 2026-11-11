
/* ==== FUN_00468160 @ 00468160 ==== 
 * signature: undefined4 __cdecl FUN_00468160(undefined4 param_1, int * param_2)
 * body: 00468160-0046817a
 */

undefined4 __cdecl FUN_00468160(undefined4 param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x10001;
  }
  (**(code **)(*param_2 + 4))();
  return 0;
}


