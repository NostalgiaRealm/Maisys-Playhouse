
/* ==== f21 @ 1000eafe ==== 
 * signature: undefined4 __stdcall f21(int param_1)
 * body: 1000eafe-1000eed2
 */

undefined4 f21(int param_1)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char local_1b8 [64];
  byte local_178 [256];
  CHAR local_78 [64];
  CHAR local_38 [32];
  HANDLE local_18;
  int local_14;
  int local_10;
  HANDLE local_c;
  byte local_6;
  char local_5;
  
                    /* 0xeafe  27  f21 */
  pcVar3 = FUN_10010950((char *)local_178,*(char **)(param_1 + 0x20));
  local_14 = FUN_10016230(local_178);
  FUN_10010950((char *)local_178,pcVar3);
  local_10 = FUN_10016230(local_178);
  if (*(char *)(param_1 + 0x18) == '\x01') {
LAB_1000eeca:
    uVar6 = 0;
  }
  else {
    bVar2 = FUN_1001077d(s_CONFIG_SYS_1001fb1c,(int *)&local_c,local_1b8,(int *)&local_18,local_78);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      local_5 = '\0';
      local_6 = 0;
      if ((int)local_c < 0) {
        if (0 < local_14) {
          wsprintfA(local_38,s_Files__d_1001fc58,local_14);
          FUN_1000c2aa(local_18,local_38,0);
        }
        if (0 < local_10) {
          wsprintfA(local_38,s_Buffers__d_1001fc4c,local_10);
          FUN_1000c2aa(local_18,local_38,0);
        }
        local_5 = '\x01';
LAB_1000ee80:
        CloseHandle(local_18);
        if (local_5 == '\0') {
          DeleteFileA(local_78);
        }
        else {
          FUN_10010ec8(local_1b8,local_78,*(byte *)(param_1 + 0x28) & 2);
          *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
          FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fa7c);
        }
        goto LAB_1000eeca;
      }
      FUN_10013278(local_c);
      while (iVar4 = FUN_10013297((char *)local_178,0x100,local_c), iVar4 != 0) {
        pbVar7 = local_178;
        while( true ) {
          if (DAT_100200d4 < 2) {
            uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
          }
          else {
            uVar5 = FUN_10015ac0((int)(char)*pbVar7,8);
          }
          if (uVar5 == 0) break;
          pbVar7 = pbVar7 + 1;
        }
        iVar4 = FUN_1001b090(pbVar7,s_files_1001fc6c,5);
        if (iVar4 == 0) {
          local_6 = local_6 | 1;
        }
        iVar4 = FUN_1001b090(pbVar7,s_buffers_1001fc64,7);
        if (iVar4 == 0) {
          local_6 = local_6 | 2;
        }
      }
      FUN_10013278(local_c);
      if (((local_6 & 1) == 0) && (0 < local_14)) {
        wsprintfA(local_38,s_Files__d_1001fc58,local_14);
        FUN_1000c2aa(local_18,local_38,0);
        local_5 = '\x01';
      }
      if (((local_6 & 2) == 0) && (0 < local_10)) {
        wsprintfA(local_38,s_Buffers__d_1001fc4c,local_10);
        FUN_1000c2aa(local_18,local_38,0);
        local_5 = '\x01';
      }
      do {
        iVar4 = FUN_10013297((char *)local_178,0x100,local_c);
        if (iVar4 == 0) {
          CloseHandle(local_c);
          goto LAB_1000ee80;
        }
        FUN_1000c339((LPCSTR)local_178);
        pbVar7 = local_178;
        while( true ) {
          if (DAT_100200d4 < 2) {
            uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
          }
          else {
            uVar5 = FUN_10015ac0((int)(char)*pbVar7,8);
          }
          if (uVar5 == 0) break;
          pbVar7 = pbVar7 + 1;
        }
        iVar4 = FUN_1001b090(pbVar7,s_files_1001fc6c,5);
        if ((iVar4 == 0) && (0 < local_14)) {
          for (pbVar8 = pbVar7 + 5; bVar1 = *pbVar8, bVar1 != 0; pbVar8 = pbVar8 + 1) {
            if (DAT_100200d4 < 2) {
              uVar5 = (byte)PTR_DAT_1001fec8[(char)bVar1 * 2] & 4;
            }
            else {
              uVar5 = FUN_10015ac0((int)(char)bVar1,4);
            }
            if (uVar5 != 0) break;
          }
          if ((*pbVar8 != 0) && (iVar4 = FUN_10016230(pbVar8), iVar4 < local_14)) {
            wsprintfA((LPSTR)pbVar8,&DAT_1001f8f8,local_14);
            local_5 = '\x01';
          }
        }
        iVar4 = FUN_1001b090(pbVar7,s_buffers_1001fc64,7);
        if ((iVar4 == 0) && (0 < local_10)) {
          for (pbVar7 = pbVar7 + 7; bVar1 = *pbVar7, bVar1 != 0; pbVar7 = pbVar7 + 1) {
            if (DAT_100200d4 < 2) {
              uVar5 = (byte)PTR_DAT_1001fec8[(char)bVar1 * 2] & 4;
            }
            else {
              uVar5 = FUN_10015ac0((int)(char)bVar1,4);
            }
            if (uVar5 != 0) break;
          }
          if ((*pbVar7 != 0) && (iVar4 = FUN_10016230(pbVar7), iVar4 < local_10)) {
            wsprintfA((LPSTR)pbVar7,&DAT_1001f8f8,local_10);
            local_5 = '\x01';
          }
        }
        iVar4 = FUN_1000c2aa(local_18,(LPCSTR)local_178,1);
      } while (-1 < iVar4);
      FUN_10010ffe(local_c,local_18,local_78);
    }
    uVar6 = FUN_10011024(s_CONFIG_SYS_1001fb1c,0);
  }
  return uVar6;
}


