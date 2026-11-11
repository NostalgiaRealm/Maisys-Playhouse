
/* ==== FUN_0046f190 @ 0046f190 ==== 
 * signature: undefined4 __thiscall FUN_0046f190(void * this, int * param_1, short * param_2, short * param_3)
 * body: 0046f190-0046fe3f
 */

undefined4 __thiscall FUN_0046f190(void *this,int *param_1,short *param_2,short *param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
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
  SIZE_T *pSVar6;
  undefined3 extraout_var_31;
  int *piVar7;
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
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  short sVar11;
  char *pcVar12;
  SIZE_T *pSVar13;
  float10 fVar14;
  time_t tVar15;
  byte local_22c [253];
  char acStack_12f [259];
  SIZE_T local_2c;
  _MEMORYSTATUS local_28;
  SIZE_T local_8;
  
  bVar3 = FUN_00437430(param_1,(int *)s_multithread_004dc5a4);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    uVar4 = FUN_00454c50(param_3,DAT_004dc56c);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_readcount_004dc5f4);
  if (CONCAT31(extraout_var_00,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004d98a8);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_seekcount_004dc5e0);
  if (CONCAT31(extraout_var_01,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004d98b4);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_writecount_004dc5cc);
  if (CONCAT31(extraout_var_02,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004d98b0);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_readchunkcount_004dc5b8);
  if (CONCAT31(extraout_var_03,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004d98ac);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_readchunk_004dc608);
  if (CONCAT31(extraout_var_04,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004d98a4);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_enablereadchunk_004dc61c);
  if (CONCAT31(extraout_var_05,bVar3) != 0) {
    uVar4 = FUN_00454c50(param_3,DAT_004d98a0);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_structuralcount_004dc6a8);
  if (CONCAT31(extraout_var_06,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004dc5a0);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_elementcount_004dc838);
  if (CONCAT31(extraout_var_07,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004dc59c);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_modifiercount_004dc770);
  if (CONCAT31(extraout_var_08,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004dc594);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_objectcount_004dc748);
  if (CONCAT31(extraout_var_09,bVar3) != 0) {
    uVar4 = FUN_00454d00(param_3,DAT_004dc590);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_attributemanager_004dc914);
  if (CONCAT31(extraout_var_10,bVar3) != 0) {
    uVar4 = FUN_00454d50(param_3,DAT_004da38c);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_bytesfree_004dc900);
  if (CONCAT31(extraout_var_11,bVar3) != 0) {
    local_28.dwLength = 0x20;
    GlobalMemoryStatus(&local_28);
    uVar4 = FUN_00454d00(param_3,local_28.dwAvailPhys);
    return uVar4;
  }
  bVar3 = FUN_00437430(param_1,(int *)s_initialbytesfree_004dc810);
  if (CONCAT31(extraout_var_12,bVar3) == 0) {
    bVar3 = FUN_00437430(param_1,(int *)s_startbytesfree_004dc98c);
    if (CONCAT31(extraout_var_13,bVar3) == 0) {
      bVar3 = FUN_00437430(param_1,(int *)s_memerrorcount_004dc7c0);
      if (CONCAT31(extraout_var_14,bVar3) != 0) {
        uVar4 = FUN_00454d00(param_3,DAT_004db9a0);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_project_004d9b38);
      if (CONCAT31(extraout_var_15,bVar3) != 0) {
        if (param_2 != (short *)0x0) {
          iVar5 = FUN_00455c10(param_2,(int *)&local_8,(int *)0x0);
          if (iVar5 == 0) {
            iVar5 = FUN_0046e950(this,(short)local_8);
            uVar4 = 0;
            if (iVar5 != 0) {
              iVar5 = FUN_0046e950(this,(short)local_8);
              uVar4 = FUN_00458a00(iVar5);
            }
            uVar4 = FUN_00454d50(param_3,uVar4);
            return uVar4;
          }
        }
        return 0x10000;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_projectcount_004dc6f8);
      if (CONCAT31(extraout_var_16,bVar3) != 0) {
        uVar4 = FUN_00454d00(param_3,*(undefined4 *)(*(int *)((int)this + 0x5a) + 0x26));
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_mastervolume_004dc074);
      if (CONCAT31(extraout_var_17,bVar3) != 0) {
        uVar4 = thunk_FUN_00443170();
        uVar4 = FUN_00454d00(param_3,uVar4);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_volumeismounted_004dc630);
      if (CONCAT31(extraout_var_18,bVar3) != 0) {
        if (*(int *)((int)this + 0xa6) != 0) {
          FUN_00471060(this,(short *)((int)&local_28.dwAvailVirtual + 2),0,0);
          uVar4 = FUN_0043ed80((short *)((int)&local_28.dwAvailVirtual + 2),
                               *(char **)((int)this + 0xa6));
          uVar4 = FUN_00454c50(param_3,(byte)uVar4);
          return uVar4;
        }
        return 0x10000;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_gamemode_004d9420);
      if (CONCAT31(extraout_var_19,bVar3) != 0) {
        uVar4 = FUN_00454c50(param_3,0);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_monitorbitdepth_004d93a8);
      if (CONCAT31(extraout_var_20,bVar3) != 0) {
        uVar4 = FUN_00470470((int)this);
        uVar4 = FUN_00454d00(param_3,uVar4);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_supportsbitdepth_004d92a4);
      if (CONCAT31(extraout_var_21,bVar3) != 0) {
        if (param_2 != (short *)0x0) {
          iVar5 = FUN_00455c10(param_2,(int *)&local_8,(int *)0x0);
          if (iVar5 == 0) {
            uVar4 = FUN_00454c50(param_3,0);
            return uVar4;
          }
        }
        return 0x10000;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_usememory_004dc658);
      if (CONCAT31(extraout_var_22,bVar3) != 0) {
        uVar4 = FUN_00454d00(param_3,DAT_004dc584);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_activeproject_004dc978);
      if (CONCAT31(extraout_var_23,bVar3) != 0) {
        if (DAT_004da378 == 0) {
          uVar4 = FUN_00454d50(param_3,0);
          return uVar4;
        }
        uVar4 = FUN_00454d50(param_3,*(undefined4 *)(DAT_004da378 + 0x66));
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_playertype_004dc3f4);
      if (CONCAT31(extraout_var_24,bVar3) != 0) {
        uVar4 = FUN_00455210(0xffffffff,param_3,s_player_004dc970);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_altkeydown_004dc928);
      if (CONCAT31(extraout_var_25,bVar3) != 0) {
        uVar4 = FUN_0043c240(0x38);
        uVar4 = FUN_00454c50(param_3,(byte)uVar4);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_commandkeydown_004dc8ec);
      if (CONCAT31(extraout_var_26,bVar3) != 0) {
        uVar4 = FUN_0043c240(0x38);
        uVar4 = FUN_00454c50(param_3,(byte)uVar4);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_controlkeydown_004dc8d8);
      if (CONCAT31(extraout_var_27,bVar3) != 0) {
        uVar4 = FUN_0043c240(0x1d);
        uVar4 = FUN_00454c50(param_3,(byte)uVar4);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_optionkeydown_004dc70c);
      if (CONCAT31(extraout_var_28,bVar3) != 0) {
        uVar4 = FUN_0043c240(0x38);
        uVar4 = FUN_00454c50(param_3,(byte)uVar4);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_shiftkeydown_004dc6bc);
      if (CONCAT31(extraout_var_29,bVar3) != 0) {
        uVar4 = FUN_0043c240(0x2a);
        uVar4 = FUN_00454c50(param_3,(byte)uVar4);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_numericdate_004dc7ac);
      if (CONCAT31(extraout_var_30,bVar3) != 0) {
        pSVar6 = (SIZE_T *)FUN_0043c260();
        pSVar13 = &local_2c;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pSVar13 = *pSVar6;
          pSVar6 = pSVar6 + 1;
          pSVar13 = pSVar13 + 1;
        }
        local_8 = local_28.dwTotalPageFile * 1000 + local_28.dwTotalVirtual + 0x1cfde1;
        uVar4 = FUN_00454d00(param_3,local_8);
        return uVar4;
      }
      bVar3 = FUN_00437430(param_1,(int *)s_abbreviateddate_004dc93c);
      if (CONCAT31(extraout_var_31,bVar3) == 0) {
        bVar3 = FUN_00437430(param_1,(int *)s_longdate_004dc7e8);
        if (CONCAT31(extraout_var_32,bVar3) == 0) {
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dc8c4);
          if (CONCAT31(extraout_var_33,bVar3) != 0) {
            piVar7 = (int *)FUN_0043c260();
            FUN_00490d10((byte *)(acStack_12f + 3),0xff,&DAT_004dc52c,piVar7);
            uVar4 = FUN_00454fa0(param_3,acStack_12f + 3);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_dayinyear_004dc8b0);
          if (CONCAT31(extraout_var_34,bVar3) != 0) {
            pSVar6 = (SIZE_T *)FUN_0043c260();
            pSVar13 = &local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pSVar13 = *pSVar6;
              pSVar6 = pSVar6 + 1;
              pSVar13 = pSVar13 + 1;
            }
            local_8 = local_28.dwTotalVirtual + 1;
            uVar4 = FUN_00454d00(param_3,local_8);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dc89c);
          if (CONCAT31(extraout_var_35,bVar3) != 0) {
            pSVar6 = (SIZE_T *)FUN_0043c260();
            pSVar13 = &local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pSVar13 = *pSVar6;
              pSVar6 = pSVar6 + 1;
              pSVar13 = pSVar13 + 1;
            }
            local_8 = local_28.dwTotalPhys;
            uVar4 = FUN_00454d00(param_3,local_28.dwTotalPhys);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_dayinweek_004dc888);
          if (CONCAT31(extraout_var_36,bVar3) != 0) {
            pSVar6 = (SIZE_T *)FUN_0043c260();
            pSVar13 = &local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pSVar13 = *pSVar6;
              pSVar6 = pSVar6 + 1;
              pSVar13 = pSVar13 + 1;
            }
            local_8 = local_28.dwAvailPageFile + 1;
            uVar4 = FUN_00454d00(param_3,local_8);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_month_004dc874);
          if (CONCAT31(extraout_var_37,bVar3) != 0) {
            pSVar6 = (SIZE_T *)FUN_0043c260();
            pSVar13 = &local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pSVar13 = *pSVar6;
              pSVar6 = pSVar6 + 1;
              pSVar13 = pSVar13 + 1;
            }
            local_8 = local_28.dwAvailPhys + 1;
            uVar4 = FUN_00454d00(param_3,local_8);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dc860);
          if (CONCAT31(extraout_var_38,bVar3) != 0) {
            pSVar6 = (SIZE_T *)FUN_0043c260();
            pSVar13 = &local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pSVar13 = *pSVar6;
              pSVar6 = pSVar6 + 1;
              pSVar13 = pSVar13 + 1;
            }
            local_8 = local_28.dwTotalPageFile + 0x76c;
            uVar4 = FUN_00454d00(param_3,local_8);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_ticks_004dc694);
          if (CONCAT31(extraout_var_39,bVar3) != 0) {
            local_28.dwAvailVirtual = _clock();
            uVar4 = FUN_00454ca0(param_3,SUB84((double)(int)local_28.dwAvailVirtual,0),
                                 (int)((ulonglong)(double)(int)local_28.dwAvailVirtual >> 0x20));
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_milliseconds_004dc680);
          if (CONCAT31(extraout_var_40,bVar3) != 0) {
            fVar14 = FUN_0043c2f0();
            uVar4 = FUN_00454ca0(param_3,SUB84((double)(fVar14 * (float10)0.001),0),
                                 (int)((ulonglong)(double)(fVar14 * (float10)0.001) >> 0x20));
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_numerictime_004dc798);
          if (CONCAT31(extraout_var_41,bVar3) != 0) {
            tVar15 = _time((time_t *)0x0);
            local_28.dwAvailVirtual = (SIZE_T)tVar15;
            uVar4 = FUN_00454ca0(param_3,SUB84((double)(int)local_28.dwAvailVirtual,0),
                                 (int)((ulonglong)(double)(int)local_28.dwAvailVirtual >> 0x20));
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_longtime_004dc7d4);
          if (CONCAT31(extraout_var_42,bVar3) != 0) {
            piVar7 = (int *)FUN_0043c260();
            FUN_00490d10((byte *)(acStack_12f + 3),0xff,(byte *)s__I__M__S__p_004dc4bc,piVar7);
            if (acStack_12f[3] == '0') {
              uVar4 = FUN_00454fa0(param_3,acStack_12f + 4);
              return uVar4;
            }
            uVar4 = FUN_00454fa0(param_3,acStack_12f + 3);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)&DAT_004dc66c);
          if (CONCAT31(extraout_var_43,bVar3) != 0) {
            piVar7 = (int *)FUN_0043c260();
            FUN_00490d10((byte *)(acStack_12f + 3),0xff,(byte *)s__I__M__p_004dc4d4,piVar7);
            if (acStack_12f[3] == '0') {
              uVar4 = FUN_00454fa0(param_3,acStack_12f + 4);
              return uVar4;
            }
            uVar4 = FUN_00454fa0(param_3,acStack_12f + 3);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_seconds_004dc6d0);
          if (CONCAT31(extraout_var_44,bVar3) != 0) {
            pSVar6 = (SIZE_T *)FUN_0043c260();
            pSVar13 = &local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pSVar13 = *pSVar6;
              pSVar6 = pSVar6 + 1;
              pSVar13 = pSVar13 + 1;
            }
            local_8 = local_2c;
            uVar4 = FUN_00454d00(param_3,local_2c);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_minutes_004dc784);
          if (CONCAT31(extraout_var_45,bVar3) != 0) {
            pSVar6 = (SIZE_T *)FUN_0043c260();
            pSVar13 = &local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pSVar13 = *pSVar6;
              pSVar6 = pSVar6 + 1;
              pSVar13 = pSVar13 + 1;
            }
            local_8 = local_28.dwLength;
            uVar4 = FUN_00454d00(param_3,local_28.dwLength);
            return uVar4;
          }
          bVar3 = FUN_00437430(param_1,(int *)s_hours_004dc824);
          if (CONCAT31(extraout_var_46,bVar3) != 0) {
            pSVar6 = (SIZE_T *)FUN_0043c260();
            pSVar13 = &local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pSVar13 = *pSVar6;
              pSVar6 = pSVar6 + 1;
              pSVar13 = pSVar13 + 1;
            }
            local_8 = local_28.dwMemoryLoad;
            uVar4 = FUN_00454d00(param_3,local_28.dwMemoryLoad);
            return uVar4;
          }
          iVar5 = FUN_004131b0(this,param_1,param_2,param_3);
          if (iVar5 == 0) {
            return 0;
          }
          sVar11 = 1;
          uVar4 = FUN_0046e970((int)this);
          if (0 < (short)uVar4) {
            do {
              FUN_00437520((undefined4 *)((int)&local_28.dwAvailPhys + 2),param_1);
              iVar5 = FUN_0046e950(this,sVar11);
              if (iVar5 != 0) {
                piVar7 = (int *)FUN_00458a00(iVar5);
                (**(code **)(*piVar7 + 0x70))();
                pbVar8 = local_22c;
                pbVar10 = (byte *)((int)&local_28.dwAvailPhys + 2);
                do {
                  bVar2 = *pbVar8;
                  bVar3 = bVar2 < *pbVar10;
                  if (bVar2 != *pbVar10) {
LAB_0046fdbb:
                    iVar5 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                    goto LAB_0046fdc0;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar3 = bVar2 < pbVar10[1];
                  if (bVar2 != pbVar10[1]) goto LAB_0046fdbb;
                  pbVar8 = pbVar8 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar2 != 0);
                iVar5 = 0;
LAB_0046fdc0:
                if (iVar5 == 0) {
                  uVar4 = FUN_0046e950(this,sVar11);
                  uVar4 = FUN_00454d50(param_3,uVar4);
                  return uVar4;
                }
              }
              sVar11 = sVar11 + 1;
              uVar4 = FUN_0046e970((int)this);
            } while (sVar11 <= (short)uVar4);
          }
          return 0x10000;
        }
        piVar7 = (int *)FUN_0043c260();
        FUN_00490d10((byte *)(acStack_12f + 3),0xff,(byte *)s__A___B__d_004dc950,piVar7);
        uVar9 = 0xffffffff;
        pcVar12 = acStack_12f + 3;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        local_8 = uVar9 - 1;
        if (acStack_12f[uVar9] == '0') {
          local_8 = uVar9 - 2;
          acStack_12f[uVar9] = acStack_12f[uVar9 + 1];
        }
        piVar7 = (int *)FUN_0043c260();
        FUN_00490d10((byte *)(acStack_12f + local_8 + 3),0xff,&DAT_004dc95c,piVar7);
        uVar4 = FUN_00454fa0(param_3,acStack_12f + 3);
        return uVar4;
      }
      piVar7 = (int *)FUN_0043c260();
      FUN_00490d10((byte *)(acStack_12f + 3),0xff,(byte *)s__a___b__d_004dc964,piVar7);
      uVar9 = 0xffffffff;
      pcVar12 = acStack_12f + 3;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      local_8 = uVar9 - 1;
      if (acStack_12f[uVar9] == '0') {
        local_8 = uVar9 - 2;
        acStack_12f[uVar9] = acStack_12f[uVar9 + 1];
      }
      piVar7 = (int *)FUN_0043c260();
      FUN_00490d10((byte *)(acStack_12f + local_8 + 3),0xff,&DAT_004dc95c,piVar7);
      uVar4 = FUN_00454fa0(param_3,acStack_12f + 3);
      return uVar4;
    }
  }
  uVar4 = FUN_00454d00(param_3,DAT_004dc55c);
  return uVar4;
}


