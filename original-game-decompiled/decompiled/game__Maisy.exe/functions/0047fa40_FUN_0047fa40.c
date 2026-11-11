
/* ==== FUN_0047fa40 @ 0047fa40 ==== 
 * signature: uint __thiscall FUN_0047fa40(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0047fa40-00480d95
 */

uint __thiscall FUN_0047fa40(void *this,int *param_1,short *param_2,short *param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  undefined3 extraout_var;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 uVar10;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  byte *pbVar11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  uint uVar12;
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  undefined3 extraout_var_22;
  undefined3 extraout_var_23;
  undefined3 extraout_var_24;
  undefined3 extraout_var_25;
  undefined3 extraout_var_26;
  undefined3 extraout_var_27;
  undefined3 extraout_var_28;
  undefined3 extraout_var_29;
  undefined3 extraout_var_30;
  undefined3 extraout_var_31;
  undefined3 extraout_var_32;
  undefined3 extraout_var_33;
  undefined3 extraout_var_34;
  undefined3 extraout_var_35;
  undefined3 extraout_var_36;
  byte *pbVar13;
  char *pcVar14;
  uint uVar15;
  int unaff_EBP;
  longlong lVar16;
  char local_248 [256];
  byte local_148 [256];
  int local_48;
  char *local_44 [3];
  int local_38;
  undefined4 local_34;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_5;
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  uVar15 = 0;
  local_5 = unaff_EBP << 8;
  local_20 = 0;
  uStack_1c = 0;
  local_10 = 0;
  bVar3 = FUN_00437430(param_1,(int *)s_asset_004da304);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    bVar3 = FUN_00437430(param_1,(int *)s_visible_004dbebc);
    if (CONCAT31(extraout_var_00,bVar3) == 0) {
      bVar3 = FUN_00437430(param_1,(int *)s_volume_004da2b4);
      if (CONCAT31(extraout_var_01,bVar3) == 0) {
        bVar3 = FUN_00437430(param_1,(int *)s_timevalue_004da2a0);
        if (CONCAT31(extraout_var_02,bVar3) == 0) {
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004da28c);
          if (CONCAT31(extraout_var_03,bVar3) == 0) {
            bVar3 = FUN_00437430(param_1,(int *)s_timescale_004da278);
            if (CONCAT31(extraout_var_04,bVar3) == 0) {
              bVar3 = FUN_00437430(param_1,(int *)s_range_004d9f50);
              if (CONCAT31(extraout_var_05,bVar3) != 0) {
                local_c = 0;
                local_14 = 0;
                if ((*param_3 == 100) && (*(int *)(param_3 + 3) == 5)) {
                  pcVar2 = *(code **)(*(int *)this + 0x10);
                  iVar6 = (*pcVar2)();
                  piVar8 = (int *)0x0;
                  if (iVar6 != 0) {
                    iVar6 = (*pcVar2)();
                    piVar8 = (int *)FUN_00466a90(iVar6);
                  }
                  if (piVar8 == (int *)0x0) {
                    piVar8 = (int *)0x0;
                  }
                  else {
                    piVar8 = (int *)(**(code **)(*piVar8 + 0x108))();
                  }
                  if ((piVar8 != (int *)0x0) &&
                     (cVar4 = (**(code **)(*piVar8 + 0x120))
                                        (0,*(undefined4 *)(param_3 + 1),local_44), cVar4 != '\0')) {
                    cVar4 = FUN_00441780(*(void **)((int)this + 0x5a),local_44[0]);
                    return -(uint)(cVar4 == '\0') & 0x10000;
                  }
                }
                else {
                  iVar6 = FUN_004562d0(param_3,&local_c,&local_14,(int *)0x0);
                  if (iVar6 == 0) {
                    uVar15 = local_14 - local_c;
                    if ((int)uVar15 < 1) {
                      uVar15 = 0;
                    }
                    FUN_00441690(*(void **)((int)this + 0x5a),local_c,uVar15);
                    return 0;
                  }
                  iVar6 = FUN_00456560(param_3,(char *)local_148,0x100,(int *)0x0);
                  if (iVar6 == 0) {
                    FUN_00441780(*(void **)((int)this + 0x5a),(char *)local_148);
                  }
                }
                return 0;
              }
              bVar3 = FUN_00437430(param_1,(int *)&DAT_004da268);
              if (CONCAT31(extraout_var_06,bVar3) == 0) {
                bVar3 = FUN_00437430(param_1,(int *)s_loopbackforth_004da2f0);
                if (CONCAT31(extraout_var_07,bVar3) == 0) {
                  bVar3 = FUN_00437430(param_1,(int *)s_playeveryframe_004da2dc);
                  if (CONCAT31(extraout_var_08,bVar3) == 0) {
                    bVar3 = FUN_00437430(param_1,(int *)s_trackdisable_004da1c8);
                    if (CONCAT31(extraout_var_09,bVar3) == 0) {
                      bVar3 = FUN_00437430(param_1,(int *)s_showcontroller_004da2c8);
                      if (CONCAT31(extraout_var_10,bVar3) == 0) {
                        bVar3 = FUN_00437430(param_1,(int *)s_buffersize_004da218);
                        if (CONCAT31(extraout_var_11,bVar3) != 0) {
                          iVar6 = FUN_00456560(param_3,(char *)local_148,0x100,(int *)0x0);
                          if (iVar6 != 0) {
                            return 0x10000;
                          }
                          pbVar11 = local_148;
                          pbVar13 = &DAT_004dcc94;
                          do {
                            bVar1 = *pbVar11;
                            bVar3 = bVar1 < *pbVar13;
                            if (bVar1 != *pbVar13) {
LAB_004801a2:
                              iVar6 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                              goto LAB_004801a7;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar11[1];
                            bVar3 = bVar1 < pbVar13[1];
                            if (bVar1 != pbVar13[1]) goto LAB_004801a2;
                            pbVar11 = pbVar11 + 2;
                            pbVar13 = pbVar13 + 2;
                          } while (bVar1 != 0);
                          iVar6 = 0;
LAB_004801a7:
                          if (iVar6 == 0) {
                            FUN_004413e0(*(void **)((int)this + 0x5a),1,'\x01');
                            FUN_00441420(*(void **)((int)this + 0x5a),0,'\x01');
                            return 0;
                          }
                          pbVar11 = local_148;
                          pcVar14 = s_element_004dc494;
                          do {
                            bVar1 = *pbVar11;
                            bVar3 = bVar1 < (byte)*pcVar14;
                            if (bVar1 != *pcVar14) {
LAB_004801f9:
                              iVar6 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                              goto LAB_004801fe;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar11[1];
                            bVar3 = bVar1 < (byte)pcVar14[1];
                            if (bVar1 != pcVar14[1]) goto LAB_004801f9;
                            pbVar11 = pbVar11 + 2;
                            pcVar14 = pcVar14 + 2;
                          } while (bVar1 != 0);
                          iVar6 = 0;
LAB_004801fe:
                          if (iVar6 == 0) {
                            FUN_004413e0(*(void **)((int)this + 0x5a),0,'\x01');
                            FUN_00441420(*(void **)((int)this + 0x5a),0,'\x01');
                            return 0;
                          }
                          pbVar11 = local_148;
                          pcVar14 = s_media_004dcc8c;
                          do {
                            bVar1 = *pbVar11;
                            bVar3 = bVar1 < (byte)*pcVar14;
                            if (bVar1 != *pcVar14) {
LAB_00480250:
                              iVar6 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                              goto LAB_00480255;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar11[1];
                            bVar3 = bVar1 < (byte)pcVar14[1];
                            if (bVar1 != pcVar14[1]) goto LAB_00480250;
                            pbVar11 = pbVar11 + 2;
                            pcVar14 = pcVar14 + 2;
                          } while (bVar1 != 0);
                          iVar6 = 0;
LAB_00480255:
                          if (iVar6 == 0) {
                            FUN_004413e0(*(void **)((int)this + 0x5a),0,'\x01');
                            FUN_00441420(*(void **)((int)this + 0x5a),1,'\x01');
                            return 0;
                          }
                          pbVar11 = local_148;
                          pcVar14 = s_smallest_004dcc80;
                          do {
                            bVar1 = *pbVar11;
                            bVar3 = bVar1 < (byte)*pcVar14;
                            if (bVar1 != *pcVar14) {
LAB_004802a7:
                              iVar6 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                              goto LAB_004802ac;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar11[1];
                            bVar3 = bVar1 < (byte)pcVar14[1];
                            if (bVar1 != pcVar14[1]) goto LAB_004802a7;
                            pbVar11 = pbVar11 + 2;
                            pcVar14 = pcVar14 + 2;
                          } while (bVar1 != 0);
                          iVar6 = 0;
LAB_004802ac:
                          if (iVar6 != 0) {
                            return 0x10000;
                          }
                          FUN_004413e0(*(void **)((int)this + 0x5a),0,'\x01');
                          FUN_00441420(*(void **)((int)this + 0x5a),2,'\x01');
                          return 0;
                        }
                        bVar3 = FUN_00437430(param_1,(int *)s_movieclick_004da204);
                        if (CONCAT31(extraout_var_12,bVar3) == 0) {
                          bVar3 = FUN_00437430(param_1,(int *)s_controllerclick_004da1f0);
                          if (CONCAT31(extraout_var_13,bVar3) == 0) {
                            bVar3 = FUN_00437430(param_1,(int *)s_pollmovie_004da1b4);
                            if (CONCAT31(extraout_var_14,bVar3) == 0) {
                              bVar3 = FUN_00437430(param_1,(int *)s_trackenable_004da1dc);
                              if (CONCAT31(extraout_var_15,bVar3) == 0) {
                                bVar3 = FUN_00437430(param_1,(int *)s_starttransition_004dcb70);
                                if (CONCAT31(extraout_var_16,bVar3) != 0) {
                                  iVar6 = FUN_00455730(param_3,(char *)((int)&local_c + 3),
                                                       (int *)0x0);
                                  if ((iVar6 == 0) && (local_c._3_1_ == '\x01')) {
                                    local_38 = (int)*(short *)((int)this + 0x160);
                                    local_14 = *(int *)((int)this + 0x170);
                                    if (local_14 < 6) {
                                      local_14 = 5;
                                    }
                                    lVar16 = FUN_00442b50((double)local_14 * 0.01 * 10.0);
                                    local_34 = (undefined4)lVar16;
                                    FUN_00440140(*(int *)((int)this + 0x5a));
                                    return 0;
                                  }
                                  return 0x10000;
                                }
                                bVar3 = FUN_00437430(param_1,(int *)s_updatemode_004dcbac);
                                if (CONCAT31(extraout_var_17,bVar3) != 0) {
                                  iVar6 = FUN_00456560(param_3,(char *)local_148,0x100,(int *)0x0);
                                  if (iVar6 != 0) {
                                    return 0x10000;
                                  }
                                  uVar15 = FUN_0043d430((char *)local_148,(char *)&DAT_004dbcbc);
                                  if (uVar15 == 0) {
                                    *(undefined2 *)((int)this + 0x160) = 0xffff;
                                    return 0;
                                  }
                                  uVar15 = FUN_0043d430((char *)local_148,s_normal_004dcc78);
                                  if (uVar15 == 0) {
                                    *(undefined2 *)((int)this + 0x160) = 0;
                                    return 0;
                                  }
                                  uVar15 = FUN_0043d430((char *)local_148,s_swing_004dcc70);
                                  if (uVar15 != 0) {
                                    return 0x10000;
                                  }
                                  *(undefined2 *)((int)this + 0x160) = 1;
                                  return 0;
                                }
                                bVar3 = FUN_00437430(param_1,(int *)s_transitionspeed_004dcb84);
                                if (CONCAT31(extraout_var_18,bVar3) != 0) {
                                  iVar6 = FUN_00455c10(param_3,&local_c,(int *)0x0);
                                  if (((iVar6 == 0) && (0 < (int)local_c)) && ((int)local_c < 0x65))
                                  {
                                    *(uint *)((int)this + 0x170) = local_c;
                                  }
                                  return 0x10000;
                                }
                                bVar3 = FUN_00437430(param_1,(int *)s_warpmode_004dcb98);
                                if (CONCAT31(extraout_var_19,bVar3) == 0) {
                                  bVar3 = FUN_00437430(param_1,(int *)s_staticsmoothing_004dcb5c);
                                  if ((CONCAT31(extraout_var_20,bVar3) == 0) &&
                                     (bVar3 = FUN_00437430(param_1,(int *)s_motionsmoothing_004dcb48
                                                          ), CONCAT31(extraout_var_21,bVar3) == 0))
                                  {
                                    bVar3 = FUN_00437430(param_1,(int *)s_showcursor_004dcc4c);
                                    if (CONCAT31(extraout_var_22,bVar3) == 0) {
                                      bVar3 = FUN_00437430(param_1,(int *)&DAT_004dca18);
                                      if (CONCAT31(extraout_var_23,bVar3) == 0) {
                                        bVar3 = FUN_00437430(param_1,(int *)&DAT_004dcc24);
                                        if (CONCAT31(extraout_var_24,bVar3) == 0) {
                                          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dcc10);
                                          if (CONCAT31(extraout_var_25,bVar3) == 0) {
                                            bVar3 = FUN_00437430(param_1,(int *)&DAT_004dcbfc);
                                            if (CONCAT31(extraout_var_26,bVar3) == 0) {
                                              bVar3 = FUN_00437430(param_1,(int *)s_balance_004da254
                                                                  );
                                              if (((((CONCAT31(extraout_var_27,bVar3) == 0) &&
                                                    (bVar3 = FUN_00437430(param_1,(int *)
                                                  s_trackhit_004da164),
                                                  CONCAT31(extraout_var_28,bVar3) == 0)) &&
                                                  ((bVar3 = FUN_00437430(param_1,(int *)
                                                  s_tracklayer_004da150),
                                                  CONCAT31(extraout_var_29,bVar3) == 0 &&
                                                  (((bVar3 = FUN_00437430(param_1,(int *)
                                                  s_trackname_004da13c),
                                                  CONCAT31(extraout_var_30,bVar3) == 0 &&
                                                  (bVar3 = FUN_00437430(param_1,(int *)
                                                  s_trackposition_004da128),
                                                  CONCAT31(extraout_var_31,bVar3) == 0)) &&
                                                  (bVar3 = FUN_00437430(param_1,(int *)
                                                  s_tracksize_004da114),
                                                  CONCAT31(extraout_var_32,bVar3) == 0)))))) &&
                                                  ((bVar3 = FUN_00437430(param_1,(int *)
                                                  s_trackduration_004da100),
                                                  CONCAT31(extraout_var_33,bVar3) == 0 &&
                                                  (bVar3 = FUN_00437430(param_1,(int *)
                                                  s_trackoffset_004da0ec),
                                                  CONCAT31(extraout_var_34,bVar3) == 0)))) &&
                                                 ((bVar3 = FUN_00437430(param_1,(int *)
                                                  s_trackvolume_004da0d8),
                                                  CONCAT31(extraout_var_35,bVar3) == 0 &&
                                                  (bVar3 = FUN_00437430(param_1,(int *)
                                                  s_trackbalance_004da0c4),
                                                  CONCAT31(extraout_var_36,bVar3) == 0)))) {
                                                uVar15 = FUN_0044f980(this,param_1,param_2,param_3);
                                                return uVar15;
                                              }
                                              return 0;
                                            }
                                            uVar15 = FUN_00455c10(param_3,&local_10,(int *)0x0);
                                            if (uVar15 == 0) {
                                              local_18 = 0;
                                              local_c = *(int *)((int)this + 0x170);
                                              if ((int)local_c < 6) {
                                                local_c = 5;
                                              }
                                              lVar16 = FUN_00442b50((double)(int)local_c * 0.01 *
                                                                    10.0);
                                              local_14 = (int)lVar16;
                                              FUN_00440140(*(int *)((int)this + 0x5a));
                                              if (*(short *)((int)this + 0x160) != -1) {
                                                local_18 = (int)*(short *)((int)this + 0x160);
                                                FUN_00440140(*(int *)((int)this + 0x5a));
                                                return 0;
                                              }
                                            }
                                          }
                                          else {
                                            uVar15 = FUN_004559b0(param_3,(double *)&local_20,
                                                                  (int *)0x0);
                                            if (uVar15 == 0) {
                                              local_18 = 0;
                                              local_c = *(int *)((int)this + 0x170);
                                              if ((int)local_c < 6) {
                                                local_c = 5;
                                              }
                                              lVar16 = FUN_00442b50((double)(int)local_c * 0.01 *
                                                                    10.0);
                                              local_14 = (int)lVar16;
                                              FUN_00442b50((double)CONCAT44(uStack_1c,local_20));
                                              FUN_00440140(*(int *)((int)this + 0x5a));
                                              if (*(short *)((int)this + 0x160) != -1) {
                                                local_18 = (int)*(short *)((int)this + 0x160);
                                                FUN_00440140(*(int *)((int)this + 0x5a));
                                                return 0;
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          uVar15 = FUN_004559b0(param_3,(double *)&local_20,
                                                                (int *)0x0);
                                          if (uVar15 == 0) {
                                            local_18 = 0;
                                            local_c = *(int *)((int)this + 0x170);
                                            if ((int)local_c < 6) {
                                              local_c = 5;
                                            }
                                            lVar16 = FUN_00442b50((double)(int)local_c * 0.01 * 10.0
                                                                 );
                                            local_14 = (int)lVar16;
                                            FUN_00442b50((double)CONCAT44(uStack_1c,local_20));
                                            FUN_00440140(*(int *)((int)this + 0x5a));
                                            if (*(short *)((int)this + 0x160) != -1) {
                                              local_18 = (int)*(short *)((int)this + 0x160);
                                              FUN_00440140(*(int *)((int)this + 0x5a));
                                              return 0;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        uVar15 = FUN_004559b0(param_3,(double *)&local_20,(int *)0x0
                                                             );
                                        if (uVar15 == 0) {
                                          local_18 = 0;
                                          local_c = *(int *)((int)this + 0x170);
                                          if ((int)local_c < 6) {
                                            local_c = 5;
                                          }
                                          lVar16 = FUN_00442b50((double)(int)local_c * 0.01 * 10.0);
                                          local_14 = (int)lVar16;
                                          FUN_00442b50((double)CONCAT44(uStack_1c,local_20));
                                          FUN_00440140(*(int *)((int)this + 0x5a));
                                          if (*(short *)((int)this + 0x160) != -1) {
                                            local_18 = (int)*(short *)((int)this + 0x160);
                                            FUN_00440140(*(int *)((int)this + 0x5a));
                                            return 0;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                                      if (uVar15 == 0) {
                                        pvVar7 = FUN_0046da90(this,'\x01','\x01');
                                        if ((pvVar7 != (void *)0x0) &&
                                           ((*(int *)((int)pvVar7 + 0x156) == 0x6e705453 ||
                                            (*(char *)((int)pvVar7 + 0x15a) != '\0')))) {
                                          FUN_00440140(*(int *)((int)this + 0x5a));
                                        }
                                        *(undefined1 *)((int)this + 0x162) = (undefined1)local_5;
                                        return 0;
                                      }
                                    }
                                  }
                                  else {
                                    iVar6 = FUN_00456560(param_3,(char *)local_148,0x100,(int *)0x0)
                                    ;
                                    if (iVar6 != 0) {
                                      return 0x10000;
                                    }
                                    uVar12 = FUN_0043d430((char *)local_148,&DAT_004dcc68);
                                    if (((uVar12 != 0) &&
                                        (uVar12 = FUN_0043d430((char *)local_148,s_partial_004dcc60)
                                        , uVar12 != 0)) &&
                                       (uVar12 = FUN_0043d430((char *)local_148,
                                                              (char *)&DAT_004dbcbc), uVar12 != 0))
                                    {
                                      return 0x10000;
                                    }
                                    FUN_00440140(*(int *)((int)this + 0x5a));
                                    if (*(short *)((int)this + 0x160) != -1) {
                                      local_18 = 0;
                                      local_c = *(int *)((int)this + 0x170);
                                      if ((int)local_c < 6) {
                                        local_c = 5;
                                      }
                                      lVar16 = FUN_00442b50((double)(int)local_c * 0.01 * 10.0);
                                      local_14 = (int)lVar16;
                                      FUN_00440140(*(int *)((int)this + 0x5a));
                                    }
                                  }
                                }
                                else {
                                  iVar6 = FUN_00456560(param_3,(char *)local_148,0x100,(int *)0x0);
                                  if (iVar6 != 0) {
                                    return 0x10000;
                                  }
                                  uVar12 = FUN_0043d430((char *)local_148,&DAT_004dcc68);
                                  if (uVar12 != 0) {
                                    pbVar11 = local_148;
                                    pbVar13 = &DAT_004dccc8;
                                    do {
                                      bVar1 = *pbVar11;
                                      bVar3 = bVar1 < *pbVar13;
                                      if (bVar1 != *pbVar13) {
LAB_0048070b:
                                        iVar6 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                                        goto LAB_00480710;
                                      }
                                      if (bVar1 == 0) break;
                                      bVar1 = pbVar11[1];
                                      bVar3 = bVar1 < pbVar13[1];
                                      if (bVar1 != pbVar13[1]) goto LAB_0048070b;
                                      pbVar11 = pbVar11 + 2;
                                      pbVar13 = pbVar13 + 2;
                                    } while (bVar1 != 0);
                                    iVar6 = 0;
LAB_00480710:
                                    if ((iVar6 != 0) &&
                                       (uVar12 = FUN_0043d430((char *)local_148,s_partial_004dcc60),
                                       uVar12 != 0)) {
                                      pbVar11 = local_148;
                                      pbVar13 = &DAT_004dccc4;
                                      do {
                                        bVar1 = *pbVar11;
                                        bVar3 = bVar1 < *pbVar13;
                                        if (bVar1 != *pbVar13) {
LAB_00480757:
                                          iVar6 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                                          goto LAB_0048075c;
                                        }
                                        if (bVar1 == 0) break;
                                        bVar1 = pbVar11[1];
                                        bVar3 = bVar1 < pbVar13[1];
                                        if (bVar1 != pbVar13[1]) goto LAB_00480757;
                                        pbVar11 = pbVar11 + 2;
                                        pbVar13 = pbVar13 + 2;
                                      } while (bVar1 != 0);
                                      iVar6 = 0;
LAB_0048075c:
                                      if ((iVar6 != 0) &&
                                         (uVar12 = FUN_0043d430((char *)local_148,
                                                                (char *)&DAT_004dbcbc), uVar12 != 0)
                                         ) {
                                        return 0x10000;
                                      }
                                    }
                                  }
                                  FUN_00440140(*(int *)((int)this + 0x5a));
                                  if (*(short *)((int)this + 0x160) != -1) {
                                    local_18 = 0;
                                    local_c = *(int *)((int)this + 0x170);
                                    if ((int)local_c < 6) {
                                      local_c = 5;
                                    }
                                    lVar16 = FUN_00442b50((double)(int)local_c * 0.01 * 10.0);
                                    local_14 = (int)lVar16;
                                    FUN_00440140(*(int *)((int)this + 0x5a));
                                    return 0;
                                  }
                                }
                              }
                              else if ((param_2 == (short *)0x0) ||
                                      (uVar15 = FUN_00455c10(param_2,&local_48,(int *)0x0),
                                      uVar15 != 0)) {
                                if (*param_3 == 1) {
                                  FUN_00441630();
                                  return uVar15;
                                }
                                if (*param_3 == 0xf) {
                                  __ftol();
                                  FUN_00441630();
                                  return uVar15;
                                }
                                uVar15 = FUN_00455c10(param_3,&local_10,(int *)0x0);
                                if (uVar15 == 0) {
                                  FUN_00441630();
                                  return 0;
                                }
                              }
                              else {
                                uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                                if (uVar15 == 0) {
                                  iVar6 = FUN_00481030(this,param_2);
                                  if (iVar6 == 0) {
                                    return 0x10000;
                                  }
                                  FUN_00441660(iVar6);
                                  return 0;
                                }
                              }
                            }
                            else {
                              uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                              if (uVar15 == 0) {
                                FUN_00440650(*(void **)((int)this + 0x5a),(char)local_5);
                                return 0;
                              }
                            }
                          }
                          else {
                            uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                            if (uVar15 == 0) {
                              FUN_004402c0(*(void **)((int)this + 0x5a),(char)local_5);
                              return 0;
                            }
                          }
                        }
                        else {
                          uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                          if (uVar15 == 0) {
                            FUN_00440250(*(void **)((int)this + 0x5a),(char)local_5);
                            return 0;
                          }
                        }
                      }
                      else {
                        uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                        if (uVar15 == 0) {
                          FUN_004418e0(*(void **)((int)this + 0x5a),(char)local_5);
                          return 0;
                        }
                      }
                    }
                    else {
                      if (*param_3 == 1) {
                        FUN_00441630();
                        return 0;
                      }
                      if (*param_3 == 0xf) {
                        __ftol();
                        FUN_00441630();
                        return 0;
                      }
                      uVar15 = FUN_00455c10(param_3,&local_10,(int *)0x0);
                      if (uVar15 == 0) {
                        FUN_00441630();
                        return 0;
                      }
                    }
                  }
                  else {
                    uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                    if (uVar15 == 0) {
                      FUN_004418a0(*(int *)((int)this + 0x5a));
                      return 0;
                    }
                  }
                }
                else {
                  uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                  if (uVar15 == 0) {
                    FUN_00441860(*(int *)((int)this + 0x5a));
                    return 0;
                  }
                }
              }
              else {
                uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
                if (uVar15 == 0) {
                  FUN_00441810(*(void **)((int)this + 0x5a),(char)local_5);
                  return 0;
                }
              }
            }
            else {
              uVar15 = FUN_00455c10(param_3,&local_10,(int *)0x0);
              if (uVar15 == 0) {
                FUN_004417d0();
                return 0;
              }
            }
          }
          else {
            uVar15 = FUN_004559b0(param_3,(double *)&local_20,(int *)0x0);
            if (uVar15 == 0) {
              if (((0.0 < (double)CONCAT44(uStack_1c,local_20)) &&
                  ((double)CONCAT44(uStack_1c,local_20) < 0.01)) ||
                 (((double)CONCAT44(uStack_1c,local_20) < 0.0 &&
                  (-0.01 < (double)CONCAT44(uStack_1c,local_20))))) {
                local_20 = 0;
                uStack_1c = 0;
              }
              lVar16 = FUN_00442b50((double)CONCAT44(uStack_1c,local_20));
              FUN_00441330(*(void **)((int)this + 0x5a),(int)lVar16);
              return 0;
            }
          }
        }
        else {
          if (*param_3 == 9) {
            pvVar7 = *(void **)((int)this + 0x5a);
            uVar10 = FUN_00441b50(pvVar7,*(undefined4 *)(param_3 + 1),*(int *)(param_3 + 3));
            FUN_00441460(pvVar7,uVar10);
            return 0;
          }
          uVar15 = FUN_00455c10(param_3,&local_10,(int *)0x0);
          if (uVar15 == 0) {
            FUN_00441460(*(void **)((int)this + 0x5a),local_10);
            return 0;
          }
        }
      }
      else {
        uVar15 = FUN_00455c10(param_3,&local_10,(int *)0x0);
        if (uVar15 == 0) {
          if (local_10 < 0x65) {
            sVar5 = 0;
            if (-1 < local_10) {
              sVar5 = (short)local_10;
            }
          }
          else {
            sVar5 = 100;
          }
          local_c = (uint)sVar5;
          _floor((double)(int)local_c * 0.01 * 256.0 + 0.5);
          __ftol();
          FUN_004415c0(*(int *)((int)this + 0x5a));
          return 0;
        }
      }
    }
    else {
      uVar15 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
      if (uVar15 == 0) {
        (**(code **)(*(int *)this + 0x358))(local_5,1);
        return 0;
      }
    }
  }
  else {
    if ((((*param_3 != 0x69) || (piVar8 = *(int **)(param_3 + 1), piVar8 == (int *)0x0)) ||
        ((*(byte *)(piVar8 + 8) & 1) == 0)) &&
       ((iVar6 = FUN_00456560(param_3,local_248,0x100,(int *)0x0), piVar8 = (int *)0x0, iVar6 == 0
        && (iVar6 = FUN_0046ca60((int)this), iVar6 != 0)))) {
      local_c = **(int **)(*(int *)((int)this + 4) + 0x48);
      iVar6 = FUN_0046ca60((int)this);
      sVar5 = (**(code **)(local_c + 0x120))(*(undefined4 *)(iVar6 + 0x96));
      pcVar14 = local_248;
      pvVar7 = (void *)FUN_00466a70(*(int *)((int)this + 4));
      piVar8 = FUN_0044de20(pvVar7,pcVar14,sVar5);
    }
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0x114))();
    }
    pvVar7 = FUN_0046da90(this,'\x01','\x01');
    if (((pvVar7 != (void *)0x0) && (piVar8 != (int *)0x0)) &&
       ((piVar9 = *(int **)((int)this + 0x52), piVar9 != piVar8 &&
        ((*(short *)((int)piVar9 + 0x22) == *(short *)((int)piVar8 + 0x22) &&
         (*(int *)((int)piVar9 + 0x156) == *(int *)((int)piVar8 + 0x156))))))) {
      local_c = CONCAT13('\x01' - ((*(uint *)((int)this + 0x26) & 0x1000000) == 0),
                         (undefined3)local_c);
      local_14._3_1_ = (*(byte *)((int)this + 0x9c) & 2) >> 1;
      cVar4 = (**(code **)(*(int *)this + 0x250))();
      local_34._3_1_ = cVar4;
      (**(code **)(*(int *)this + 0x2a4))(piVar8);
      (**(code **)(*piVar8 + 0x1dc))(&local_30);
      (**(code **)(*(int *)this + 0x398))(&local_28,0);
      local_22 = (local_26 - local_2e) + local_2a;
      local_24 = (local_28 - local_30) + local_2c;
      (**(code **)(*(int *)this + 0x39c))(&local_28);
      (**(code **)(*(int *)this + 0x3a4))(&local_28);
      (**(code **)(*(int *)this + 0x3b4))(1);
      sVar5 = (**(code **)(*(int *)this + 0x27c))();
      piVar8 = this;
      piVar9 = (int *)FUN_0046ca10((int)this);
      FUN_0043d250(piVar9,piVar8,sVar5);
      if (local_34._3_1_ != '\0') {
        (**(code **)(*(int *)this + 0x24c))();
        return 0;
      }
      if (local_14._3_1_ != 0) {
        (**(code **)(*(int *)this + 0x358))(1,1);
      }
      if (local_c._3_1_ != '\0') {
        (**(code **)(*(int *)this + 0x148))(1);
        return 0;
      }
    }
  }
  return uVar15;
}


