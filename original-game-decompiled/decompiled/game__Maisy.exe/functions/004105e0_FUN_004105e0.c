
/* ==== FUN_004105e0 @ 004105e0 ==== 
 * signature: uint __thiscall FUN_004105e0(void * this, undefined4 param_1)
 * body: 004105e0-004105ff
 */

uint __thiscall FUN_004105e0(void *this,undefined4 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)((int)this + 0x36) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x36) + 0x11c))(param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


