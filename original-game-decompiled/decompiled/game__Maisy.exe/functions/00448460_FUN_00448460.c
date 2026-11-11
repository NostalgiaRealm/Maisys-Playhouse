
/* ==== FUN_00448460 @ 00448460 ==== 
 * signature: int __thiscall FUN_00448460(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 00448460-004484cb
 */

int __thiscall FUN_00448460(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  short sVar3;
  short local_8 [2];
  
  bVar1 = FUN_00437430(param_1,(int *)s_purge_004db9f8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00455c10(param_3,(int *)local_8,(int *)0x0);
    sVar3 = 0x65;
    if (iVar2 == 0) {
      sVar3 = local_8[0];
    }
    FUN_00448710(this,sVar3);
    return iVar2;
  }
  iVar2 = FUN_004135a0(this,param_1,param_2,param_3);
  return iVar2;
}


