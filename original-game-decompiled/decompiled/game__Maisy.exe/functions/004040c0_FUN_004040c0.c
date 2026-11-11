
/* ==== FUN_004040c0 @ 004040c0 ==== 
 * signature: undefined __thiscall FUN_004040c0(void * this, int * param_1)
 * body: 004040c0-00404115
 */

void __thiscall FUN_004040c0(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_00458a00(*(int *)((int)this + 0x2a));
    if (iVar1 == *(int *)((int)param_1 + 0x3a)) {
      (**(code **)(**(int **)((int)param_1 + 0x3a) + 700))(param_1);
      if ((*(int *)((int)param_1 + 0x2a) != 0) && (param_1[1] != 0)) {
        iVar1 = FUN_00466a80(param_1[1]);
        if (iVar1 != 0) {
          piVar2 = param_1;
          this_00 = (void *)FUN_00466a80(param_1[1]);
          FUN_004502a0(this_00,(int)piVar2);
        }
      }
      (**(code **)(*param_1 + 4))();
    }
  }
  return;
}


