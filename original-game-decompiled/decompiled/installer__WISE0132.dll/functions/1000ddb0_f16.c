
/* ==== f16 @ 1000ddb0 ==== 
 * signature: undefined4 __stdcall f16(int param_1)
 * body: 1000ddb0-1000e0ca
 */

undefined4 f16(int param_1)

{
  byte *lpString2;
  byte bVar1;
  CHAR CVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  LPCSTR pCVar6;
  char cVar7;
  char *pcVar8;
  char local_210 [256];
  byte local_110 [256];
  char *local_10;
  int local_c;
  HANDLE local_8;
  
                    /* 0xddb0  22  f16 */
  pcVar3 = FUN_10010950((char *)local_110,*(char **)(param_1 + 0x20));
  bVar1 = FUN_10016230(local_110);
  local_10 = FUN_10010950((char *)local_110,pcVar3);
  if ((bVar1 & 1) == 0) {
    *DAT_10023e94 = 0;
  }
  else {
    FUN_1001054d((LPCSTR)local_110,(LPSTR)DAT_10023e94);
  }
  local_c = 0;
  if ((((bVar1 & 0x80) != 0) && (DAT_10024164 != (LPCSTR)0x0)) &&
     (local_8 = (HANDLE)FUN_1001223a(DAT_10024164,0,0), -1 < (int)local_8)) {
    FUN_10013278(local_8);
    while ((iVar4 = FUN_10013297(local_210,0x100,local_8), iVar4 != 0 && (local_c == 0))) {
      FUN_1001488c(local_210,(uint *)&DAT_1001fa80);
      pcVar3 = local_210;
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar5 = (byte)PTR_DAT_1001fec8[*pcVar3 * 2] & 8;
        }
        else {
          uVar5 = FUN_10015ac0((int)*pcVar3,8);
        }
        if (uVar5 == 0) break;
        pcVar3 = pcVar3 + 1;
      }
      if (DAT_100200d4 < 2) {
        uVar5 = *(ushort *)(PTR_DAT_1001fec8 + *pcVar3 * 2) & 0x103;
      }
      else {
        uVar5 = FUN_10015ac0((int)*pcVar3,0x103);
      }
      if (uVar5 != 0) {
        cVar7 = *pcVar3;
        pCVar6 = pcVar3;
        while ((cVar7 != '\0' && (cVar7 != '='))) {
          pcVar8 = pCVar6 + 1;
          pCVar6 = pCVar6 + 1;
          cVar7 = *pcVar8;
        }
        if (*pCVar6 == '=') {
          *pCVar6 = '\0';
          lpString2 = (byte *)(pCVar6 + 1);
          cVar7 = *pcVar3;
          pcVar8 = pcVar3;
          while (cVar7 != '\0') {
            if (DAT_100200d4 < 2) {
              uVar5 = (byte)PTR_DAT_1001fec8[*pcVar8 * 2] & 8;
            }
            else {
              uVar5 = FUN_10015ac0((int)*pcVar8,8);
            }
            if (uVar5 != 0) break;
            pcVar8 = pcVar8 + 1;
            cVar7 = *pcVar8;
          }
          *pcVar8 = '\0';
          iVar4 = lstrcmpiA(pcVar3,(LPCSTR)local_110);
          if (iVar4 == 0) {
            FUN_10009eff(lpString2,lpString2);
            lstrcatA((LPSTR)DAT_10023e94,(LPCSTR)lpString2);
            local_c = 1;
          }
        }
      }
    }
    CloseHandle(local_8);
  }
  if (local_c == 0) {
    pcVar3 = local_10;
    iVar4 = lstrlenA((LPCSTR)DAT_10023e94);
    FUN_10010950((char *)(DAT_10023e94 + iVar4),pcVar3);
  }
  if ((((bVar1 & 2) != 0) && (*DAT_10023e94 != 0)) &&
     (pCVar6 = FUN_10014834((LPCSTR)DAT_10023e94,0x5c), *pCVar6 == '\\')) {
    *pCVar6 = '\0';
  }
  switch(bVar1 >> 2 & 0xf) {
  case 1:
    iVar4 = FUN_10016190(DAT_10023e94);
    iVar4 = iVar4 + 1;
    goto LAB_1000e014;
  case 2:
    iVar4 = FUN_10016190(DAT_10023e94);
    iVar4 = iVar4 + -1;
LAB_1000e014:
    wsprintfA((LPSTR)DAT_10023e94,&DAT_1001f4c8,iVar4);
    break;
  case 3:
    while (CVar2 = FUN_10014819((LPCSTR)DAT_10023e94), CVar2 == '\\') {
      iVar4 = lstrlenA((LPCSTR)DAT_10023e94);
      DAT_10023e94[iVar4 + -1] = 0;
    }
    break;
  case 4:
    iVar4 = 1;
    goto LAB_1000e05e;
  case 5:
    iVar4 = 0;
LAB_1000e05e:
    FUN_10012386((LPCSTR)DAT_10023e94,iVar4);
    break;
  case 6:
    CharUpperA((LPSTR)DAT_10023e94);
    break;
  case 7:
    CharLowerA((LPSTR)DAT_10023e94);
    break;
  case 8:
    FUN_1000e0eb(DAT_10023e94,DAT_10024170);
    lstrcpyA((LPSTR)DAT_10023e94,(LPCSTR)DAT_10024170);
  }
  FUN_100105d2((LPCSTR)local_110,(LPCSTR)DAT_10023e94);
  return 0;
}


