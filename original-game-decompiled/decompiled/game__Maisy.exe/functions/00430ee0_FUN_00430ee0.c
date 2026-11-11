
/* ==== FUN_00430ee0 @ 00430ee0 ==== 
 * signature: undefined __thiscall FUN_00430ee0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00430ee0-00430f59
 */

void __thiscall FUN_00430ee0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar2;
  
  bVar1 = FUN_00437430(param_1,(int *)s_streambytes_004da018);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00454d00(param_3,*(undefined4 *)((int)this + 0xbc));
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_loadedbytes_004da004);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    uVar2 = (**(code **)(*(int *)this + 0x84))();
    FUN_00454d00(param_3,uVar2);
    return;
  }
  FUN_00427bf0(this,param_1,param_2,param_3);
  return;
}


