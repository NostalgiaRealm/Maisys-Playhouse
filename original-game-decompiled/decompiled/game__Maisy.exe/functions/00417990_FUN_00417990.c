
/* ==== FUN_00417990 @ 00417990 ==== 
 * signature: undefined4 __cdecl FUN_00417990(int param_1)
 * body: 00417990-004179ba
 */

undefined4 __cdecl FUN_00417990(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0048b560(0,param_1);
  if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 0x19c))();
    return 0;
  }
  return 0x10000;
}


