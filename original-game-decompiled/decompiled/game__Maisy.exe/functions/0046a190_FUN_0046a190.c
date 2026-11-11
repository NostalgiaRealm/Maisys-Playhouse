
/* ==== FUN_0046a190 @ 0046a190 ==== 
 * signature: undefined __thiscall FUN_0046a190(void * this, int * param_1, char param_2)
 * body: 0046a190-0046a23d
 */

void __thiscall FUN_0046a190(void *this,int *param_1,char param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00469fb0(this);
  if ((iVar2 == 0) || (param_2 == '\0')) {
    iVar2 = FUN_00469fb0(this);
    pvVar1 = *(void **)((int)param_1 + 0x62);
    *(void **)((int)param_1 + 0x62) = this;
    *(int **)((int)this + 0x6e) = param_1;
    *(int *)((int)param_1 + 0x6a) = iVar2;
    if (iVar2 != 0) {
      uVar4 = FUN_00469fb0(this);
      *(undefined4 *)(iVar2 + 0x66) = uVar4;
    }
    *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)this + 0x3a);
    (**(code **)(**(int **)((int)param_1 + 0x5a) + 500))(*(undefined4 *)((int)this + 0x3a));
    (**(code **)(*(int *)this + 0x2c4))(param_1);
    if (pvVar1 != this) {
      (**(code **)(*param_1 + 0x280))(this);
    }
  }
  else {
    piVar3 = (int *)FUN_00469fb0(this);
    (**(code **)(*piVar3 + 0x2b4))(param_1,1);
    if (*(int **)(*(int *)((int)this + 0x6e) + 0x6a) == param_1) {
      uVar4 = FUN_00469fb0(this);
      *(undefined4 *)((int)param_1 + 0x66) = uVar4;
      return;
    }
  }
  return;
}


