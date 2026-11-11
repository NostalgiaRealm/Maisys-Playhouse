
/* ==== FUN_0046c5c0 @ 0046c5c0 ==== 
 * signature: undefined4 __thiscall FUN_0046c5c0(void * this, undefined4 param_1, undefined4 param_2)
 * body: 0046c5c0-0046c5e3
 */

undefined4 __thiscall FUN_0046c5c0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x4e) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x4e) + 0x250))(param_1,param_2);
    return uVar1;
  }
  return 0;
}


