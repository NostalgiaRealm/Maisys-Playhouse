
/* ==== FUN_00469b50 @ 00469b50 ==== 
 * signature: undefined __thiscall FUN_00469b50(void * this, undefined1 param_1)
 * body: 00469b50-00469bce
 */

void __thiscall FUN_00469b50(void *this,undefined1 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)this;
  (**(code **)(iVar2 + 0x1c))(param_1);
  cVar1 = (**(code **)(iVar2 + 0x218))();
  if (cVar1 == '\0') {
    iVar2 = FUN_00469fb0(this);
    if (iVar2 != 0) {
      for (piVar3 = (int *)FUN_00469fb0(this); piVar3 != (int *)0x0;
          piVar3 = *(int **)((int)piVar3 + 0x6a)) {
        (**(code **)(*piVar3 + 0x214))(param_1);
      }
    }
    iVar2 = FUN_00469f80(this);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00469f80(this);
      while (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
        (**(code **)(iVar2 + 0x204))(param_1);
        piVar3 = (int *)(**(code **)(iVar2 + 0x174))();
      }
    }
  }
  return;
}


