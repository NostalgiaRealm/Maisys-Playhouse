
/* ==== FUN_0042ca70 @ 0042ca70 ==== 
 * signature: undefined __thiscall FUN_0042ca70(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0042ca70-0042cabe
 */

void __thiscall FUN_0042ca70(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = FUN_00437430(param_1,(int *)s_modindex_004d960c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_004127f0(this,param_1,param_2,param_3);
    return;
  }
  uVar2 = (**(code **)(*(int *)this + 0x1a0))();
  FUN_00454d00(param_3,uVar2);
  return;
}


