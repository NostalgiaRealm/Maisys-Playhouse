
/* ==== FUN_0042e2e0 @ 0042e2e0 ==== 
 * signature: undefined __thiscall FUN_0042e2e0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0042e2e0-0042e377
 */

void __thiscall FUN_0042e2e0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar2;
  int iVar3;
  
  bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_Project_004d9ff0);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_structure_004da0a4);
    return;
  }
  piVar2 = (int *)(**(code **)(*(int *)this + 0x10))();
  iVar3 = (**(code **)(*piVar2 + 0x98))(param_1,param_2,param_3);
  if (iVar3 == 0x10000) {
    FUN_0046b080(this,param_1,param_2,param_3);
  }
  return;
}


