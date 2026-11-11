
/* ==== FUN_0044fed0 @ 0044fed0 ==== 
 * signature: undefined __thiscall FUN_0044fed0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0044fed0-0044ff1a
 */

void __thiscall FUN_0044fed0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00437430(param_1,(int *)s_count_004dbb94);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_004131b0(this,param_1,param_2,param_3);
    return;
  }
  FUN_00454d00(param_3,*(undefined4 *)(*(int *)((int)this + 0x26) + 0x26));
  return;
}


