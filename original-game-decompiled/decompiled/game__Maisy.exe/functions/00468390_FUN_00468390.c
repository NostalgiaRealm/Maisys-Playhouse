
/* ==== FUN_00468390 @ 00468390 ==== 
 * signature: undefined4 __cdecl FUN_00468390(undefined4 param_1, int * param_2)
 * body: 00468390-004683ad
 */

undefined4 __cdecl FUN_00468390(undefined4 param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x10001;
  }
  (**(code **)(*param_2 + 0xe4))();
  return 0;
}


