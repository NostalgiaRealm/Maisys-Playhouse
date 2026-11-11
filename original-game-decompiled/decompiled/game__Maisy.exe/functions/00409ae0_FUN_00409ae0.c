
/* ==== FUN_00409ae0 @ 00409ae0 ==== 
 * signature: undefined4 __thiscall FUN_00409ae0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00409ae0-0040a229
 */

undefined4 __thiscall FUN_00409ae0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 uVar3;
  undefined3 extraout_var_02;
  int iVar4;
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
  undefined3 extraout_var_28;
  undefined3 extraout_var_29;
  undefined3 extraout_var_30;
  undefined3 extraout_var_31;
  int *piVar5;
  int iVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  bVar1 = FUN_00437430(param_1,(int *)s_scenecount_004d931c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_loadedscenes_004d9598);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_monitorbitdepth_004d93a8);
      if (CONCAT31(extraout_var_01,bVar1) != 0) {
        uVar3 = FUN_00454d00(param_3,8);
        return uVar3;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_supportsbitdepth_004d92a4);
      if (CONCAT31(extraout_var_02,bVar1) != 0) {
        if (param_2 != (short *)0x0) {
          iVar4 = FUN_00455c10(param_2,&local_8,(int *)0x0);
          if (iVar4 == 0) {
            uVar3 = FUN_00454c50(param_3,0);
            return uVar3;
          }
        }
        return 0x40004;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_autoresetcursor_004d94e4);
      if (CONCAT31(extraout_var_03,bVar1) != 0) {
        uVar3 = FUN_00454c50(param_3,*(byte *)((int)this + 0xa2));
        return uVar3;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_autoscreenfade_004d94d0);
      if (CONCAT31(extraout_var_04,bVar1) != 0) {
        uVar3 = FUN_00454c50(param_3,*(byte *)((int)this + 0xb1));
        return uVar3;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_combineredraws_004d9498);
      if (CONCAT31(extraout_var_05,bVar1) != 0) {
        uVar3 = FUN_00454c50(param_3,*(byte *)((int)this + 0xaa));
        return uVar3;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_cursorelement_004d9484);
      if (CONCAT31(extraout_var_06,bVar1) != 0) {
        uVar3 = FUN_00454d50(param_3,*(undefined4 *)((int)this + 300));
        return uVar3;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_clickcount_004d94bc);
      if (CONCAT31(extraout_var_07,bVar1) != 0) {
        iVar4 = FUN_00409590((int)this);
        uVar3 = FUN_004106b0(iVar4);
        uVar3 = FUN_00454d00(param_3,(int)(short)uVar3);
        return uVar3;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_opint_004d9394);
      if (CONCAT31(extraout_var_08,bVar1) != 0) {
        uVar3 = FUN_00454d00(param_3,*(undefined4 *)((int)this + 0x14c));
        return uVar3;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_oppoint_004d9380);
      if (CONCAT31(extraout_var_09,bVar1) != 0) {
        uVar3 = FUN_00454db0(param_3,(undefined4 *)((int)this + 0x150));
        return uVar3;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_globaloffset_004d93f8);
      if (CONCAT31(extraout_var_10,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_globalposition_004d940c);
        if (CONCAT31(extraout_var_11,bVar1) == 0) {
          bVar1 = FUN_00437430(param_1,(int *)s_oprect_004d936c);
          if (CONCAT31(extraout_var_12,bVar1) != 0) {
            uVar3 = FUN_00454ed0(param_3,(undefined4 *)((int)this + 0x154));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_elementinrect_004d9434);
          if (CONCAT31(extraout_var_13,bVar1) != 0) {
            if (param_2 != (short *)0x0) {
              iVar4 = FUN_00456410(param_2,&local_14,(int *)0x0);
              if (iVar4 == 0) {
                *(undefined4 *)((int)this + 0x154) = local_14;
                *(undefined4 *)((int)this + 0x158) = local_10;
              }
            }
            uVar3 = FUN_004069c0(this,(short *)((int)this + 0x154));
            uVar3 = FUN_00454d50(param_3,uVar3);
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_elementatpoint_004d9448);
          if (CONCAT31(extraout_var_14,bVar1) != 0) {
            if (param_2 != (short *)0x0) {
              iVar4 = FUN_00455ff0(param_2,&local_c,(int *)0x0);
              if (iVar4 == 0) {
                *(undefined4 *)((int)this + 0x150) = local_c;
              }
            }
            uVar3 = FUN_00406850(this,*(undefined4 *)((int)this + 0x150));
            uVar3 = FUN_00454d50(param_3,uVar3);
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_imagecount_004d93e4);
          if (CONCAT31(extraout_var_15,bVar1) != 0) {
            uVar3 = FUN_00454d00(param_3,*(int *)(*(int *)((int)this + 0x52) + 0x26) +
                                         *(int *)(*(int *)((int)this + 0x56) + 0x26));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_maxthreadlevel_004d93d0);
          if (CONCAT31(extraout_var_16,bVar1) != 0) {
            uVar3 = FUN_00454d00(param_3,(int)*(short *)((int)this + 0x26));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_soundcount_004d92cc);
          if (CONCAT31(extraout_var_17,bVar1) != 0) {
            uVar3 = FUN_00454d00(param_3,DAT_004da36c);
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_messqcount_004d93bc);
          if (CONCAT31(extraout_var_18,bVar1) != 0) {
            uVar3 = FUN_00454d00(param_3,*(undefined4 *)(*(int *)((int)this + 0x86) + 8));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_taskcount_004d9280);
          if (CONCAT31(extraout_var_19,bVar1) != 0) {
            uVar3 = FUN_00454d00(param_3,(int)*(short *)(*(int *)((int)this + 0x6a) + 0xc));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_postponeredraws_004d9358);
          if (CONCAT31(extraout_var_20,bVar1) != 0) {
            uVar3 = FUN_00454c50(param_3,*(byte *)((int)this + 0xa3));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_currentscene_004d9584);
          if (CONCAT31(extraout_var_21,bVar1) != 0) {
            uVar3 = FUN_004053e0((int)this);
            uVar3 = FUN_00454d50(param_3,uVar3);
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_sharedscene_004d9570);
          if (CONCAT31(extraout_var_22,bVar1) != 0) {
            uVar3 = FUN_004053f0((int)this);
            uVar3 = FUN_00454d50(param_3,uVar3);
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_autosharedscene_004d955c);
          if (CONCAT31(extraout_var_23,bVar1) != 0) {
            uVar3 = FUN_00454c50(param_3,*(byte *)((int)this + 0xab));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_menubarheight_004d9548);
          if (CONCAT31(extraout_var_24,bVar1) != 0) {
            uVar3 = FUN_00454d00(param_3,0);
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_gamemode_004d9420);
          if (CONCAT31(extraout_var_25,bVar1) != 0) {
            uVar3 = FUN_00454c50(param_3,0);
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_macsndbuffersize_004d9520);
          if (CONCAT31(extraout_var_26,bVar1) != 0) {
            return 0;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_winsndbuffersize_004d950c);
          if (CONCAT31(extraout_var_27,bVar1) != 0) {
            uVar3 = FUN_00454d00(param_3,DAT_004d91e8);
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_syncronizedraw_004d9290);
          if (CONCAT31(extraout_var_28,bVar1) != 0) {
            iVar4 = FUN_004084c0((int)this);
            uVar3 = FUN_00454d00(param_3,(uint)((*(byte *)(iVar4 + 0x1134) & 0x40) >> 6));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_sharedelement_004d9308);
          if (CONCAT31(extraout_var_29,bVar1) != 0) {
            if (param_2 != (short *)0x0) {
              iVar4 = FUN_00455c10(param_2,&local_8,(int *)0x0);
              if (iVar4 == 0) {
                if ((0 < local_8) && (local_8 <= *(int *)(*(int *)((int)this + 0x72) + 0x26))) {
                  iVar4 = FUN_00430190(*(int *)((int)this + 0x72));
                  FUN_00454d50(param_3,*(undefined4 *)(iVar4 + -8 + local_8 * 8));
                  FUN_004301f0(*(int *)((int)this + 0x72));
                  return 0;
                }
                return 0x10000;
              }
            }
            return 0x40004;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_sharedelemcount_004d92f4);
          if (CONCAT31(extraout_var_30,bVar1) != 0) {
            uVar3 = FUN_00454d00(param_3,*(undefined4 *)(*(int *)((int)this + 0x72) + 0x26));
            return uVar3;
          }
          bVar1 = FUN_00437430(param_1,(int *)s_updaterectlimit_004d926c);
          if (CONCAT31(extraout_var_31,bVar1) != 0) {
            iVar4 = FUN_004084c0((int)this);
            uVar3 = FUN_00454d00(param_3,*(undefined4 *)(iVar4 + 0xcec));
            return uVar3;
          }
          uVar3 = FUN_004131b0(this,param_1,param_2,param_3);
          return uVar3;
        }
      }
      uVar3 = FUN_00454db0(param_3,(undefined4 *)((int)this + 0x148));
      return uVar3;
    }
  }
  iVar6 = 0;
  iVar4 = (**(code **)(*(int *)this + 0x10))();
  FUN_00458a00(iVar4);
  piVar5 = (int *)FUN_0043ed20();
  if (piVar5 != (int *)0x0) {
    if (piVar5 == (int *)0x0) goto LAB_0040a205;
    do {
      if (((((*(uint *)((int)piVar5 + 0x1e) & 2) != 0) && ((short)piVar5[0x18] == 0)) &&
          ((*(uint *)((int)piVar5 + 0x1e) & 0x40000000) == 0)) &&
         (*(short *)((int)piVar5 + 0x22) != 0x43)) {
        iVar4 = *piVar5;
        cVar2 = (**(code **)(iVar4 + 0x218))();
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(iVar4 + 0x21c))();
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(iVar4 + 0x220))();
            if (cVar2 == '\0') goto LAB_0040a205;
          }
          iVar6 = iVar6 + 1;
        }
      }
LAB_0040a205:
      piVar5 = (int *)FUN_0043ed30();
    } while (piVar5 != (int *)0x0);
  }
  uVar3 = FUN_00454d00(param_3,iVar6);
  return uVar3;
}


