
/* ==== FUN_00405ea0 @ 00405ea0 ==== 
 * signature: undefined __cdecl FUN_00405ea0(LPCSTR param_1)
 * body: 00405ea0-004073c4
 */

void __cdecl FUN_00405ea0(LPCSTR param_1)

{
  bool bVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  HWND pHVar6;
  HICON pHVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  LPCSTR pCVar9;
  LSTATUS LVar10;
  uint uVar11;
  int iVar12;
  HKEY pHVar13;
  code *pcVar14;
  int iVar15;
  _STARTUPINFOA *p_Var16;
  undefined4 *puVar17;
  LPSTR pCVar18;
  HKEY lpData;
  undefined4 unaff_EDI;
  char *pcVar19;
  DWORD cbData;
  BOOL BVar20;
  int iVar21;
  char local_be5;
  HKEY local_be4;
  DWORD local_be0;
  HKEY local_bdc;
  int local_bd8;
  _STARTUPINFOA local_bd4;
  _PROCESS_INFORMATION local_b90;
  char local_b80 [64];
  CHAR local_b40 [64];
  CHAR local_b00 [64];
  CHAR local_ac0 [64];
  CHAR local_a80 [64];
  CHAR local_a40 [64];
  CHAR local_a00 [64];
  CHAR local_9c0 [64];
  CHAR local_980 [64];
  CHAR local_940 [64];
  CHAR local_900 [64];
  CHAR local_8c0 [64];
  CHAR local_880 [64];
  CHAR local_840 [64];
  BYTE local_800 [1024];
  CHAR local_400 [1024];
  
  local_bd4.cb = 0x1d;
  local_bd4.lpReserved = (LPSTR)0x1e;
  local_bd4.lpDesktop = (LPSTR)0x1f;
  local_bd4.lpTitle = (LPSTR)0x20;
  local_bd4.dwX = 0x21;
  local_bd4.dwY = 0x22;
  local_bd4.dwXSize = 0x23;
  local_bd4.dwYSize = 0x24;
  local_bd4.dwXCountChars = 0x25;
  local_bd4.dwYCountChars = 0x28;
  local_bd4.dwFillAttribute = 0x2c;
  local_bd4.dwFlags = 0x38;
  local_bd4.wShowWindow = 0x39;
  local_bd4.cbReserved2 = 0;
  local_bd4.lpReserved2 = (LPBYTE)0x3a;
  if ((DAT_00413840 == 0x3e9) && (DAT_004138c8 != 0)) {
    DAT_004138c8 = 0;
  }
  uVar2 = DAT_00413cd4;
  if (DAT_004138c8 == 0) {
    uVar2 = 1;
  }
  p_Var16 = &local_bd4;
  pcVar19 = local_b80;
  iVar15 = 0xe;
  do {
    FUN_00408e33(DAT_00413bd0,p_Var16->cb,pcVar19,0x40);
    pcVar19 = pcVar19 + 0x40;
    p_Var16 = (_STARTUPINFOA *)&p_Var16->lpReserved;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  DAT_00413868 = 0;
  DAT_00413c38 = DAT_00413bc0 + DAT_00413844 + DAT_00413c3c + DAT_00413c44 + DAT_00413cdc +
                 DAT_00413884 + DAT_004138cc + DAT_00413cc8 + DAT_004138c0 + DAT_00413bec;
  if (DAT_00413c38 == 0) {
    DAT_00413c38 = 1;
  }
  if (DAT_00413bcc == 0) {
    _memset(&local_bd4,0,0x44);
    local_bd4.cb = 0x44;
    FUN_00402ba2(0x3ea,0);
    FUN_00402ba2(0x3ec,0);
    FUN_00402ba2(0x3ed,1);
    FUN_00402ba2(0x3ef,1);
    FUN_00408e33(DAT_00413bd0,0x2d,(char *)local_800,0x100);
    wsprintfA(local_400,(LPCSTR)local_800,DAT_00413be0);
    SetDlgItemTextA(DAT_00413818,0x3ed,local_400);
    BVar20 = 0;
    pHVar6 = GetDlgItem(DAT_00413818,1);
    EnableWindow(pHVar6,BVar20);
    BVar20 = 0;
    pHVar6 = GetDlgItem(DAT_00413818,5);
    EnableWindow(pHVar6,BVar20);
    iVar15 = 0;
    puVar17 = &DAT_00413c60;
    do {
      pHVar7 = LoadIconA(DAT_00413bd0,(LPCSTR)(iVar15 + 0x6bU & 0xffff));
      *puVar17 = pHVar7;
      puVar17 = puVar17 + 1;
      iVar15 = iVar15 + 1;
    } while ((int)puVar17 < 0x413cb4);
    iVar15 = 0;
    if (DAT_004138d4 != 0) {
      iVar21 = 5;
      pHVar6 = GetDlgItem(DAT_00413818,0xef6);
      ShowWindow(pHVar6,iVar21);
    }
    FUN_004073c5(0);
    DAT_00413bcc = 1;
    if (0 < DAT_00413bd8) {
      do {
        if (DAT_0041388c != 0) break;
        if ((DAT_00413840 == 1000) || (*(int *)(*(int *)(DAT_004138a4 + iVar15 * 4) + 0x204) != 0))
        {
          iVar21 = iVar15 * 4;
          if (uVar2 <= *(ushort *)(*(char **)(DAT_004138a4 + iVar21) + 0x208)) {
            pcVar19 = _strchr(*(char **)(DAT_004138a4 + iVar21),0x5c);
            if (pcVar19 != (char *)0x0) {
              FUN_00408a39(*(char **)(DAT_004138a4 + iVar21),0);
            }
            lstrcpyA((LPSTR)local_800,&DAT_00410564);
            local_800[0] = FUN_00409579();
            lstrcpyA(DAT_004138b0,local_880);
            pCVar9 = *(LPCSTR *)(DAT_004138a4 + iVar21);
            if (pCVar9[0x104] != '\0') {
              pCVar9 = pCVar9 + 0x104;
            }
            lstrcatA(DAT_004138b0,pCVar9);
            FUN_004073c5((int)DAT_004138b0);
            BVar20 = CreateProcessA((LPCSTR)0x0,*(LPSTR *)(DAT_004138a4 + iVar21),
                                    (LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,0,
                                    (LPVOID)0x0,(LPCSTR)0x0,&local_bd4,&local_b90);
            if (BVar20 != 0) {
              WaitForSingleObject(local_b90.hProcess,0xffffffff);
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < DAT_00413bd8);
    }
  }
  iVar15 = 0;
  if (0 < DAT_00413bc0) {
    do {
      if (DAT_0041388c != 0) break;
      if (((DAT_00413840 == 1000) || (*(int *)(*(int *)(DAT_00413cd8 + iVar15 * 4) + 0x104) != 0))
         && (uVar2 <= *(ushort *)(*(int *)(DAT_00413cd8 + iVar15 * 4) + 0x108))) {
        lstrcpyA(DAT_004138b0,local_840);
        lstrcatA(DAT_004138b0,*(LPCSTR *)(DAT_00413cd8 + iVar15 * 4));
        FUN_004073c5((int)DAT_004138b0);
        FUN_00408ee4(*(LPCSTR *)(DAT_00413cd8 + iVar15 * 4));
        FUN_004074cb(0xdac);
      }
      DAT_00413868 = DAT_00413868 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar15 < DAT_00413bc0);
  }
  if ((DAT_004138f0 != (LPCSTR)0x0) && ((DAT_00413840 == 1000 || (DAT_0041384c != 0)))) {
    lstrcpyA(DAT_004138b0,local_900);
    lstrcatA(DAT_004138b0,DAT_004138f0);
    FUN_004073c5((int)DAT_004138b0);
    iVar15 = FUN_0040836f();
    if (iVar15 != 0) {
      return;
    }
  }
  iVar15 = 0;
  if (0 < DAT_004138cc) {
    do {
      if (DAT_0041388c != 0) break;
      if (((DAT_00413840 == 1000) || (*(int *)(*(int *)(DAT_0041382c + iVar15 * 4) + 0x104) != 0))
         && (iVar21 = iVar15 * 4, uVar2 <= *(ushort *)(*(int *)(DAT_0041382c + iVar21) + 0x108))) {
        lstrcpyA(DAT_004138b0,local_a80);
        lstrcatA(DAT_004138b0,*(LPCSTR *)(DAT_0041382c + iVar21));
        FUN_004073c5((int)DAT_004138b0);
        FUN_00408980(*(LPCSTR *)(DAT_0041382c + iVar21),0);
        FUN_00408713(*(LPCSTR *)(DAT_0041382c + iVar21));
      }
      DAT_00413868 = DAT_00413868 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar15 < DAT_004138cc);
  }
  iVar15 = 0;
  if (0 < DAT_00413884) {
    do {
      if (DAT_0041388c != 0) break;
      if ((DAT_00413840 == 1000) || (*(int *)(*(int *)(DAT_004138fc + iVar15 * 4) + 0x70c) != 0)) {
        iVar21 = iVar15 * 4;
        if ((uVar2 <= *(ushort *)(*(int *)(DAT_004138fc + iVar21) + 0x710)) &&
           (iVar8 = FUN_00408bcd((LPCSTR)(*(int *)(DAT_004138fc + iVar21) + 8)), iVar8 == 0)) {
          lstrcpyA(DAT_004138b0,local_a40);
          lstrcatA(DAT_004138b0,(LPCSTR)(*(int *)(DAT_004138fc + iVar21) + 8));
          FUN_004073c5((int)DAT_004138b0);
          iVar21 = *(int *)(DAT_004138fc + iVar21);
          pcVar19 = (char *)(iVar21 + 0x50c);
          if (DAT_004138c8 == 0) {
            pcVar19 = (char *)(iVar21 + 0x30c);
          }
          WritePrivateProfileStringA
                    ((LPCSTR)(iVar21 + 0x10c),(LPCSTR)(iVar21 + 0x20c),
                     (LPCSTR)(-(uint)(*pcVar19 != '\0') & (uint)pcVar19),(LPCSTR)(iVar21 + 8));
        }
      }
      DAT_00413868 = DAT_00413868 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar15 < DAT_00413884);
  }
  iVar21 = 0;
  iVar15 = DAT_00413bec;
  if (0 < DAT_00413be8) {
    do {
      if (((DAT_004138c8 != 0) &&
          (iVar15 = *(int *)(DAT_00413828 + iVar21 * 4), uVar2 <= *(ushort *)(iVar15 + 0x208))) &&
         (iVar15 = FUN_00408bcd((LPCSTR)(iVar15 + 0x104)), iVar15 == 0)) {
        pcVar19 = *(char **)(DAT_00413828 + iVar21 * 4);
        FUN_00407fba(pcVar19,pcVar19 + 0x104,1);
      }
      iVar21 = iVar21 + 1;
      iVar15 = DAT_00413bec;
    } while (iVar21 < DAT_00413be8);
  }
  while (iVar15 = iVar15 + -1, iVar21 = DAT_004138c0, -1 < iVar15) {
    if ((((DAT_00413840 == 1000) &&
         ((iVar21 = *(int *)(DAT_00413858 + iVar15 * 4), *(int *)(iVar21 + 0x214) != 0 ||
          ((DAT_004138c8 != 0 && (iVar21 != -0x10c)))))) ||
        (iVar21 = *(int *)(DAT_00413858 + iVar15 * 4), *(int *)(iVar21 + 0x210) != 0)) &&
       (uVar2 <= *(ushort *)(iVar21 + 0x21c))) {
      if (*(ushort *)(iVar21 + 0x220) < uVar2) {
        iVar21 = 0;
      }
      else {
        cVar4 = FUN_00407db3((LPCSTR)(iVar21 + 8),1,*(int *)(iVar21 + 0x224));
        iVar21 = CONCAT31(extraout_var,cVar4);
      }
      if (iVar21 == 1) {
        if (((DAT_004138c8 == 0) ||
            (iVar21 = *(int *)(DAT_00413858 + iVar15 * 4), *(ushort *)(iVar21 + 0x21e) != uVar2)) ||
           (*(char *)(iVar21 + 0x10c) == '\0')) {
          *(undefined1 *)(*(int *)(DAT_00413858 + iVar15 * 4) + 8) = 0;
        }
      }
      else {
        iVar21 = *(int *)(DAT_00413858 + iVar15 * 4);
        if (((*(short *)(iVar21 + 0x21e) == *(short *)(iVar21 + 0x21c)) &&
            (*(char *)(iVar21 + 0x10c) == '\0')) || (DAT_004138c8 == 0)) {
          if (uVar2 <= *(ushort *)(iVar21 + 0x218)) {
            FUN_004081ba(local_940,(LPCSTR)(iVar21 + 8),0);
          }
          iVar21 = *(int *)(DAT_00413858 + iVar15 * 4);
          if (uVar2 <= *(ushort *)(iVar21 + 0x21a)) {
            FUN_00408f39((char *)(iVar21 + 8));
          }
        }
      }
    }
  }
  while (iVar21 = iVar21 + -1, -1 < iVar21) {
    iVar15 = iVar21 * 4;
    pCVar9 = *(LPCSTR *)(DAT_00413c4c + iVar15);
    if (uVar2 <= *(ushort *)(pCVar9 + 0x214)) {
      if ((*(int *)(pCVar9 + 0x208) != 0) || (DAT_0041385c != 0)) {
        if (*(ushort *)(pCVar9 + 0x218) < uVar2) {
          iVar8 = 0;
        }
        else {
          cVar4 = FUN_00407db3(pCVar9,*(int *)(pCVar9 + 0x208),*(int *)(pCVar9 + 0x21c));
          iVar8 = CONCAT31(extraout_var_00,cVar4);
        }
        if (iVar8 == 1) {
          if (((DAT_004138c8 == 0) ||
              (*(ushort *)(*(int *)(DAT_00413c4c + iVar15) + 0x216) != uVar2)) ||
             (*(char *)(*(int *)(DAT_00413c4c + iVar15) + 0x104) == '\0')) {
            **(undefined1 **)(DAT_00413c4c + iVar15) = 0;
          }
        }
        else if (iVar8 == 2) {
          *(undefined4 *)(*(int *)(DAT_00413c4c + iVar15) + 0x208) = 1;
        }
      }
      pCVar9 = *(LPCSTR *)(DAT_00413c4c + iVar15);
      if (((*(int *)(pCVar9 + 0x208) != 0) && (*pCVar9 != '\0')) &&
         (((*(short *)(pCVar9 + 0x216) == *(short *)(pCVar9 + 0x214) && (pCVar9[0x104] == '\0')) ||
          (DAT_004138c8 == 0)))) {
        if (uVar2 <= *(ushort *)(pCVar9 + 0x210)) {
          FUN_004081ba(local_940,pCVar9,0);
        }
        if (uVar2 <= *(ushort *)(*(char **)(DAT_00413c4c + iVar15) + 0x212)) {
          FUN_00408f39(*(char **)(DAT_00413c4c + iVar15));
        }
      }
    }
  }
  iVar15 = 0;
  if (0 < DAT_00413bec) {
    do {
      if (DAT_0041388c != 0) break;
      iVar21 = *(int *)(DAT_00413858 + iVar15 * 4);
      if ((*(char *)(iVar21 + 8) != '\0') &&
         ((((DAT_00413840 == 1000 &&
            ((*(int *)(iVar21 + 0x214) != 0 ||
             (((DAT_004138c8 != 0 && (*(char *)(iVar21 + 0x10c) != '\0')) &&
              (*(ushort *)(iVar21 + 0x21e) == uVar2)))))) || (*(int *)(iVar21 + 0x210) != 0)) &&
          (uVar2 <= *(ushort *)(iVar21 + 0x21c))))) {
        if ((*(ushort *)(iVar21 + 0x21e) == uVar2) && (DAT_004138c8 != 0)) {
          iVar8 = 1;
        }
        else {
          iVar8 = 0;
        }
        iVar21 = FUN_00407fba((char *)(iVar21 + 8),(LPCSTR)(iVar21 + 0x10c),iVar8);
        if (iVar21 != 0) {
          lstrcpyA(DAT_004138b0,local_b80);
          lstrcatA(DAT_004138b0,(LPCSTR)(*(int *)(DAT_00413858 + iVar15 * 4) + 8));
          pCVar18 = DAT_004138b0;
          pHVar6 = GetDlgItem(DAT_00413818,0x3ef);
          FUN_00407bc7(pHVar6,pCVar18);
          FUN_004073c5((int)DAT_004138b0);
        }
      }
      DAT_00413868 = DAT_00413868 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar15 < DAT_00413bec);
  }
  iVar15 = 0;
  if (0 < DAT_004138c0) {
    do {
      if (DAT_0041388c != 0) break;
      pcVar19 = *(char **)(DAT_00413c4c + iVar15 * 4);
      if (((*pcVar19 != '\0') &&
          ((*(int *)(pcVar19 + 0x208) != 0 ||
           (((DAT_004138c8 != 0 && (pcVar19[0x104] != '\0')) &&
            (*(ushort *)(pcVar19 + 0x216) == uVar2)))))) && (uVar2 <= *(ushort *)(pcVar19 + 0x214)))
      {
        if ((*(ushort *)(pcVar19 + 0x216) == uVar2) && (DAT_004138c8 != 0)) {
          iVar21 = 1;
        }
        else {
          iVar21 = 0;
        }
        iVar21 = FUN_00407fba(pcVar19,pcVar19 + 0x104,iVar21);
        if (iVar21 != 0) {
          lstrcpyA(DAT_004138b0,local_b40);
          lstrcatA(DAT_004138b0,*(LPCSTR *)(DAT_00413c4c + iVar15 * 4));
          pCVar18 = DAT_004138b0;
          pHVar6 = GetDlgItem(DAT_00413818,0x3ef);
          FUN_00407bc7(pHVar6,pCVar18);
          FUN_004073c5((int)DAT_004138b0);
        }
      }
      DAT_00413868 = DAT_00413868 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar15 < DAT_004138c0);
  }
  iVar15 = 0;
  if (DAT_004138c8 != 0) {
    if (0 < DAT_00413bec) {
      do {
        if (DAT_0041388c != 0) break;
        iVar21 = *(int *)(DAT_00413858 + iVar15 * 4);
        if ((*(char *)(iVar21 + 8) != '\0') &&
           ((((DAT_00413840 == 1000 &&
              ((*(int *)(iVar21 + 0x214) != 0 ||
               ((DAT_004138c8 != 0 && (*(char *)(iVar21 + 0x10c) != '\0')))))) ||
             (*(int *)(iVar21 + 0x210) != 0)) &&
            ((((uVar2 <= *(ushort *)(iVar21 + 0x21c) && (*(char *)(iVar21 + 0x10c) != '\0')) &&
              (*(ushort *)(iVar21 + 0x21e) == uVar2)) && (uVar2 <= *(ushort *)(iVar21 + 0x218)))))))
        {
          FUN_004081ba(local_940,(LPCSTR)(iVar21 + 8),1);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < DAT_00413bec);
    }
    iVar15 = 0;
    if (0 < DAT_004138c0) {
      do {
        if (DAT_0041388c != 0) break;
        pCVar9 = *(LPCSTR *)(DAT_00413c4c + iVar15 * 4);
        if (((*pCVar9 != '\0') &&
            ((((*(int *)(pCVar9 + 0x208) != 0 || ((DAT_004138c8 != 0 && (pCVar9[0x104] != '\0'))))
              && (uVar2 <= *(ushort *)(pCVar9 + 0x214))) &&
             ((pCVar9[0x104] != '\0' && (*(ushort *)(pCVar9 + 0x216) == uVar2)))))) &&
           (uVar2 <= *(ushort *)(pCVar9 + 0x210))) {
          FUN_004081ba(local_940,pCVar9,1);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < DAT_004138c0);
    }
  }
  if (((DAT_00413840 == 1000) && (DAT_0041388c == 0)) && (DAT_004138c8 == 0)) {
    FUN_00408713(param_1);
  }
  pcVar14 = lstrlenA_exref;
  iVar15 = 0;
  if (0 < DAT_00413cc8) {
    do {
      if (DAT_0041388c != 0) break;
      if ((DAT_00413840 == 1000) || (*(int *)(*(int *)(DAT_0041386c + iVar15 * 4) + 0x104) != 0)) {
        iVar21 = iVar15 * 4;
        if (uVar2 <= *(ushort *)(*(int *)(DAT_0041386c + iVar21) + 0x10a)) {
          if ((DAT_00413840 == 0x3e9) ||
             (pCVar9 = local_ac0, uVar2 <= *(ushort *)(*(int *)(DAT_0041386c + iVar21) + 0x108))) {
            pCVar9 = local_b00;
          }
          lstrcpyA(DAT_004138b0,pCVar9);
          iVar8 = lstrlenA(*(LPCSTR *)(DAT_0041386c + iVar21));
          *(undefined1 *)(iVar8 + -1 + *(int *)(DAT_0041386c + iVar21)) = 0;
          lstrcatA(DAT_004138b0,*(LPCSTR *)(DAT_0041386c + iVar21));
          pCVar18 = DAT_004138b0;
          pHVar6 = GetDlgItem(DAT_00413818,0x3ef);
          FUN_00407bc7(pHVar6,pCVar18);
          FUN_004073c5((int)DAT_004138b0);
          if ((DAT_00413840 == 0x3e9) ||
             (uVar2 <= *(ushort *)(*(int *)(DAT_0041386c + iVar21) + 0x108))) {
            iVar8 = 1;
          }
          else {
            iVar8 = 0;
          }
          FUN_0040754e(*(LPCSTR *)(DAT_0041386c + iVar21),iVar8);
        }
      }
      DAT_00413868 = DAT_00413868 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar15 < DAT_00413cc8);
  }
  if (DAT_004138c8 != 0) {
    if (DAT_004138e8 == 0) {
      FUN_00408713(param_1);
    }
    else {
      uVar11 = FUN_0040a790(param_1,1,unaff_EDI);
      if (uVar11 != 0xffffffff) {
        FUN_0040a610();
        FUN_0040a530(uVar11);
      }
    }
  }
  local_bd8 = 0;
  iVar15 = DAT_00413cdc;
  if (0 < DAT_00413c3c) {
    do {
      iVar21 = local_bd8;
      iVar15 = DAT_00413cdc;
      if (DAT_0041388c != 0) break;
      if (((DAT_00413840 == 1000) ||
          (*(int *)(*(int *)(DAT_00413bc4 + local_bd8 * 4) + 0x1210) != 0)) &&
         (iVar15 = local_bd8 * 4, uVar2 <= *(ushort *)(*(int *)(DAT_00413bc4 + iVar15) + 0x1214))) {
        lstrcpyA(DAT_004138b0,local_9c0);
        iVar8 = (*pcVar14)(DAT_004138b0);
        pCVar18 = DAT_004138b0 + iVar8;
        lstrcatA(DAT_004138b0,(LPCSTR)(*(int *)(DAT_00413bc4 + iVar15) + 8));
        iVar8 = (*pcVar14)(pCVar18);
        if (0x30 < iVar8) {
          lstrcpyA(pCVar18 + 0x2d,&DAT_00410560);
        }
        FUN_004073c5((int)DAT_004138b0);
        iVar8 = *(int *)(DAT_00413bc4 + iVar15);
        lpData = (HKEY)(iVar8 + 0xa08);
        if (DAT_004138c8 == 0) {
          lpData = (HKEY)(iVar8 + 0x208);
        }
        if (DAT_00413834 == 0) {
          if ((*(char *)(iVar8 + 0x108) == '\0') && (*(int *)(iVar8 + 0x1208) == 0)) {
            RegSetValueA((HKEY)0x80000000,(LPCSTR)(iVar8 + 8),1,(LPCSTR)lpData,0);
          }
        }
        else {
          LVar10 = RegOpenKeyExA(*(HKEY *)(&DAT_00410020 +
                                          *(int *)(*(int *)(DAT_00413bc4 + iVar15) + 0x1208) * 4),
                                 (LPCSTR)(*(int *)(DAT_00413bc4 + iVar15) + 8),0,0x1f,&local_bdc);
          if (LVar10 == 0) {
            iVar21 = (*pcVar14)(lpData);
            cbData = iVar21 + 1;
            iVar21 = *(int *)(*(int *)(DAT_00413bc4 + iVar15) + 0x120c);
            if (iVar21 == 3) {
              iVar21 = FUN_0040a450((byte *)lpData);
              lpData->unused = iVar21;
              cbData = 4;
            }
            else if (iVar21 == 2) {
              cbData = 0;
              bVar5 = (byte)lpData->unused;
              pHVar13 = lpData;
              while (bVar5 != 0) {
                iVar21 = lstrlenA((LPCSTR)pHVar13);
                cbData = cbData + 1 + iVar21;
                iVar21 = lstrlenA((LPCSTR)pHVar13);
                piVar3 = &pHVar13->unused;
                pHVar13 = (HKEY)((int)&pHVar13->unused + iVar21 + 1);
                bVar5 = *(byte *)((int)piVar3 + iVar21 + 1);
              }
            }
            else if (iVar21 == 4) {
              local_be5 = '\0';
              cbData = 0;
              local_be0 = 0;
              bVar5 = (byte)lpData->unused;
              pHVar13 = lpData;
              local_be4 = lpData;
              while (bVar5 != 0) {
                uVar11 = FUN_0040a1b0((int)(char)(byte)pHVar13->unused);
                bVar5 = (byte)uVar11;
                *(byte *)&pHVar13->unused = bVar5;
                if (DAT_0041103c < 2) {
                  uVar11 = (byte)PTR_DAT_00410e30[(char)bVar5 * 2] & 4;
                }
                else {
                  uVar11 = FUN_0040a3b0((int)(char)bVar5,4);
                }
                if ((uVar11 != 0) ||
                   ((bVar5 = (byte)pHVar13->unused, '@' < (char)bVar5 && ((char)bVar5 < 'G')))) {
                  bVar5 = (byte)pHVar13->unused;
                  if (local_be0 == 0) {
                    if ((char)bVar5 < ':') {
                      local_be5 = bVar5 - 0x30;
                    }
                    else {
                      local_be5 = bVar5 - 0x37;
                    }
                    local_be0 = 1;
                  }
                  else {
                    if ((char)bVar5 < ':') {
                      cVar4 = -0x30;
                    }
                    else {
                      cVar4 = -0x37;
                    }
                    cbData = cbData + 1;
                    local_be0 = 0;
                    *(byte *)&local_be4->unused = local_be5 << 4 | bVar5 + cVar4;
                    local_be4 = (HKEY)((int)&local_be4->unused + 1);
                  }
                }
                pHVar13 = (HKEY)((int)&pHVar13->unused + 1);
                bVar5 = (byte)pHVar13->unused;
              }
            }
            RegSetValueExA(local_bdc,(LPCSTR)(*(int *)(DAT_00413bc4 + iVar15) + 0x108),0,
                           *(DWORD *)(&DAT_00410038 +
                                     *(int *)(*(int *)(DAT_00413bc4 + iVar15) + 0x120c) * 4),
                           (BYTE *)lpData,cbData);
            RegCloseKey(local_bdc);
            pcVar14 = lstrlenA_exref;
            iVar21 = local_bd8;
          }
        }
      }
      DAT_00413868 = DAT_00413868 + 1;
      local_bd8 = iVar21 + 1;
      iVar15 = DAT_00413cdc;
    } while (local_bd8 < DAT_00413c3c);
  }
  while ((local_bd8 = iVar15 + -1, iVar15 = DAT_00413c44, -1 < local_bd8 && (DAT_0041388c == 0))) {
    if (((DAT_00413840 == 1000) || (*(int *)(*(int *)(DAT_00413848 + local_bd8 * 4) + 0x210) != 0))
       && (iVar15 = local_bd8 * 4, uVar2 <= *(ushort *)(*(int *)(DAT_00413848 + iVar15) + 0x214))) {
      lstrcpyA(DAT_004138b0,local_a00);
      iVar21 = (*pcVar14)(DAT_004138b0);
      pCVar18 = DAT_004138b0 + iVar21;
      lstrcatA(DAT_004138b0,(LPCSTR)(*(int *)(DAT_00413848 + iVar15) + 8));
      iVar21 = (*pcVar14)(pCVar18);
      if (0x30 < iVar21) {
        lstrcpyA(pCVar18 + 0x2d,&DAT_00410560);
      }
      FUN_004073c5((int)DAT_004138b0);
      if (DAT_00413834 == 0) {
        iVar15 = *(int *)(DAT_00413848 + iVar15);
        if ((*(char *)(iVar15 + 0x10c) == '\0') && (*(int *)(iVar15 + 0x20c) == 0)) {
          RegDeleteKeyA((HKEY)0x80000000,(LPCSTR)(iVar15 + 8));
        }
      }
      else {
        local_bdc = (HKEY)0x1;
        do {
          LVar10 = RegOpenKeyExA(*(HKEY *)(&DAT_00410020 +
                                          *(int *)(*(int *)(DAT_00413848 + iVar15) + 0x20c) * 4),
                                 (LPCSTR)(*(int *)(DAT_00413848 + iVar15) + 8),0,0x1f,&local_be4);
          if (LVar10 == 0) {
            if (local_bdc != (HKEY)0x0) {
              RegDeleteValueA(local_be4,(LPCSTR)(*(int *)(DAT_00413848 + iVar15) + 0x10c));
            }
            local_bdc = (HKEY)0x0;
            local_be0 = 0x100;
            LVar10 = RegEnumValueA(local_be4,0,(LPSTR)local_800,&local_be0,(LPDWORD)0x0,(LPDWORD)0x0
                                   ,(LPBYTE)0x0,(LPDWORD)0x0);
            if (LVar10 == 0) {
              RegCloseKey(local_be4);
              iVar21 = 0;
            }
            else {
              local_be0 = 0x100;
              iVar21 = RegEnumKeyExA(local_be4,0,(LPSTR)local_800,&local_be0,(LPDWORD)0x0,(LPSTR)0x0
                                     ,(LPDWORD)0x0,(PFILETIME)0x0);
              RegCloseKey(local_be4);
              if (iVar21 == 0) goto LAB_004070c6;
              RegDeleteKeyA(*(HKEY *)(&DAT_00410020 +
                                     *(int *)(*(int *)(DAT_00413848 + iVar15) + 0x20c) * 4),
                            (LPCSTR)(*(int *)(DAT_00413848 + iVar15) + 8));
            }
            if (iVar21 != 0) {
              iVar8 = *(int *)(DAT_00413848 + iVar15);
              iVar12 = (*pcVar14)(iVar8 + 8);
              for (pcVar19 = (char *)(iVar12 + 7 + iVar8);
                  ((char *)(iVar8 + 8) < pcVar19 && (*pcVar19 != '\\')); pcVar19 = pcVar19 + -1) {
              }
              *pcVar19 = '\0';
            }
          }
          else {
            iVar21 = 0;
          }
LAB_004070c6:
        } while ((iVar21 != 0) && (*(char *)(*(int *)(DAT_00413848 + iVar15) + 8) != '\0'));
      }
    }
    DAT_00413868 = DAT_00413868 + 1;
    iVar15 = local_bd8;
  }
  while (iVar15 = iVar15 + -1, -1 < iVar15) {
    if (DAT_0041388c != 0) {
      return;
    }
    if (((DAT_00413840 == 1000) || (*(int *)(*(int *)(DAT_00413910 + iVar15 * 4) + 0x104) != 0)) &&
       (uVar2 <= *(ushort *)(*(int *)(DAT_00413910 + iVar15 * 4) + 0x108))) {
      lstrcpyA(DAT_004138b0,local_8c0);
      iVar21 = (*pcVar14)(DAT_004138b0);
      pCVar18 = DAT_004138b0 + iVar21;
      lstrcatA(DAT_004138b0,*(LPCSTR *)(DAT_00413910 + iVar15 * 4));
      iVar21 = (*pcVar14)(pCVar18);
      if (0x30 < iVar21) {
        lstrcpyA(pCVar18 + 0x2d,&DAT_00410560);
      }
      FUN_004073c5((int)DAT_004138b0);
      pCVar9 = *(LPCSTR *)(DAT_00413910 + iVar15 * 4);
      FUN_00408573(pCVar9,*(int *)(pCVar9 + 0x100));
    }
    DAT_00413868 = DAT_00413868 + 1;
  }
  if (DAT_0041388c == 0) {
    iVar15 = 0;
    bVar1 = true;
    if (0 < DAT_00413844) {
      do {
        if (DAT_0041388c != 0) break;
        if (((DAT_00413840 == 1000) || (*(int *)(*(int *)(DAT_00413898 + iVar15 * 4) + 0x300) != 0))
           && ((*(ushort *)(*(int *)(DAT_00413898 + iVar15 * 4) + 0x304) == uVar2 ||
               (DAT_004138c8 == 0)))) {
          if (bVar1) {
            FUN_00407704();
            bVar1 = false;
          }
          lstrcpyA(DAT_004138b0,local_980);
          lstrcatA(DAT_004138b0,(LPCSTR)(*(int *)(DAT_00413898 + iVar15 * 4) + 0x100));
          FUN_004073c5((int)DAT_004138b0);
          FUN_004078d5(iVar15);
        }
        DAT_00413868 = DAT_00413868 + 1;
        iVar15 = iVar15 + 1;
      } while (iVar15 < DAT_00413844);
    }
    if (!bVar1) {
      if (DAT_00413890 != (HCONV)0x0) {
        DdeDisconnect(DAT_00413890);
      }
      FUN_004073c5(0);
      DdeUninitialize(DAT_0041383c);
    }
    if ((DAT_004138d8 != (LPCSTR)0x0) &&
       ((((DAT_00413840 == 1000 && (DAT_004138c8 == 0)) ||
         ((DAT_004138c8 != 0 && (DAT_004138e8 == 0)))) &&
        ((DAT_00413834 != 0 &&
         (LVar10 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Wise_Solutions_WamUser_00410540,0,0x1f,
                                 &local_bdc), LVar10 == 0)))))) {
      local_be0 = 0x100;
      LVar10 = RegQueryValueExA(local_bdc,&DAT_00410538,(LPDWORD)0x0,(LPDWORD)&local_be4,local_800,
                                &local_be0);
      if (LVar10 == 0) {
        FUN_00408a39((char *)local_800,0);
        lstrcatA((LPSTR)local_800,s__U___00410530);
        lstrcatA((LPSTR)local_800,DAT_004138d8);
        lstrcatA((LPSTR)local_800,&DAT_0041052c);
        WinExec((LPCSTR)local_800,5);
      }
      RegCloseKey(local_bdc);
    }
  }
  return;
}


