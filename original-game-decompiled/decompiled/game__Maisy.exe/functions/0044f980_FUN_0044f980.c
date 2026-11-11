
/* ==== FUN_0044f980 @ 0044f980 ==== 
 * signature: int __thiscall FUN_0044f980(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0044f980-0044fa79
 */

int __thiscall FUN_0044f980(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 unaff_EBP;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_5;
  undefined1 uStack_1;
  
  local_5._1_3_ = (undefined3)unaff_EBP;
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004da268);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)&DAT_004dbbdc);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_range_004d9f50);
      if (CONCAT31(extraout_var_01,bVar1) == 0) {
        iVar2 = FUN_00464a90(this,param_1,param_2,param_3);
        return iVar2;
      }
      iVar2 = FUN_004562d0(param_3,&local_c,&local_10,(int *)0x0);
      if (iVar2 == 0) {
        (**(code **)(*(int *)this + 0x4ac))(local_c + -1,local_10 + -1);
      }
    }
    else {
      iVar2 = FUN_00455c10(param_3,&local_14,(int *)0x0);
      if (iVar2 == 0) {
        (**(code **)(*(int *)this + 0x4a4))(local_14 + -1);
        return 0;
      }
    }
  }
  else {
    iVar2 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x488))(local_5);
      return 0;
    }
  }
  return iVar2;
}


