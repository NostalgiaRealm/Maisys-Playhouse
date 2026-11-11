
/* ==== FUN_0044f8c0 @ 0044f8c0 ==== 
 * signature: undefined __thiscall FUN_0044f8c0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0044f8c0-0044f972
 */

void __thiscall FUN_0044f8c0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004dbbdc);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar3 = (**(code **)(*(int *)this + 0x4a8))();
    FUN_00454d00(param_3,iVar3 + 1);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004da268);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    bVar2 = (**(code **)(*(int *)this + 0x484))();
    FUN_00454c50(param_3,bVar2);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_range_004d9f50);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    FUN_00454e70(param_3,*(int *)((int)this + 0x14e) + 1,*(int *)((int)this + 0x152) + 1);
    return;
  }
  FUN_00464500(this,param_1,param_2,param_3);
  return;
}


