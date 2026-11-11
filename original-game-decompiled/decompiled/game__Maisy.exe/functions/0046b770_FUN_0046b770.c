
/* ==== FUN_0046b770 @ 0046b770 ==== 
 * signature: undefined __thiscall FUN_0046b770(void * this, int param_1)
 * body: 0046b770-0046b7ef
 */

void __thiscall FUN_0046b770(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00469f80(this);
  if ((*(int *)(param_1 + 0xc) == 0x7d1) || (*(int *)(param_1 + 0xc) == 0x7d2)) {
    *(void **)(param_1 + 8) = this;
  }
  if ((*(byte *)(param_1 + 3) & 0x20) == 0) {
    if (piVar1 != (int *)0x0) {
      do {
        if ((*(uint *)((int)piVar1 + 0x26) & 0x80000000) == 0) {
          (**(code **)(*piVar1 + 0x1e0))(param_1);
        }
        piVar1 = *(int **)((int)piVar1 + 0x3e);
      } while (piVar1 != (int *)0x0);
      return;
    }
  }
  else {
    while ((piVar1 != (int *)0x0 && ((*(byte *)(param_1 + 3) & 0x10) == 0))) {
      if ((*(uint *)((int)piVar1 + 0x26) & 0x80000000) == 0) {
        (**(code **)(*piVar1 + 0x1e0))(param_1);
      }
      piVar1 = *(int **)((int)piVar1 + 0x3e);
    }
  }
  return;
}


