
/* ==== FUN_004b8d1f @ 004b8d1f ==== 
 * signature: undefined __thiscall FUN_004b8d1f(void * this, int * param_1, int param_2)
 * body: 004b8d1f-004b8d6c
 */

void __thiscall FUN_004b8d1f(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 0x98);
  piVar2 = (int *)*piVar1;
  if (piVar2 != param_1) {
    *piVar1 = 0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xe8))(0,param_1,piVar2);
    }
    if (((*piVar1 == 0) && (*piVar1 = (int)param_1, param_1 != (int *)0x0)) && (param_2 != 0)) {
      (**(code **)(*param_1 + 0xe8))(1,param_1,piVar2);
    }
  }
  return;
}


