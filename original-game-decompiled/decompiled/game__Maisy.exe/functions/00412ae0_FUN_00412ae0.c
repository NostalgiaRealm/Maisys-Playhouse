
/* ==== FUN_00412ae0 @ 00412ae0 ==== 
 * signature: undefined __thiscall FUN_00412ae0(void * this, undefined4 param_1)
 * body: 00412ae0-00412b3f
 */

void __thiscall FUN_00412ae0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x17c))();
  if (piVar1 != (int *)0x0) {
    do {
      if (((*(uint *)((int)piVar1 + 0x1e) & 0x400) == 0) ||
         ((*(uint *)((int)piVar1 + 0x26) & 0x80000000) == 0)) break;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x17c))();
    } while (piVar1 != (int *)0x0);
    if (piVar1 != (int *)0x0) {
      return;
    }
  }
  piVar1 = (int *)(**(code **)(*(int *)this + 0x218))();
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 0x3a);
  }
  (**(code **)(*piVar1 + 0x1b8))(param_1);
  return;
}


