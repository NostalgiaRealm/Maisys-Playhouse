
/* ==== FUN_004129e0 @ 004129e0 ==== 
 * signature: uint __thiscall FUN_004129e0(void * this, undefined2 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004129e0-00412a08
 */

uint __thiscall FUN_004129e0(void *this,undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)((int)this + 0x3e) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x3e) + 0x208))(param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


