
/* ==== FUN_00424600 @ 00424600 ==== 
 * signature: undefined __thiscall FUN_00424600(void * this, int * param_1, char param_2)
 * body: 00424600-00424694
 */

void __thiscall FUN_00424600(void *this,int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_8;
  
  piVar3 = *(int **)((int)this + 0x50);
  piVar2 = param_1;
  if ((piVar3 == (int *)0x0) || (param_2 == '\0')) {
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      local_8 = piVar1;
      piVar2 = *(int **)((int)piVar1 + 0x3e);
    }
    (**(code **)(*local_8 + 0x20c))(piVar3);
    *(int **)((int)this + 0x50) = param_1;
    piVar3 = param_1;
    while( true ) {
      (**(code **)(*piVar3 + 0x38))(*(undefined4 *)((int)this + 4));
      (**(code **)(*piVar3 + 0x1fc))(*(undefined4 *)((int)this + 0x3a));
      (**(code **)(*piVar3 + 0x214))(this);
      if (local_8 == piVar3) break;
      piVar3 = *(int **)((int)piVar3 + 0x3e);
    }
    for (; (**(code **)(*param_1 + 0x230))(), local_8 != param_1;
        param_1 = *(int **)((int)param_1 + 0x3e)) {
    }
  }
  else {
    (**(code **)(*piVar3 + 0x210))(param_1);
  }
  return;
}


