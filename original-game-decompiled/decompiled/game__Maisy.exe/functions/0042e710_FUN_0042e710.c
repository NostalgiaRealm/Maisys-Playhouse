
/* ==== FUN_0042e710 @ 0042e710 ==== 
 * signature: undefined __thiscall FUN_0042e710(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0042e710-0042e79e
 */

void __thiscall FUN_0042e710(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  bVar1 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      FUN_00455210(0xffffffff,param_3,s_PICTElement_004dac7c);
      return;
    }
    FUN_00464500(this,param_1,param_2,param_3);
    return;
  }
  if (*(int **)((int)this + 0x52) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x52) + 0x98))(param_1,param_2,param_3);
    return;
  }
  FUN_00454c50(param_3,0);
  return;
}


