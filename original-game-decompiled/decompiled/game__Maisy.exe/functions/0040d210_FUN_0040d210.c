
/* ==== FUN_0040d210 @ 0040d210 ==== 
 * signature: undefined4 __thiscall FUN_0040d210(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0040d210-0040d3d1
 */

undefined4 __thiscall FUN_0040d210(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar2;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  char local_104 [256];
  
  bVar1 = FUN_00437430(param_1,(int *)s_filepath_004d9958);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 0;
  }
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004d97ec);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    (**(code **)(*(int *)this + 0x1d0))(local_104,1,1);
    uVar2 = FUN_00455210(0xffffffff,param_3,local_104);
    return uVar2;
  }
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004d9944);
  if (CONCAT31(extraout_var_01,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_classid_004d9988);
    if (CONCAT31(extraout_var_02,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_streamindex_004d9930);
      if (CONCAT31(extraout_var_03,bVar1) != 0) {
        uVar2 = FUN_00454d00(param_3,(int)*(short *)((int)this + 0xa0));
        return uVar2;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_streamposition_004d991c);
      if (CONCAT31(extraout_var_04,bVar1) != 0) {
        uVar2 = FUN_00454d00(param_3,*(undefined4 *)((int)this + 0x74));
        return uVar2;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_purgesize_004d9908);
      if (CONCAT31(extraout_var_05,bVar1) != 0) {
        uVar2 = (**(code **)(*(int *)this + 0x84))();
        uVar2 = FUN_00454d00(param_3,uVar2);
        return uVar2;
      }
      bVar1 = FUN_00437430(param_1,(int *)&DAT_004d98f4);
      if (CONCAT31(extraout_var_06,bVar1) != 0) {
        uVar2 = FUN_00454d00(param_3,*(undefined4 *)((int)this + 0x78));
        return uVar2;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
      if (CONCAT31(extraout_var_07,bVar1) != 0) {
        uVar2 = FUN_00455210(0xffffffff,param_3,s_asset_004d996c);
        return uVar2;
      }
      uVar2 = FUN_004131b0(this,param_1,param_2,param_3);
      return uVar2;
    }
  }
  (**(code **)(*(int *)this + 0x164))(local_104);
  uVar2 = FUN_00455210(0xffffffff,param_3,local_104);
  return uVar2;
}


