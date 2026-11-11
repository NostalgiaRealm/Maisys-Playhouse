
/* ==== FUN_0044a6a0 @ 0044a6a0 ==== 
 * signature: undefined __thiscall FUN_0044a6a0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0044a6a0-0044a70b
 */

void __thiscall FUN_0044a6a0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  bVar1 = FUN_00437430(param_1,(int *)s_streambytes_004da018);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00454d00(param_3,0);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_loadedbytes_004da004);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_00454d00(param_3,0);
    return;
  }
  FUN_0040d210(this,param_1,param_2,param_3);
  return;
}


