
/* ==== FUN_0046d9c0 @ 0046d9c0 ==== 
 * signature: undefined __thiscall FUN_0046d9c0(void * this, int * param_1)
 * body: 0046d9c0-0046da87
 */

void __thiscall FUN_0046d9c0(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)((int)this + 0x52);
  if (piVar3 != param_1) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x80))(0x7fffffff,0x4b);
      (**(code **)(**(int **)((int)this + 0x52) + 0x1c8))(this,0);
    }
    *(int **)((int)this + 0x52) = param_1;
    if (param_1 == (int *)0x0) {
      *(undefined4 *)((int)this + 0x56) = 0xffffffff;
    }
    else if (DAT_004dbdc0 == '\0') {
      *(int *)((int)this + 0x56) = param_1[3];
    }
    else {
      iVar4 = *(int *)((int)this + 4);
      iVar1 = (**(code **)(*param_1 + 0x150))();
      pvVar2 = (void *)FUN_00466a70(iVar4);
      piVar3 = FUN_0044e500(pvVar2,iVar1);
      pvVar2 = (void *)FUN_00466a70(iVar4);
      iVar4 = FUN_0044e5b0(pvVar2,(int)piVar3);
      *(int *)((int)this + 0x56) = iVar4;
    }
    piVar3 = *(int **)((int)this + 0x52);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x1c4))(this,0);
    (**(code **)(**(int **)((int)this + 0x52) + 0x114))();
  }
  if (*(int **)((int)this + 0x5a) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x5a) + 0x208))(param_1);
    (**(code **)(**(int **)((int)this + 0x5a) + 0x20c))(this);
  }
  return;
}


