
/* ==== FUN_0040b670 @ 0040b670 ==== 
 * signature: undefined __thiscall FUN_0040b670(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0040b670-0040bd61
 */

void __thiscall FUN_0040b670(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined4 uVar3;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  int iVar4;
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  undefined3 extraout_var_22;
  undefined3 extraout_var_23;
  undefined3 extraout_var_24;
  undefined3 extraout_var_25;
  undefined3 extraout_var_26;
  undefined3 extraout_var_27;
  char local_208 [508];
  int local_c;
  void *local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_<project>_004d9850);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (((*(short *)((int)this + 0x22) != 0x43) &&
        (iVar4 = *(int *)((int)this + 4), this = local_8, iVar4 != 0)) &&
       (*(short *)(iVar4 + 0x22) == 1)) {
      this = (void *)FUN_00458a00(iVar4);
    }
    FUN_00454d50(param_3,this);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004d97ec);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    FUN_0048c2d0((int)this,'/',local_208,'\0');
    FUN_00455210(0xffffffff,param_3,local_208);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_fullpath_004d97d8);
  if (CONCAT31(extraout_var_01,bVar1) != 0) {
    FUN_0048c2d0((int)this,'/',local_208,'\x01');
    FUN_00455210(0xffffffff,param_3,local_208);
    return;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_clone_004d983c);
  if (CONCAT31(extraout_var_02,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_debugwatch_004d9814);
    if (CONCAT31(extraout_var_03,bVar1) != 0) {
      FUN_00454c50(param_3,1 - ((*(uint *)((int)this + 0x26) & 0x800) == 0));
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_isdirty_004d9800);
    if (CONCAT31(extraout_var_04,bVar1) != 0) {
      bVar2 = (**(code **)(*(int *)this + 0x18))();
      FUN_00454c50(param_3,bVar2);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_parent_004d97b0);
    if (CONCAT31(extraout_var_05,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x16c))();
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_firstchild_004d9620);
    if (CONCAT31(extraout_var_06,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x18c))();
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)&DAT_004d979c);
    if (CONCAT31(extraout_var_07,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x174))();
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_previous_004d9788);
    if (CONCAT31(extraout_var_08,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x178))();
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_nextflat_004d95e4);
    if (CONCAT31(extraout_var_09,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x1b4))(0);
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_nextparentflat_004d95d0);
    if (CONCAT31(extraout_var_10,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x1b8))(0);
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_nextobject_004d974c);
    if (CONCAT31(extraout_var_11,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x1b4))(0);
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_nextparentobject_004d9738);
    if (CONCAT31(extraout_var_12,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x1b8))(0);
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_parentgen_004d9648);
    if (CONCAT31(extraout_var_13,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x16c))();
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_firstchildgen_004d9634);
    if (CONCAT31(extraout_var_14,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x184))();
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_nextsibling_004d9774);
    if (CONCAT31(extraout_var_15,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x17c))();
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_previoussibling_004d9760);
    if (CONCAT31(extraout_var_16,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x180))();
      FUN_00454d50(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_childobjectindex_004d9724);
    if (CONCAT31(extraout_var_17,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x19c))();
      FUN_00454d00(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_childindex_004d9710);
    if (CONCAT31(extraout_var_18,bVar1) != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x1a0))();
      FUN_00454d00(param_3,uVar3);
      return;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_childobject_004d96fc);
    if (CONCAT31(extraout_var_19,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_childmod_004d96e8);
      if (CONCAT31(extraout_var_20,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_childelem_004d96d4);
        if (CONCAT31(extraout_var_21,bVar1) == 0) {
          bVar1 = FUN_00437430(param_1,(int *)s_childobjectcount_004d96c0);
          if (CONCAT31(extraout_var_22,bVar1) != 0) {
            uVar3 = (**(code **)(*(int *)this + 0x1bc))();
            FUN_00454d00(param_3,uVar3);
            return;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_childmodcount_004d96ac);
          if (CONCAT31(extraout_var_23,bVar1) != 0) {
            uVar3 = (**(code **)(*(int *)this + 0x1c0))();
            FUN_00454d00(param_3,uVar3);
            return;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_childelemcount_004d9698);
          if (CONCAT31(extraout_var_24,bVar1) != 0) {
            uVar3 = (**(code **)(*(int *)this + 0x1c4))();
            FUN_00454d00(param_3,uVar3);
            return;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_selected_004d9670);
          if (CONCAT31(extraout_var_25,bVar1) != 0) {
            FUN_00454c50(param_3,1 - ((*(uint *)((int)this + 0x26) & 0x10000000) == 0));
            return;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_shared_004d965c);
          if (CONCAT31(extraout_var_26,bVar1) != 0) {
            uVar3 = FUN_0040c740(this);
            FUN_00454c50(param_3,(byte)uVar3);
            return;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_structuredepth_004d97c4);
          if (CONCAT31(extraout_var_27,bVar1) == 0) {
            FUN_004131b0(this,param_1,param_2,param_3);
            return;
          }
          local_c = -1;
          FUN_0048c9d0((int)this,&local_c);
          FUN_00454d00(param_3,local_c);
          return;
        }
        if (param_2 == (short *)0x0) {
          uVar3 = (**(code **)(*(int *)this + 0x198))(1);
          FUN_00454d50(param_3,uVar3);
          return;
        }
        iVar4 = FUN_00455c10(param_2,(int *)&local_8,(int *)0x0);
        if (iVar4 == 0) {
          uVar3 = (**(code **)(*(int *)this + 0x198))(local_8);
          FUN_00454d50(param_3,uVar3);
          return;
        }
      }
      else {
        if (param_2 == (short *)0x0) {
          uVar3 = (**(code **)(*(int *)this + 0x194))(1);
          FUN_00454d50(param_3,uVar3);
          return;
        }
        iVar4 = FUN_00455c10(param_2,(int *)&local_8,(int *)0x0);
        if (iVar4 == 0) {
          uVar3 = (**(code **)(*(int *)this + 0x194))(local_8);
          FUN_00454d50(param_3,uVar3);
          return;
        }
      }
    }
    else {
      if (param_2 == (short *)0x0) {
        uVar3 = (**(code **)(*(int *)this + 400))(1);
        FUN_00454d50(param_3,uVar3);
        return;
      }
      iVar4 = FUN_00455c10(param_2,(int *)&local_8,(int *)0x0);
      if (iVar4 == 0) {
        uVar3 = (**(code **)(*(int *)this + 400))(local_8);
        FUN_00454d50(param_3,uVar3);
        return;
      }
    }
  }
  else {
    FUN_00454c50(param_3,(*(byte *)((int)this + 0x38) & 2) >> 1);
  }
  return;
}


