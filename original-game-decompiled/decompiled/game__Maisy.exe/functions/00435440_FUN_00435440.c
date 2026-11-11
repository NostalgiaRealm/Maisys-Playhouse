
/* ==== FUN_00435440 @ 00435440 ==== 
 * signature: undefined __thiscall FUN_00435440(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00435440-0043548a
 */

void __thiscall FUN_00435440(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00437430(param_1,(int *)s_services_004dafa4);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00454d50(param_3,*(undefined4 *)((int)this + 0x724c));
    return;
  }
  FUN_004131b0(this,param_1,param_2,param_3);
  return;
}


