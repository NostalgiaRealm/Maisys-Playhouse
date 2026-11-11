
/* ==== FUN_0048a740 @ 0048a740 ==== 
 * signature: undefined4 __thiscall FUN_0048a740(void * this, undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 0048a740-0048a7d2
 */

undefined4 __thiscall FUN_0048a740(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 local_24 [22];
  int local_e;
  void *local_8;
  
  if (0 < param_2) {
    local_8 = (void *)0x0;
    cVar1 = (**(code **)(*(int *)this + 0x100))(param_1,&local_8,local_24);
    if (cVar1 != '\0') {
      if (*(char *)((int)this + 0x60) == '\0') {
        local_e = *(int *)((int)local_8 + 0x26);
      }
      if (local_e < param_2) {
        return 0x40005;
      }
      FUN_00430190((int)local_8);
      puVar2 = (undefined4 *)FUN_004301c0(local_8,param_2);
      FUN_0048b3b0(param_3,(undefined4 *)*puVar2);
      FUN_004301f0((int)local_8);
      return 0;
    }
  }
  return 0x10000;
}


