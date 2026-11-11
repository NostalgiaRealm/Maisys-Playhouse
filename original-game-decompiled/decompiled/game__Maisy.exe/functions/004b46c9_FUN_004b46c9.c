
/* ==== FUN_004b46c9 @ 004b46c9 ==== 
 * signature: undefined4 __thiscall FUN_004b46c9(void * this, undefined4 param_1)
 * body: 004b46c9-004b46e0
 */

undefined4 __thiscall FUN_004b46c9(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)((int)this + 0x78) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x78) + 0x38))(param_1);
  }
  return uVar1;
}


