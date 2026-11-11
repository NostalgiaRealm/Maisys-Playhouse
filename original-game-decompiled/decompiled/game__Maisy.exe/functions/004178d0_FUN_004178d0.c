
/* ==== FUN_004178d0 @ 004178d0 ==== 
 * signature: undefined4 __cdecl FUN_004178d0(int param_1, undefined4 * param_2)
 * body: 004178d0-004178ff
 */

undefined4 __cdecl FUN_004178d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_0048b560(0,param_1);
  if ((int *)*piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)*piVar1 + 0x1b4))();
    *param_2 = uVar2;
    return 0;
  }
  return 0x10000;
}


