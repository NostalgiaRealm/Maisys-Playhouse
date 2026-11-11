
/* ==== FUN_004630b0 @ 004630b0 ==== 
 * signature: undefined __thiscall FUN_004630b0(void * this, int * param_1)
 * body: 004630b0-00463217
 */

void __thiscall FUN_004630b0(void *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x128))(1);
  (**(code **)(*(int *)this + 0x124))(uVar2);
  *(int *)((int)this + 0xc) = param_1[3];
  *(undefined2 *)((int)this + 0x5e) = *(undefined2 *)((int)param_1 + 0x5e);
  *(int *)((int)this + 4) = param_1[1];
  *(short *)((int)this + 0x60) = (short)param_1[0x18];
  *(undefined4 *)((int)this + 0x52) = *(undefined4 *)((int)param_1 + 0x52);
  *(int *)((int)this + 0x94) = param_1[0x25];
  uVar2 = *(undefined4 *)((int)param_1 + 0xa6);
  *(undefined4 *)((int)this + 0xa2) = *(undefined4 *)((int)param_1 + 0xa2);
  *(undefined4 *)((int)this + 0xa6) = uVar2;
  uVar2 = *(undefined4 *)((int)param_1 + 0xae);
  *(undefined4 *)((int)this + 0xaa) = *(undefined4 *)((int)param_1 + 0xaa);
  *(undefined4 *)((int)this + 0xae) = uVar2;
  *(undefined4 *)((int)this + 0x3e) = *(undefined4 *)((int)param_1 + 0x3e);
  *(undefined4 *)((int)this + 0x3a) = *(undefined4 *)((int)param_1 + 0x3a);
  if (*(char **)((int)param_1 + 0x2e) != (char *)0x0) {
    iVar5 = -1;
    pcVar3 = *(char **)((int)param_1 + 0x2e);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      pcVar3 = FUN_0043f650(*(char **)((int)param_1 + 0x2e));
      *(char **)((int)this + 0x2e) = pcVar3;
    }
  }
  piVar4 = (int *)FUN_00469f80(param_1);
  *(int **)((int)this + 0x4e) = piVar4;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  for (; piVar4 != (int *)0x0; piVar4 = *(int **)((int)piVar4 + 0x3e)) {
    (**(code **)(*piVar4 + 0x1fc))(this);
  }
  (**(code **)(**(int **)((int)this + 0x5a) + 0xe4))(*(undefined4 *)((int)param_1 + 0x5a));
  iVar5 = FUN_00469fb0(param_1);
  if (iVar5 != 0) {
    for (iVar5 = *(int *)((int)param_1 + 0x6e); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x6a)) {
      *(void **)(iVar5 + 0x62) = this;
    }
  }
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    *(void **)(*(int *)((int)param_1 + 0x6a) + 0x66) = this;
  }
  if (*(int *)((int)param_1 + 0x66) != 0) {
    *(void **)(*(int *)((int)param_1 + 0x66) + 0x6a) = this;
  }
  piVar4 = (int *)(*(int *)((int)param_1 + 0x62) + 0x6e);
  if ((int *)*piVar4 == param_1) {
    *piVar4 = (int)this;
  }
  *(undefined4 *)((int)this + 0x6a) = *(undefined4 *)((int)param_1 + 0x6a);
  *(undefined4 *)((int)this + 0x66) = *(undefined4 *)((int)param_1 + 0x66);
  *(undefined4 *)((int)this + 0x6e) = *(undefined4 *)((int)param_1 + 0x6e);
  *(undefined4 *)((int)this + 0x62) = *(undefined4 *)((int)param_1 + 0x62);
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)this + 0x12) = *(undefined4 *)((int)param_1 + 0x12);
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  return;
}


