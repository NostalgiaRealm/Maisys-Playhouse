
/* ==== FUN_0046da90 @ 0046da90 ==== 
 * signature: void * __thiscall FUN_0046da90(void * this, char param_1, char param_2)
 * body: 0046da90-0046db10
 */

void * __thiscall FUN_0046da90(void *this,char param_1,char param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char cVar5;
  
  pvVar4 = *(void **)((int)this + 0x52);
  if ((pvVar4 == (void *)0x0) && (*(int *)((int)this + 0x56) != -1)) {
    sVar1 = 0;
    if (*(int *)(*(int *)((int)this + 4) + 0x48) != 0) {
      iVar2 = FUN_0046ca60((int)this);
      if (iVar2 != 0) {
        iVar2 = **(int **)(*(int *)((int)this + 4) + 0x48);
        iVar3 = FUN_0046ca60((int)this);
        sVar1 = (**(code **)(iVar2 + 0x120))(*(undefined4 *)(iVar3 + 0x96));
      }
    }
    cVar5 = '\x01';
    iVar2 = *(int *)((int)this + 0x56);
    pvVar4 = (void *)FUN_00466a70(*(int *)((int)this + 4));
    pvVar4 = FUN_0044db20(pvVar4,iVar2,sVar1,param_2,cVar5);
    if (param_1 != '\0') {
      (**(code **)(*(int *)this + 0x2a4))(pvVar4);
    }
  }
  return pvVar4;
}


