
/* ==== FUN_0040a230 @ 0040a230 ==== 
 * signature: int __thiscall FUN_0040a230(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0040a230-0040ad15
 */

int __thiscall FUN_0040a230(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  undefined1 uVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  undefined3 extraout_var;
  int iVar5;
  void *this_00;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  int iVar6;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  undefined3 extraout_var_22;
  undefined3 extraout_var_23;
  undefined3 extraout_var_24;
  undefined3 extraout_var_25;
  undefined3 extraout_var_26;
  undefined3 extraout_var_27;
  undefined4 *puVar7;
  longlong lVar8;
  char *pcVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined4 local_180 [21];
  char local_12c [252];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  double local_20;
  undefined2 local_18 [2];
  int local_14;
  int local_10;
  int *local_c;
  char local_5;
  
  local_c = (int *)0x0;
  bVar3 = FUN_00437430(param_1,(int *)s_clonenotify_004d94ac);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    bVar3 = FUN_00437430(param_1,(int *)s_monitorbitdepth_004d93a8);
    if (CONCAT31(extraout_var_00,bVar3) == 0) {
      bVar3 = FUN_00437430(param_1,(int *)s_cursorelement_004d9484);
      if (CONCAT31(extraout_var_01,bVar3) != 0) {
        iVar5 = FUN_00455ee0(param_3,(int *)&local_c,(int *)0x0);
        if (iVar5 != 0) {
          *(undefined4 *)((int)this + 300) = 0;
          *(byte *)((int)DAT_004da390 + 200) = *(byte *)((int)DAT_004da390 + 200) & 0xfe;
          FUN_00410ca0(DAT_004da390,0x28);
          FUN_004021a0();
          DAT_004da3c6 = 0xffff;
          DAT_004da3c4 = 0xffff;
          *(undefined2 *)((int)this + 0x132) = 0xd8f1;
          *(undefined2 *)((int)this + 0x130) = 0xd8f1;
          return 0;
        }
        if ((local_c != (int *)0x0) && ((*(byte *)((int)local_c + 0x1e) & 4) != 0)) {
          if (*(int *)((int)this + 300) != 0) {
            FUN_004021a0();
          }
          *(int **)((int)this + 300) = local_c;
          *(byte *)((int)DAT_004da390 + 200) = *(byte *)((int)DAT_004da390 + 200) | 1;
          FUN_004021c0();
          DAT_004da3c6 = 0xffff;
          DAT_004da3c4 = 0xffff;
          *(undefined2 *)((int)this + 0x132) = 0xd8f1;
          *(undefined2 *)((int)this + 0x130) = 0xd8f1;
          return 0;
        }
        *(undefined4 *)((int)this + 300) = 0;
        *(byte *)((int)DAT_004da390 + 200) = *(byte *)((int)DAT_004da390 + 200) & 0xfe;
        FUN_00410ca0(DAT_004da390,0x28);
        FUN_004021a0();
        DAT_004da3c6 = 0xffff;
        DAT_004da3c4 = 0xffff;
        *(undefined2 *)((int)this + 0x132) = 0xd8f1;
        *(undefined2 *)((int)this + 0x130) = 0xd8f1;
        return 0;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_cursorhotspot_004d9470);
      if (CONCAT31(extraout_var_02,bVar3) == 0) {
        bVar3 = FUN_00437430(param_1,(int *)s_oprect_004d936c);
        if (CONCAT31(extraout_var_03,bVar3) == 0) {
          bVar3 = FUN_00437430(param_1,(int *)s_globaloffset_004d93f8);
          if ((CONCAT31(extraout_var_04,bVar3) == 0) &&
             (bVar3 = FUN_00437430(param_1,(int *)s_globalposition_004d940c),
             CONCAT31(extraout_var_05,bVar3) == 0)) {
            bVar3 = FUN_00437430(param_1,(int *)s_maxthreadlevel_004d93d0);
            if (CONCAT31(extraout_var_06,bVar3) == 0) {
              bVar3 = FUN_00437430(param_1,(int *)s_opint_004d9394);
              if (CONCAT31(extraout_var_07,bVar3) == 0) {
                bVar3 = FUN_00437430(param_1,(int *)s_oppoint_004d9380);
                if (CONCAT31(extraout_var_08,bVar3) == 0) {
                  bVar3 = FUN_00437430(param_1,(int *)s_postponeredraws_004d9358);
                  if (CONCAT31(extraout_var_09,bVar3) == 0) {
                    bVar3 = FUN_00437430(param_1,(int *)s_currentscene_004d9584);
                    if (CONCAT31(extraout_var_10,bVar3) == 0) {
                      bVar3 = FUN_00437430(param_1,(int *)s_sharedscene_004d9570);
                      if (CONCAT31(extraout_var_11,bVar3) == 0) {
                        bVar3 = FUN_00437430(param_1,(int *)s_autosharedscene_004d955c);
                        if (CONCAT31(extraout_var_12,bVar3) == 0) {
                          bVar3 = FUN_00437430(param_1,(int *)s_combineredraws_004d9498);
                          if (CONCAT31(extraout_var_13,bVar3) == 0) {
                            bVar3 = FUN_00437430(param_1,(int *)s_autoresetcursor_004d94e4);
                            if (CONCAT31(extraout_var_14,bVar3) == 0) {
                              bVar3 = FUN_00437430(param_1,(int *)s_autoscreenfade_004d94d0);
                              if (CONCAT31(extraout_var_15,bVar3) == 0) {
                                bVar3 = FUN_00437430(param_1,(int *)s_stopglobalsounds_004d92b8);
                                if (CONCAT31(extraout_var_16,bVar3) != 0) {
                                  FUN_004035b0((int)this);
                                  return 0;
                                }
                                bVar3 = FUN_00437430(param_1,(int *)s_clearreturnlist_004d9534);
                                if (CONCAT31(extraout_var_17,bVar3) != 0) {
                                  uVar1 = *(undefined1 *)((int)this + 0xaf);
                                  *(undefined1 *)((int)this + 0xaf) = 1;
                                  sVar2 = *(short *)(*(int *)((int)this + 0x32) + 0x26);
                                  local_30 = CONCAT13(uVar1,(undefined3)local_30);
                                  local_24 = FUN_00430190(*(int *)((int)this + 0x32));
                                  while (sVar2 = sVar2 + -1, -1 < sVar2) {
                                    piVar10 = (int *)(local_24 + sVar2 * 10);
                                    if (((int *)*piVar10 != (int *)0x0) &&
                                       ((char)piVar10[2] != '\0')) {
                                      (**(code **)(*(int *)*piVar10 + 0x234))();
                                      FUN_004142c0(local_180,0x7d2,0,0,0);
                                      FUN_0046b730((void *)*piVar10,(int)local_180);
                                    }
                                  }
                                  FUN_004301f0(*(int *)((int)this + 0x32));
                                  *(char *)((int)this + 0xaf) = local_30._3_1_;
                                  (**(code **)(**(int **)((int)this + 0x32) + 0xe4))();
                                  return 0;
                                }
                                bVar3 = FUN_00437430(param_1,(int *)s_gamemode_004d9420);
                                if (CONCAT31(extraout_var_18,bVar3) == 0) {
                                  bVar3 = FUN_00437430(param_1,(int *)s_refreshcursor_004d9344);
                                  if (CONCAT31(extraout_var_19,bVar3) != 0) {
                                    FUN_00408470((int)this);
                                    FUN_0043c730((short *)&local_30);
                                    DAT_004da3c6 = 0xd8f1;
                                    DAT_004da3c4 = 0xd8f1;
                                    FUN_00404190(this,local_30);
                                    return 0;
                                  }
                                  bVar3 = FUN_00437430(param_1,(int *)s_addtoworld_004d94f8);
                                  if (CONCAT31(extraout_var_20,bVar3) == 0) {
                                    bVar3 = FUN_00437430(param_1,(int *)s_removefromworld_004d9330);
                                    if (CONCAT31(extraout_var_21,bVar3) == 0) {
                                      bVar3 = FUN_00437430(param_1,(int *)
                                                  s_macsndbuffersize_004d9520);
                                      if (CONCAT31(extraout_var_22,bVar3) != 0) {
                                        return 0;
                                      }
                                      bVar3 = FUN_00437430(param_1,(int *)
                                                  s_winsndbuffersize_004d950c);
                                      if (CONCAT31(extraout_var_23,bVar3) == 0) {
                                        bVar3 = FUN_00437430(param_1,(int *)
                                                  s_drawareaoffset_004d945c);
                                        if (CONCAT31(extraout_var_24,bVar3) == 0) {
                                          bVar3 = FUN_00437430(param_1,(int *)
                                                  s_syncronizedraw_004d9290);
                                          if (CONCAT31(extraout_var_25,bVar3) == 0) {
                                            bVar3 = FUN_00437430(param_1,(int *)&DAT_004d92e0);
                                            if (CONCAT31(extraout_var_26,bVar3) == 0) {
                                              bVar3 = FUN_00437430(param_1,(int *)
                                                  s_updaterectlimit_004d926c);
                                              if (CONCAT31(extraout_var_27,bVar3) == 0) {
                                                iVar5 = FUN_004135a0(this,param_1,param_2,param_3);
                                                return iVar5;
                                              }
                                              iVar5 = FUN_00455c10(param_3,&local_14,(int *)0x0);
                                              if (iVar5 == 0) {
                                                if (0 < local_14) {
                                                  iVar5 = FUN_004084c0((int)this);
                                                  *(int *)(iVar5 + 0xcec) = local_14;
                                                  return 0;
                                                }
                                                return 0x40003;
                                              }
                                            }
                                            else {
                                              iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                                              if (iVar5 == 0) {
                                                if (local_5 != '\0') {
                                                  FUN_00408fd0((int)this);
                                                  return 0;
                                                }
                                                FUN_00408fe0((int)this);
                                                return 0;
                                              }
                                            }
                                          }
                                          else {
                                            iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                                            if (iVar5 == 0) {
                                              local_30._3_1_ = local_5;
                                              iVar5 = FUN_004084c0((int)this);
                                              *(byte *)(iVar5 + 0x1134) =
                                                   (local_30._3_1_ << 6 ^ *(byte *)(iVar5 + 0x1134))
                                                   & 0x40 ^ *(byte *)(iVar5 + 0x1134);
                                              return 0;
                                            }
                                          }
                                        }
                                        else {
                                          iVar5 = FUN_00455ff0(param_3,&local_10,(int *)0x0);
                                          if (iVar5 == 0) {
                                            FUN_00402e50(this,local_10,'\0',(undefined4 *)0x0);
                                            return 0;
                                          }
                                        }
                                      }
                                      else {
                                        iVar5 = FUN_004559b0(param_3,&local_20,(int *)0x0);
                                        if (iVar5 == 0) {
                                          lVar8 = __ftol();
                                          DAT_004d91e8 = (int)lVar8;
                                          return 0;
                                        }
                                      }
                                    }
                                    else {
                                      iVar5 = FUN_00455ee0(param_3,(int *)&local_c,(int *)0x0);
                                      if (iVar5 == 0) {
                                        if ((local_c != (int *)0x0) &&
                                           ((*(byte *)((int)local_c + 0x1e) & 1) != 0)) {
                                          FUN_00404e30(this,local_c,'\0');
                                          return 0;
                                        }
                                        return 0x10000;
                                      }
                                    }
                                  }
                                  else {
                                    iVar5 = FUN_00455ee0(param_3,(int *)&local_c,(int *)0x0);
                                    if (iVar5 == 0) {
                                      if ((local_c == (int *)0x0) ||
                                         ((*(byte *)((int)local_c + 0x1e) & 1) == 0)) {
                                        return 0x10000;
                                      }
                                      iVar5 = (**(code **)(*local_c + 0x1c8))();
                                      if ((iVar5 != 0) &&
                                         ((((*(int *)((int)this + 0x11c) == iVar5 ||
                                            (*(int *)((int)this + 0x120) == iVar5)) ||
                                           (*(int *)((int)this + 0x124) == iVar5)) ||
                                          (*(int *)((int)this + 0x118) == iVar5)))) {
                                        return 0x10000;
                                      }
                                      FUN_00404e30(this,local_c,'\x01');
                                      return 0;
                                    }
                                  }
                                }
                                else {
                                  iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                                  if (iVar5 == 0) {
                                    return 0;
                                  }
                                }
                              }
                              else {
                                iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                                if (iVar5 == 0) {
                                  *(char *)((int)this + 0xb1) = local_5;
                                  return 0;
                                }
                              }
                            }
                            else {
                              iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                              if (iVar5 == 0) {
                                *(char *)((int)this + 0xa2) = local_5;
                                return 0;
                              }
                            }
                          }
                          else {
                            iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                            if (iVar5 == 0) {
                              *(char *)((int)this + 0xaa) = local_5;
                              return 0;
                            }
                          }
                        }
                        else {
                          iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                          if (iVar5 == 0) {
                            *(char *)((int)this + 0xab) = local_5;
                            return 0;
                          }
                        }
                      }
                      else {
                        iVar5 = FUN_00455ee0(param_3,(int *)&local_c,(int *)0x0);
                        if (iVar5 == 0) {
                          if ((local_c == (int *)0x0) || ((*(byte *)((int)local_c + 0x1e) & 4) == 0)
                             ) {
                            return 0x10000;
                          }
                          if ((((short)local_c[0x18] == 0) &&
                              ((*(byte *)((int)local_c + 0x21) & 0x40) == 0)) &&
                             (*(short *)((int)local_c + 0x22) != 0x43)) {
                            iVar5 = (**(code **)(*local_c + 0x10))();
                            iVar6 = (**(code **)(*(int *)this + 0x10))();
                            if (iVar5 == iVar6) {
                              FUN_00403190(this,local_c);
                              return 0;
                            }
                            return 0x10000;
                          }
                          return 0x10000;
                        }
                      }
                    }
                    else {
                      puVar7 = (undefined4 *)0x0;
                      iVar5 = FUN_00455ee0(param_3,(int *)&local_c,(int *)0x0);
                      if (iVar5 == 0) {
                        if ((local_c == (int *)0x0) || ((*(byte *)((int)local_c + 0x1e) & 4) == 0))
                        {
                          return 0x10000;
                        }
                        if ((((short)local_c[0x18] == 0) &&
                            ((*(byte *)((int)local_c + 0x21) & 0x40) == 0)) &&
                           (*(short *)((int)local_c + 0x22) != 0x43)) {
                          local_30 = (**(code **)(*local_c + 0x10))();
                          iVar5 = (**(code **)(*(int *)this + 0x10))();
                          if (local_30 == iVar5) {
                            iVar5 = *(int *)((int)this + 0x14c);
                            local_30 = 0;
                            if (iVar5 != 0) {
                              if (iVar5 == 2) {
                                local_30 = 2;
                              }
                              if (iVar5 == 7) {
                                local_30 = 3;
                              }
                              if (3 < iVar5) {
                                local_30 = local_30 | 4;
                              }
                              if (local_30 != 0) {
                                puVar7 = &local_30;
                              }
                            }
                            FUN_004058d0(this,(int)local_c,puVar7);
                            return 0;
                          }
                          return 0x10000;
                        }
                        return 0x10000;
                      }
                    }
                  }
                  else {
                    iVar5 = FUN_00455730(param_3,&local_5,(int *)0x0);
                    if (iVar5 == 0) {
                      *(char *)((int)this + 0xa3) = local_5;
                      return 0;
                    }
                  }
                }
                else {
                  iVar5 = FUN_00455ff0(param_3,&local_10,(int *)0x0);
                  if (iVar5 == 0) {
                    *(int *)((int)this + 0x150) = local_10;
                    return 0;
                  }
                }
              }
              else {
                iVar5 = FUN_004559b0(param_3,&local_20,(int *)0x0);
                if (iVar5 == 0) {
                  lVar8 = __ftol();
                  *(int *)((int)this + 0x14c) = (int)lVar8;
                  return 0;
                }
              }
            }
            else {
              iVar5 = FUN_00455c10(param_3,(int *)local_18,(int *)0x0);
              if (iVar5 == 0) {
                *(undefined2 *)((int)this + 0x26) = local_18[0];
                return 0;
              }
            }
          }
          else {
            iVar5 = FUN_00455ff0(param_3,&local_10,(int *)0x0);
            if (iVar5 == 0) {
              FUN_004031d0(this,local_10);
            }
          }
        }
        else {
          iVar5 = FUN_00456410(param_3,&local_2c,(int *)0x0);
          if (iVar5 == 0) {
            *(undefined4 *)((int)this + 0x154) = local_2c;
            *(undefined4 *)((int)this + 0x158) = local_28;
            return 0;
          }
        }
      }
      else {
        iVar5 = FUN_00455ff0(param_3,&local_10,(int *)0x0);
        if (iVar5 == 0) {
          *(int *)((int)this + 0x128) = local_10;
          return 0;
        }
      }
    }
    else {
      iVar5 = FUN_00455c10(param_3,(int *)local_18,(int *)0x0);
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  else {
    iVar5 = FUN_00456560(param_3,local_12c,0xff,(int *)0x0);
    if (iVar5 != 0) {
      return 0x60002;
    }
    puVar7 = (undefined4 *)((int)this + 0x1d2);
    piVar10 = (int *)((int)this + 0x1ce);
    puVar11 = (undefined1 *)0x0;
    pcVar9 = local_12c;
    *puVar7 = 0;
    *piVar10 = 0;
    this_00 = (void *)FUN_00466a60(*(int *)((int)this + 4));
    cVar4 = FUN_00479ad0(this_00,pcVar9,piVar10,puVar7,puVar11);
    iVar5 = 0;
    if (cVar4 == '\0') {
      return 0x10000;
    }
  }
  return iVar5;
}


