
/* ==== FUN_0040bd70 @ 0040bd70 ==== 
 * signature: int __thiscall FUN_0040bd70(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0040bd70-0040c248
 */

int __thiscall FUN_0040bd70(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  short sVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  char *pcVar3;
  undefined3 extraout_var_02;
  void *pvVar4;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  int iVar5;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  int *piVar6;
  undefined3 extraout_var_09;
  int iVar7;
  undefined4 unaff_EBP;
  char local_468 [1024];
  undefined4 local_68 [9];
  short local_42 [20];
  void *local_1a;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 local_5;
  undefined1 uStack_1;
  
  local_5._1_3_ = (undefined3)unaff_EBP;
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  iVar7 = 0;
  bVar1 = FUN_00437430(param_1,(int *)s_________________004d9878);
  if ((CONCAT31(extraout_var,bVar1) == 0) &&
     (bVar1 = FUN_00437430(param_1,(int *)s_value_004d9864), CONCAT31(extraout_var_00,bVar1) == 0))
  {
    bVar1 = FUN_00437430(param_1,(int *)s_clone_004d983c);
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)&DAT_004d9828);
      if (CONCAT31(extraout_var_02,bVar1) != 0) {
        pvVar4 = (void *)FUN_0040c620(this);
        if (pvVar4 == (void *)0x0) {
          return 0x40002;
        }
        FUN_00404db0(pvVar4,(int)this);
        return 0;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_debugwatch_004d9814);
      if (CONCAT31(extraout_var_03,bVar1) != 0) {
        local_5 = CONCAT31(local_5._1_3_,1);
        FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
        iVar7 = *(int *)this;
        (**(code **)(iVar7 + 0x1c))(local_5);
        (**(code **)(iVar7 + 0x164))(local_5,0);
        return 0;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_isdirty_004d9800);
      if (CONCAT31(extraout_var_04,bVar1) != 0) {
        local_5 = CONCAT31(local_5._1_3_,1);
        FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
        (**(code **)(*(int *)this + 0x1c))(local_5);
        return 0;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_parent_004d97b0);
      if (CONCAT31(extraout_var_05,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_childindex_004d9710);
        if (CONCAT31(extraout_var_06,bVar1) != 0) {
          iVar7 = *(int *)this;
          iVar5 = (**(code **)(iVar7 + 0x16c))();
          if (iVar5 == 0) {
            return 0x40002;
          }
          iVar5 = FUN_00455c10(param_3,&local_10,(int *)0x0);
          if (iVar5 != 0) {
            return 0x40002;
          }
          sVar2 = *(short *)((int)this + 0x22);
          if (((sVar2 != 0x43) && (sVar2 != 0x40)) && (sVar2 != 0x3f)) {
            (**(code **)(iVar7 + 0x1a8))(local_10);
            return 0;
          }
          return 0x40002;
        }
        bVar1 = FUN_00437430(param_1,(int *)s_selected_004d9670);
        if (CONCAT31(extraout_var_07,bVar1) == 0) {
          bVar1 = FUN_00437430(param_1,(int *)s_shared_004d965c);
          if (CONCAT31(extraout_var_08,bVar1) == 0) {
            bVar1 = FUN_00437430(param_1,(int *)s_openeditdialog_004d9684);
            if (CONCAT31(extraout_var_09,bVar1) == 0) {
              iVar7 = FUN_004135a0(this,param_1,param_2,param_3);
              return iVar7;
            }
          }
          else {
            iVar7 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
            if (iVar7 == 0) {
              local_42[0] = 0x6a;
              FUN_00454d50(local_42,this);
              piVar6 = (int *)FUN_0040c620(this);
              if (piVar6 == (int *)0x0) {
                return 0x10000;
              }
              if ((char)local_5 == '\0') {
                iVar7 = (**(code **)(*piVar6 + 0x9c))(s_removefromworld_004d9330,0,local_42);
                return iVar7;
              }
              iVar7 = (**(code **)(*piVar6 + 0x9c))(s_addtoworld_004d94f8);
              return iVar7;
            }
          }
        }
        else {
          iVar7 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
          if (iVar7 == 0) {
            (**(code **)(*(int *)this + 0x120))(local_5);
            return 0;
          }
        }
      }
      else {
        iVar7 = FUN_00455ee0(param_3,(int *)&local_c,(int *)0x0);
        if (iVar7 == 0) {
          if ((local_c == (int *)0x0) || ((*(byte *)((int)local_c + 0x1e) & 1) == 0)) {
            return 0x40002;
          }
          sVar2 = (**(code **)(*local_c + 0x1d4))(this);
          if (sVar2 != 0) {
            return 0x10000;
          }
          pvVar4 = (void *)FUN_0040c620(this);
          if (pvVar4 == (void *)0x0) {
            (**(code **)(*(int *)this + 0x104))();
            FUN_004142c0(local_68,0xe3,0,0,0);
            (**(code **)(*local_c + 0x1e0))(local_68);
            return 0;
          }
          FUN_00405110(pvVar4,(int)this,local_c);
          return 0;
        }
      }
    }
    else {
      local_1a = (void *)FUN_0040c620(this);
      if (local_1a == (void *)0x0) {
        return 0x40002;
      }
      local_468[0] = '\0';
      iVar7 = FUN_00455ee0(param_3,(int *)&local_c,(int *)0x0);
      if (iVar7 != 0) {
        iVar7 = FUN_00456560(param_3,local_468,0x400,(int *)0x0);
        if (iVar7 != 0) {
          FUN_00404d20(local_1a,(int)this,(char *)0x0,0,0);
          return iVar7;
        }
        iVar7 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
        if (iVar7 != 0) {
          if (local_468[0] == '\0') {
            FUN_00404d20(local_1a,(int)this,(char *)0x0,0,0);
            return 0;
          }
          FUN_00404d20(local_1a,(int)this,local_468,1,0);
          return 0;
        }
        FUN_00404d20(local_1a,(int)this,(char *)0x0,0,0);
        return 0;
      }
      iVar7 = FUN_0048c900((int)local_c,&local_14,'\x01');
      if (iVar7 == 0) {
        pcVar3 = (char *)FUN_0043b950(local_14);
        iVar7 = FUN_0048c2d0((int)local_c,'/',pcVar3,'\x01');
        if (iVar7 != 0) {
          FUN_0043ba20(pcVar3);
          return iVar7;
        }
        FUN_00404d20(local_1a,(int)this,pcVar3,1,0);
        FUN_0043ba20(pcVar3);
        iVar7 = 0;
      }
    }
  }
  return iVar7;
}


