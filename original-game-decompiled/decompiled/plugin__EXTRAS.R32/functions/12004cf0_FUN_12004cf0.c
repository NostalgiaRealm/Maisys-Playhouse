
/* ==== FUN_12004cf0 @ 12004cf0 ==== 
 * signature: undefined __thiscall FUN_12004cf0(void * this, int * param_1)
 * body: 12004cf0-12004d30
 */

void __thiscall FUN_12004cf0(void *this,int *param_1)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  
  piVar3 = this;
  if (*(int *)this != 0) {
    while (piVar1 = (int *)*piVar3, param_1 != piVar1) {
      piVar3 = piVar1;
      if (*piVar1 == 0) {
        return;
      }
    }
    *(char *)((int)this + 10) = *(char *)((int)this + 10) + '\x01';
    *piVar3 = *param_1;
    sVar2 = *(short *)((int)this + 4) + -1;
    *(short *)((int)this + 4) = sVar2;
    if (sVar2 == 0) {
      (**(code **)(*(int *)((int)this + 6) + 8))();
    }
    *(char *)((int)this + 10) = *(char *)((int)this + 10) + -1;
  }
  return;
}


