
/* ==== FUN_0045a860 @ 0045a860 ==== 
 * signature: undefined __thiscall FUN_0045a860(void * this, int param_1)
 * body: 0045a860-0045a8c9
 */

void __thiscall FUN_0045a860(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0045a800((int)this);
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


