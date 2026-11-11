
/* ==== FUN_00461e20 @ 00461e20 ==== 
 * signature: undefined __thiscall FUN_00461e20(void * this, int param_1)
 * body: 00461e20-00461e8e
 */

void __thiscall FUN_00461e20(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    (**(code **)(**(int **)((int)this + 0x5a) + 0x2cc))(0);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x5a) + 0x2cc))(*(undefined4 *)(param_1 + 0x5a));
  }
  iVar1 = *(int *)this;
  piVar2 = (int *)0x0;
  (**(code **)(iVar1 + 0x40c))();
  if (*(short *)((int)this + 0x60) == 0) {
    piVar2 = (int *)(**(code **)(iVar1 + 0x3c4))();
  }
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    (**(code **)(iVar1 + 1000))(this);
    piVar2 = (int *)(**(code **)(iVar1 + 0x3c4))();
  }
  return;
}


