
/* ==== f0 @ 1000c8bf ==== 
 * signature: undefined4 __stdcall f0(int param_1)
 * body: 1000c8bf-1000cd76
 */

undefined4 f0(int param_1)

{
  bool bVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  BYTE *lpString1;
  BYTE *pBVar6;
  byte *pbVar7;
  BYTE local_69c [1024];
  byte local_29c [4];
  byte abStack_298 [508];
  char local_9c [64];
  CHAR local_5c [64];
  DWORD local_1c;
  DWORD local_18;
  HANDLE local_14;
  HKEY local_10;
  HANDLE local_c;
  int local_8;
  
                    /* 0xc8bf  16  f0 */
  if (*(char *)(param_1 + 0x18) != '\x01') {
    if ((DAT_100241e8 == 0) || (DAT_10024168 != 0)) {
      bVar1 = FUN_1001077d(s_AUTOEXEC_BAT_1001fac0,(int *)&local_c,local_9c,(int *)&local_14,
                           local_5c);
      if (CONCAT31(extraout_var,bVar1) != 0) {
LAB_1000cd01:
        uVar5 = FUN_10011024(s_AUTOEXEC_BAT_1001fac0,0);
        return uVar5;
      }
      local_8 = 0;
      local_10 = (HKEY)0x0;
      if (-1 < (int)local_c) {
        FUN_10013278(local_c);
        iVar3 = FUN_10013297((char *)local_29c,0x200,local_c);
        while (iVar3 != 0) {
          FUN_1000c339((LPCSTR)local_29c);
          pbVar7 = local_29c;
          while( true ) {
            if (DAT_100200d4 < 2) {
              uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
            }
            else {
              uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
            }
            if ((uVar4 == 0) && (*pbVar7 != 0x40)) break;
            pbVar7 = pbVar7 + 1;
          }
          iVar3 = FUN_1001b090(pbVar7,&DAT_1001fab8,4);
          if (iVar3 == 0) {
            if (DAT_100200d4 < 2) {
              uVar4 = (byte)PTR_DAT_1001fec8[(char)pbVar7[4] * 2] & 8;
            }
            else {
              uVar4 = FUN_10015ac0((int)(char)pbVar7[4],8);
            }
            if ((uVar4 != 0) || (pbVar7[4] == 0x3d)) {
              pbVar7 = pbVar7 + 5;
              while( true ) {
                if (DAT_100200d4 < 2) {
                  uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
                }
                else {
                  uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
                }
                if (uVar4 == 0) break;
                pbVar7 = pbVar7 + 1;
              }
              iVar3 = FUN_100108e9(pbVar7,*(LPCSTR *)(param_1 + 0x20));
              if (iVar3 == 0) {
                local_8 = 1;
              }
              else {
                lstrcatA((LPSTR)local_29c,&DAT_1001fad0);
                lstrcatA((LPSTR)local_29c,*(LPCSTR *)(param_1 + 0x20));
                local_10 = (HKEY)0x1;
              }
            }
          }
          iVar3 = FUN_1001b090(pbVar7,&DAT_1001fab0,4);
          if (iVar3 == 0) {
            pbVar7 = pbVar7 + 4;
            while( true ) {
              if (DAT_100200d4 < 2) {
                uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
              }
              else {
                uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
              }
              if (uVar4 == 0) break;
              pbVar7 = pbVar7 + 1;
            }
            iVar3 = FUN_1001b090(pbVar7,&DAT_1001fab8,4);
            if (iVar3 == 0) {
              pbVar7 = pbVar7 + 4;
              while( true ) {
                if (DAT_100200d4 < 2) {
                  uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
                }
                else {
                  uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
                }
                if (uVar4 == 0) break;
                pbVar7 = pbVar7 + 1;
              }
              if (*pbVar7 == 0x3d) {
                do {
                  pbVar7 = pbVar7 + 1;
                  if (DAT_100200d4 < 2) {
                    uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar7 * 2] & 8;
                  }
                  else {
                    uVar4 = FUN_10015ac0((int)(char)*pbVar7,8);
                  }
                } while (uVar4 != 0);
                iVar3 = FUN_100108e9(pbVar7,*(LPCSTR *)(param_1 + 0x20));
                if (iVar3 == 0) {
                  local_8 = 1;
                }
                else {
                  lstrcatA((LPSTR)local_29c,&DAT_1001fad0);
                  lstrcatA((LPSTR)local_29c,*(LPCSTR *)(param_1 + 0x20));
                  local_10 = (HKEY)0x1;
                }
              }
            }
          }
          iVar3 = FUN_1000c2aa(local_14,(LPCSTR)local_29c,1);
          if (iVar3 < 0) {
            FUN_10010ffe(local_c,local_14,local_5c);
            goto LAB_1000cd01;
          }
          iVar3 = FUN_10013297((char *)local_29c,0x200,local_c);
        }
        CloseHandle(local_c);
      }
      if ((local_10 == (HKEY)0x0) && (local_8 == 0)) {
        wsprintfA((LPSTR)local_29c,s_SET_PATH__s___PATH___1001fa98,*(undefined4 *)(param_1 + 0x20));
        iVar3 = FUN_1000c2aa(local_14,(LPCSTR)local_29c,1);
        if (iVar3 < 0) {
          FUN_10010ffe(local_c,local_14,local_5c);
          goto LAB_1000cd01;
        }
      }
      CloseHandle(local_14);
      if (local_8 == 0) {
        FUN_10010ec8(local_9c,local_5c,*(byte *)(param_1 + 0x28) & 1);
        *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
        FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fa7c);
      }
      else {
        DeleteFileA(local_5c);
      }
    }
    else {
      lpString1 = local_69c;
      pBVar6 = local_69c;
      LVar2 = RegOpenKeyExA(DAT_1001f168,s_System_CurrentControlSet_Control_1001fadc,0,3,&local_10);
      if (LVar2 == 0) {
        local_18 = 0x400;
        LVar2 = RegQueryValueExA(local_10,&DAT_1001fad4,(LPDWORD)0x0,&local_1c,local_69c,&local_18);
        if (LVar2 == 0) {
          local_8 = 0;
          while (local_69c[0] != '\0') {
            if (*pBVar6 == ';') {
              *pBVar6 = '\0';
              iVar3 = lstrcmpiA((LPCSTR)lpString1,*(LPCSTR *)(param_1 + 0x20));
              if (iVar3 == 0) {
                local_8 = 1;
              }
              *pBVar6 = ';';
              lpString1 = pBVar6 + 1;
              pBVar6 = lpString1;
            }
            pBVar6 = pBVar6 + 1;
            local_69c[0] = *pBVar6;
          }
          iVar3 = lstrcmpiA((LPCSTR)lpString1,*(LPCSTR *)(param_1 + 0x20));
          if (iVar3 == 0) {
            local_8 = 1;
          }
          if (local_8 == 0) {
            lstrcatA((LPSTR)local_69c,&DAT_1001fad0);
            lstrcatA((LPSTR)local_69c,*(LPCSTR *)(param_1 + 0x20));
            iVar3 = lstrlenA((LPCSTR)local_69c);
            RegSetValueExA(local_10,&DAT_1001fad4,0,DAT_1001f17c,local_69c,iVar3 + 1);
            DAT_10023f60 = 1;
          }
        }
        RegCloseKey(local_10);
      }
    }
  }
  return 0;
}


