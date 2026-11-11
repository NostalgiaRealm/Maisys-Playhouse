
/* ==== FUN_0045de70 @ 0045de70 ==== 
 * signature: undefined __thiscall FUN_0045de70(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0045de70-0045deba
 */

void __thiscall FUN_0045de70(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00437430(param_1,(int *)s_currentrev_004dc11c);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00454d00(param_3,(uint)*(ushort *)((int)this + 0x3c));
    return;
  }
  FUN_004131b0(this,param_1,param_2,param_3);
  return;
}


