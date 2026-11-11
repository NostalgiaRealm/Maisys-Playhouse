
/* ==== FUN_0046a240 @ 0046a240 ==== 
 * signature: undefined __thiscall FUN_0046a240(void * this, int * param_1, char param_2)
 * body: 0046a240-0046a2de
 */

void __thiscall FUN_0046a240(void *this,int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_8;
  
  if ((*(int **)((int)this + 0x4e) == (int *)0x0) || (param_2 == '\0')) {
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x38))(*(undefined4 *)((int)this + 4));
    (**(code **)(iVar1 + 0x1fc))(this);
    piVar3 = param_1;
    if ((*(byte *)((int)param_1 + 0x29) & 0x80) != 0) {
      (**(code **)(iVar1 + 0xfc))();
    }
    while (piVar2 = piVar3, piVar2 != (int *)0x0) {
      local_8 = piVar2;
      piVar3 = *(int **)((int)piVar2 + 0x3e);
    }
    (**(code **)(*local_8 + 0x20c))(*(undefined4 *)((int)this + 0x4e));
    *(int **)((int)this + 0x4e) = param_1;
    for (piVar3 = param_1; (**(code **)(*piVar3 + 0x1fc))(this), local_8 != piVar3;
        piVar3 = *(int **)((int)piVar3 + 0x3e)) {
    }
    for (; (**(code **)(*param_1 + 0x230))(), local_8 != param_1;
        param_1 = *(int **)((int)param_1 + 0x3e)) {
    }
  }
  else {
    (**(code **)(**(int **)((int)this + 0x4e) + 0x210))(param_1);
  }
  return;
}


