
/* ==== FUN_0048ade0 @ 0048ade0 ==== 
 * signature: undefined __thiscall FUN_0048ade0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0048ade0-0048ae27
 */

void __thiscall FUN_0048ade0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00437430(param_1,(int *)s_privacy_004dd068);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00454c50(param_3,*(byte *)((int)this + 0x60));
    return;
  }
  FUN_0042fc10(this,param_1,param_2,param_3);
  return;
}


