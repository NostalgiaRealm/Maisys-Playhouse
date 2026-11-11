
/* ==== FUN_0041c960 @ 0041c960 ==== 
 * signature: undefined __thiscall FUN_0041c960(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0041c960-0041ca3f
 */

void __thiscall FUN_0041c960(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  undefined4 uVar3;
  undefined3 extraout_var_02;
  
  bVar1 = FUN_00437430(param_1,(int *)s_inmemory_004da02c);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00454c50(param_3,*(byte *)((int)this + 0xf2));
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_streambytes_004da018);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    iVar2 = *(int *)((int)this + 0x78);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)this + 0x84))();
    }
    FUN_00454d00(param_3,iVar2);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_loadedbytes_004da004);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    uVar3 = (**(code **)(*(int *)this + 0x84))();
    FUN_00454d00(param_3,uVar3);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
  if (CONCAT31(extraout_var_02,bVar1) != 0) {
    FUN_00454c50(param_3,(*(byte *)((int)this + 0x15e) & 2) >> 1);
    return;
  }
  FUN_0040d210(this,param_1,param_2,param_3);
  return;
}


