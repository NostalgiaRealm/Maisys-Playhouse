
/* ==== FUN_0040d3e0 @ 0040d3e0 ==== 
 * signature: int __thiscall FUN_0040d3e0(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0040d3e0-0040d48d
 */

int __thiscall FUN_0040d3e0(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar3;
  int local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_preload_004d98e0);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00455c10(param_3,&local_8,(int *)0x0);
    iVar3 = 0x32;
    if (iVar2 == 0) {
      iVar3 = local_8;
    }
    FUN_0044df80(this,iVar3);
    return iVar2;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_flush_004d98cc);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_unload_004d98b8);
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      iVar3 = FUN_004135a0(this,param_1,param_2,param_3);
      return iVar3;
    }
  }
  (**(code **)(*(int *)this + 0x80))(0x7fffffff,100);
  return 0;
}


