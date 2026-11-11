
/* ==== FUN_0045bc80 @ 0045bc80 ==== 
 * signature: undefined4 __cdecl FUN_0045bc80(undefined4 param_1, void * param_2, int param_3, int param_4, undefined1 * param_5)
 * body: 0045bc80-0045bce7
 */

undefined4 __cdecl
FUN_0045bc80(undefined4 param_1,void *param_2,int param_3,int param_4,undefined1 *param_5)

{
  int *piVar1;
  void *local_8;
  
  local_8 = (void *)0x0;
  *param_5 = 0;
  if (param_2 == (void *)0x0) {
    if (param_3 != 0) {
      FUN_0045bb10(param_3,(int *)&local_8);
    }
  }
  else {
    local_8 = param_2;
  }
  if ((local_8 != (void *)0x0) && (piVar1 = FUN_0044e500(local_8,param_4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x70))(param_5);
    return 0;
  }
  return 0x10000;
}


