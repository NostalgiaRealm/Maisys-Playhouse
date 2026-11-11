
/* ==== FUN_00459330 @ 00459330 ==== 
 * signature: undefined4 __thiscall FUN_00459330(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00459330-004598bb
 */

undefined4 __thiscall FUN_00459330(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  int *piVar4;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  void *this_00;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  int iVar5;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  undefined3 extraout_var_20;
  undefined4 uVar6;
  char *pcVar7;
  char local_114 [256];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  uVar6 = 0;
  local_10 = 0;
  bVar1 = FUN_00437430(param_1,(int *)s_parametercount_004dbe58);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar6 = FUN_00454d00(param_3,*(undefined4 *)(*(int *)((int)this + 0xbe) + 0x26));
    return uVar6;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_parametername_004dbe80);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_parametervalue_004dbe6c);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      iVar5 = *(int *)(*(int *)((int)this + 0xbe) + 0x26);
      local_8 = FUN_00430190(*(int *)((int)this + 0xbe));
      if (param_2 != (short *)0x0) {
        iVar3 = FUN_00455c10(param_2,&local_c,(int *)0x0);
        if (((iVar3 == 0) && (local_c <= iVar5)) && (0 < local_c)) {
          uVar6 = FUN_00455210(0xffffffff,param_3,*(char **)(local_8 + -4 + local_c * 8));
        }
      }
      FUN_004301f0(*(int *)((int)this + 0xbe));
      return uVar6;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_usertimeout_004dbed0);
    if (CONCAT31(extraout_var_02,bVar1) != 0) {
      uVar6 = FUN_0045a240((int)this);
      uVar6 = FUN_00454d00(param_3,uVar6);
      return uVar6;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_isdirty_004d9800);
    if (CONCAT31(extraout_var_03,bVar1) != 0) {
      piVar4 = (int *)FUN_0045a3e0((int)this);
      bVar2 = (**(code **)(*piVar4 + 0x5c))();
      uVar6 = FUN_00454c50(param_3,bVar2);
      return uVar6;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_aliasmanager_004dc060);
    if (CONCAT31(extraout_var_04,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)&DAT_004dc038);
      if (CONCAT31(extraout_var_05,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_worldmanager_004dc09c);
        if (CONCAT31(extraout_var_06,bVar1) == 0) {
          bVar1 = FUN_00437430(param_1,(int *)&DAT_004dc088);
          if (CONCAT31(extraout_var_07,bVar1) == 0) {
            bVar1 = FUN_00437430(param_1,(int *)s_memorymanager_004dbf98);
            if (CONCAT31(extraout_var_08,bVar1) == 0) {
              bVar1 = FUN_00437430(param_1,(int *)&DAT_004dbf84);
              if (CONCAT31(extraout_var_09,bVar1) == 0) {
                bVar1 = FUN_00437430(param_1,(int *)&DAT_004d9c18);
                if (CONCAT31(extraout_var_10,bVar1) != 0) {
                  pcVar7 = local_114;
                  this_00 = (void *)FUN_0045a3e0((int)this);
                  FUN_00451930(this_00,pcVar7);
                  uVar6 = FUN_00455210(0xffffffff,param_3,local_114);
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_mastervolume_004dc074);
                if (CONCAT31(extraout_var_11,bVar1) != 0) {
                  uVar6 = thunk_FUN_00443170();
                  uVar6 = FUN_00454d00(param_3,uVar6);
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_allowquitkey_004dc04c);
                if (CONCAT31(extraout_var_12,bVar1) != 0) {
                  uVar6 = FUN_00454c50(param_3,*(byte *)((int)this + 0x86));
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_drawarea_004dbfd4);
                if (CONCAT31(extraout_var_13,bVar1) != 0) {
                  local_14 = *(undefined4 *)((int)this + 0xac);
                  uVar6 = FUN_00454db0(param_3,&local_14);
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_firstselected_004dbfac);
                if (CONCAT31(extraout_var_14,bVar1) != 0) {
                  uVar6 = FUN_00430370(*(void **)((int)this + 0xa2),1,&local_10);
                  if ((char)uVar6 != '\0') {
                    uVar6 = FUN_00454d50(param_3,local_10);
                    return uVar6;
                  }
                  uVar6 = FUN_00454d50(param_3,0);
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_selection_004dbf0c);
                if (CONCAT31(extraout_var_15,bVar1) != 0) {
                  if (param_2 != (short *)0x0) {
                    iVar5 = FUN_00455c10(param_2,&local_c,(int *)0x0);
                    if ((iVar5 == 0) && (0 < local_c)) {
                      uVar6 = FUN_00430370(*(void **)((int)this + 0xa2),local_c,&local_10);
                      if ((char)uVar6 != '\0') {
                        uVar6 = FUN_00454d50(param_3,local_10);
                        return uVar6;
                      }
                      uVar6 = FUN_00454d50(param_3,0);
                      return uVar6;
                    }
                  }
                  uVar6 = FUN_00454d50(param_3,*(undefined4 *)((int)this + 0xa2));
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_selectioncount_004dbef8);
                if (CONCAT31(extraout_var_16,bVar1) != 0) {
                  uVar6 = FUN_00454d00(param_3,*(undefined4 *)(*(int *)((int)this + 0xa2) + 0x26));
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_windowposition_004dbde0);
                if (CONCAT31(extraout_var_17,bVar1) != 0) {
                  return 0x10000;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_windowsize_004dbe08);
                if (CONCAT31(extraout_var_18,bVar1) != 0) {
                  local_8 = 0;
                  FUN_00409590(*(int *)((int)this + 0x82));
                  FUN_00410890();
                  uVar6 = FUN_00454db0(param_3,&local_8);
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_windowmaxsize_004dbea8);
                if (CONCAT31(extraout_var_19,bVar1) != 0) {
                  local_8 = 0;
                  iVar5 = FUN_00409590(*(int *)((int)this + 0x82));
                  FUN_00410900(iVar5);
                  uVar6 = FUN_00454db0(param_3,&local_8);
                  return uVar6;
                }
                bVar1 = FUN_00437430(param_1,(int *)s_windowminsize_004dbe94);
                if (CONCAT31(extraout_var_20,bVar1) != 0) {
                  local_8 = 0;
                  iVar5 = FUN_00409590(*(int *)((int)this + 0x82));
                  FUN_004108e0(iVar5);
                  uVar6 = FUN_00454db0(param_3,&local_8);
                  return uVar6;
                }
                uVar6 = FUN_004131b0(this,param_1,param_2,param_3);
                return uVar6;
              }
            }
            uVar6 = FUN_00454d50(param_3,*(undefined4 *)((int)this + 0x6e));
            return uVar6;
          }
        }
        uVar6 = FUN_00454d50(param_3,*(undefined4 *)((int)this + 0x82));
        return uVar6;
      }
    }
    uVar6 = FUN_00454d50(param_3,*(undefined4 *)((int)this + 0x40));
    return uVar6;
  }
  iVar5 = *(int *)(*(int *)((int)this + 0xbe) + 0x26);
  local_8 = FUN_00430190(*(int *)((int)this + 0xbe));
  if (param_2 != (short *)0x0) {
    iVar3 = FUN_00455c10(param_2,&local_c,(int *)0x0);
    if (((iVar3 == 0) && (local_c <= iVar5)) && (0 < local_c)) {
      uVar6 = FUN_00455210(0xffffffff,param_3,*(char **)(local_8 + -8 + local_c * 8));
      goto LAB_004593c4;
    }
  }
  uVar6 = 0x40005;
LAB_004593c4:
  FUN_004301f0(*(int *)((int)this + 0xbe));
  return uVar6;
}


