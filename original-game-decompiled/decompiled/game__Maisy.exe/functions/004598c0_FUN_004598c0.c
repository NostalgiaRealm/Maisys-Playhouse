
/* ==== FUN_004598c0 @ 004598c0 ==== 
 * signature: int __thiscall FUN_004598c0(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 004598c0-00459d32
 */

int __thiscall FUN_004598c0(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int *piVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  void *pvVar4;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  int iVar5;
  char local_210 [256];
  char local_110 [256];
  int local_10;
  undefined4 local_c;
  char local_5;
  
  iVar5 = 0;
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004d9c18);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_usertimeout_004dbed0);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_close_004dc024);
      if (CONCAT31(extraout_var_01,bVar1) != 0) {
        iVar5 = FUN_0045a3e0((int)this);
        FUN_00451cb0(iVar5);
        return 0;
      }
      bVar1 = FUN_00437430(param_1,(int *)&DAT_004dbf34);
      if (CONCAT31(extraout_var_02,bVar1) != 0) {
        return 0;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_saveas_004dbf20);
      if (CONCAT31(extraout_var_03,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_mastervolume_004dc074);
        if (CONCAT31(extraout_var_04,bVar1) == 0) {
          bVar1 = FUN_00437430(param_1,(int *)s_allowquitkey_004dc04c);
          if (CONCAT31(extraout_var_05,bVar1) == 0) {
            bVar1 = FUN_00437430(param_1,(int *)s_windowposition_004dbde0);
            if (CONCAT31(extraout_var_06,bVar1) == 0) {
              bVar1 = FUN_00437430(param_1,(int *)s_windowsize_004dbe08);
              if (CONCAT31(extraout_var_07,bVar1) == 0) {
                bVar1 = FUN_00437430(param_1,(int *)s_windowmaxsize_004dbea8);
                if (CONCAT31(extraout_var_08,bVar1) == 0) {
                  bVar1 = FUN_00437430(param_1,(int *)s_windowminsize_004dbe94);
                  if (CONCAT31(extraout_var_09,bVar1) == 0) {
                    bVar1 = FUN_00437430(param_1,(int *)s_windowstyle_004dbe1c);
                    if (CONCAT31(extraout_var_10,bVar1) == 0) {
                      bVar1 = FUN_00437430(param_1,(int *)s_windowtitle_004dbdf4);
                      if (CONCAT31(extraout_var_11,bVar1) == 0) {
                        bVar1 = FUN_00437430(param_1,(int *)s_visible_004dbebc);
                        if (CONCAT31(extraout_var_12,bVar1) == 0) {
                          iVar5 = FUN_004135a0(this,param_1,param_2,param_3);
                          return iVar5;
                        }
                        iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                        if (iVar5 == 0) {
                          if (local_5 == '\0') {
                            iVar5 = FUN_00409590(*(int *)((int)this + 0x82));
                            FUN_004106f0(iVar5);
                            return 0;
                          }
                          iVar5 = FUN_00409590(*(int *)((int)this + 0x82));
                          FUN_00410700(iVar5);
                          return 0;
                        }
                      }
                      else {
                        iVar5 = FUN_00456560(param_3,local_110,0xff,(int *)0x0);
                        if (iVar5 == 0) {
                          piVar3 = (int *)FUN_00409590(*(int *)((int)this + 0x82));
                          (**(code **)(*piVar3 + 0x74))(local_110);
                          return 0;
                        }
                      }
                    }
                    else if (*param_3 == 0x66) {
                      iVar5 = FUN_00456560(param_3,local_110,0xff,(int *)0x0);
                      if (iVar5 == 0) {
                        piVar3 = (int *)FUN_00409590(*(int *)((int)this + 0x82));
                        (**(code **)(*piVar3 + 0x13c))(local_110,0,0);
                        return 0;
                      }
                    }
                    else {
                      iVar5 = FUN_00455c10(param_3,&local_10,(int *)0x0);
                      if (iVar5 == 0) {
                        piVar3 = (int *)FUN_00409590(*(int *)((int)this + 0x82));
                        (**(code **)(*piVar3 + 0x140))(local_10,0,0);
                        return 0;
                      }
                    }
                  }
                  else {
                    iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
                    if (iVar5 == 0) {
                      iVar5 = FUN_00409590(*(int *)((int)this + 0x82));
                      FUN_004108a0(iVar5);
                      return 0;
                    }
                  }
                }
                else {
                  iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
                  if (iVar5 == 0) {
                    iVar5 = FUN_00409590(*(int *)((int)this + 0x82));
                    FUN_004108c0(iVar5);
                    return 0;
                  }
                }
              }
              else {
                iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
                if (iVar5 == 0) {
                  pvVar4 = (void *)FUN_00409590(*(int *)((int)this + 0x82));
                  FUN_00410870(pvVar4,local_c);
                  return 0;
                }
              }
            }
            else {
              iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
              if (iVar5 == 0) {
                pvVar4 = (void *)FUN_00409590(*(int *)((int)this + 0x82));
                FUN_00410850(pvVar4,local_c);
                return 0;
              }
            }
          }
          else {
            iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
            if (iVar5 == 0) {
              *(char *)((int)this + 0x86) = local_5;
              return 0;
            }
          }
        }
        else {
          iVar5 = FUN_00455c10(param_3,&local_10,(int *)0x0);
          if (iVar5 == 0) {
            FUN_0043ed40(local_10);
            return 0;
          }
        }
      }
    }
    else {
      iVar5 = FUN_00455c10(param_3,&local_10,(int *)0x0);
      if (iVar5 == 0) {
        FUN_0045a220(this,local_10);
        return 0;
      }
    }
  }
  else {
    iVar2 = FUN_00456560(param_3,local_210,0x100,(int *)0x0);
    if (iVar2 != 0) {
      return 0x10000;
    }
    piVar3 = (int *)FUN_00458a00((int)this);
    (**(code **)(*piVar3 + 0x74))(local_210);
    piVar3 = (int *)FUN_00409590(*(int *)((int)this + 0x82));
    (**(code **)(*piVar3 + 0x110))();
  }
  return iVar5;
}


