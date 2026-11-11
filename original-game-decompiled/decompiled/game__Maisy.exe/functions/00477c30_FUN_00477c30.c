
/* ==== FUN_00477c30 @ 00477c30 ==== 
 * signature: char __cdecl FUN_00477c30(int param_1)
 * body: 00477c30-00477fe4
 */

/* WARNING: Type propagation algorithm not settling */

char __cdecl FUN_00477c30(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  short *psVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  short sVar10;
  char *pcVar11;
  char *pcVar12;
  char local_2d8 [255];
  char acStack_1d9 [211];
  undefined1 local_106 [22];
  undefined4 local_f0;
  char **local_ec;
  undefined4 local_e8;
  char local_d9;
  char local_d8 [36];
  char local_b4 [52];
  char local_80 [28];
  char local_64 [4];
  char local_60 [4];
  char local_5c;
  short local_58 [3];
  uint local_52;
  uint local_4e;
  char *local_4a;
  undefined2 local_2c;
  undefined4 local_2a;
  int *local_24;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined1 local_14;
  char *local_12;
  char local_e;
  int *local_c;
  char local_6;
  char local_5;
  
  puVar2 = *(undefined1 **)(param_1 + 0x1a);
  local_24 = *(int **)(*(int *)(param_1 + 0x16) + 8);
  iVar4 = *(int *)(puVar2 + 2);
  local_5 = '\x01';
  if (iVar4 == 0) {
    return '\x01';
  }
  local_6 = '\0';
  local_c = (int *)0x0;
  local_64 = (char  [4])s_Ask_User_004dcac4._0_4_;
  local_60 = (char  [4])s_Ask_User_004dcac4._4_4_;
  local_5c = s_Ask_User_004dcac4[8];
  pcVar11 = s_<Preferences_Folder_on_Macintosh_004dcaa0;
  pcVar12 = local_d8;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  *(undefined2 *)pcVar12 = *(undefined2 *)pcVar11;
  pcVar11 = s_<Startup_Segment_Folder>_004dca84;
  pcVar12 = local_80;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  *pcVar12 = *pcVar11;
  local_2d8[0] = '\0';
  local_b4[0] = '\0';
  local_1c = *(char **)(puVar2 + 6);
  local_18 = *(undefined4 *)(puVar2 + 10);
  local_14 = *puVar2;
  local_12 = *(char **)(puVar2 + 0x12);
  local_e = '\0';
  psVar3 = *(short **)(puVar2 + 0xe);
  if (iVar4 == 1) {
    local_20 = local_64;
    local_5 = '\0';
    goto LAB_00477f29;
  }
  if (iVar4 == 3) {
    local_5 = '\0';
    local_20 = local_d8;
    goto LAB_00477f29;
  }
  if (iVar4 == 2) {
    local_5 = '\0';
    local_20 = local_80;
    goto LAB_00477f29;
  }
  if ((iVar4 != 4) ||
     ((sVar10 = *psVar3, sVar10 != 0x1c &&
      (((sVar10 != 0xd || (psVar3[1] == 0)) || (*(int *)(psVar3 + 2) == 0)))))) goto LAB_00477f29;
  local_d9 = '\x01';
  if ((sVar10 == 0x1c) || (sVar10 == 0x19)) {
    local_c = *(int **)(psVar3 + 1);
    if (local_c == (int *)0x0) {
      local_c = FUN_0043ea50(local_24,(int *)(psVar3 + 3),*(char **)(psVar3 + 5));
    }
    if (local_c != (int *)0x0) {
      local_2a = 0;
      local_2c = 1;
      local_58[0] = 0x6a;
      (**(code **)(*local_c + 0x98))(s_value_004d9864,&local_2c,local_58);
      if (local_58[0] == 0x66) {
        if ((local_4e == 0) || (local_4a == (char *)0x0)) {
          if (local_4e == 0) {
            local_e = '\x01';
            goto LAB_00477e38;
          }
        }
        else {
          uVar7 = local_4e;
          if (0xfe < (int)local_4e) {
            uVar7 = 0xff;
          }
          _strncpy(local_2d8,local_4a,(int)(short)uVar7 + 1);
          local_d9 = '\0';
          local_6 = '\x01';
        }
      }
    }
  }
  else if (sVar10 == 0xd) {
    uVar7 = 0xffffffff;
    pcVar11 = *(char **)(psVar3 + 2);
    do {
      pcVar12 = pcVar11;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar11 = pcVar12 + -uVar7;
    pcVar12 = local_2d8;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
LAB_00477e38:
    local_d9 = '\0';
  }
  else {
    local_e = '\x01';
  }
  if (local_d9 == '\0') {
    if ((local_e == '\0') || (local_2d8[0] != '\0')) {
      sVar10 = 0;
      iVar4 = FUN_0042c050((int)local_24,local_2d8,acStack_1d9 + 1);
      if (iVar4 == 0) {
        pcVar11 = acStack_1d9;
        uVar7 = 0xffffffff;
        do {
          pcVar11 = pcVar11 + 1;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
        } while (*pcVar11 != '\0');
        uVar5 = (ushort)(~uVar7 - 1);
        uVar7 = ~uVar7 - 1 & 0xffff;
        uVar9 = uVar5;
        while (0 < (short)uVar9) {
          if ((acStack_1d9[(short)uVar7] == ':') || (acStack_1d9[(short)uVar7] == '\\')) break;
          sVar10 = sVar10 + 1;
          uVar9 = (short)uVar7 - 1;
          uVar7 = (uint)uVar9;
        }
        if (((0 < sVar10) && (sVar10 < 0x20)) && (sVar10 < (short)uVar5)) {
          uVar7 = 0xffffffff;
          pcVar11 = acStack_1d9 + ((int)(short)uVar5 - (int)sVar10) + 1;
          do {
            pcVar12 = pcVar11;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar12 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          pcVar11 = pcVar12 + -uVar7;
          pcVar12 = local_b4;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar12 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar12 = pcVar12 + 1;
          }
          acStack_1d9[((int)(short)uVar5 - (int)sVar10) + 1] = '\0';
          local_5 = '\0';
          local_1c = local_b4;
        }
        local_20 = acStack_1d9 + 1;
      }
      else {
        local_5 = '\x01';
      }
    }
    else {
      local_5 = '\0';
      local_20 = local_2d8;
      local_1c = local_20;
    }
  }
LAB_00477f29:
  if (local_5 == '\0') {
    local_ec = &local_20;
    local_f0 = *(undefined4 *)(param_1 + 0x16);
    local_e8 = 0x14;
    local_5 = FUN_00477920((int)local_106);
    if (((local_5 == '\0') && (local_c != (int *)0x0)) && (*local_12 != '\0')) {
      if (local_6 != '\0') {
        FUN_0043ba20(local_4a);
        local_6 = '\0';
      }
      local_52 = 0xffffffff;
      pcVar11 = local_12;
      do {
        if (local_52 == 0) break;
        local_52 = local_52 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      local_4a = local_12;
      local_52 = ~local_52;
      local_4e = local_52;
      (**(code **)(*local_c + 0x9c))(s_value_004d9864,&local_2c,local_58);
    }
  }
  else {
    *(undefined4 *)(puVar2 + 6) = 0;
  }
  if (local_6 != '\0') {
    FUN_0043ba20(local_4a);
  }
  return local_5;
}


