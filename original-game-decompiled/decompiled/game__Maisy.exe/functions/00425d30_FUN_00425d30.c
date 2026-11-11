
/* ==== FUN_00425d30 @ 00425d30 ==== 
 * signature: undefined4 __thiscall FUN_00425d30(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00425d30-0042608f
 */

undefined4 __thiscall FUN_00425d30(void *this,int *param_1,short *param_2,short *param_3)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  undefined3 extraout_var;
  LRESULT LVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 uVar5;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
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
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  undefined3 extraout_var_22;
  undefined3 extraout_var_23;
  undefined3 extraout_var_24;
  undefined3 extraout_var_25;
  undefined3 extraout_var_26;
  undefined3 extraout_var_27;
  longlong lVar6;
  
  bVar2 = FUN_00437430(param_1,(int *)s_volume_004da2b4);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    *param_3 = 1;
    LVar4 = FUN_0044c770(*(int *)((int)this + 0x5a));
    *(int *)(param_3 + 1) = LVar4 / 10;
    return 0;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_timevalue_004da2a0);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    *param_3 = 1;
    lVar6 = FUN_0044c670(*(void **)((int)this + 0x5a),'\x01');
    *(int *)(param_3 + 1) = (int)lVar6;
    return 0;
  }
  bVar2 = FUN_00437430(param_1,(int *)&DAT_004da28c);
  if (CONCAT31(extraout_var_01,bVar2) != 0) {
    *param_3 = 0xf;
    LVar4 = FUN_0044c730(*(int *)((int)this + 0x5a));
    *(double *)(param_3 + 1) = (double)LVar4 * 0.001;
    return 0;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_timescale_004da278);
  if (CONCAT31(extraout_var_02,bVar2) != 0) {
    *param_3 = 1;
    uVar5 = FUN_0044c700(*(int *)((int)this + 0x5a));
    *(undefined4 *)(param_3 + 1) = uVar5;
    return 0;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_range_004d9f50);
  if (CONCAT31(extraout_var_03,bVar2) != 0) {
    *param_3 = 0xb;
    piVar1 = (int *)(param_3 + 3);
    FUN_0044c7e0(*(void **)((int)this + 0x5a),(undefined4 *)(param_3 + 1),piVar1);
    *piVar1 = *piVar1 + *(int *)(param_3 + 1);
    return 0;
  }
  bVar2 = FUN_00437430(param_1,(int *)&DAT_004da268);
  if (CONCAT31(extraout_var_04,bVar2) != 0) {
    *param_3 = 0x14;
    bVar3 = FUN_0044c830(*(void **)((int)this + 0x5a));
    param_3[1] = (ushort)bVar3;
    return 0;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_balance_004da254);
  if (CONCAT31(extraout_var_05,bVar2) == 0) {
    bVar2 = FUN_00437430(param_1,(int *)s_movie_004da240);
    if (CONCAT31(extraout_var_06,bVar2) == 0) {
      bVar2 = FUN_00437430(param_1,(int *)s_controller_004da22c);
      if (CONCAT31(extraout_var_07,bVar2) == 0) {
        bVar2 = FUN_00437430(param_1,(int *)s_buffersize_004da218);
        if (CONCAT31(extraout_var_08,bVar2) == 0) {
          bVar2 = FUN_00437430(param_1,(int *)s_movieclick_004da204);
          if (CONCAT31(extraout_var_09,bVar2) == 0) {
            bVar2 = FUN_00437430(param_1,(int *)s_controllerclick_004da1f0);
            if (CONCAT31(extraout_var_10,bVar2) == 0) {
              bVar2 = FUN_00437430(param_1,(int *)s_trackenable_004da1dc);
              if (CONCAT31(extraout_var_11,bVar2) == 0) {
                bVar2 = FUN_00437430(param_1,(int *)s_trackdisable_004da1c8);
                if (CONCAT31(extraout_var_12,bVar2) == 0) {
                  bVar2 = FUN_00437430(param_1,(int *)s_pollmovie_004da1b4);
                  if (CONCAT31(extraout_var_13,bVar2) == 0) {
                    bVar2 = FUN_00437430(param_1,(int *)s_track_004da1a0);
                    if (CONCAT31(extraout_var_14,bVar2) == 0) {
                      bVar2 = FUN_00437430(param_1,(int *)s_trackcount_004da18c);
                      if (CONCAT31(extraout_var_15,bVar2) == 0) {
                        bVar2 = FUN_00437430(param_1,(int *)s_tracktype_004da178);
                        if (CONCAT31(extraout_var_16,bVar2) == 0) {
                          bVar2 = FUN_00437430(param_1,(int *)s_trackdisable_004da1c8);
                          if (CONCAT31(extraout_var_17,bVar2) == 0) {
                            bVar2 = FUN_00437430(param_1,(int *)s_trackdisable_004da1c8);
                            if (CONCAT31(extraout_var_18,bVar2) == 0) {
                              bVar2 = FUN_00437430(param_1,(int *)s_trackhit_004da164);
                              if (CONCAT31(extraout_var_19,bVar2) == 0) {
                                bVar2 = FUN_00437430(param_1,(int *)s_tracklayer_004da150);
                                if (CONCAT31(extraout_var_20,bVar2) == 0) {
                                  bVar2 = FUN_00437430(param_1,(int *)s_trackname_004da13c);
                                  if (CONCAT31(extraout_var_21,bVar2) == 0) {
                                    bVar2 = FUN_00437430(param_1,(int *)s_trackposition_004da128);
                                    if (CONCAT31(extraout_var_22,bVar2) == 0) {
                                      bVar2 = FUN_00437430(param_1,(int *)s_tracksize_004da114);
                                      if (CONCAT31(extraout_var_23,bVar2) == 0) {
                                        bVar2 = FUN_00437430(param_1,(int *)s_trackduration_004da100
                                                            );
                                        if (CONCAT31(extraout_var_24,bVar2) == 0) {
                                          bVar2 = FUN_00437430(param_1,(int *)s_trackoffset_004da0ec
                                                              );
                                          if (CONCAT31(extraout_var_25,bVar2) == 0) {
                                            bVar2 = FUN_00437430(param_1,(int *)
                                                  s_trackvolume_004da0d8);
                                            if (CONCAT31(extraout_var_26,bVar2) == 0) {
                                              bVar2 = FUN_00437430(param_1,(int *)
                                                  s_trackbalance_004da0c4);
                                              if (CONCAT31(extraout_var_27,bVar2) == 0) {
                                                uVar5 = FUN_0044f8c0(this,param_1,param_2,param_3);
                                                return uVar5;
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
      }
    }
  }
  *param_3 = 0;
  return 0;
}


