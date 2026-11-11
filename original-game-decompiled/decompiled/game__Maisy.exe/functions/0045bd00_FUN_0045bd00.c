
/* ==== FUN_0045bd00 @ 0045bd00 ==== 
 * signature: undefined4 __cdecl FUN_0045bd00(undefined4 param_1, int param_2, int param_3, undefined4 * param_4)
 * body: 0045bd00-0045bd53
 */

undefined4 __cdecl FUN_0045bd00(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = 0;
  if (param_2 == 0) {
    if (param_3 != 0) {
      FUN_0045bb10(param_3,&local_8);
    }
  }
  else {
    local_8 = param_2;
  }
  if (local_8 != 0) {
    uVar1 = FUN_0044e340(local_8);
    *param_4 = uVar1;
    return 0;
  }
  return 0x10000;
}


