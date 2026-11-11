
/* ==== FUN_0047d560 @ 0047d560 ==== 
 * signature: undefined __thiscall FUN_0047d560(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0047d560-0047d5aa
 */

void __thiscall FUN_0047d560(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00455210(0xffffffff,param_3,s_BehaviorMod_004dcb3c);
    return;
  }
  FUN_004254c0(this,param_1,param_2,param_3);
  return;
}


