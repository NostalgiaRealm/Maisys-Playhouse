
/* ==== FUN_00428060 @ 00428060 ==== 
 * signature: undefined __thiscall FUN_00428060(void * this, undefined4 param_1)
 * body: 00428060-00428093
 */

void __thiscall FUN_00428060(void *this,undefined4 param_1)

{
  if (*(char *)((int)this + 0xf9) == '\0') {
    if ((*(byte *)((int)this + 0x10) & 0x10) != 0) {
      (**(code **)(**(int **)((int)this + 0x4e) + 0xf0))(this);
      return;
    }
    (**(code **)(*(int *)this + 0x1d8))(param_1);
  }
  return;
}


