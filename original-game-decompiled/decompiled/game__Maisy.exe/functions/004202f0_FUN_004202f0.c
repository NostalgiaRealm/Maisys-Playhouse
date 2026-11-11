
/* ==== FUN_004202f0 @ 004202f0 ==== 
 * signature: undefined __thiscall FUN_004202f0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 004202f0-004203e1
 */

void __thiscall FUN_004202f0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined4 uVar4;
  undefined3 extraout_var_02;
  int *piVar5;
  int iVar6;
  
  bVar1 = FUN_00437430(param_1,(int *)s_inmemory_004da02c);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    bVar2 = FUN_00420250((int)this);
    FUN_00454c50(param_3,bVar2);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_streambytes_004da018);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    iVar6 = 0;
    if ((*(int *)((int)this + 0x152) != 0) && (0 < *(short *)((int)this + 0x176))) {
      iVar3 = (int)*(short *)((int)this + 0x176);
      piVar5 = (int *)(*(int *)((int)this + 0x152) + 0x12);
      do {
        iVar6 = iVar6 + *piVar5;
        piVar5 = (int *)((int)piVar5 + 0x3a);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00454d00(param_3,iVar6);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_loadedbytes_004da004);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    uVar4 = (**(code **)(*(int *)this + 0x84))();
    FUN_00454d00(param_3,uVar4);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
  if (CONCAT31(extraout_var_02,bVar1) != 0) {
    bVar2 = FUN_00420250((int)this);
    FUN_00454c50(param_3,bVar2);
    return;
  }
  FUN_0040d210(this,param_1,param_2,param_3);
  return;
}


