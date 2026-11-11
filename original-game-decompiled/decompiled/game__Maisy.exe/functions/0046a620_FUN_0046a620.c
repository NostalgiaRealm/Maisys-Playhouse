
/* ==== FUN_0046a620 @ 0046a620 ==== 
 * signature: undefined __thiscall FUN_0046a620(void * this, undefined4 param_1)
 * body: 0046a620-0046a660
 */

void __thiscall FUN_0046a620(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x4e);
  *(undefined4 *)((int)this + 4) = param_1;
  for (; piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0x38))(param_1);
  }
  for (piVar1 = *(int **)((int)this + 0x6e); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x6a)) {
    (**(code **)(*piVar1 + 0x38))(param_1);
  }
  return;
}


