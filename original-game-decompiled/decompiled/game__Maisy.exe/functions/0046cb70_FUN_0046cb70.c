
/* ==== FUN_0046cb70 @ 0046cb70 ==== 
 * signature: undefined __thiscall FUN_0046cb70(void * this, int * param_1)
 * body: 0046cb70-0046cc9a
 */

void __thiscall FUN_0046cb70(void *this,int *param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  *(undefined2 *)((int)param_1 + 0x5e) = *(undefined2 *)((int)this + 0x5e);
  iVar5 = *param_1;
  cVar1 = (**(code **)(iVar5 + 0x218))();
  if (cVar1 == '\0') {
    if (*(int *)((int)this + 4) != param_1[1]) {
      pvVar2 = FUN_0046da90(param_1,'\x01','\x01');
      if (pvVar2 != (void *)0x0) {
        piVar3 = FUN_0046da90(param_1,'\x01','\x01');
        pvVar2 = (void *)FUN_00466a70(*(int *)((int)this + 4));
        piVar3 = FUN_0044e740(pvVar2,piVar3);
        (**(code **)(iVar5 + 0x2a4))(piVar3);
      }
      if (param_1[1] != 0) {
        (**(code **)(*(int *)this + 0x224))(param_1[1],*(undefined4 *)((int)this + 4));
      }
      param_1[1] = *(int *)((int)this + 4);
    }
    for (piVar3 = (int *)FUN_00469fb0(param_1); piVar3 != (int *)0x0;
        piVar3 = *(int **)((int)piVar3 + 0x6a)) {
      if (piVar3[1] != *(int *)((int)this + 4)) {
        pvVar2 = FUN_0046da90(piVar3,'\x01','\x01');
        if (pvVar2 != (void *)0x0) {
          piVar4 = FUN_0046da90(piVar3,'\x01','\x01');
          pvVar2 = (void *)FUN_00466a70(*(int *)((int)this + 4));
          piVar4 = FUN_0044e740(pvVar2,piVar4);
          (**(code **)(*piVar3 + 0x2a4))(piVar4);
        }
        if (piVar3[1] != 0) {
          (**(code **)(*(int *)this + 0x224))(piVar3[1],*(undefined4 *)((int)this + 4));
        }
        piVar3[1] = *(int *)((int)this + 4);
      }
      *(undefined2 *)((int)piVar3 + 0x5e) = *(undefined2 *)((int)this + 0x5e);
      cVar1 = (**(code **)(*piVar3 + 0x218))();
      if (cVar1 != '\0') {
        return;
      }
      iVar5 = FUN_00469fb0(piVar3);
      if (iVar5 != 0) {
        uVar6 = FUN_00469fb0(piVar3);
        (**(code **)(*(int *)this + 0x2c4))(uVar6);
      }
    }
  }
  return;
}


