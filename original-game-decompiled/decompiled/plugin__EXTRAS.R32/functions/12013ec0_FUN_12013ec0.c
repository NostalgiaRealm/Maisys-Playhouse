
/* ==== FUN_12013ec0 @ 12013ec0 ==== 
 * signature: uint __cdecl FUN_12013ec0(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 12013ec0-1201428c
 */

uint __cdecl FUN_12013ec0(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int local_34;
  int iStack_30;
  short local_2c [22];
  
  local_2c[0] = 0x6a;
  uVar4 = 0x10000;
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_120271d0(param_2,(uint *)s_chunkdelimiters_12037844);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_120271d0(param_2,(uint *)s_chunkcount_1203786c);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_120271d0(param_2,(uint *)s_lastdelimiter_12037830);
        if ((char)uVar1 == '\0') {
          uVar1 = FUN_120271d0(param_2,(uint *)s_maccreator_1203781c);
          if ((char)uVar1 == '\0') {
            uVar1 = FUN_120271d0(param_2,(uint *)s_readchunk_12037808);
            if ((char)uVar1 == '\0') {
              uVar1 = FUN_120271d0(param_2,(uint *)s_openmode_12037740);
              if ((char)uVar1 == '\0') {
                uVar1 = FUN_120271d0(param_2,(uint *)s_readtoend_120377f4);
                if ((char)uVar1 == '\0') {
                  uVar1 = FUN_120271d0(param_2,(uint *)&DAT_120377cc);
                  if ((char)uVar1 == '\0') {
                    uVar1 = FUN_120271d0(param_2,(uint *)s_readcharacter_12037858);
                    if ((char)uVar1 == '\0') {
                      uVar1 = FUN_120271d0(param_2,(uint *)s_mactype_120377e0);
                      if ((char)uVar1 == '\0') {
                        uVar1 = FUN_120271d0(param_2,(uint *)s_length_120377b8);
                        if ((char)uVar1 == '\0') {
                          uVar1 = FUN_120271d0(param_2,(uint *)s_index0_12037768);
                          if ((char)uVar1 == '\0') {
                            uVar1 = FUN_120271d0(param_2,(uint *)s_error_1203777c);
                            if ((char)uVar1 == '\0') {
                              uVar1 = FUN_120271d0(param_2,(uint *)s_index_12037754);
                              if ((char)uVar1 == '\0') {
                                uVar1 = FUN_120271d0(param_2,(uint *)s_filepath_120371c4);
                                if ((char)uVar1 == '\0') {
                                  uVar1 = FUN_120271d0(param_2,(uint *)s_filename_1203772c);
                                  if ((char)uVar1 != '\0') {
                                    uVar4 = FUN_12014f60((int)param_1,local_2c);
                                  }
                                }
                                else {
                                  uVar4 = FUN_12014ed0((int)param_1,local_2c);
                                }
                              }
                              else {
                                uVar4 = FUN_12014eb0((int)param_1,local_2c);
                              }
                            }
                            else {
                              uVar4 = FUN_12014e60((int)param_1,local_2c);
                            }
                          }
                          else {
                            uVar4 = FUN_12014e90((int)param_1,local_2c);
                          }
                        }
                        else {
                          uVar4 = FUN_12014e10((int)param_1,local_2c);
                        }
                      }
                      else {
                        uVar4 = FUN_12014a60((int)param_1,local_2c);
                      }
                    }
                    else {
                      uVar4 = FUN_12014ba0((int)param_1,local_2c);
                    }
                  }
                  else {
                    uVar4 = FUN_12014bd0((int)param_1,local_2c,param_3);
                  }
                }
                else {
                  uVar4 = FUN_12014a80((int)param_1,local_2c);
                }
              }
              else {
                uVar4 = FUN_12014fb0((int)param_1,local_2c);
              }
            }
            else {
              uVar4 = FUN_12014640((int)param_1,local_2c);
            }
          }
          else {
            uVar4 = FUN_12014620((int)param_1,local_2c);
          }
        }
        else {
          uVar4 = FUN_12014600((int)param_1,local_2c);
        }
      }
      else {
        uVar4 = FUN_12014d50((int)param_1,local_2c);
      }
    }
    else {
      uVar4 = FUN_120145e0((int)param_1,local_2c);
    }
  }
  else {
    uVar4 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)((int)param_1 + 10),(undefined4 *)0x0
                        );
  }
  param_1[0x19] = 0;
  if ((uVar4 & 0xffff0000) == 0xa0000) {
    param_1[0x19] = uVar4 - 0x9ffff;
    uVar4 = 0;
  }
  if ((uVar4 == 0) && (local_2c[0] != 0x6a)) {
    if (*param_4 == 0x6a) {
      psVar5 = local_2c;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)param_4 = *(undefined4 *)psVar5;
        psVar5 = psVar5 + 2;
        param_4 = param_4 + 2;
      }
      return 0;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_34);
    uVar4 = (*pcVar2)(local_34,0,local_2c,param_4);
    DAT_12039a9c = uVar4;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_30);
    DAT_12039a9c = (*pcVar2)(iStack_30,0,local_2c);
  }
  return uVar4;
}


