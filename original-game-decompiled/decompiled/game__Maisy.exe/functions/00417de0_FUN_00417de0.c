
/* ==== FUN_00417de0 @ 00417de0 ==== 
 * signature: undefined __thiscall FUN_00417de0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00417de0-00417e43
 */

void __thiscall FUN_00417de0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  char local_18 [20];
  
  bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00437520((undefined4 *)local_18,(undefined4 *)((int)this + 0x152));
    FUN_00455210(0xffffffff,param_3,local_18);
    return;
  }
  FUN_0040d210(this,param_1,param_2,param_3);
  return;
}


