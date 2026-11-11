
/* ==== FUN_00474e30 @ 00474e30 ==== 
 * signature: undefined4 __thiscall FUN_00474e30(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 00474e30-00474f2d
 */

undefined4 __thiscall FUN_00474e30(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined2 local_8c [24];
  short local_5c [22];
  undefined2 local_30 [20];
  int local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_value_004d9864);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    local_5c[0] = 0x6a;
    bVar1 = false;
    iVar2 = (**(code **)(*(int *)this + 0x244))();
    if ((iVar2 != 0x33e) &&
       (((*param_3 == 0x73 || (*param_3 == 0x69)) && (*(int **)(param_3 + 1) != (int *)0x0)))) {
      local_30[0] = 0;
      iVar2 = (**(code **)(**(int **)(param_3 + 1) + 0x98))(s_value_004d9864,local_30,local_5c);
      if (iVar2 == 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      param_3 = local_5c;
    }
    FUN_004166b0(param_3,local_8c);
    FUN_00474c50(this,0,local_8c);
    if (bVar1) {
      pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_8);
      DAT_004e34cc = (*pcVar3)(local_8,0xffffffff,local_5c);
    }
    return 0;
  }
  uVar4 = FUN_0042cac0(this,param_1,param_2,param_3);
  return uVar4;
}


