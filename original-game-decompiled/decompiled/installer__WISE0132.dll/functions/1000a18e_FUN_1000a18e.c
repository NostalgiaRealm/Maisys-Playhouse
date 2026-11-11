
/* ==== FUN_1000a18e @ 1000a18e ==== 
 * signature: uint __cdecl FUN_1000a18e(uint param_1, byte * param_2, byte * param_3)
 * body: 1000a18e-1000a7db
 */

uint __cdecl FUN_1000a18e(uint param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int iVar5;
  int iVar6;
  byte *lpString2;
  byte *lpString1;
  CHAR local_220 [256];
  byte local_120 [6];
  char local_11a [249];
  undefined1 local_21;
  char local_20 [16];
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != 0xd) {
    FUN_1001054d((LPCSTR)param_2,(LPSTR)DAT_10023e94);
  }
  puVar2 = DAT_10023e94;
  uVar3 = param_1;
  if ((int)param_1 < 0xb) {
    if (param_1 == 10) {
      uVar3 = 0;
      bVar1 = *param_3;
      while ((bVar1 != 0 && (uVar3 == 0))) {
        pCVar4 = FUN_100147fa((LPCSTR)puVar2,(int)(char)*param_3);
        if (pCVar4 != (LPCSTR)0x0) {
          uVar3 = 1;
        }
        param_3 = param_3 + 1;
        bVar1 = *param_3;
      }
      goto LAB_1000a7ba;
    }
    if (5 < (int)param_1) {
      if (((int)param_1 < 6) || (9 < (int)param_1)) goto LAB_1000a7ba;
      param_2 = param_3;
      _strncpy((char *)local_120,(char *)DAT_10023e94,0x100);
      local_21 = 0;
      lpString1 = local_120;
      pCVar4 = FUN_100147fa((LPCSTR)param_3,0x2f);
      if ((pCVar4 != (LPCSTR)0x0) && (iVar5 = lstrlenA((LPCSTR)param_3), 7 < iVar5)) {
        _strncpy(local_20,(char *)param_3,5);
        _strncpy((char *)param_3,(char *)(param_3 + 6),2);
        _strncpy((char *)(param_3 + 3),local_20,5);
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(char)*param_3 * 2] & 4;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)*param_3,4);
        }
        if ((uVar3 != 0) && ((char)*param_3 < '6')) {
          lstrcpyA(local_220,(LPCSTR)param_3);
          *param_3 = 0x31;
          lstrcpyA((LPSTR)(param_3 + 1),local_220);
        }
      }
      pCVar4 = FUN_100147fa((LPCSTR)local_120,0x2f);
      if ((pCVar4 != (LPCSTR)0x0) && (iVar5 = lstrlenA((LPCSTR)local_120), 7 < iVar5)) {
        _strncpy(local_20,(char *)local_120,5);
        _strncpy((char *)local_120,local_11a,2);
        _strncpy((char *)(local_120 + 3),local_20,5);
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(char)local_120[0] * 2] & 4;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)local_120[0],4);
        }
        if ((uVar3 != 0) && ((char)local_120[0] < '6')) {
          lstrcpyA(local_220,(LPCSTR)local_120);
          local_120[0] = 0x31;
          lstrcpyA((LPSTR)(local_120 + 1),local_220);
        }
      }
      local_10 = 0;
      param_3 = (byte *)0x0;
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(char)*param_2 * 2] & 8;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)*param_2,8);
        }
        if (uVar3 == 0) break;
        param_2 = param_2 + 1;
      }
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString1 * 2] & 8;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)*lpString1,8);
        }
        lpString2 = param_2;
        if (uVar3 == 0) break;
        lpString1 = lpString1 + 1;
      }
LAB_1000a42d:
      bVar1 = *lpString1;
      if ((bVar1 != 0) && (*lpString2 != 0)) {
        if (param_3 != (byte *)0x0) goto LAB_1000a6d3;
        if (DAT_100200d4 < 2) {
          uVar3 = *(ushort *)(PTR_DAT_1001fec8 + (char)bVar1 * 2) & 0x103;
        }
        else {
          uVar3 = FUN_10015ac0((int)(char)bVar1,0x103);
        }
        if (uVar3 == 0) {
          if (DAT_100200d4 < 2) {
            uVar3 = *(ushort *)(PTR_DAT_1001fec8 + (char)*lpString1 * 2) & 0x157;
          }
          else {
            uVar3 = FUN_10015ac0((int)(char)*lpString1,0x157);
          }
          if (uVar3 != 0) {
            if (DAT_100200d4 < 2) {
              uVar3 = *(ushort *)(PTR_DAT_1001fec8 + (char)*lpString2 * 2) & 0x103;
            }
            else {
              uVar3 = FUN_10015ac0((int)(char)*lpString2,0x103);
            }
            if (uVar3 == 0) {
              if (DAT_100200d4 < 2) {
                uVar3 = *(ushort *)(PTR_DAT_1001fec8 + (char)*lpString2 * 2) & 0x157;
              }
              else {
                uVar3 = FUN_10015ac0((int)(char)*lpString2,0x157);
              }
              if (uVar3 != 0) {
                local_8 = FUN_10016190(lpString1);
                local_c = FUN_10016190(lpString2);
                iVar5 = 0;
                param_2 = (byte *)0x0;
                while( true ) {
                  if (DAT_100200d4 < 2) {
                    uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString2 * 2] & 4;
                  }
                  else {
                    uVar3 = FUN_10015ac0((int)(char)*lpString2,4);
                  }
                  if (uVar3 == 0) break;
                  lpString2 = lpString2 + 1;
                  param_2 = param_2 + 1;
                }
                do {
                  if (DAT_100200d4 < 2) {
                    uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString2 * 2] & 0x10;
                  }
                  else {
                    uVar3 = FUN_10015ac0((int)(char)*lpString2,0x10);
                  }
                  if (uVar3 == 0) {
                    if (DAT_100200d4 < 2) {
                      uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString2 * 2] & 8;
                    }
                    else {
                      uVar3 = FUN_10015ac0((int)(char)*lpString2,8);
                    }
                    if (uVar3 == 0) goto LAB_1000a5bd;
                  }
                  lpString2 = lpString2 + 1;
                } while( true );
              }
            }
          }
        }
        param_3 = (byte *)lstrcmpA((LPCSTR)lpString1,(LPCSTR)lpString2);
      }
      if (param_3 == (byte *)0x0) {
        if (*lpString1 == 0) {
LAB_1000a6ca:
          if (*lpString2 != 0) {
            param_3 = (byte *)0xffffffff;
          }
        }
        else if (*lpString2 == 0) {
          param_3 = (byte *)0x1;
        }
        else if (*lpString1 == 0) goto LAB_1000a6ca;
      }
