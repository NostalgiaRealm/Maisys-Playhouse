
/* ==== FUN_0046c1c0 @ 0046c1c0 ==== 
 * signature: undefined __thiscall FUN_0046c1c0(void * this, int * param_1)
 * body: 0046c1c0-0046c287
 */

void __thiscall FUN_0046c1c0(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  void *this_00;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  FUN_0040c840(this,param_1);
  *(undefined2 *)((int)this + 0x5e) = *(undefined2 *)((int)param_1 + 0x5e);
  *(short *)((int)this + 0x60) = (short)param_1[0x18];
  piVar2 = FUN_0046da90(param_1,'\0','\x01');
  if ((*(int *)((int)this + 0x52) == 0) && (piVar2 != (int *)0x0)) {
    this_00 = (void *)FUN_00466a70(*(int *)((int)this + 4));
    piVar2 = FUN_0044e740(this_00,piVar2);
    if (piVar2 == (int *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x150))();
    }
    (**(code **)(*(int *)this + 0x2a0))(uVar3);
  }
  pcVar4 = *(char **)((int)param_1 + 0x2e);
  if (*(LPVOID *)((int)this + 0x2e) != (LPVOID)0x0) {
    FUN_0043f6d0(*(LPVOID *)((int)this + 0x2e));
  }
  if (pcVar4 != (char *)0x0) {
    iVar5 = -1;
    pcVar6 = pcVar4;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      pcVar4 = FUN_0043f650(pcVar4);
      *(char **)((int)this + 0x2e) = pcVar4;
      goto LAB_0046c26b;
    }
  }
  *(undefined4 *)((int)this + 0x2e) = 0;
LAB_0046c26b:
  iVar5 = *(int *)this;
  (**(code **)(iVar5 + 0x324))(param_1);
  (**(code **)(iVar5 + 0x328))(param_1);
  return;
}


