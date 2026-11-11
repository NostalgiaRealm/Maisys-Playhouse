
/* ==== FUN_0046fe40 @ 0046fe40 ==== 
 * signature: int __thiscall FUN_0046fe40(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0046fe40-004700b9;004700d8-00470434
 */

int __thiscall FUN_0046fe40(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined3 extraout_var;
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
  code *pcVar4;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined4 uVar5;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  char *pcVar11;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar12;
  char local_154 [256];
  undefined2 local_54 [3];
  char *local_4e;
  undefined2 local_48 [3];
  char *local_42;
  AFX_EXCEPTION_LINK local_3c [12];
  int local_30;
  int local_2c;
  int local_28;
  SIZE_T local_24;
  void *local_20;
  undefined2 local_1a;
  short sStack_18;
  undefined1 uStack_16;
  int iStack_15;
  undefined1 uStack_11;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004700c6;
  *unaff_FS_OFFSET = &local_10;
  iVar8 = 0;
  uStack_11 = (undefined1)((uint)&stack0xfffffea0 >> 0x18);
  iStack_15 = (int)&stack0xfffffea0 * 0x100;
  local_20 = this;
  if ((*(int **)((int)this + 0x8e) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)((int)this + 0x8e) + 0x100))(param_1,param_2,param_3),
     iVar3 == 0)) {
    iVar8 = 0;
    goto LAB_0046febe;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_multithread_004dc5a4);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_readcount_004dc5f4);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      iVar8 = FUN_00455c10(param_3,&DAT_004d98a8,(int *)0x0);
      goto LAB_0046febe;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_seekcount_004dc5e0);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      iVar8 = FUN_00455c10(param_3,&DAT_004d98b4,(int *)0x0);
      goto LAB_0046febe;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_writecount_004dc5cc);
    if (CONCAT31(extraout_var_02,bVar1) != 0) {
      iVar8 = FUN_00455c10(param_3,&DAT_004d98b0,(int *)0x0);
      goto LAB_0046febe;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_readchunkcount_004dc5b8);
    if (CONCAT31(extraout_var_03,bVar1) != 0) {
      iVar8 = FUN_00455c10(param_3,&DAT_004d98ac,(int *)0x0);
      goto LAB_0046febe;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_readchunk_004dc608);
    if (CONCAT31(extraout_var_04,bVar1) != 0) {
      iVar8 = FUN_00455c10(param_3,&DAT_004d98a4,(int *)0x0);
      goto LAB_0046febe;
    }
    bVar1 = FUN_00437430(param_1,(int *)s_enablereadchunk_004dc61c);
    if (CONCAT31(extraout_var_05,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)&DAT_004dc734);
      if ((CONCAT31(extraout_var_06,bVar1) == 0) &&
         (bVar1 = FUN_00437430(param_1,(int *)s_newproject_004dc75c),
         CONCAT31(extraout_var_07,bVar1) == 0)) {
        bVar1 = FUN_00437430(param_1,(int *)s_memerrorcount_004dc7c0);
        if (CONCAT31(extraout_var_08,bVar1) == 0) {
          bVar1 = FUN_00437430(param_1,(int *)s_usememory_004dc658);
          if (CONCAT31(extraout_var_09,bVar1) == 0) {
            bVar1 = FUN_00437430(param_1,(int *)s_replaceproject_004dc6e4);
            if (CONCAT31(extraout_var_10,bVar1) == 0) {
              bVar1 = FUN_00437430(param_1,(int *)s_openproject_004dc720);
              if (CONCAT31(extraout_var_11,bVar1) == 0) {
                bVar1 = FUN_00437430(param_1,(int *)s_mastervolume_004dc074);
                if (CONCAT31(extraout_var_12,bVar1) == 0) {
                  bVar1 = FUN_00437430(param_1,(int *)s_ejectcd_004dc84c);
                  if (CONCAT31(extraout_var_13,bVar1) == 0) {
                    bVar1 = FUN_00437430(param_1,(int *)s_lockcd_004dc7fc);
                    if (CONCAT31(extraout_var_14,bVar1) == 0) {
                      bVar1 = FUN_00437430(param_1,(int *)s_volumename_004dc644);
                      if (CONCAT31(extraout_var_15,bVar1) == 0) {
                        bVar1 = FUN_00437430(param_1,(int *)s_gamemode_004d9420);
                        if (CONCAT31(extraout_var_16,bVar1) == 0) {
                          bVar1 = FUN_00437430(param_1,(int *)s_monitorbitdepth_004d93a8);
                          if (CONCAT31(extraout_var_17,bVar1) == 0) {
                            iVar8 = FUN_004135a0(local_20,param_1,param_2,param_3);
                          }
                          else {
                            iVar8 = FUN_00455c10(param_3,(int *)&local_24,(int *)0x0);
                          }
                        }
                        else {
                          iVar8 = FUN_00455730(param_3,(char *)&iStack_15,(int *)0x0);
                          if (iVar8 == 0) {
                            iVar8 = 0;
                          }
                        }
                      }
                      else {
                        iVar8 = FUN_00456560(param_3,local_154,0x100,(int *)0x0);
                        if (iVar8 == 0) {
                          if (*(LPVOID *)((int)local_20 + 0xa6) != (LPVOID)0x0) {
                            FUN_0043f6d0(*(LPVOID *)((int)local_20 + 0xa6));
                          }
                          pcVar12 = FUN_0043f650(local_154);
                          *(char **)((int)local_20 + 0xa6) = pcVar12;
                        }
                      }
                    }
                    else {
                      iVar8 = FUN_00455730(param_3,(char *)&iStack_15,(int *)0x0);
                      if (iVar8 == 0) {
                        if ((char)iStack_15 == '\0') {
                          FUN_0040ff40(DAT_004d99a8);
                        }
                        else {
                          FUN_0040ff10(DAT_004d99a8);
                        }
                      }
                    }
                  }
                  else {
                    sStack_18 = 0;
                    local_1a = 0;
                    FUN_00471060(local_20,&sStack_18,(int)&local_1a,0);
                    uVar5 = FUN_0046e970((int)local_20);
                    sVar9 = 1;
                    if (1 < (short)uVar5) {
                      do {
                        sVar10 = sVar9 + 1;
                        iVar8 = FUN_0046e950(local_20,sVar9);
                        (**(code **)(**(int **)(iVar8 + 0x48) + 0x178))
                                  (CONCAT13((char)iStack_15,CONCAT12(uStack_16,sStack_18)));
                        uVar5 = FUN_0046e970((int)local_20);
                        sVar9 = sVar10;
                      } while (sVar10 < (short)uVar5);
                    }
                    iVar8 = FUN_00455730(param_3,(char *)&iStack_15,(int *)0x0);
                    if (iVar8 == 0) {
                      cVar2 = FUN_0043ee10(CONCAT13((char)iStack_15,CONCAT12(uStack_16,sStack_18)),
                                           CONCAT22(sStack_18,local_1a),(char)iStack_15);
                      if (cVar2 != '\0') {
                        iVar8 = 0;
                        *(undefined2 *)((int)local_20 + 0xaa) = 0;
                      }
                    }
                  }
                }
                else {
                  iVar8 = FUN_00455c10(param_3,(int *)&local_24,(int *)0x0);
                  if (iVar8 == 0) {
                    FUN_0043ed40(local_24);
                  }
                }
              }
              else if ((*param_3 == 0x66) && (*(char **)(param_3 + 7) != (char *)0x0)) {
                local_42 = local_154;
                uVar6 = 0xffffffff;
                pcVar12 = *(char **)(param_3 + 7);
                do {
                  pcVar11 = pcVar12;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar11 = pcVar12 + 1;
                  cVar2 = *pcVar12;
                  pcVar12 = pcVar11;
                } while (cVar2 != '\0');
                uVar6 = ~uVar6;
                pcVar12 = pcVar11 + -uVar6;
                pcVar11 = local_154;
                for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
                  pcVar12 = pcVar12 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar11 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                local_48[0] = 0;
                pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 4),1,0xc,&local_2c);
                DAT_004e34cc = (*pcVar4)(local_2c,0,local_48,2);
                iVar8 = 0;
              }
              else {
                iVar8 = 0x60002;
              }
            }
            else if ((*param_3 == 0x66) && (*(char **)(param_3 + 7) != (char *)0x0)) {
              local_4e = local_154;
              uVar6 = 0xffffffff;
              pcVar12 = *(char **)(param_3 + 7);
              do {
                pcVar11 = pcVar12;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar11 = pcVar12 + 1;
                cVar2 = *pcVar12;
                pcVar12 = pcVar11;
              } while (cVar2 != '\0');
              uVar6 = ~uVar6;
              pcVar12 = pcVar11 + -uVar6;
              pcVar11 = local_154;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar11 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar11 = pcVar11 + 1;
              }
              local_54[0] = 0;
              pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 4),1,0xc,&local_30);
              DAT_004e34cc = (*pcVar4)(local_30,0,local_54,3);
              iVar8 = 0;
            }
            else {
              iVar8 = 0x60002;
            }
          }
          else {
            iVar8 = FUN_00455c10(param_3,(int *)&local_24,(int *)0x0);
            if (iVar8 == 0) {
              if (DAT_004dc584 != local_24) {
                if (DAT_004dc588 != (HGLOBAL)0x0) {
                  FUN_0043f7a0(DAT_004dc588);
                  DAT_004dc584 = 0;
                  DAT_004dc588 = (HGLOBAL)0x0;
                }
                if (local_24 != 0) {
                  uStack_16 = DAT_004db9c4;
                  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_3c);
                  local_8 = 1;
                  DAT_004db9c4 = 0;
                  DAT_004dc588 = FUN_0043f770(local_24);
                  DAT_004dc584 = local_24;
                  local_8 = 0xffffffff;
                  FUN_004700d0();
                  DAT_004db9c4 = uStack_16;
                  iVar8 = 0;
                  goto LAB_0046febe;
                }
              }
            }
            else if (DAT_004dc588 != (HGLOBAL)0x0) {
              FUN_0043f7a0(DAT_004dc588);
              DAT_004dc584 = 0;
              DAT_004dc588 = (HGLOBAL)0x0;
            }
            iVar8 = 0;
          }
        }
        else {
          local_28 = DAT_004db9a0;
          iVar8 = FUN_00455c10(param_3,&local_28,(int *)0x0);
          DAT_004db9a0 = local_28;
        }
      }
      goto LAB_0046febe;
    }
    pcVar12 = &DAT_004d98a0;
  }
  else {
    pcVar12 = &DAT_004dc56c;
  }
  iVar8 = FUN_00455730(param_3,pcVar12,(int *)0x0);
LAB_0046febe:
  *unaff_FS_OFFSET = local_10;
  return iVar8;
}


