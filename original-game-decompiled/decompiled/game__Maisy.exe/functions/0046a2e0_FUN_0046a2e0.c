
/* ==== FUN_0046a2e0 @ 0046a2e0 ==== 
 * signature: undefined __thiscall FUN_0046a2e0(void * this, int * param_1, char param_2)
 * body: 0046a2e0-0046a363
 */

void __thiscall FUN_0046a2e0(void *this,int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x62);
  pvVar4 = this;
  pvVar3 = this;
  if (param_2 != '\0') {
    do {
      pvVar4 = pvVar3;
      if (pvVar4 == (void *)0x0) break;
      pvVar3 = *(void **)((int)pvVar4 + 0x6a);
    } while (*(void **)((int)pvVar4 + 0x6a) != (void *)0x0);
  }
  iVar2 = *(int *)((int)pvVar4 + 0x6a);
  if (iVar2 != 0) {
    *(int *)((int)param_1 + 0x6a) = iVar2;
    *(int **)(iVar2 + 0x66) = param_1;
  }
  *(undefined4 *)((int)param_1 + 0x62) = *(undefined4 *)((int)pvVar4 + 0x62);
  *(int **)((int)pvVar4 + 0x6a) = param_1;
  *(void **)((int)param_1 + 0x66) = pvVar4;
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)pvVar4 + 0x3a);
  (**(code **)(**(int **)((int)param_1 + 0x5a) + 500))(*(undefined4 *)((int)this + 0x3a));
  (**(code **)(*(int *)this + 0x2c4))(param_1);
  if (iVar1 != *(int *)((int)pvVar4 + 0x62)) {
    (**(code **)(*param_1 + 0x280))(*(int *)((int)pvVar4 + 0x62));
  }
  return;
}


