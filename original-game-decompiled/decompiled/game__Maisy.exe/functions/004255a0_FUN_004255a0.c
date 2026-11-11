
/* ==== FUN_004255a0 @ 004255a0 ==== 
 * signature: int * __thiscall FUN_004255a0(void * this, int * param_1)
 * body: 004255a0-00425659
 */

int * __thiscall FUN_004255a0(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  short sVar6;
  int **ppiVar7;
  int *local_14 [4];
  
  piVar5 = (int *)0x0;
  if (((*(int *)((int)this + 0x2a) == 0) || (*(int *)((int)this + 4) == 0)) ||
     (iVar2 = FUN_00466a80(*(int *)((int)this + 4)), iVar2 == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x218);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      piVar5 = this;
      pvVar3 = (void *)(*pcVar1)();
      piVar5 = FUN_004255a0(pvVar3,piVar5);
    }
  }
  else {
    sVar6 = *(short *)((int)this + 0x36);
    ppiVar7 = local_14;
    pvVar3 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    FUN_004505b0(pvVar3,sVar6,ppiVar7);
    piVar5 = local_14[0];
  }
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)(**(code **)(*piVar5 + 0x188))();
    for (piVar4 = (int *)(**(code **)(*(int *)this + 0x188))();
        ((piVar5 != (int *)0x0 && (piVar4 != (int *)0x0)) && (param_1 != piVar4));
        piVar4 = (int *)(**(code **)(*piVar4 + 0x174))()) {
      piVar5 = (int *)(**(code **)(*piVar5 + 0x174))();
    }
    return piVar5;
  }
  return (int *)0x0;
}


