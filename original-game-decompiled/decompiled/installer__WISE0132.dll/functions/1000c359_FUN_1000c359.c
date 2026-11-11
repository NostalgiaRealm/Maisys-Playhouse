
/* ==== FUN_1000c359 @ 1000c359 ==== 
 * signature: undefined4 __cdecl FUN_1000c359(int param_1, char * param_2, ushort param_3)
 * body: 1000c359-1000c8be
 */

undefined4 __cdecl FUN_1000c359(int param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  undefined3 extraout_var;
  LPSTR lpString1;
  int iVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint local_84c [255];
  undefined1 local_44d;
  char local_44c [256];
  char local_34c [256];
  char local_24c [256];
  CHAR local_14c [256];
  byte local_4c [32];
  int local_2c;
  int local_28;
  uint local_24;
  char *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  char *local_10;
  HANDLE local_c;
  HANDLE local_8;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
LAB_1000c8b8:
    uVar10 = 0;
  }
  else {
    pcVar4 = FUN_10010950((char *)local_4c,*(char **)(param_1 + 0x20));
    uVar5 = FUN_10016230(local_4c);
    local_18 = uVar5;
    local_20 = FUN_10010950(local_24c,pcVar4);
    pcVar4 = FUN_10010950(DAT_10023e94,local_20);
    pcVar4 = FUN_10010950(local_34c,pcVar4);
    pcVar4 = FUN_10010950(local_44c,pcVar4);
    FUN_10010950((char *)local_4c,pcVar4);
    local_28 = FUN_10016230(local_4c);
    local_24 = uVar5 & 1;
    local_10 = DAT_10023e94;
    if (local_24 == 0) {
      CharUpperA(local_34c);
    }
    bVar1 = false;
    if (param_2 == (char *)0x0) {
      lstrcpyA(local_14c,local_24c);
      local_8 = (HANDLE)FUN_1001223a(local_24c,0,0);
      if (-1 < (int)local_8) {
        lpString1 = FUN_10014834(local_14c,0x5c);
        if (*lpString1 == '\\') {
          lpString1 = lpString1 + 1;
        }
        lstrcpyA(lpString1,s__GLBS383_TMP_1001fa88);
      }
      local_c = (HANDLE)FUN_1001223a(local_14c,1,1);
      if (-1 < (int)local_c) goto LAB_1000c4a7;
LAB_1000c807:
      param_2 = local_24c;
    }
    else {
      bVar2 = FUN_1001077d(param_2,(int *)&local_8,local_24c,(int *)&local_c,local_14c);
      if (CONCAT31(extraout_var,bVar2) == 0) {
LAB_1000c4a7:
        local_14 = 0;
        if (-1 < (int)local_8) {
          FUN_10013278(local_8);
          if (param_2 != (char *)0x0) {
            while (iVar6 = FUN_10013297(local_10,0x7800,local_8), pcVar4 = local_10, iVar6 != 0) {
              if (bVar1) goto LAB_1000c53e;
              FUN_1001488c(local_10,(uint *)&DAT_1001fa80);
              while( true ) {
                if (DAT_100200d4 < 2) {
                  uVar5 = (byte)PTR_DAT_1001fec8[*pcVar4 * 2] & 8;
                }
                else {
                  uVar5 = FUN_10015ac0((int)*pcVar4,8);
                }
                if (uVar5 == 0) break;
                pcVar4 = pcVar4 + 1;
              }
              iVar6 = lstrcmpiA(pcVar4,local_20);
              if (iVar6 == 0) {
                bVar1 = true;
              }
            }
            if (bVar1) {
LAB_1000c53e:
              FUN_10010ffe(local_8,local_c,local_14c);
              goto LAB_1000c8b8;
            }
          }
          if (local_34c[0] != '\0') {
            FUN_10013278(local_8);
            do {
              do {
                iVar6 = FUN_10013297(local_10,0x7800,local_8);
                if (iVar6 == 0) goto LAB_1000c767;
                local_2c = 1;
                local_1c = 0;
                _strncpy((char *)local_84c,local_10,0x3ff);
                local_44d = 0;
                if (local_24 == 0) {
                  CharUpperA((LPSTR)local_84c);
                }
                uVar5 = local_18;
                if (local_14 == 0) {
                  puVar11 = local_84c;
                  if ((local_18 & 2) == 0) {
                    iVar6 = lstrlenA((LPCSTR)local_84c);
                    *(undefined1 *)((int)local_84c + iVar6 + -1) = 0;
                  }
                  else {
                    FUN_1001488c((LPSTR)local_84c,(uint *)&DAT_1001fa80);
                    puVar11 = local_84c;
                    while( true ) {
                      if (DAT_100200d4 < 2) {
                        uVar7 = (byte)PTR_DAT_1001fec8[(char)*puVar11 * 2] & 8;
                      }
                      else {
                        uVar7 = FUN_10015ac0((int)(char)*puVar11,8);
                      }
                      if (uVar7 == 0) break;
                      puVar11 = (uint *)((int)puVar11 + 1);
                    }
                  }
                  if ((uVar5 & 0x60) == 0x40) {
                    iVar6 = lstrlenA((LPCSTR)puVar11);
                    iVar8 = lstrlenA(local_34c);
                    if (0 < iVar6 - iVar8) {
                      puVar11 = (uint *)((int)puVar11 + (iVar6 - iVar8));
                    }
                  }
                  pcVar4 = local_34c;
                  if ((uVar5 & 0x60) == 0x20) {
                    puVar11 = FUN_100169d0(puVar11,pcVar4);
                    if (puVar11 != (uint *)0x0) {
LAB_1000c69a:
                      local_1c = 1;
                    }
                  }
                  else {
                    if ((char)*puVar11 != '\0') {
                      do {
                        if ((*pcVar4 == '\0') || (pcVar4[(int)puVar11 - (int)local_34c] != *pcVar4))
                        break;
                        pcVar4 = pcVar4 + 1;
                      } while (pcVar4[(int)puVar11 - (int)local_34c] != '\0');
                    }
                    if (*pcVar4 == '\0') goto LAB_1000c69a;
                  }
                  if (local_1c != 0) {
                    uVar5 = local_18 & 0x18;
                    if (uVar5 == 0x10) {
                      if (local_44c[0] != '\0') {
                        DVar9 = lstrlenA(local_44c);
                        FileWrite(local_c,local_44c,DVar9);
                      }
                      iVar6 = FUN_1000c2aa(local_c,local_10,0);
                      if (iVar6 < 0) goto LAB_1000c7f0;
                    }
                    if (uVar5 != 0) {
                      local_2c = 0;
                    }
                    iVar6 = FUN_1000c2f8(local_c,local_20);
                    if (iVar6 < 0) goto LAB_1000c7f0;
                    local_14 = 1;
                  }
                }
              } while (local_2c == 0);
              if ((local_44c[0] != '\0') && (local_1c != 0)) {
                DVar9 = lstrlenA(local_44c);
                FileWrite(local_c,local_44c,DVar9);
              }
              iVar6 = FUN_1000c2aa(local_c,local_10,0);
            } while (-1 < iVar6);
LAB_1000c7f0:
            FUN_10010ffe(local_8,local_c,local_14c);
            goto LAB_1000c807;
          }
LAB_1000c767:
          if (local_14 == 0) {
            FUN_10012303(local_c,0,0);
            iVar6 = 1;
            FUN_10013278(local_8);
            while (iVar8 = FUN_10013297(local_10,0x7800,local_8), iVar8 != 0) {
              bVar1 = true;
              if ((0 < local_28) && (local_28 == iVar6)) {
                iVar8 = FUN_1000c2f8(local_c,local_20);
                if (iVar8 < 0) goto LAB_1000c7f0;
                local_14 = 1;
                if ((local_34c[0] == '\0') && (((byte)local_18 & 0x18) == 8)) {
                  bVar1 = false;
                }
              }
              if ((bVar1) && (iVar8 = FUN_1000c2aa(local_c,local_10,0), iVar8 < 0))
              goto LAB_1000c7f0;
              iVar6 = iVar6 + 1;
            }
          }
          CloseHandle(local_8);
        }
        if ((local_14 == 0) || ((int)local_8 < 0)) {
          FUN_1000c2f8(local_c,local_20);
        }
        CloseHandle(local_c);
        if (param_2 == (char *)0x0) {
          if (-1 < (int)local_8) {
            FUN_10010ec8(local_24c,local_14c,(byte)~(byte)(local_18 >> 2) & 1);
          }
        }
        else {
          if (((*(ushort *)(param_1 + 0x28) & param_3) == 0) && ((local_18 & 4) != 0)) {
            sVar3 = 0;
          }
          else {
            sVar3 = 1;
          }
          FUN_10010ec8(local_24c,local_14c,sVar3);
          *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | param_3;
          FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fa7c);
        }
        goto LAB_1000c8b8;
      }
    }
    uVar10 = FUN_10011024(param_2,0);
  }
  return uVar10;
}