LAB_1000a6d3:
      uVar3 = 0;
      if ((param_3 == (byte *)0x0) && ((param_1 == 7 || (param_1 == 9)))) {
        uVar3 = 1;
      }
      if (((int)param_3 < 0) && ((param_1 == 8 || (param_1 == 9)))) {
        uVar3 = 1;
      }
      if ((0 < (int)param_3) && ((param_1 == 6 || (param_1 == 7)))) {
        uVar3 = 1;
      }
      goto LAB_1000a7ba;
    }
    if (3 < (int)param_1) {
      uVar3 = lstrcmpiA((LPCSTR)DAT_10023e94,(LPCSTR)param_3);
      goto LAB_1000a7ba;
    }
    if ((int)param_1 < 0) goto LAB_1000a7ba;
    if ((int)param_1 < 2) {
      uVar3 = lstrcmpA((LPCSTR)DAT_10023e94,(LPCSTR)param_3);
      goto LAB_1000a7ba;
    }
    if (3 < (int)param_1) goto LAB_1000a7ba;
    puVar2 = FUN_100169d0(DAT_10023e94,(char *)param_3);
  }
  else {
    if (param_1 == 0xb) {
      uVar3 = 0;
      while (((char)*puVar2 != '\0' && (uVar3 == 0))) {
        pCVar4 = FUN_100147fa((LPCSTR)param_3,(int)(char)*puVar2);
        if (pCVar4 == (LPCSTR)0x0) {
          uVar3 = 1;
        }
        puVar2 = (uint *)((int)puVar2 + 1);
      }
      goto LAB_1000a7ba;
    }
    if (param_1 != 0xc) {
      if (param_1 == 0xd) {
        FUN_1000e0eb(param_3,(byte *)DAT_10023e94);
        uVar3 = FUN_10016230((byte *)DAT_10023e94);
      }
      goto LAB_1000a7ba;
    }
    iVar5 = lstrlenA((LPCSTR)DAT_10023e94);
    iVar6 = FUN_10016230(param_3);
    puVar2 = (uint *)(iVar5 - iVar6);
  }
  uVar3 = (uint)(puVar2 == (uint *)0x0);
LAB_1000a7ba:
  if (((param_1 == 0) || (param_1 == 2)) || (param_1 == 4)) {
    uVar3 = (uint)(uVar3 == 0);
  }
  return uVar3;
LAB_1000a5bd:
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString1 * 2] & 4;
    }
    else {
      uVar3 = FUN_10015ac0((int)(char)*lpString1,4);
    }
    if (uVar3 == 0) break;
    lpString1 = lpString1 + 1;
    iVar5 = iVar5 + 1;
  }
  do {
    if (DAT_100200d4 < 2) {
      uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString1 * 2] & 0x10;
    }
    else {
      uVar3 = FUN_10015ac0((int)(char)*lpString1,0x10);
    }
    if (uVar3 == 0) {
      if (DAT_100200d4 < 2) {
        uVar3 = (byte)PTR_DAT_1001fec8[(char)*lpString1 * 2] & 8;
      }
      else {
        uVar3 = FUN_10015ac0((int)(char)*lpString1,8);
      }
      if (uVar3 == 0) break;
    }
    lpString1 = lpString1 + 1;
  } while( true );
  if (local_10 != 0) {
    if (iVar5 < (int)param_2) {
      iVar6 = (int)param_2 - iVar5;
      do {
        param_2 = param_2 + -1;
        iVar6 = iVar6 + -1;
        local_8 = local_8 * 10;
      } while (iVar6 != 0);
    }
    if ((int)param_2 < iVar5) {
      iVar5 = iVar5 - (int)param_2;
      do {
        iVar5 = iVar5 + -1;
        local_c = local_c * 10;
      } while (iVar5 != 0);
    }
  }
  if (local_c < local_8) {
    param_3 = (byte *)0x1;
  }
  else if (local_8 < local_c) {
    param_3 = (byte *)0xffffffff;
  }
  local_10 = 1;
  goto LAB_1000a42d;
}


