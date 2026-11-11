
/* ==== FUN_0041a610 @ 0041a610 ==== 
 * signature: int __thiscall FUN_0041a610(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0041a610-0041a732
 */

int __thiscall FUN_0041a610(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  char local_110 [256];
  int local_10;
  int local_c;
  char local_5;
  
  bVar1 = FUN_00437430(param_1,(int *)s_range_004d9f50);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_maintainrate_004d9ec8);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      iVar2 = FUN_0044f980(this,param_1,param_2,param_3);
      return iVar2;
    }
    iVar2 = FUN_00455730(param_3,&local_5,(int *)0x0);
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x4a0))(local_5 == '\0');
    }
  }
  else {
    if ((*param_3 == 100) && (*(int *)(param_3 + 3) == 3)) {
      FUN_00419800(this,*(int *)(param_3 + 1));
      return 0;
    }
    iVar2 = FUN_004562d0(param_3,&local_c,&local_10,(int *)0x0);
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x4ac))(local_c + -1,local_10 + -1);
      return 0;
    }
    iVar2 = FUN_00456560(param_3,local_110,0xff,(int *)0x0);
    if (iVar2 == 0) {
      FUN_00419780(this,(int)local_110);
      return 0;
    }
  }
  return iVar2;
}


