
/* ==== FUN_004126d0 @ 004126d0 ==== 
 * signature: undefined __thiscall FUN_004126d0(void * this, undefined1 param_1)
 * body: 004126d0-0041270e
 */

void __thiscall FUN_004126d0(void *this,undefined1 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x1c))(param_1);
  piVar2 = (int *)(**(code **)(iVar1 + 0x188))();
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    (**(code **)(iVar1 + 0x204))(param_1);
    piVar2 = (int *)(**(code **)(iVar1 + 0x174))();
  }
  return;
}


