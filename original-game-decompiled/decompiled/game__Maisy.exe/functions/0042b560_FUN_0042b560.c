
/* ==== FUN_0042b560 @ 0042b560 ==== 
 * signature: undefined __thiscall FUN_0042b560(void * this, int param_1)
 * body: 0042b560-0042b583
 */

void __thiscall FUN_0042b560(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0x4c) = param_1;
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x1f8))();
  (**(code **)(iVar1 + 0x2e4))();
  return;
}


