
/* ==== FUN_004670f0 @ 004670f0 ==== 
 * signature: undefined __thiscall FUN_004670f0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 004670f0-004671d2
 */

void __thiscall FUN_004670f0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  piVar2 = FUN_00467030(this,(char *)param_1);
  if (piVar2 != (int *)0x0) {
    if (param_2 != (short *)0x0) {
      (**(code **)(*piVar2 + 0x98))(s_value_004dc3b0,param_2,param_3);
      return;
    }
    FUN_00454d50(param_3,piVar2);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_count_004dc3c8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar3 = (**(code **)(*(int *)this + 0x1c0))();
    FUN_00454d00(param_3,uVar3);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_CompoundVariable_004dc3dc);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_variable_004da400);
    return;
  }
  FUN_004254c0(this,param_1,param_2,param_3);
  return;
}


