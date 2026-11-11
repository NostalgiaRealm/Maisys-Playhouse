
/* ==== FUN_00464a90 @ 00464a90 ==== 
 * signature: int __thiscall FUN_00464a90(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 00464a90-00465559
 */

int __thiscall FUN_00464a90(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined4 uVar9;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined4 unaff_EBP;
  char *pcVar10;
  char local_154 [256];
  undefined4 local_54 [4];
  short local_42 [2];
  short local_3e;
  undefined2 local_3c;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  undefined4 local_28;
  undefined4 local_24;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_7;
  byte local_6;
  undefined4 local_5;
  undefined1 uStack_1;
  
  local_5._1_3_ = (undefined3)unaff_EBP;
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  bVar2 = FUN_00437430(param_1,(int *)s_position_004dc35c);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    bVar2 = FUN_00437430(param_1,(int *)&DAT_004d98f4);
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      bVar2 = FUN_00437430(param_1,(int *)s_centerposition_004dc348);
      if (CONCAT31(extraout_var_01,bVar2) == 0) {
        bVar2 = FUN_00437430(param_1,(int *)s_cropposition_004dc334);
        if (CONCAT31(extraout_var_02,bVar2) == 0) {
          bVar2 = FUN_00437430(param_1,(int *)s_cropsize_004dc320);
          if (CONCAT31(extraout_var_03,bVar2) == 0) {
            bVar2 = FUN_00437430(param_1,(int *)s_scaledposition_004dc30c);
            if (CONCAT31(extraout_var_04,bVar2) == 0) {
              bVar2 = FUN_00437430(param_1,(int *)s_scaledsize_004dc2f8);
              if (CONCAT31(extraout_var_05,bVar2) == 0) {
                bVar2 = FUN_00437430(param_1,(int *)s_globaloffset_004dc2e4);
                if ((CONCAT31(extraout_var_06,bVar2) == 0) &&
                   (bVar2 = FUN_00437430(param_1,(int *)s_globalposition_004d940c),
                   CONCAT31(extraout_var_07,bVar2) == 0)) {
                  bVar2 = FUN_00437430(param_1,(int *)s_asset_004da304);
                  if (CONCAT31(extraout_var_08,bVar2) != 0) {
                    if ((((*param_3 != 0x69) ||
                         (piVar8 = *(int **)(param_3 + 1), piVar8 == (int *)0x0)) ||
                        ((*(byte *)(piVar8 + 8) & 1) == 0)) &&
                       ((iVar5 = FUN_00456560(param_3,local_154,0x100,(int *)0x0),
                        piVar8 = (int *)0x0, iVar5 == 0 &&
                        (iVar5 = FUN_0046ca60((int)this), iVar5 != 0)))) {
                      iVar5 = **(int **)(*(int *)((int)this + 4) + 0x48);
                      iVar6 = FUN_0046ca60((int)this);
                      sVar4 = (**(code **)(iVar5 + 0x120))(*(undefined4 *)(iVar6 + 0x96),0);
                      pcVar10 = local_154;
                      pvVar7 = (void *)FUN_00466a70(*(int *)((int)this + 4));
                      piVar8 = FUN_0044de20(pvVar7,pcVar10,sVar4);
                    }
                    pvVar7 = FUN_0046da90(this,'\x01','\x01');
                    if (((pvVar7 != (void *)0x0) && (piVar8 != (int *)0x0)) &&
                       (*(short *)(*(int *)((int)this + 0x52) + 0x22) ==
                        *(short *)((int)piVar8 + 0x22))) {
                      local_7 = '\x01' - ((*(uint *)((int)this + 0x26) & 0x40000000) == 0);
                      local_6 = (*(byte *)((int)this + 0x9c) & 2) >> 1;
                      iVar5 = *(int *)this;
                      cVar3 = (**(code **)(iVar5 + 0x250))(0);
                      if ((cVar3 == '\0') && ((*(byte *)((int)this + 0x29) & 1) == 0)) {
                        local_3c = local_3c & 0xff;
                      }
                      else {
                        local_3c = CONCAT11(1,(undefined1)local_3c);
                      }
                      (**(code **)(iVar5 + 0x2a4))(piVar8);
                      (**(code **)(*piVar8 + 0x1dc))(&local_38);
                      (**(code **)(iVar5 + 0x398))(&local_30,0);
                      local_2a = (local_2e - local_36) + local_32;
                      local_2c = (local_30 - local_38) + local_34;
                      (**(code **)(iVar5 + 0x39c))(&local_30);
                      (**(code **)(iVar5 + 0x3a4))(&local_30);
                      (**(code **)(iVar5 + 0x3b4))(1);
                      if (local_3c._1_1_ != '\0') {
                        (**(code **)(iVar5 + 0x24c))();
                      }
                      if (local_7 != '\0') {
                        (**(code **)(iVar5 + 0x140))(1);
                      }
                      if (local_6 == 0) {
                        (**(code **)(iVar5 + 0x358))(0,1);
                      }
                      return 0;
                    }
                    return 0x10000;
                  }
                  bVar2 = FUN_00437430(param_1,(int *)s_cache_004dc2d0);
                  if (CONCAT31(extraout_var_09,bVar2) == 0) {
                    bVar2 = FUN_00437430(param_1,(int *)s_redraw_004dc244);
                    if (CONCAT31(extraout_var_10,bVar2) == 0) {
                      bVar2 = FUN_00437430(param_1,(int *)s_cachechildren_004dc370);
                      if (CONCAT31(extraout_var_11,bVar2) == 0) {
                        bVar2 = FUN_00437430(param_1,(int *)s_direct_004dc2bc);
                        if (CONCAT31(extraout_var_12,bVar2) == 0) {
                          bVar2 = FUN_00437430(param_1,(int *)s_visible_004dbebc);
                          if (CONCAT31(extraout_var_13,bVar2) == 0) {
                            bVar2 = FUN_00437430(param_1,(int *)s_height_004dc280);
                            if (CONCAT31(extraout_var_14,bVar2) == 0) {
                              bVar2 = FUN_00437430(param_1,(int *)s_width_004dc294);
                              if (CONCAT31(extraout_var_15,bVar2) == 0) {
                                bVar2 = FUN_00437430(param_1,(int *)s_layer_004dc2a8);
                                if (CONCAT31(extraout_var_16,bVar2) == 0) {
                                  bVar2 = FUN_00437430(param_1,(int *)&DAT_004da28c);
                                  if (CONCAT31(extraout_var_17,bVar2) == 0) {
                                    bVar2 = FUN_00437430(param_1,(int *)s_scrolloffset_004dc26c);
                                    if (CONCAT31(extraout_var_18,bVar2) == 0) {
                                      iVar5 = FUN_0046b470(this,param_1,param_2,param_3);
                                      return iVar5;
                                    }
                                    iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
                                    if (iVar5 == 0) {
                                      iVar5 = *(int *)this;
                                      (**(code **)(iVar5 + 0x398))(&local_20,1);
                                      (**(code **)(iVar5 + 0x3a0))(&local_14,1);
                                      local_c = CONCAT22(local_c._2_2_ + (local_14._2_2_ - local_1e)
                                                         ,(short)local_c +
                                                          ((short)local_14 - local_20));
                                      (**(code **)(iVar5 + 0x394))(&local_c);
                                      return 0;
                                    }
                                  }
                                  else {
                                    iVar5 = FUN_00455c10(param_3,&local_18,(int *)0x0);
                                    if (iVar5 == 0) {
                                      (**(code **)(*(int *)this + 0x34c))(local_18);
                                      return 0;
                                    }
                                  }
                                }
                                else {
                                  iVar5 = FUN_00455c10(param_3,&local_18,(int *)0x0);
                                  if (iVar5 == 0) {
                                    if (local_18 < 1) {
                                      return 0x40003;
                                    }
                                    if (((*(short *)((int)this + 0x60) == 0) &&
                                        ((*(byte *)((int)this + 0x21) & 0x40) == 0)) &&
                                       (*(short *)((int)this + 0x22) != 0x43)) {
                                      return 0x10000;
                                    }
                                    piVar8 = (int *)FUN_0046ca10((int)this);
                                    (**(code **)(*(int *)this + 0x424))(0);
                                    piVar8 = FUN_0043cbd0(piVar8,local_18);
                                    if (piVar8 != (int *)0x0) {
                                      if ((*(byte *)((int)piVar8 + 0x1e) & 4) != 0) {
                                        (**(code **)(*piVar8 + 0x424))(0);
                                      }
                                      uVar9 = (**(code **)(*(int *)this + 0x27c))();
                                      (**(code **)(*piVar8 + 0x278))(uVar9);
                                    }
                                    (**(code **)(*(int *)this + 0x278))(local_18);
                                    return 0;
                                  }
                                }
                              }
                              else {
                                iVar5 = FUN_00455c10(param_3,&local_18,(int *)0x0);
                                if (iVar5 == 0) {
                                  iVar5 = *(int *)this;
                                  (**(code **)(iVar5 + 0x3a0))(&local_14,0);
                                  local_28 = local_14;
                                  local_24 = local_10;
                                  (**(code **)(iVar5 + 0x398))(&local_20,0);
                                  local_24 = CONCAT22(local_24._2_2_,
                                                      (short)local_28 + (short)local_18);
                                  FUN_0043bff0(&local_20,(short *)&local_14,(short *)&local_28);
                                  (**(code **)(iVar5 + 0x3a4))(&local_28);
                                  (**(code **)(iVar5 + 0x39c))(&local_20);
                                  return 0;
                                }
                              }
                            }
                            else {
                              iVar5 = FUN_00455c10(param_3,&local_18,(int *)0x0);
                              if (iVar5 == 0) {
                                iVar5 = *(int *)this;
                                (**(code **)(iVar5 + 0x3a0))(&local_14,0);
                                local_28 = local_14;
                                local_24 = local_10;
                                (**(code **)(iVar5 + 0x398))(&local_20,0);
                                local_24 = CONCAT22(local_28._2_2_ + (short)local_18,
                                                    (undefined2)local_24);
                                FUN_0043bff0(&local_20,(short *)&local_14,(short *)&local_28);
                                (**(code **)(iVar5 + 0x3a4))(&local_28);
                                (**(code **)(iVar5 + 0x39c))(&local_20);
                                return 0;
                              }
                            }
                          }
                          else {
                            iVar5 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                            if (iVar5 == 0) {
                              bVar1 = *(byte *)((int)this + 0x9c);
                              (**(code **)(*(int *)this + 0x358))(local_5,1);
                              if ((((bVar1 & 2) >> 1 != (byte)local_5) &&
                                  (*(int *)((int)this + 0x3a) != 0)) &&
                                 ((*(char *)((int)this + 0x146) != '\0' &&
                                  (uVar9 = FUN_00460d70(this), (char)uVar9 == '\0')))) {
                                (**(code **)(*(int *)this + 0x38c))(local_42,1);
                                FUN_004087c0(*(void **)((int)this + 0x3a),local_42,'\x01');
                                return 0;
                              }
                            }
                          }
                        }
                        else {
                          iVar5 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                          if (iVar5 == 0) {
                            iVar6 = *(int *)this;
                            cVar3 = (**(code **)(iVar6 + 0x130))();
                            if (cVar3 == (byte)local_5) {
                              FUN_00406bb0(*(void **)((int)this + 0x3a),1,this,
                                           (undefined4 *)
                                           (((*(byte *)((int)this + 0x9c) & 2) == 0) - 1 &
                                           (uint)local_54));
                              (**(code **)(iVar6 + 0x424))(0);
                              (**(code **)(iVar6 + 300))((byte)local_5 == '\0');
                              if ((*(byte *)((int)this + 0x9c) & 2) != 0) {
                                FUN_00406bb0(*(void **)((int)this + 0x3a),0,this,local_54);
                                (**(code **)(iVar6 + 0x424))(0);
                                return 0;
                              }
                            }
                          }
                        }
                      }
                      else {
                        iVar5 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                        if (iVar5 == 0) {
                          FUN_00460a70(this,(char)local_5);
                          if ((byte)local_5 != '\0') {
                            iVar6 = *(int *)this;
                            cVar3 = (**(code **)(iVar6 + 0x138))();
                            if (cVar3 == '\0') {
                              (**(code **)(iVar6 + 0x134))(local_5);
                              return 0;
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar5 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                      if (iVar5 == 0) {
                        *(byte *)((int)this + 0x146) = (byte)local_5;
                        return 0;
                      }
                    }
                  }
                  else {
                    iVar5 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                    if (iVar5 == 0) {
                      (**(code **)(*(int *)this + 0x134))(local_5);
                      return 0;
                    }
                  }
                }
                else {
                  iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
                  if (iVar5 == 0) {
                    iVar6 = *(int *)this;
                    (**(code **)(iVar6 + 0x37c))(&local_3e);
                    local_c = CONCAT22(local_c._2_2_ - local_3c,(short)local_c - local_3e);
                    (**(code **)(iVar6 + 0x3f8))(local_c);
                  }
                }
              }
              else {
                iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
                if (iVar5 == 0) {
                  iVar5 = *(int *)this;
                  (**(code **)(iVar5 + 0x398))(&local_20,0);
                  local_1c = local_20 + (short)local_c;
                  local_1a = local_1e + local_c._2_2_;
                  (**(code **)(iVar5 + 0x39c))(&local_20);
                  return 0;
                }
              }
            }
            else {
              iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
              if (iVar5 == 0) {
                iVar5 = *(int *)this;
                (**(code **)(iVar5 + 0x398))(&local_20,0);
                local_18 = (int)(short)local_c - (int)(short)local_14;
                local_1c = local_1c + (short)local_18;
                local_20 = local_20 + (short)local_18;
                local_c._2_2_ = local_c._2_2_ - local_1e;
                local_1e = local_1e + local_c._2_2_;
                local_1a = local_1a + local_c._2_2_;
                (**(code **)(iVar5 + 0x39c))(&local_20);
                return 0;
              }
            }
          }
          else {
            iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
            if (iVar5 == 0) {
              iVar5 = *(int *)this;
              (**(code **)(iVar5 + 0x3a0))(&local_14,0);
              local_10 = CONCAT22(local_14._2_2_ + local_c._2_2_,(short)local_14 + (short)local_c);
              (**(code **)(iVar5 + 0x3a4))(&local_14);
              return 0;
            }
          }
        }
        else {
          iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
          if (iVar5 == 0) {
            iVar5 = *(int *)this;
            (**(code **)(iVar5 + 0x3a0))(&local_14,0);
            local_18 = (int)(short)local_c - (int)(short)local_14;
            local_c._2_2_ = local_c._2_2_ - local_14._2_2_;
            local_14 = CONCAT22(local_14._2_2_ + local_c._2_2_,(short)local_14 + (short)local_18);
            local_10 = CONCAT22(local_10._2_2_ + local_c._2_2_,(short)local_10 + (short)local_18);
            (**(code **)(iVar5 + 0x3a4))(&local_14);
            return 0;
          }
        }
      }
      else {
        iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
        if (iVar5 == 0) {
          iVar5 = *(int *)this;
          (**(code **)(iVar5 + 0x3a0))(&local_14,0);
          local_c = CONCAT22(local_c._2_2_ +
                             (short)(((int)local_14._2_2_ - (int)local_10._2_2_) / 2),
                             (short)local_c +
                             (short)(((int)(short)local_14 - (int)(short)local_10) / 2));
          (**(code **)(iVar5 + 0x3f8))(local_c);
          return 0;
        }
      }
    }
    else {
      iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
      if (iVar5 == 0) {
        iVar5 = *(int *)this;
        (**(code **)(iVar5 + 0x3a0))(&local_14,0);
        local_28 = local_14;
        uVar9 = local_28;
        local_28._2_2_ = (short)((uint)local_14 >> 0x10);
        local_24 = CONCAT22(local_28._2_2_ + local_c._2_2_,(short)local_14 + (short)local_c);
        local_28 = uVar9;
        (**(code **)(iVar5 + 0x398))(&local_20,0);
        FUN_0043bff0(&local_20,(short *)&local_14,(short *)&local_28);
        (**(code **)(iVar5 + 0x3a4))(&local_28);
        (**(code **)(iVar5 + 0x39c))(&local_20);
        return 0;
      }
    }
  }
  else {
    iVar5 = FUN_00455ff0(param_3,&local_c,(int *)0x0);
    if (iVar5 == 0) {
      iVar5 = *(int *)this;
      (**(code **)(iVar5 + 0x3a0))(&local_14,0);
      local_c = CONCAT22(local_c._2_2_ - local_14._2_2_,(short)local_c - (short)local_14);
      (**(code **)(iVar5 + 0x3f4))(local_c);
      return 0;
    }
  }
  return iVar5;
}


