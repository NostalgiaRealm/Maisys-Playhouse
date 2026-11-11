
/* ==== FUN_0042c720 @ 0042c720 ==== 
 * signature: undefined __thiscall FUN_0042c720(void * this, int param_1)
 * body: 0042c720-0042c7ac
 */

void __thiscall FUN_0042c720(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  short sVar6;
  short sVar7;
  
  iVar2 = (**(code **)(*(int *)this + 0x284))();
  if ((iVar2 != 0) && (0 < iVar2)) {
    pcVar1 = *(code **)(*(int *)this + 0x27c);
    sVar6 = 1;
    do {
      iVar3 = (*pcVar1)(sVar6);
      if (iVar3 != -1) {
        pvVar4 = (void *)FUN_00466a70(param_1);
        piVar5 = FUN_0044e500(pvVar4,iVar3);
        if (piVar5 == (int *)0x0) {
          return;
        }
        pvVar4 = (void *)FUN_00466a70(*(int *)((int)this + 4));
        piVar5 = FUN_0044e740(pvVar4,piVar5);
        iVar3 = -1;
        if (piVar5 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar5 + 0x150))();
        }
      }
      sVar7 = sVar6 + 1;
      (**(code **)(*(int *)this + 0x280))(sVar6,iVar3);
      sVar6 = sVar7;
    } while (sVar7 <= iVar2);
  }
  return;
}


