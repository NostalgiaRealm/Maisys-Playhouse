
/* ==== FUN_0045bd90 @ 0045bd90 ==== 
 * signature: undefined4 __cdecl FUN_0045bd90(undefined4 param_1, void * param_2, int param_3, int param_4, undefined4 * param_5)
 * body: 0045bd90-0045bdf6
 */

undefined4 __cdecl
FUN_0045bd90(undefined4 param_1,void *param_2,int param_3,int param_4,undefined4 *param_5)

{
  void *pvVar1;
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
  if (local_8 == (void *)0x0) {
    return 0x10000;
  }
  pvVar1 = FUN_0044db20(local_8,param_4,0,'\x01','\x01');
  *param_5 = pvVar1;
  return 0;
}


