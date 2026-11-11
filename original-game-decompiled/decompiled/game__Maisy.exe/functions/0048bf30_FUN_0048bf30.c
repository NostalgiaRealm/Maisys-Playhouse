
/* ==== FUN_0048bf30 @ 0048bf30 ==== 
 * signature: undefined __thiscall FUN_0048bf30(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0048bf30-0048bfa5
 */

void __thiscall FUN_0048bf30(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_GraphicMod_004dd17c);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_modifier_004d9b4c);
    return;
  }
  FUN_00474d20(this,param_1,param_2,param_3);
  return;
}


