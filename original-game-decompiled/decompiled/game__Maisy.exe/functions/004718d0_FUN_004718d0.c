
/* ==== FUN_004718d0 @ 004718d0 ==== 
 * signature: undefined4 __cdecl FUN_004718d0(int param_1, undefined4 param_2)
 * body: 004718d0-00471904
 */

undefined4 __cdecl FUN_004718d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0048b560(0,param_1);
  piVar1 = (int *)*piVar1;
  if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x1e) & 4) != 0)) {
    (**(code **)(*piVar1 + 0x418))(param_2);
    return 0;
  }
  return 0x10000;
}


