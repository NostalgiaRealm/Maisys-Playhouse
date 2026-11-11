
/* ==== FUN_12025460 @ 12025460 ==== 
 * signature: undefined4 __cdecl FUN_12025460(int param_1, int param_2)
 * body: 12025460-12026da5
 */

undefined4 __cdecl FUN_12025460(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int local_174;
  int iStack_170;
  undefined2 local_16c;
  int local_16a;
  undefined4 local_166;
  undefined4 local_162;
  undefined4 local_15e;
  int local_158;
  int local_154;
  undefined2 local_150;
  int local_14e;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined2 local_13c;
  int local_13a;
  undefined4 local_136;
  undefined4 local_132;
  undefined4 local_12e;
  int iStack_128;
  undefined2 local_124;
  undefined4 local_122;
  undefined4 local_11e;
  undefined4 local_11a;
  undefined4 local_116;
  int local_110;
  int iStack_10c;
  undefined2 local_108;
  int local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined4 local_fa;
  undefined2 uStack_f4;
  undefined4 uStack_f2;
  undefined4 uStack_ee;
  int iStack_ea;
  char *apcStack_e6 [7];
  undefined2 uStack_c8;
  undefined4 uStack_c6;
  undefined4 uStack_c2;
  int iStack_be;
  char *apcStack_ba [7];
  undefined2 local_9c;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined2 local_88;
  int local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined2 local_74;
  int local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_60;
  int iStack_5c;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_2c;
  short local_2a;
  
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
     (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 6))) {
    return 0x10000;
  }
  local_9c = 0x69;
  local_154 = 0;
  local_158 = 0;
  local_110 = 0;
  local_108 = 0x69;
  local_96 = 0;
  local_92 = 0;
  local_9a = 0;
  local_8e = 0;
  local_102 = 0;
  local_13c = 0x69;
  local_fe = 0;
  local_106 = 0;
  local_fa = 0;
  local_124 = 0x69;
  local_136 = 0;
  local_132 = 0;
  local_13a = 0;
  local_12e = 0;
  local_11e = 0;
  local_16c = 0x69;
  local_11a = 0;
  local_122 = 0;
  local_116 = 0;
  local_150 = 0x69;
  local_166 = 0;
  local_162 = 0;
  local_16a = 0;
  local_15e = 0;
  local_14a = 0;
  local_88 = 0x69;
  local_146 = 0;
  local_14e = 0;
  local_142 = 0;
  local_74 = 0x69;
  local_82 = 0;
  local_7e = 0;
  local_86 = 0;
  local_7a = 0;
  local_6e = 0;
  local_6a = 0;
  local_2a = 1;
  local_72 = 0;
  local_58 = 1;
  local_66 = 0;
  local_56 = 1;
  local_2c = 0x14;
  pcVar1 = (code *)FUN_12027370(param_1,0,0x20,&local_174);
  DAT_12039a9c = (*pcVar1)(local_174,&local_60);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
  DAT_12039a9c = (*pcVar1)(iStack_170,local_60,s_worldmanager_12037d38,0,&local_9c);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_128);
  DAT_12039a9c = (*pcVar1)(iStack_128,local_9a,s_currentscene_12037d24,0,&local_108);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_10c);
  DAT_12039a9c = (*pcVar1)(iStack_10c,local_9a,s_sharedscene_12037d10,0,&local_88);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_5c);
  DAT_12039a9c = (*pcVar1)(iStack_5c,local_9a,s_autosharedscene_12037cfc,0,&local_2c);
  if (local_106 != 0) {
    if ((*(byte *)(param_1 + 0x7b) & 0x20) == 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
      DAT_12039a9c = (*pcVar1)(local_174,local_106,s_section_12037ce8,0,&local_150);
      switch(*(undefined4 *)(param_1 + 0x5a)) {
      case 1:
        local_154 = local_14e;
        break;
      case 2:
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
        DAT_12039a9c = (*pcVar1)(local_174,local_14e,s_previous_12037cd4,0,&local_16c);
        if ((local_16a == 0) && ((*(byte *)(param_1 + 0x78) & 4) != 0)) {
          FUN_120275d0(&local_16c,&local_150);
          FUN_120275d0(&local_124,&local_150);
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
          while (local_16a != 0) {
            FUN_120275d0(&local_124,&local_16c);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
          }
          FUN_120275d0(&local_16c,&local_124);
        }
        local_154 = local_16a;
        break;
      case 3:
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
        DAT_12039a9c = (*pcVar1)(local_174,local_14e,&DAT_12037cc0,0,&local_16c);
        if ((local_16a == 0) && ((*(byte *)(param_1 + 0x78) & 4) != 0)) {
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_14e,s_parent_1203790c,0,&local_16c);
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
          DAT_12039a9c = (*pcVar1)(iStack_170,local_16a,s_childelem_12037cac,&local_58,&local_16c);
        }
        local_154 = local_16a;
        break;
      case 4:
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
        DAT_12039a9c = (*pcVar1)(local_174,local_14e,s_parent_1203790c,0,&local_16c);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
        DAT_12039a9c = (*pcVar1)(iStack_170,local_16a,s_childelem_12037cac,&local_58,&local_16c);
        local_154 = local_16a;
        break;
      case 5:
        FUN_120275d0(&local_124,&local_150);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
        DAT_12039a9c = (*pcVar1)(local_174,local_14e,&DAT_12037cc0,0,&local_16c);
        while (local_16a != 0) {
          FUN_120275d0(&local_124,&local_16c);
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
        }
        FUN_120275d0(&local_16c,&local_124);
        local_154 = local_16a;
      }
    }
    else {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x18,&local_174);
      DAT_12039a9c = (*pcVar1)(local_174,param_1,&local_154,param_1 + 10);
    }
    if (local_154 != 0) {
      if ((*(byte *)(param_1 + 0x7b) & 0x40) == 0) {
        if (local_154 != 0) {
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_106,s_subsection_12037c98,0,&local_150);
          switch(*(undefined4 *)(param_1 + 100)) {
          case 1:
            local_158 = local_14e;
            break;
          case 2:
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_14e,s_previous_12037cd4,0,&local_16c);
            if ((local_16a == 0) && ((*(byte *)(param_1 + 0x78) & 4) != 0)) {
              FUN_120275d0(&local_16c,&local_150);
              FUN_120275d0(&local_124,&local_150);
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
              DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
              while (local_16a != 0) {
                FUN_120275d0(&local_124,&local_16c);
                pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
                DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
              }
              FUN_120275d0(&local_16c,&local_124);
            }
            local_158 = local_16a;
            break;
          case 3:
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_14e,&DAT_12037cc0,0,&local_16c);
            if ((local_16a == 0) && ((*(byte *)(param_1 + 0x78) & 4) != 0)) {
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
              DAT_12039a9c = (*pcVar1)(local_174,local_14e,s_parent_1203790c,0,&local_16c);
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
              DAT_12039a9c = (*pcVar1)(iStack_170,local_16a,s_childelem_12037cac,&local_58,
                                       &local_16c);
            }
            local_158 = local_16a;
            break;
          case 4:
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_154,s_childelem_12037cac,&local_58,&local_16c);
            local_158 = local_16a;
            break;
          case 5:
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_154,s_childelem_12037cac,&local_58,&local_16c);
            while (local_16a != 0) {
              FUN_120275d0(&local_124,&local_16c);
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
              DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
            }
            FUN_120275d0(&local_16c,&local_124);
            local_158 = local_16a;
            break;
          case 6:
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_154,s_childelem_12037cac,&local_58,&local_16c);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
            DAT_12039a9c = (*pcVar1)(iStack_170,local_106,s_subsection_12037c98,0,&local_150);
            iVar2 = local_14e;
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_128);
            DAT_12039a9c = (*pcVar1)(iStack_128,local_106,s_section_12037ce8,0,&local_150);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_10c);
            DAT_12039a9c = (*pcVar1)(iStack_10c,local_14e,s_childelem_12037cac,&local_58,&local_150)
            ;
            while (((local_14e != 0 && (local_16a != 0)) &&
                   (FUN_120275d0(&local_124,&local_16c), local_14e != iVar2))) {
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
              DAT_12039a9c = (*pcVar1)(local_174,local_14e,&DAT_12037cc0,0,&local_150);
              if (local_16a == 0) break;
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
              DAT_12039a9c = (*pcVar1)(iStack_170,local_16a,&DAT_12037cc0,0,&local_16c);
            }
            local_158 = local_16a;
            break;
          case 7:
            uStack_f2 = 0xffffffff;
            uStack_f4 = 0x66;
            uStack_ee = 0;
            iStack_ea = 0;
            apcStack_e6[0] = (char *)0x0;
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,apcStack_e6,0x100);
            if (apcStack_e6[0] != (char *)0x0) {
              uStack_ee = 0x100;
              *apcStack_e6[0] = '\0';
            }
            uStack_c2 = 0;
            iStack_be = 0;
            apcStack_ba[0] = (char *)0x0;
            uStack_c6 = 0xffffffff;
            uStack_c8 = 0x66;
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,apcStack_ba,0x100);
            if (apcStack_ba[0] != (char *)0x0) {
              uStack_c2 = 0x100;
              *apcStack_ba[0] = '\0';
            }
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_154,s_childelem_12037cac,&local_58,&local_16c);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
            DAT_12039a9c = (*pcVar1)(iStack_170,local_106,s_subsection_12037c98,0,&local_150);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_128);
            DAT_12039a9c = (*pcVar1)(iStack_128,local_14e,&DAT_12037920,0,&uStack_f4);
            while (local_16a != 0) {
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
              DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037920,0,&uStack_c8);
              if ((iStack_ea == iStack_be) &&
                 (iVar2 = FUN_12024240(apcStack_ba[0],apcStack_e6[0]), iVar2 == 0)) break;
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
              DAT_12039a9c = (*pcVar1)(iStack_170,local_16a,&DAT_12037cc0,0,&local_16c);
            }
            local_158 = local_16a;
            if (apcStack_e6[0] != (char *)0x0) {
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_174);
              DAT_12039a9c = (*pcVar1)(local_174,apcStack_e6[0]);
              apcStack_e6[0] = (char *)0x0;
              uStack_ee = 0;
              iStack_ea = 0;
            }
            if (apcStack_ba[0] != (char *)0x0) {
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_174);
              DAT_12039a9c = (*pcVar1)(local_174,apcStack_ba[0]);
              apcStack_ba[0] = (char *)0x0;
              uStack_c2 = 0;
              iStack_be = 0;
            }
          }
        }
      }
      else {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x18,&local_174);
        DAT_12039a9c = (*pcVar1)(local_174,param_1,&local_158,param_1 + 0x12);
      }
    }
    if (((local_154 == 0) || (local_158 == 0)) || ((*(byte *)(param_1 + 0x7b) & 0x80) == 0)) {
      if ((local_154 != 0) && (local_158 != 0)) {
        FUN_120275d0(&local_150,&local_108);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
        DAT_12039a9c = (*pcVar1)(local_174,local_158,s_childelem_12037cac,&local_58,&local_74);
        switch(*(undefined4 *)(param_1 + 0x6e)) {
        case 2:
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_14e,s_previous_12037cd4,0,&local_16c);
          if ((local_86 == local_16a) || ((local_2a != 0 && (local_72 == local_16a)))) {
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_16a,s_previous_12037cd4,0,&local_16c);
          }
          if ((local_16a == 0) && ((*(byte *)(param_1 + 0x78) & 4) != 0)) {
            FUN_120275d0(&local_16c,&local_150);
            FUN_120275d0(&local_124,&local_150);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
            while (local_16a != 0) {
              FUN_120275d0(&local_124,&local_16c);
              pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
              DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
            }
            FUN_120275d0(&local_16c,&local_124);
          }
          local_110 = local_16a;
          FUN_120275d0(&local_13c,&local_16c);
          break;
        case 3:
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_14e,&DAT_12037cc0,0,&local_16c);
          if ((local_16a == 0) && ((*(byte *)(param_1 + 0x78) & 4) != 0)) {
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_14e,s_parent_1203790c,0,&local_16c);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
            DAT_12039a9c = (*pcVar1)(iStack_170,local_16a,s_childelem_12037cac,&local_58,&local_16c)
            ;
          }
          if ((local_86 == local_16a) || ((local_2a != 0 && (local_72 == local_16a)))) {
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
          }
          local_110 = local_16a;
          FUN_120275d0(&local_13c,&local_16c);
          break;
        case 4:
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_158,s_childelem_12037cac,&local_58,&local_13c);
          if ((local_86 == local_13a) || ((local_2a != 0 && (local_72 == local_13a)))) {
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_13a,&DAT_12037cc0,0,&local_13c);
          }
          break;
        case 5:
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_158,s_childelem_12037cac,&local_58,&local_13c);
          while (local_13a != 0) {
            FUN_120275d0(&local_124,&local_13c);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_13a,&DAT_12037cc0,0,&local_13c);
          }
          FUN_120275d0(&local_13c,&local_124);
          break;
        case 6:
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_158,s_childelem_12037cac,&local_58,&local_13c);
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
          DAT_12039a9c = (*pcVar1)(iStack_170,local_106,s_parent_1203790c,0,&local_16c);
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_128);
          DAT_12039a9c = (*pcVar1)(iStack_128,local_16a,s_childelem_12037cac,&local_58,&local_16c);
          while (((local_16a != 0 && (local_13a != 0)) &&
                 (FUN_120275d0(&local_124,&local_13c), local_16a != local_106))) {
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_16a,&DAT_12037cc0,0,&local_16c);
            if (local_13a == 0) break;
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
            DAT_12039a9c = (*pcVar1)(iStack_170,local_13a,&DAT_12037cc0,0,&local_13c);
          }
          break;
        case 7:
          uStack_f2 = 0xffffffff;
          uStack_f4 = 0x66;
          uStack_ee = 0;
          iStack_ea = 0;
          apcStack_e6[0] = (char *)0x0;
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,apcStack_e6,0x100);
          if (apcStack_e6[0] != (char *)0x0) {
            uStack_ee = 0x100;
            *apcStack_e6[0] = '\0';
          }
          uStack_c2 = 0;
          iStack_be = 0;
          apcStack_ba[0] = (char *)0x0;
          uStack_c6 = 0xffffffff;
          uStack_c8 = 0x66;
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,apcStack_ba,0x100);
          if (apcStack_ba[0] != (char *)0x0) {
            uStack_c2 = 0x100;
            *apcStack_ba[0] = '\0';
          }
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
          DAT_12039a9c = (*pcVar1)(local_174,local_158,s_childelem_12037cac,&local_58,&local_13c);
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
          DAT_12039a9c = (*pcVar1)(iStack_170,local_14e,&DAT_12037920,0,&uStack_f4);
          while (local_13a != 0) {
            FUN_120275d0(&local_124,&local_13c);
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,local_13a,&DAT_12037920,0,&uStack_c8);
            if ((iStack_ea == iStack_be) &&
               (iVar2 = FUN_12024240(apcStack_ba[0],apcStack_e6[0]), iVar2 == 0)) break;
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_170);
            DAT_12039a9c = (*pcVar1)(iStack_170,local_13a,&DAT_12037cc0,0,&local_13c);
          }
          if (apcStack_e6[0] != (char *)0x0) {
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,apcStack_e6[0]);
            apcStack_e6[0] = (char *)0x0;
            uStack_ee = 0;
            iStack_ea = 0;
          }
          if (apcStack_ba[0] != (char *)0x0) {
            pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_174);
            DAT_12039a9c = (*pcVar1)(local_174,apcStack_ba[0]);
            apcStack_ba[0] = (char *)0x0;
            uStack_c2 = 0;
            iStack_be = 0;
          }
        }
      }
    }
    else {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x18,&local_174);
      DAT_12039a9c = (*pcVar1)(local_174,param_1,&local_110,param_1 + 0x1a);
      local_136 = 0;
      local_132 = 0;
      local_12e = 0;
      local_13a = local_110;
      local_13c = 0x69;
    }
  }
  if (((local_13a != 0) && (local_154 != 0)) && (local_158 != 0)) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x20),1,0,&local_174);
    DAT_12039a9c = (*pcVar1)(local_174,param_1,local_13a,*(undefined4 *)(param_1 + 0x78));
    return 0;
  }
  return 0x10000;
}


