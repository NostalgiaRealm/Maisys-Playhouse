
/* ==== FUN_0047ee00 @ 0047ee00 ==== 
 * signature: undefined4 __thiscall FUN_0047ee00(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0047ee00-0047fa32
 */

undefined4 __thiscall FUN_0047ee00(void *this,int *param_1,short *param_2,short *param_3)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  int iVar7;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  int *piVar8;
  void *this_00;
  undefined3 extraout_var_11;
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
  undefined3 extraout_var_28;
  undefined3 extraout_var_29;
  undefined3 extraout_var_30;
  undefined3 extraout_var_31;
  undefined3 extraout_var_32;
  undefined3 extraout_var_33;
  undefined3 extraout_var_34;
  undefined3 extraout_var_35;
  undefined3 extraout_var_36;
  undefined3 extraout_var_37;
  undefined3 extraout_var_38;
  undefined3 extraout_var_39;
  undefined3 extraout_var_40;
  undefined3 extraout_var_41;
  undefined3 extraout_var_42;
  undefined3 extraout_var_43;
  undefined3 extraout_var_44;
  undefined3 extraout_var_45;
  undefined3 extraout_var_46;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  float10 fVar13;
  longlong lVar14;
  char *local_12c [5];
  char local_118;
  char local_117 [204];
  char local_4b [48];
  short local_1b;
  ushort uStack_19;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar3 = FUN_00437430(param_1,(int *)s_classname_004d9f04);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    bVar3 = FUN_00437430(param_1,(int *)s_inmemory_004da02c);
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      bVar4 = FUN_00441fb0(*(int *)((int)this + 0x5a));
      uVar6 = FUN_00454c50(param_3,bVar4);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
    if (CONCAT31(extraout_var_01,bVar3) != 0) {
      bVar4 = FUN_00441fb0(*(int *)((int)this + 0x5a));
      uVar6 = FUN_00454c50(param_3,bVar4);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_classid_004d9988);
    if (CONCAT31(extraout_var_02,bVar3) != 0) {
      uVar6 = FUN_00455210(0xffffffff,param_3,s_QuickTimeElement_004dcc9c);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_movie_004da240);
    if (CONCAT31(extraout_var_03,bVar3) != 0) {
      uVar6 = FUN_00454d00(param_3,*(undefined4 *)(*(int *)((int)this + 0x5a) + 0x7e));
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_controller_004da22c);
    if (CONCAT31(extraout_var_04,bVar3) != 0) {
      uVar6 = FUN_0043fd60(*(int *)((int)this + 0x5a));
      uVar6 = FUN_00454d00(param_3,uVar6);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_volume_004da2b4);
    if (CONCAT31(extraout_var_05,bVar3) != 0) {
      local_1b = FUN_004415e0(*(int *)((int)this + 0x5a));
      uStack_19 = local_1b >> 0xf;
      _floor((double)(int)local_1b * 0.00390625 * 100.0 + 0.5);
      lVar14 = __ftol();
      uVar6 = FUN_00454d00(param_3,(int)lVar14);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_timevalue_004da2a0);
    if (CONCAT31(extraout_var_06,bVar3) != 0) {
      uVar6 = FUN_004414c0(*(void **)((int)this + 0x5a),0);
      uVar6 = FUN_00454d00(param_3,uVar6);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)&DAT_004da28c);
    if (CONCAT31(extraout_var_07,bVar3) != 0) {
      iVar7 = FUN_00441580(*(void **)((int)this + 0x5a));
      fVar13 = FUN_00442bc0(iVar7);
      uVar6 = FUN_00454ca0(param_3,SUB84((double)fVar13,0),(int)((ulonglong)(double)fVar13 >> 0x20))
      ;
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_timescale_004da278);
    if (CONCAT31(extraout_var_08,bVar3) != 0) {
      uVar6 = FUN_004417e0(*(int *)((int)this + 0x5a));
      uVar6 = FUN_00454d00(param_3,uVar6);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_range_004d9f50);
    if (CONCAT31(extraout_var_09,bVar3) != 0) {
      FUN_00441760();
      uVar6 = FUN_00454e70(param_3,local_c,local_14 + local_c);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_rangesymbol_004d9f18);
    if (CONCAT31(extraout_var_10,bVar3) != 0) {
      local_1b = 0;
      uStack_19 = 0;
      local_8 = 0;
      if ((*param_2 == 100) && (*(int *)(param_2 + 3) == 5)) {
        pcVar2 = *(code **)(*(int *)this + 0x10);
        iVar7 = (*pcVar2)();
        piVar8 = (int *)0x0;
        if (iVar7 != 0) {
          iVar7 = (*pcVar2)();
          piVar8 = (int *)FUN_00466a90(iVar7);
        }
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)(**(code **)(*piVar8 + 0x108))();
        }
        if (piVar8 != (int *)0x0) {
          cVar5 = (**(code **)(*piVar8 + 0x120))(0,*(undefined4 *)(param_2 + 1),local_12c);
          if (cVar5 != '\0') {
            this_00 = FUN_0046da90(this,'\x01','\x01');
            if (this_00 != (void *)0x0) {
              uVar9 = FUN_0044a5a0(this_00,local_12c[0],(undefined4 *)&local_1b,&local_8);
              if ((char)uVar9 != '\0') {
                uVar6 = FUN_00454e70(param_3,CONCAT22(uStack_19,local_1b),
                                     local_8 + CONCAT22(uStack_19,local_1b));
                return uVar6;
              }
            }
          }
        }
      }
      return 0x10000;
    }
    bVar3 = FUN_00437430(param_1,(int *)&DAT_004da268);
    if (CONCAT31(extraout_var_11,bVar3) != 0) {
      uVar9 = FUN_00441840(*(int *)((int)this + 0x5a));
      uVar6 = FUN_00454c50(param_3,(byte)uVar9);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_loopbackforth_004da2f0);
    if (CONCAT31(extraout_var_12,bVar3) != 0) {
      uVar9 = FUN_00441880(*(int *)((int)this + 0x5a));
      uVar6 = FUN_00454c50(param_3,(byte)uVar9);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_playeveryframe_004da2dc);
    if (CONCAT31(extraout_var_13,bVar3) != 0) {
      uVar9 = FUN_004418c0(*(int *)((int)this + 0x5a));
      uVar6 = FUN_00454c50(param_3,(byte)uVar9);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_showcontroller_004da2c8);
    if (CONCAT31(extraout_var_14,bVar3) != 0) {
      uVar6 = FUN_00441a60(*(int *)((int)this + 0x5a));
      uVar6 = FUN_00454c50(param_3,(byte)uVar6);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_duration_004dcc38);
    if (CONCAT31(extraout_var_15,bVar3) != 0) {
      uVar6 = FUN_00441a90(*(void **)((int)this + 0x5a));
      uVar6 = FUN_00454d00(param_3,uVar6);
      return uVar6;
    }
    bVar3 = FUN_00437430(param_1,(int *)s_buffersize_004da218);
    if (CONCAT31(extraout_var_16,bVar3) == 0) {
      bVar3 = FUN_00437430(param_1,(int *)s_movieclick_004da204);
      if (CONCAT31(extraout_var_17,bVar3) != 0) {
        bVar4 = FUN_004402b0(*(void **)((int)this + 0x5a));
        uVar6 = FUN_00454c50(param_3,bVar4);
        return uVar6;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_controllerclick_004da1f0);
      if (CONCAT31(extraout_var_18,bVar3) != 0) {
        bVar4 = FUN_00440320(*(void **)((int)this + 0x5a));
        uVar6 = FUN_00454c50(param_3,bVar4);
        return uVar6;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_pollmovie_004da1b4);
      if (CONCAT31(extraout_var_19,bVar3) != 0) {
        uVar6 = FUN_00454c50(param_3,1 - (*(int *)(*(int *)((int)this + 0x5a) + 0x98) == 0));
        return uVar6;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_track_004da1a0);
      if (CONCAT31(extraout_var_20,bVar3) != 0) {
        iVar7 = FUN_00481030(this,param_2);
        if (iVar7 != 0) {
          uVar6 = FUN_00454d00(param_3,iVar7);
          return uVar6;
        }
        return 0x10000;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_trackcount_004da18c);
      if (CONCAT31(extraout_var_21,bVar3) != 0) {
        uVar6 = FUN_0048d150();
        uVar6 = FUN_00454d00(param_3,uVar6);
        return uVar6;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_tracktype_004da178);
      if (CONCAT31(extraout_var_22,bVar3) != 0) {
        iVar7 = FUN_00481030(this,param_2);
        local_1b = 0;
        uStack_19 = 0;
        if (iVar7 != 0) {
          FUN_0048d1d2();
          FUN_0048d206();
          uVar6 = FUN_00454d00(param_3,CONCAT22(uStack_19,local_1b));
          return uVar6;
        }
        return 0x10000;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_trackenable_004da1dc);
      if (CONCAT31(extraout_var_23,bVar3) != 0) {
        iVar7 = FUN_00481030(this,param_2);
        if (iVar7 != 0) {
          bVar4 = FUN_0048d1f9();
          uVar6 = FUN_00454c50(param_3,bVar4);
          return uVar6;
        }
        return 0x10000;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_currenthotspot_004dcbc0);
      if (CONCAT31(extraout_var_24,bVar3) != 0) {
        FUN_0043fd60(*(int *)((int)this + 0x5a));
        FUN_0048d3a8();
        uVar6 = FUN_00454d00(param_3,(uint)uStack_19);
        return uVar6;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_updatemode_004dcbac);
      if (CONCAT31(extraout_var_25,bVar3) != 0) {
        sVar1 = *(short *)((int)this + 0x160);
        if (sVar1 == -1) {
          uVar6 = FUN_00455210(0xffffffff,param_3,(char *)&DAT_004dbcbc);
          return uVar6;
        }
        if (sVar1 == 0) {
          uVar6 = FUN_00455210(0xffffffff,param_3,s_normal_004dcc78);
          return uVar6;
        }
        if (sVar1 == 1) {
          uVar6 = FUN_00455210(0xffffffff,param_3,s_swing_004dcc70);
          return uVar6;
        }
        return 0x10000;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_transitionspeed_004dcb84);
      if (CONCAT31(extraout_var_26,bVar3) != 0) {
        uVar6 = FUN_00454d00(param_3,*(undefined4 *)((int)this + 0x170));
        return uVar6;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_warpmode_004dcb98);
      if (CONCAT31(extraout_var_27,bVar3) != 0) {
        local_1b = -1;
        uStack_19 = 0xffff;
        FUN_00440140(*(int *)((int)this + 0x5a));
        if (CONCAT22(uStack_19,local_1b) == 2) {
          uVar6 = FUN_00455210(0xffffffff,param_3,&DAT_004dcc68);
          return uVar6;
        }
        if (CONCAT22(uStack_19,local_1b) == 1) {
          uVar6 = FUN_00455210(0xffffffff,param_3,s_partial_004dcc60);
          return uVar6;
        }
        if (CONCAT22(uStack_19,local_1b) == 0) {
          uVar6 = FUN_00455210(0xffffffff,param_3,(char *)&DAT_004dbcbc);
          return uVar6;
        }
        return 0x10000;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_staticsmoothing_004dcb5c);
      if (CONCAT31(extraout_var_28,bVar3) == 0) {
        bVar3 = FUN_00437430(param_1,(int *)s_motionsmoothing_004dcb48);
        if (CONCAT31(extraout_var_29,bVar3) == 0) {
          bVar3 = FUN_00437430(param_1,(int *)s_showcursor_004dcc4c);
          if (CONCAT31(extraout_var_30,bVar3) != 0) {
            uVar6 = FUN_00454c50(param_3,*(byte *)((int)this + 0x162));
            return uVar6;
          }
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dca18);
          if (CONCAT31(extraout_var_31,bVar3) != 0) {
            FUN_00440140(*(int *)((int)this + 0x5a));
            fVar13 = FUN_00442bc0(CONCAT22(uStack_19,local_1b));
            FUN_00454ca0(param_3,SUB84((double)fVar13,0),(int)((ulonglong)(double)fVar13 >> 0x20));
            return 0;
          }
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dcc24);
          if (CONCAT31(extraout_var_32,bVar3) != 0) {
            FUN_00440140(*(int *)((int)this + 0x5a));
            fVar13 = FUN_00442bc0(CONCAT22(uStack_19,local_1b));
            FUN_00454ca0(param_3,SUB84((double)fVar13,0),(int)((ulonglong)(double)fVar13 >> 0x20));
            return 0;
          }
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dcc10);
          if (CONCAT31(extraout_var_33,bVar3) != 0) {
            FUN_00440140(*(int *)((int)this + 0x5a));
            fVar13 = FUN_00442bc0(CONCAT22(uStack_19,local_1b));
            FUN_00454ca0(param_3,SUB84((double)fVar13,0),(int)((ulonglong)(double)fVar13 >> 0x20));
            return 0;
          }
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dcbfc);
          if (CONCAT31(extraout_var_34,bVar3) != 0) {
            FUN_00440140(*(int *)((int)this + 0x5a));
            FUN_00454d00(param_3,CONCAT22(uStack_19,local_1b));
            return 0;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_currentnodename_004dcbe8);
          if (CONCAT31(extraout_var_35,bVar3) != 0) {
            local_118 = '\0';
            FUN_00440140(*(int *)((int)this + 0x5a));
            uVar6 = FUN_00455210(0xffffffff,param_3,&local_118);
            return uVar6;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_hotspotname_004dcbd4);
          if (CONCAT31(extraout_var_36,bVar3) == 0) {
            bVar3 = FUN_00437430(param_1,(int *)s_balance_004da254);
            if (CONCAT31(extraout_var_37,bVar3) == 0) {
              bVar3 = FUN_00437430(param_1,(int *)s_trackhit_004da164);
              if (CONCAT31(extraout_var_38,bVar3) == 0) {
                bVar3 = FUN_00437430(param_1,(int *)s_tracklayer_004da150);
                if (CONCAT31(extraout_var_39,bVar3) == 0) {
                  bVar3 = FUN_00437430(param_1,(int *)s_trackname_004da13c);
                  if (CONCAT31(extraout_var_40,bVar3) == 0) {
                    bVar3 = FUN_00437430(param_1,(int *)s_trackposition_004da128);
                    if (CONCAT31(extraout_var_41,bVar3) == 0) {
                      bVar3 = FUN_00437430(param_1,(int *)s_tracksize_004da114);
                      if (CONCAT31(extraout_var_42,bVar3) == 0) {
                        bVar3 = FUN_00437430(param_1,(int *)s_trackduration_004da100);
                        if (CONCAT31(extraout_var_43,bVar3) == 0) {
                          bVar3 = FUN_00437430(param_1,(int *)s_trackoffset_004da0ec);
                          if (CONCAT31(extraout_var_44,bVar3) == 0) {
                            bVar3 = FUN_00437430(param_1,(int *)s_trackvolume_004da0d8);
                            if (CONCAT31(extraout_var_45,bVar3) == 0) {
                              bVar3 = FUN_00437430(param_1,(int *)s_trackbalance_004da0c4);
                              if (CONCAT31(extraout_var_46,bVar3) == 0) {
                                uVar6 = FUN_0044f8c0(this,param_1,param_2,param_3);
                                return uVar6;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            *param_3 = 0;
            return 0;
          }
          if (param_2 != (short *)0x0) {
            iVar7 = FUN_00455c10(param_2,&local_10,(int *)0x0);
            if (iVar7 == 0) {
              FUN_00440140(*(int *)((int)this + 0x5a));
              uVar6 = FUN_00455210(0xffffffff,param_3,local_4b);
              return uVar6;
            }
          }
          return 0x40004;
        }
      }
      local_1b = -1;
      uStack_19 = 0xffff;
      FUN_00440140(*(int *)((int)this + 0x5a));
      if (CONCAT22(uStack_19,local_1b) == 0x3ff) {
        uVar6 = FUN_00455210(0xffffffff,param_3,&DAT_004dcc68);
        return uVar6;
      }
      if (CONCAT22(uStack_19,local_1b) == 0x200) {
        uVar6 = FUN_00455210(0xffffffff,param_3,s_partial_004dcc60);
        return uVar6;
      }
      if (CONCAT22(uStack_19,local_1b) == 0) {
        uVar6 = FUN_00455210(0xffffffff,param_3,(char *)&DAT_004dbcbc);
        return uVar6;
      }
      return 0x10000;
    }
    bVar4 = *(byte *)(*(int *)((int)this + 0x5a) + 0x96);
    if ((bVar4 & 0x80) != 0) {
      uVar6 = FUN_00455210(0xffffffff,param_3,&DAT_004dcc94);
      return uVar6;
    }
    bVar4 = bVar4 & 0x7f;
    if (bVar4 == 0) {
      uVar6 = FUN_00455210(0xffffffff,param_3,s_element_004dc494);
      return uVar6;
    }
    if (bVar4 == 1) {
      uVar6 = FUN_00455210(0xffffffff,param_3,s_media_004dcc8c);
      return uVar6;
    }
    if (bVar4 == 2) {
      uVar6 = FUN_00455210(0xffffffff,param_3,s_smallest_004dcc80);
      return uVar6;
    }
    return 0x10000;
  }
  uVar9 = 0xffffffff;
  pcVar11 = (char *)&DAT_004dccb0;
  do {
    pcVar12 = pcVar11;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar11 + 1;
    cVar5 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9;
  pcVar11 = pcVar12 + -uVar9;
  pcVar12 = local_117;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar6 = FUN_00455210(0xffffffff,param_3,local_117);
  return uVar6;
}


