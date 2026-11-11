
/* ==== FUN_004672f0 @ 004672f0 ==== 
 * signature: uint __thiscall FUN_004672f0(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 004672f0-004673d0
 */

uint __thiscall FUN_004672f0(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void **ppvVar5;
  int iVar6;
  undefined4 uVar7;
  int local_c;
  void *local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_value_004dc3b0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    piVar4 = FUN_00467030(this,(char *)param_1);
    if (piVar4 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar4 + 0x9c))(s_value_004dc3b0);
      return uVar3;
    }
    uVar3 = FUN_0042cac0(this,param_1,param_2,param_3);
    return uVar3;
  }
  local_c = 0;
  if (*param_3 == 0x7b) {
    uVar7 = 0;
    piVar4 = &local_c;
    iVar6 = *(int *)(param_3 + 7);
    ppvVar5 = &local_8;
    local_8 = this;
    iVar2 = (**(code **)(*(int *)this + 0x10))();
    uVar3 = FUN_00452ee0(iVar2,(int *)ppvVar5,iVar6,piVar4,uVar7);
    return uVar3;
  }
  piVar4 = (int *)0x0;
  FUN_004537b0(param_3,this);
  if (*param_3 == 0x73) {
    piVar4 = *(int **)(param_3 + 1);
  }
  if (*param_3 == 0x69) {
    piVar4 = *(int **)(param_3 + 1);
  }
  if (piVar4 != (int *)0x0) {
    uVar3 = FUN_004671e0(piVar4,this);
    return uVar3;
  }
  return 0x10000;
}


