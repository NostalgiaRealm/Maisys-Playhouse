
/* ==== FUN_00474d20 @ 00474d20 ==== 
 * signature: undefined4 __thiscall FUN_00474d20(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00474d20-00474e27
 */

undefined4 __thiscall FUN_00474d20(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 uVar3;
  short local_34 [24];
  
  bVar1 = FUN_00437430(param_1,(int *)s_value_004d9864);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      uVar3 = FUN_00455210(0xffffffff,param_3,s_VariableMod_004dca60);
      return uVar3;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      uVar3 = FUN_00455210(0xffffffff,param_3,s_variable_004da400);
      return uVar3;
    }
    uVar3 = FUN_0042ca70(this,param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = 0xffffffff;
  if (*param_3 == 0x66) {
    uVar3 = *(undefined4 *)(param_3 + 1);
  }
  uVar2 = FUN_004166b0(param_3,local_34);
  if ((char)uVar2 != '\0') {
    FUN_00474bd0(this,0,local_34,local_34[0]);
    if (local_34[0] == 0) {
      return 0x10000;
    }
    uVar3 = FUN_004169e0(local_34,param_3,uVar3);
    if ((char)uVar3 != '\0') {
      return 0;
    }
  }
  return 0x10000;
}


