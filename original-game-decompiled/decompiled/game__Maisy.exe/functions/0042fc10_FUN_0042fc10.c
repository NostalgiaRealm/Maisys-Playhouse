
/* ==== FUN_0042fc10 @ 0042fc10 ==== 
 * signature: undefined __thiscall FUN_0042fc10(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0042fc10-0042fc57
 */

void __thiscall FUN_0042fc10(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00437430(param_1,(int *)s_numitems_004dac9c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_004131b0(this,param_1,param_2,param_3);
    return;
  }
  FUN_00454d00(param_3,*(undefined4 *)((int)this + 0x26));
  return;
}


