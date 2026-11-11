
/* ==== FUN_004273e0 @ 004273e0 ==== 
 * signature: short __cdecl FUN_004273e0(int * param_1, int param_2, short * param_3, char param_4, byte * param_5, undefined4 param_6, int * param_7, undefined4 param_8, short * param_9, short * param_10)
 * body: 004273e0-00427882;0042789d-00427959;0042796f-00427ac6
 */

short __cdecl
FUN_004273e0(int *param_1,int param_2,short *param_3,char param_4,byte *param_5,undefined4 param_6,
            int *param_7,undefined4 param_8,short *param_9,short *param_10)

{
  void *this;
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  HGLOBAL pvVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  short sVar9;
  short *psVar10;
  int *piVar11;
  char *pcVar12;
  short *psVar13;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_138 [88];
  short local_e0 [13];
  int local_c6;
  undefined4 local_bc [6];
  HGLOBAL local_a2;
  undefined4 local_98 [2];
  AFX_EXCEPTION_LINK local_90 [8];
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  int local_58 [2];
  int local_50;
  int local_4c;
  short local_48;
  HGLOBAL local_44;
  int local_40;
  short *local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  short *local_2c;
  HGLOBAL local_28;
  short *local_24;
  short local_1e;
  short sStack_1c;
  short local_1a;
  short sStack_18;
  char local_16;
  char cStack_15;
  undefined1 *puStack_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042795a;
  *unaff_FS_OFFSET = &local_10;
  sStack_18 = 0;
  iVar6 = param_1[2];
  local_40 = param_1[5];
  local_38 = param_1[3];
  local_24 = (short *)param_1[6];
  if ((param_2 < 0) || (*(short *)(iVar6 + 0xc) <= param_2)) {
    sStack_18 = -1;
    goto LAB_00427ab6;
  }
  local_28 = (HGLOBAL)0x0;
  puStack_14 = &stack0xfffffebc;
  if ((((*(int *)(iVar6 + 0x1e) == 0x2e524c45) && (puStack_14 = &stack0xfffffebc, param_4 != '\0'))
      && (puStack_14 = &stack0xfffffebc, *(int *)(local_40 + 6) == 0)) &&
     (puStack_14 = &stack0xfffffebc, (*(byte *)(iVar6 + 3) & 0x80) != 0)) {
    puStack_14 = &stack0xfffffebc;
    sStack_18 = FUN_00426820((int)param_1);
    if (sStack_18 != 0) goto LAB_00427ab6;
  }
  local_16 = '\0';
  sVar9 = (short)param_2;
  if (local_24 == (short *)0x0) {
    psVar10 = (short *)(local_38 + 0x18 + param_2 * 0x3a);
    psVar13 = local_e0;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)psVar13 = *(undefined4 *)psVar10;
      psVar10 = psVar10 + 2;
      psVar13 = psVar13 + 2;
    }
    *psVar13 = *psVar10;
    local_2c = local_e0;
    if (local_c6 == 0) {
      local_28 = FUN_0043f770(4);
    }
    else {
      local_28 = (HGLOBAL)0x0;
    }
  }
  else {
    if (*local_24 == param_2) {
      if (*(int *)(local_24 + 0x12) != 0) {
        local_16 = '\x01';
      }
    }
    else {
      psVar10 = (short *)(local_38 + 0x18 + param_2 * 0x3a);
      psVar13 = local_24 + 1;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)psVar13 = *(undefined4 *)psVar10;
        psVar10 = psVar10 + 2;
        psVar13 = psVar13 + 2;
      }
      *psVar13 = *psVar10;
      *local_24 = sVar9;
    }
    local_2c = local_24 + 1;
    piVar11 = (int *)(local_24 + 0x12);
    if (*piVar11 == 0) {
      pvVar5 = FUN_0043f770(4);
      *piVar11 = (int)pvVar5;
    }
    local_28 = (HGLOBAL)*piVar11;
  }
  if ((*(int *)(iVar6 + 0x1e) == 0x2e524c45) && ((*(byte *)(iVar6 + 3) & 0x80) != 0)) {
    cStack_15 = '\x01';
  }
  else {
    uVar7 = FUN_00427160(param_1,(undefined4 *)local_2c,(int *)&local_28,param_2,'\x01',local_16);
    cStack_15 = (char)uVar7;
  }
  if (cStack_15 == '\0') {
LAB_00427a2e:
    if (local_24 != (short *)0x0) {
      *local_24 = -1;
    }
  }
  else {
    if (*(int *)(iVar6 + 0x1e) == 0) {
LAB_0042796f:
      if (param_1[7] != 0) {
        DAT_004da318 = param_3;
        this = (void *)param_1[7];
        if ((param_10 == (short *)0x0) ||
           (((*param_10 <= *param_3 && (param_3[2] <= param_10[2])) &&
            ((param_10[1] <= param_3[1] && (param_3[3] <= param_10[3])))))) {
          psVar10 = local_2c + 1;
        }
        else {
          local_78 = *(undefined4 *)(local_2c + 1);
          local_74 = *(undefined4 *)(local_2c + 3);
          local_80 = *(undefined4 *)param_3;
          local_7c = *(undefined4 *)(param_3 + 2);
          param_3 = (short *)&local_80;
          FUN_004270c0((short *)&local_78,param_3,param_10);
          psVar10 = (short *)&local_78;
        }
        FUN_0047b7d0(this,(undefined4 *)local_2c,psVar10,param_3,param_5,param_6,param_7,'\0');
        DAT_004da318 = (short *)0x0;
      }
    }
    else if (*(int *)(iVar6 + 0x1e) == 0x2e524c45) {
      if ((*(byte *)(iVar6 + 3) & 0x80) == 0) goto LAB_0042796f;
      if ((*(byte *)(iVar6 + 3) & 0x80) != 0) {
        iVar8 = param_2 * 0x3a + local_38;
        local_68._2_2_ = (short)((uint)*(undefined4 *)param_3 >> 0x10);
        local_68._2_2_ = local_68._2_2_ + (*(short *)(iVar6 + 6) - *(short *)(iVar8 + 6));
        local_68._0_2_ = (short)*(undefined4 *)param_3;
        local_68._0_2_ = (short)local_68 + (*(short *)(iVar6 + 4) - *(short *)(iVar8 + 4));
        local_64 = CONCAT22((*(short *)(iVar6 + 10) - *(short *)(iVar6 + 6)) + local_68._2_2_,
                            (*(short *)(iVar6 + 8) - *(short *)(iVar6 + 4)) + (short)local_68);
        local_30 = (int *)(local_40 + 6);
        if ((*local_30 == 0) || (local_34 = param_1 + 7, *local_34 == 0)) {
          uVar7 = FUN_00427160(param_1,(undefined4 *)local_2c,(int *)&local_28,param_2,'\0',local_16
                              );
          cStack_15 = (char)uVar7;
          if (cStack_15 == '\x01') {
            FUN_00428d40((int)local_138);
            local_8 = 3;
            FUN_0047a960((void *)param_1[7],&local_4c,&local_1a,local_88);
            FUN_00428db0(local_138,local_4c,local_1a,local_88,*(undefined4 *)(param_1[7] + 0x8a0));
            FUN_00429060(local_138,*(HGLOBAL *)(local_2c + 0xd),(short *)&local_68,local_88,
                         (short *)0x0);
            FUN_00428db0(local_138,0,0,(undefined4 *)0x0,0);
            local_8 = 0xffffffff;
            FUN_00427964();
          }
        }
        else {
          local_3c = (short *)(local_40 + 4);
          iVar6 = (int)*local_3c;
          if ((((param_2 < iVar6) || (iVar6 + 1 < param_2)) && (*(char *)(iVar8 + 0x17) == '\0')) ||
             (((iVar6 == param_2 && (*(char *)(iVar8 + 0x17) == '\0')) && (DAT_004d9210 == '\0'))))
          {
            local_44 = FUN_0043f770(4);
            iVar6 = param_2;
            for (pcVar12 = (char *)(iVar8 + 0x17);
                ((0 < iVar6 && (*pcVar12 == '\0')) && (pcVar12[-1] != '\0'));
                pcVar12 = pcVar12 + -0x3a) {
              iVar6 = iVar6 + -1;
            }
            AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_90);
            local_8 = 1;
            for (; iVar6 < param_2; iVar6 = iVar6 + 1) {
              FUN_00427160(param_1,local_bc,(int *)&local_44,iVar6,'\x01','\0');
              if (local_a2 == (HGLOBAL)0x0) break;
              local_48 = (short)local_68;
              FUN_0047a960((void *)*local_34,local_58,&local_1e,(undefined4 *)&local_70);
              sVar1 = (short)local_68;
              if ((short)local_68 <= local_70) {
                sVar1 = local_70;
              }
              sVar2 = (short)local_64;
              if (local_6c <= (short)local_64) {
                sVar2 = local_6c;
              }
              sVar3 = local_68._2_2_;
              if (local_68._2_2_ <= local_6e) {
                sVar3 = local_6e;
              }
              sVar4 = local_64._2_2_;
              if (local_6a <= local_64._2_2_) {
                sVar4 = local_6a;
              }
              local_5c = *(undefined4 *)(*local_34 + 0x8a0);
              local_70 = sVar1;
              local_6e = sVar3;
              local_6c = sVar2;
              local_6a = sVar4;
              FUN_00428db0((void *)*local_30,local_58[0],local_1e,(undefined4 *)&local_70,local_5c);
              FUN_00429060((void *)*local_30,local_a2,(short *)&local_68,&local_70,param_9);
              FUN_00428db0((void *)*local_30,0,0,(undefined4 *)0x0,0);
              *local_3c = sVar9;
            }
            local_8 = 0xffffffff;
            FUN_00427892();
            FUN_0043f7a0(local_44);
            *local_3c = sVar9 + -1;
          }
          uVar7 = FUN_00427160(param_1,(undefined4 *)local_2c,(int *)&local_28,param_2,'\x01',
                               local_16);
          cStack_15 = (char)uVar7;
          FUN_0047a960((void *)*local_34,&local_50,&sStack_1c,local_98);
          FUN_00428db0((void *)*local_30,local_50,sStack_1c,local_98,
                       *(undefined4 *)(*local_34 + 0x8a0));
          FUN_00429060((void *)*local_30,*(HGLOBAL *)(local_2c + 0xd),(short *)&local_68,local_98,
                       param_9);
          FUN_00428db0((void *)*local_30,0,0,(undefined4 *)0x0,0);
          *local_3c = sVar9;
        }
      }
    }
    if (cStack_15 == '\0') goto LAB_00427a2e;
  }
  iVar6 = param_2 * 0x3a + local_38;
  if (((*(int *)(iVar6 + 0x32) == 0) && ((char)param_1[8] != '\0')) &&
     (*(int *)(local_2c + 0xd) != 0)) {
    *(int *)(iVar6 + 0x32) = *(int *)(local_2c + 0xd);
    *(undefined1 *)(iVar6 + 0x19) = 0;
    if (local_24 != (short *)0x0) {
      local_24[0x12] = 0;
      local_24[0x13] = 0;
    }
    if (local_28 != (HGLOBAL)0x0) {
      local_28 = (HGLOBAL)0x0;
    }
  }
  if (local_24 == (short *)0x0) {
    if (local_28 != (HGLOBAL)0x0) {
      FUN_0043f7a0(local_28);
    }
    if (local_24 == (short *)0x0) goto LAB_00427ab6;
  }
  *(HGLOBAL *)(local_24 + 0x12) = local_28;
LAB_00427ab6:
  *unaff_FS_OFFSET = local_10;
  return sStack_18;
}


