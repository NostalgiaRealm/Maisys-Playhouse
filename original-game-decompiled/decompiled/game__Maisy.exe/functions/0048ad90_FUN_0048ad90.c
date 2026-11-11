
/* ==== FUN_0048ad90 @ 0048ad90 ==== 
 * signature: undefined4 __thiscall FUN_0048ad90(void * this, undefined4 param_1, undefined4 param_2)
 * body: 0048ad90-0048adde
 */

undefined4 __thiscall FUN_0048ad90(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_10 [8];
  int *local_8;
  
  local_8 = (int *)0x0;
  uVar1 = (**(code **)(*(int *)this + 0x100))(param_1,&local_8,0);
  if ((char)uVar1 != '\0') {
    uVar1 = (**(code **)(*local_8 + 0x100))(param_2,local_10,0);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


