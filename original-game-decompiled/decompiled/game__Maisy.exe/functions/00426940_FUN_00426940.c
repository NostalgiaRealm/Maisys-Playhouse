
/* ==== FUN_00426940 @ 00426940 ==== 
 * signature: short __cdecl FUN_00426940(int * param_1, int param_2, short * param_3, char param_4, byte * param_5, undefined4 param_6, int * param_7, undefined4 param_8, undefined4 param_9, short * param_10)
 * body: 00426940-00426cfa;00426d0f-00426f2b;00426f41-004270bf
 */

short __cdecl
FUN_00426940(int *param_1,int param_2,short *param_3,char param_4,byte *param_5,undefined4 param_6,
            int *param_7,undefined4 param_8,undefined4 param_9,short *param_10)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  HGLOBAL pvVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  undefined4 *puVar10;
  short *psVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_124 [26];
  int local_10a;
  undefined4 local_cc [9];
  short local_a8 [13];
  int local_8e;
  AFX_EXCEPTION_LINK local_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  HGLOBAL local_38;
  int local_34;
  uint *local_30;
  short *local_2c;
  int local_28;
  HGLOBAL local_24;
  short *local_20;
  short *local_1c;
  short local_18;
  char local_16;
  char cStack_15;
  undefined1 *puStack_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00426f2c;
  *unaff_FS_OFFSET = &local_10;
  local_18 = 0;
  iVar9 = param_1[2];
  local_34 = param_1[5];
  local_28 = param_1[3];
  local_1c = (short *)param_1[6];
  if ((param_2 < 0) || (*(short *)(iVar9 + 0xc) <= param_2)) {
    local_18 = -1;
    goto LAB_004270af;
  }
  local_24 = (HGLOBAL)0x0;
  puStack_14 = &stack0xfffffed0;
  if ((((*(int *)(iVar9 + 0x1e) == 0x2e524c45) && (puStack_14 = &stack0xfffffed0, param_4 != '\0'))
      && (puStack_14 = &stack0xfffffed0, *(int *)(local_34 + 6) == 0)) &&
     (puStack_14 = &stack0xfffffed0, (*(byte *)(iVar9 + 3) & 0x80) != 0)) {
    puStack_14 = &stack0xfffffed0;
    local_18 = FUN_00426820((int)param_1);
    if (local_18 != 0) goto LAB_004270af;
  }
  local_16 = '\0';
  sVar8 = (short)param_2;
  if (local_1c == (short *)0x0) {
    psVar6 = (short *)(local_28 + 0x18 + param_2 * 0x3a);
    psVar11 = local_a8;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)psVar11 = *(undefined4 *)psVar6;
      psVar6 = psVar6 + 2;
      psVar11 = psVar11 + 2;
    }
    *psVar11 = *psVar6;
    local_20 = local_a8;
    if (local_8e == 0) {
      local_24 = FUN_0043f770(4);
    }
    else {
      local_24 = (HGLOBAL)0x0;
    }
  }
  else {
    if (*local_1c == param_2) {
      if (*(int *)(local_1c + 0x12) != 0) {
        local_16 = '\x01';
      }
    }
    else {
      psVar6 = (short *)(local_28 + 0x18 + param_2 * 0x3a);
      psVar11 = local_1c + 1;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)psVar11 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar11 = psVar11 + 2;
      }
      *psVar11 = *psVar6;
      *local_1c = sVar8;
      psVar6 = local_1c + 0x14;
      if (*(HGLOBAL *)psVar6 != (HGLOBAL)0x0) {
        FUN_0043f7a0(*(HGLOBAL *)psVar6);
        psVar6[0] = 0;
        psVar6[1] = 0;
      }
    }
    local_20 = local_1c + 1;
    piVar13 = (int *)(local_1c + 0x12);
    if (*piVar13 == 0) {
      pvVar4 = FUN_0043f770(4);
      *piVar13 = (int)pvVar4;
    }
    local_24 = (HGLOBAL)*piVar13;
  }
  if ((*(int *)(iVar9 + 0x1e) == 0x2e524c45) && ((*(byte *)(iVar9 + 3) & 0x80) != 0)) {
    cStack_15 = '\x01';
  }
  else {
    uVar5 = FUN_00427160(param_1,(undefined4 *)local_20,(int *)&local_24,param_2,'\0',local_16);
    cStack_15 = (char)uVar5;
  }
  if (cStack_15 == '\0') {
LAB_00426ffc:
    if (local_1c != (short *)0x0) {
      *local_1c = -1;
    }
  }
  else {
    if (*(int *)(iVar9 + 0x1e) == 0) {
LAB_00426f41:
      if (param_1[7] != 0) {
        DAT_004da318 = param_3;
        pvVar2 = (void *)param_1[7];
        if ((param_10 == (short *)0x0) ||
           (((*param_10 <= *param_3 && (param_3[2] <= param_10[2])) &&
            ((param_10[1] <= param_3[1] && (param_3[3] <= param_10[3])))))) {
          psVar6 = local_20 + 1;
        }
        else {
          local_54 = *(undefined4 *)(local_20 + 1);
          local_50 = *(undefined4 *)(local_20 + 3);
          local_5c = *(undefined4 *)param_3;
          psVar6 = (short *)&local_54;
          local_58 = *(undefined4 *)(param_3 + 2);
          FUN_004270c0(psVar6,(short *)&local_5c,param_10);
          param_3 = (short *)&local_5c;
        }
        FUN_0047b7d0(pvVar2,(undefined4 *)local_20,psVar6,param_3,param_5,param_6,param_7,'\0');
        DAT_004da318 = (short *)0x0;
      }
    }
    else if (*(int *)(iVar9 + 0x1e) == 0x2e524c45) {
      if ((*(byte *)(iVar9 + 3) & 0x80) == 0) goto LAB_00426f41;
      if ((*(byte *)(iVar9 + 3) & 0x80) != 0) {
        local_30 = (uint *)(local_34 + 6);
        uVar1 = *local_30;
        if ((uVar1 == 0) || (local_3c = param_1 + 7, *local_3c == 0)) {
          uVar5 = FUN_00427160(param_1,(undefined4 *)local_20,(int *)&local_24,param_2,'\0',local_16
                              );
          cStack_15 = (char)uVar5;
          if (cStack_15 == '\x01') {
            FUN_00428d40((int)local_124);
            local_8 = 3;
            iVar9 = param_2 * 0x3a + local_28;
            if ((*(char *)(iVar9 + 0x16) == '\0') || (cVar3 = '\0', *(char *)(iVar9 + 0x17) != '\0')
               ) {
              cVar3 = '\x01';
            }
            FUN_00428df0(local_124,*(HGLOBAL *)(local_20 + 0xd),cVar3);
            puVar10 = (undefined4 *)((local_10a == 0) - 1 & (uint)local_124);
            if (puVar10 != (undefined4 *)0x0) {
              pvVar2 = (void *)param_1[7];
              if ((param_10 == (short *)0x0) ||
                 ((((*param_10 <= *param_3 && (param_3[2] <= param_10[2])) &&
                   (param_10[1] <= param_3[1])) && (param_3[3] <= param_10[3])))) {
                psVar6 = local_20 + 1;
              }
              else {
                local_64 = *(undefined4 *)(local_20 + 1);
                local_60 = *(undefined4 *)(local_20 + 3);
                local_6c = *(undefined4 *)param_3;
                local_68 = *(undefined4 *)(param_3 + 2);
                param_3 = (short *)&local_6c;
                FUN_004270c0((short *)&local_64,param_3,param_10);
                psVar6 = (short *)&local_64;
              }
              FUN_0047b7d0(pvVar2,puVar10,psVar6,param_3,param_5,param_6,param_7,'\0');
            }
            local_8 = 0xffffffff;
            FUN_00426f36();
          }
        }
        else {
          if ((*(int *)(uVar1 + 0x1a) == 0) || (uVar1 == 0)) {
            *(undefined2 *)(local_34 + 4) = 0xffff;
          }
          local_2c = (short *)(local_34 + 4);
          if (((param_2 < *local_2c) || (*local_2c + 1 < param_2)) &&
             (pcVar12 = (char *)(param_2 * 0x3a + local_28 + 0x17), *pcVar12 == '\0')) {
            local_38 = FUN_0043f770(4);
            iVar9 = param_2;
            while( true ) {
              if (((iVar9 < 1) || (*pcVar12 != '\0')) || (pcVar12[-1] == '\0')) goto LAB_00426bd7;
              if (*local_2c == iVar9) break;
              pcVar12 = pcVar12 + -0x3a;
              iVar9 = iVar9 + -1;
            }
            iVar9 = *local_2c + 1;
LAB_00426bd7:
            AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_84);
            local_8 = 1;
            if (iVar9 < param_2) {
              piVar13 = (int *)(local_28 + 0x32 + iVar9 * 0x3a);
              do {
                if (*piVar13 == 0) {
                  FUN_00427160(param_1,local_cc,(int *)&local_38,iVar9,'\0','\0');
                  pvVar4 = local_38;
                  if (((char)piVar13[-7] == '\0') || (*(char *)((int)piVar13 + -0x1b) != '\0')) {
                    uVar5 = 1;
                    local_40 = uVar5;
                  }
                  else {
                    uVar5 = 0;
                    local_40 = uVar5;
                  }
                }
                else {
                  if (((char)piVar13[-7] == '\0') || (*(char *)((int)piVar13 + -0x1b) != '\0')) {
                    local_44 = 1;
                  }
                  else {
                    local_44 = 0;
                  }
                  pvVar4 = (HGLOBAL)*piVar13;
                  uVar5 = local_44;
                }
                FUN_00428df0((void *)*local_30,pvVar4,(char)uVar5);
                *local_2c = sVar8;
                piVar13 = (int *)((int)piVar13 + 0x3a);
                iVar9 = iVar9 + 1;
              } while (iVar9 < param_2);
            }
            local_8 = 0xffffffff;
            FUN_00426d07();
            FUN_0043f7a0(local_38);
            *local_2c = sVar8 + -1;
          }
          uVar5 = FUN_00427160(param_1,(undefined4 *)local_20,(int *)&local_24,param_2,'\0',local_16
                              );
          cStack_15 = (char)uVar5;
          if (*local_2c != param_2) {
            iVar9 = param_2 * 0x3a + local_28;
            if ((*(char *)(iVar9 + 0x16) == '\0') || (*(char *)(iVar9 + 0x17) != '\0')) {
              cVar3 = '\x01';
            }
            else {
              cVar3 = '\0';
            }
            FUN_00428df0((void *)*local_30,*(HGLOBAL *)(local_20 + 0xd),cVar3);
            *local_2c = sVar8;
          }
          puVar10 = (undefined4 *)((*(int *)(*local_30 + 0x1a) == 0) - 1 & *local_30);
          if (puVar10 != (undefined4 *)0x0) {
            pvVar2 = (void *)*local_3c;
            if ((param_10 == (short *)0x0) ||
               ((((*param_10 <= *param_3 && (param_3[2] <= param_10[2])) &&
                 (param_10[1] <= param_3[1])) && (param_3[3] <= param_10[3])))) {
              FUN_0047b7d0(pvVar2,puVar10,local_20 + 1,param_3,param_5,param_6,param_7,'\0');
            }
            else {
              local_74 = *(undefined4 *)(local_20 + 1);
              local_70 = *(undefined4 *)(local_20 + 3);
              local_7c = *(undefined4 *)param_3;
              local_78 = *(undefined4 *)(param_3 + 2);
              FUN_004270c0((short *)&local_74,(short *)&local_7c,param_10);
              FUN_0047b7d0(pvVar2,puVar10,(short *)&local_74,(short *)&local_7c,param_5,param_6,
                           param_7,'\0');
            }
          }
        }
      }
    }
    if (cStack_15 == '\0') goto LAB_00426ffc;
  }
  iVar9 = param_2 * 0x3a + local_28;
  if (((*(int *)(iVar9 + 0x32) == 0) && ((char)param_1[8] != '\0')) &&
     (*(int *)(local_20 + 0xd) != 0)) {
    *(int *)(iVar9 + 0x32) = *(int *)(local_20 + 0xd);
    *(undefined1 *)(iVar9 + 0x19) = 0;
    if (local_1c != (short *)0x0) {
      local_1c[0x12] = 0;
      local_1c[0x13] = 0;
    }
    if (local_24 != (HGLOBAL)0x0) {
      local_24 = (HGLOBAL)0x0;
    }
  }
  if (local_1c == (short *)0x0) {
    if (local_24 != (HGLOBAL)0x0) {
      FUN_0043f7a0(local_24);
    }
    if (local_1c != (short *)0x0) goto LAB_00427071;
  }
  else {
LAB_00427071:
    *(HGLOBAL *)(local_1c + 0x12) = local_24;
  }
  psVar6 = local_1c;
  if ((*(char *)((int)param_1 + 0x21) == '\0') && (local_1c != (short *)0x0)) {
    if (*(HGLOBAL *)(local_1c + 0x12) != (HGLOBAL)0x0) {
      FUN_0043f7a0(*(HGLOBAL *)(local_1c + 0x12));
      psVar6[0x12] = 0;
      psVar6[0x13] = 0;
    }
  }
LAB_004270af:
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


