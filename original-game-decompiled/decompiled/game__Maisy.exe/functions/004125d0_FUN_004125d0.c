
/* ==== FUN_004125d0 @ 004125d0 ==== 
 * signature: undefined __thiscall FUN_004125d0(void * this, int * param_1)
 * body: 004125d0-0041264c
 */

void __thiscall FUN_004125d0(void *this,int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int *piVar3;
  
  pvVar1 = (void *)0x0;
  for (pvVar2 = this; pvVar2 != (void *)0x0; pvVar2 = *(void **)((int)pvVar2 + 0x3e)) {
    pvVar1 = pvVar2;
  }
  *(int **)((int)pvVar1 + 0x3e) = param_1;
  for (piVar3 = param_1; piVar3 != (int *)0x0; piVar3 = *(int **)((int)piVar3 + 0x3e)) {
    (**(code **)(*piVar3 + 0x38))(*(undefined4 *)((int)this + 4));
    (**(code **)(*piVar3 + 0x1fc))(*(undefined4 *)((int)this + 0x3a));
    (**(code **)(*piVar3 + 0x214))(*(undefined4 *)((int)this + 0x42));
    if ((*(byte *)((int)piVar3 + 0x29) & 0x80) != 0) {
      (**(code **)(*piVar3 + 0xfc))();
    }
  }
  for (; param_1 != (int *)0x0; param_1 = *(int **)((int)param_1 + 0x3e)) {
    (**(code **)(*param_1 + 0x230))();
  }
  return;
}


