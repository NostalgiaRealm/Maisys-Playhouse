
/* ==== FUN_004036c1 @ 004036c1 ==== 
 * signature: undefined4 __stdcall FUN_004036c1(LPCSTR param_1, LPSTR param_2)
 * body: 004036c1-00405e00
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004036c1(LPCSTR param_1,LPSTR param_2)

{
  short sVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  HFILE hFile;
  int *piVar7;
  HKEY pHVar8;
  uint uVar9;
  size_t _MaxCount;
  int iVar10;
  SC_HANDLE hSCObject;
  LSTATUS LVar11;
  LPSTR pCVar12;
  CHAR *pCVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  CHAR local_1c50 [512];
  char local_1a50 [256];
  char local_1950 [256];
  CHAR local_1850 [260];
  CHAR local_174c [260];
  CHAR local_1648 [4];
  BYTE local_1644 [256];
  CHAR local_1544 [260];
  CHAR local_1440 [512];
  CHAR local_1240 [260];
  char local_113c [256];
  CHAR local_103c [512];
  CHAR local_e3c [256];
  CHAR local_d3c [260];
  CHAR local_c38 [255];
  char acStackY_b39 [513];
  HKEY__ local_938 [63];
  char acStackY_839 [5];
  char local_834;
  char local_833;
  undefined1 local_832;
  CHAR local_831 [2];
  char local_82f;
  char local_82e;
  char local_82d;
  byte local_82c;
  char local_82b;
  CHAR local_82a [7];
  char local_823 [2027];
  DWORD local_38;
  DWORD local_34 [2];
  HKEY hKey;
  HKEY__ *_Str1;
  DWORD DVar17;
  undefined4 uVar18;
  
  FUN_0040a500();
  lstrcpyA(local_d3c,&DAT_00410528);
  lstrcpyA(local_1240,&DAT_00410528);
  lstrcpyA(param_2,param_1);
  pcVar2 = FUN_004097b1(param_2);
  if (param_2 < pcVar2) {
    pcVar2[-1] = '\0';
  }
  FUN_00408a39(param_2,0);
  lstrcatA(param_2,&DAT_004100cc);
  hKey = (HKEY)0x0;
  GetDriveTypeA(&DAT_00410524);
  GetDriveTypeA(&DAT_00410520);
  puVar3 = FUN_004098e3(0x10c);
  *(undefined4 **)(DAT_0041386c + DAT_00413cc8 * 4) = puVar3;
  *(undefined4 *)(*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x104) = 0;
  *(undefined2 *)(*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x108) = 0;
  *(undefined2 *)(*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x10a) = 0x7fff;
  pCVar12 = *(LPSTR *)(DAT_0041386c + DAT_00413cc8 * 4);
  lstrcpyA(pCVar12,param_1);
  FUN_00408a39(pCVar12,1);
  iVar4 = lstrlenA(pCVar12);
  for (pcVar2 = pCVar12 + iVar4 + -1; pCVar12 < pcVar2; pcVar2 = pcVar2 + -1) {
    if (*pcVar2 == '\\') goto LAB_004037d5;
    *pcVar2 = '\0';
  }
  if (*pcVar2 == '\\') {
LAB_004037d5:
    pcVar2[1] = '\0';
  }
  iVar4 = lstrlenA(pCVar12);
  if (iVar4 < 4) {
    *pCVar12 = '\0';
  }
  iVar4 = 0;
  bVar15 = true;
  do {
    if (iVar4 == 0) {
      GetSystemDirectoryA(acStackY_839 + 1,0x100);
    }
    else {
      GetWindowsDirectoryA(acStackY_839 + 1,0x100);
    }
    iVar5 = lstrlenA(acStackY_839 + 1);
    if (acStackY_839[iVar5] != '\\') {
      lstrcatA(acStackY_839 + 1,&DAT_004100cc);
    }
    sVar6 = lstrlenA(pCVar12);
    iVar5 = __strnicmp(pCVar12,acStackY_839 + 1,sVar6);
    if (iVar5 == 0) {
      bVar15 = false;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  GetWindowsDirectoryA(local_1850,0x104);
  GetSystemDirectoryA(local_1544,0x104);
  lstrcpyA(local_174c,local_1544);
  lstrcatA(local_174c,s__WIN32S_00410518);
  if (DAT_00413834 == 1) {
    GetSystemDirectoryA(DAT_0041389c,0x104);
    lstrcpyA(local_1648,DAT_0041389c);
    lstrcatA(local_1648,&DAT_004100cc);
    sVar6 = lstrlenA(pCVar12);
    iVar4 = __strnicmp(pCVar12,local_1648,sVar6);
    if (iVar4 == 0) {
      bVar15 = false;
    }
  }
  else {
    lstrcpyA(DAT_0041389c,local_1544);
  }
  if ((bVar15) && (*pCVar12 != '\0')) {
    DAT_00413cc8 = DAT_00413cc8 + 1;
  }
  hFile = _lopen(param_1,0);
  if (hFile == -1) {
    FUN_00408e33(DAT_00413bd0,3,acStackY_839 + 1,0x100);
    FUN_00408e33(DAT_00413bd0,2,acStackY_b39 + 1,0x100);
    if (DAT_0041381c != (HWND)0x0) {
      DestroyWindow(DAT_0041381c);
    }
    MessageBoxA(DAT_00413820,acStackY_839 + 1,acStackY_b39 + 1,0);
  }
  else {
    bVar15 = true;
    FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
    if (local_834 == ' ') {
      DAT_0041387c = 1;
    }
    DAT_00413cd4 = DAT_00413cd4 + 1;
    local_834 = '\0';
    iVar4 = lstrcmpA(acStackY_839 + 1,&DAT_00410510);
    if (iVar4 == 0) {
      do {
        FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
        local_832 = 0;
        iVar4 = lstrcmpA(acStackY_839 + 1,s_Title__00410508);
        if (iVar4 == 0) break;
      } while (acStackY_839[1] != '\0');
      if (acStackY_839[1] != '\0') {
        bVar15 = false;
        lstrcpyA(DAT_00413be0,local_831);
        iVar4 = lstrlenA(DAT_00413be0);
        if ((0xd < iVar4) &&
           (iVar5 = lstrcmpiA(DAT_00413be0 + iVar4 + -0xd,s_INSTALLATION_004104f8), iVar5 == 0)) {
          DAT_00413be0[iVar4 + -0xd] = '\0';
        }
        iVar4 = lstrlenA(DAT_00413be0);
        if ((8 < iVar4) &&
           (iVar5 = lstrcmpiA(DAT_00413be0 + iVar4 + -8,s_INSTALL_004104ec), iVar5 == 0)) {
          DAT_00413be0[iVar4 + -8] = '\0';
        }
        if (DAT_00413bfc == 0) {
          FUN_00408e33(DAT_00413bd0,0x19,local_113c,0x100);
          wsprintfA(local_e3c,s__s__s_004104e4);
          SetWindowTextA(DAT_00413820,local_e3c);
        }
      }
    }
    if (!bVar15) {
      do {
        FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
        do {
          if (acStackY_839[1] == '\0') {
            _lclose(hFile);
            return 0;
          }
          bVar15 = true;
          iVar4 = __strcmpi(acStackY_839 + 1,s_Non_System_File__004104d0);
          if (iVar4 == 0) {
            FUN_00405e01(acStackY_839 + 1,0x800,hFile,1);
          }
          iVar4 = __strcmpi(acStackY_839 + 1,s_Shared_DLL_counter_ignored__004104b4);
          bVar14 = iVar4 == 0;
          if (bVar14) {
            FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
          }
          iVar4 = __strnicmp(acStackY_839 + 1,s_File_Copy__004104a8,0xb);
          if (((iVar4 == 0) ||
              (iVar4 = __strnicmp(acStackY_839 + 1,s_Shell_Link__00410498,0xc), iVar4 == 0)) ||
             (iVar4 = __strnicmp(acStackY_839 + 1,s_File_Overwrite__00410484,0x10), iVar4 == 0)) {
            bVar16 = false;
            pcVar2 = _strchr(acStackY_839 + 1,0x7c);
            if (pcVar2 != (char *)0x0) {
              if (pcVar2[-1] == ' ') {
                pcVar2 = pcVar2 + -1;
              }
              *pcVar2 = '\0';
            }
            if (acStackY_839[1] == 'S') {
              lstrcpyA((LPSTR)local_938,(LPCSTR)&local_82c);
              if (DAT_004138d8 != (LPSTR)0x0) {
                sVar6 = lstrlenA(local_d3c);
                iVar4 = __strnicmp((char *)local_938,local_d3c,sVar6);
                if (iVar4 == 0) {
                  sVar6 = lstrlenA(local_1240);
                  iVar4 = __strnicmp((char *)local_938,local_1240,sVar6);
                  if (iVar4 != 0) {
                    local_938[0].unused._0_1_ = '\0';
                  }
                }
              }
            }
            else if (local_833 == 'C') {
              lstrcpyA((LPSTR)local_938,&local_82d);
            }
            else {
              lstrcpyA((LPSTR)local_938,local_82a + 2);
              bVar16 = true;
              if (DAT_0041385c != 0) {
                hKey = (HKEY)0x405730;
                LVar11 = RegOpenKeyExA((HKEY)0x80000002,
                                       PTR_s_Software_Microsoft_Windows_Curre_0041004c,0,0x1f,
                                       (PHKEY)&stack0xffffffdc);
                if (LVar11 == 0) {
                  hKey = local_938;
                  pHVar8 = hKey;
                  LVar11 = RegQueryValueExA(hKey,(LPCSTR)hKey,(LPDWORD)0x0,local_34,local_1644,
                                            (LPDWORD)&stack0xffffffd4);
                  bVar16 = LVar11 != 0;
                  RegCloseKey(pHVar8);
                }
              }
            }
            FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
            local_c38[0] = '\0';
            iVar4 = __strnicmp(acStackY_839 + 1,s_Backup_Copy__00410414,0xd);
            bVar15 = iVar4 == 0;
            if (bVar15) {
              lstrcpyA(local_c38,&local_82b);
              DAT_00413bd4 = 1;
            }
            _Str1 = local_938;
            iVar4 = __strnicmp((char *)_Str1,&DAT_00410410,2);
            if ((iVar4 != 0) || (_Str1 != (HKEY__ *)0x2)) {
              iVar5 = 0x4057f8;
              iVar4 = __strnicmp((char *)local_938,&DAT_0041040c,2);
              if ((((iVar4 != 0) || (iVar5 != 2)) &&
                  (((!bVar16 || (local_c38[0] != '\0')) && ((char)local_938[0].unused != '\0')))) &&
                 (iVar4 = FUN_00408bcd((LPCSTR)local_938), iVar4 == 0)) {
                lstrcpyA(acStackY_b39 + 1,(LPCSTR)local_938);
                iVar4 = lstrlenA(acStackY_b39 + 1);
                for (pcVar2 = acStackY_b39 + iVar4; acStackY_b39 + 1 < pcVar2; pcVar2 = pcVar2 + -1)
                {
                  if (*pcVar2 == '\\') goto LAB_0040587f;
                  *pcVar2 = '\0';
                }
                if (*pcVar2 == '\\') {
LAB_0040587f:
                  *pcVar2 = '\0';
                }
                iVar4 = lstrcmpiA(acStackY_b39 + 1,local_1850);
                if ((((iVar4 == 0) || (iVar4 = lstrcmpiA(acStackY_b39 + 1,local_1544), iVar4 == 0))
                    || (iVar4 = lstrcmpiA(acStackY_b39 + 1,DAT_0041389c), iVar4 == 0)) ||
                   (iVar4 = lstrcmpiA(acStackY_b39 + 1,local_174c), iVar4 == 0)) {
                  iVar4 = 0;
                  if (0 < DAT_004138c0) {
                    do {
                      iVar5 = lstrcmpiA((LPCSTR)local_938,*(LPCSTR *)(DAT_00413c4c + iVar4 * 4));
                      if (iVar5 == 0) break;
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < DAT_004138c0);
                  }
                  if (iVar4 < DAT_004138c0) {
                    iVar4 = iVar4 * 4;
                    *(short *)(*(int *)(DAT_00413c4c + iVar4) + 0x214) = DAT_00413cd4;
                    if (!bVar14) {
                      *(short *)(*(int *)(DAT_00413c4c + iVar4) + 0x218) = DAT_00413cd4;
                      piVar7 = (int *)(*(int *)(DAT_00413c4c + iVar4) + 0x21c);
                      *piVar7 = *piVar7 + 1;
                    }
                    if (local_c38[0] != '\0') {
                      lstrcpyA((LPSTR)(*(int *)(DAT_00413c4c + iVar4) + 0x104),local_c38);
                      *(short *)(*(int *)(DAT_00413c4c + iVar4) + 0x216) = DAT_00413cd4;
                    }
                  }
                  else {
                    DVar17 = 0x220;
                    puVar3 = FUN_004098e3(0x220);
                    *(undefined4 **)(DAT_00413c4c + DAT_004138c0 * 4) = puVar3;
                    *(DWORD *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x208) = DVar17;
                    if (DAT_0041387c == 0) {
                      OemToCharA((LPCSTR)local_938,*(LPSTR *)(DAT_00413c4c + DAT_004138c0 * 4));
                    }
                    else {
                      lstrcpyA(*(LPSTR *)(DAT_00413c4c + DAT_004138c0 * 4),(LPCSTR)local_938);
                    }
                    if (DAT_0041387c == 0) {
                      OemToCharA(local_c38,
                                 (LPSTR)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x104));
                    }
                    else {
                      lstrcpyA((LPSTR)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x104),local_c38)
                      ;
                    }
                    *(undefined2 *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x212) = 0;
                    *(undefined2 *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x210) = 0;
                    *(short *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x214) = DAT_00413cd4;
                    *(short *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x216) = DAT_00413cd4;
                    if (bVar14) {
                      *(undefined2 *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x218) = 0;
                    }
                    else {
                      *(short *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x218) = DAT_00413cd4;
                      *(undefined4 *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x21c) = 1;
                    }
                    if ((bVar16) || (local_c38[0] != '\0')) {
                      *(undefined4 *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x20c) = 0;
                    }
                    else {
                      *(undefined4 *)(*(int *)(DAT_00413c4c + DAT_004138c0 * 4) + 0x20c) = 1;
                    }
                    DAT_004138c0 = DAT_004138c0 + 1;
                  }
                }
                else {
                  hKey = (HKEY)*DAT_00413858;
                  local_34[1] = 0x40590e;
                  piVar7 = FUN_004099fa(DAT_00413858 + DAT_00413bec,(int *)hKey,0x228,DAT_00413bec,
                                        (char *)local_938,(LPCSTR)0x0,(LPCSTR)0x0);
                  if (piVar7 == (int *)0x0) {
                    *(undefined4 *)(DAT_00413858[DAT_00413bec] + 0x210) = 0;
                    if (DAT_0041387c == 0) {
                      OemToCharA((LPCSTR)local_938,(LPSTR)(DAT_00413858[DAT_00413bec] + 8));
                    }
                    else {
                      lstrcpyA((LPSTR)(DAT_00413858[DAT_00413bec] + 8),(LPCSTR)local_938);
                    }
                    if (DAT_0041387c == 0) {
                      OemToCharA(local_c38,(LPSTR)(DAT_00413858[DAT_00413bec] + 0x10c));
                    }
                    else {
                      lstrcpyA((LPSTR)(DAT_00413858[DAT_00413bec] + 0x10c),local_c38);
                    }
                    *(undefined2 *)(DAT_00413858[DAT_00413bec] + 0x21a) = 0;
                    *(undefined2 *)(DAT_00413858[DAT_00413bec] + 0x218) = 0;
                    *(short *)(DAT_00413858[DAT_00413bec] + 0x21c) = DAT_00413cd4;
                    *(short *)(DAT_00413858[DAT_00413bec] + 0x21e) = DAT_00413cd4;
                    if (bVar14) {
                      *(undefined2 *)(DAT_00413858[DAT_00413bec] + 0x220) = 0;
                    }
                    else {
                      *(short *)(DAT_00413858[DAT_00413bec] + 0x220) = DAT_00413cd4;
                      *(undefined4 *)(DAT_00413858[DAT_00413bec] + 0x224) = 1;
                    }
                    if ((bVar16) || (local_c38[0] != '\0')) {
                      *(undefined4 *)(DAT_00413858[DAT_00413bec] + 0x214) = 0;
                    }
                    else {
                      *(undefined4 *)(DAT_00413858[DAT_00413bec] + 0x214) = 1;
                    }
                    DAT_00413bec = DAT_00413bec + 1;
                  }
                  else {
                    *(short *)(piVar7 + 0x87) = DAT_00413cd4;
                    sVar1 = DAT_00413cd4;
                    if (!bVar14) {
                      piVar7[0x89] = piVar7[0x89] + 1;
                      *(short *)(piVar7 + 0x88) = sVar1;
                    }
                    if (local_c38[0] != '\0') {
                      lstrcpyA((LPSTR)(piVar7 + 0x43),local_c38);
                      *(short *)((int)piVar7 + 0x21e) = DAT_00413cd4;
                    }
                  }
                }
              }
            }
          }
          else {
            iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Key__00410478,0xb);
            if (iVar4 == 0) {
              lstrcpyA(local_103c,&local_82d);
              bVar15 = false;
              FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
              iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Val__0041046c,0xb);
              if (iVar4 == 0) {
                iVar5 = 0;
                FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                local_1440[0] = '\0';
                uVar18 = 0;
                iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Name__0041045c,0xc);
                if (iVar4 == 0) {
                  lstrcpyA(local_1440,(LPCSTR)&local_82c);
                  FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                }
                iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Type__0041044c,0xc);
                if (iVar4 == 0) {
                  uVar18 = FUN_0040a4f0(&local_82c);
                  FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                }
                iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Root__0041043c,0xc);
                if (iVar4 == 0) {
                  iVar5 = FUN_0040a4f0(&local_82c);
                  FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                }
                if ((iVar5 != 1) || (DAT_004138d8 == (LPSTR)0x0)) {
                  iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Old__00410430,0xb);
                  if (iVar4 == 0) {
                    hKey = (HKEY)*DAT_00413bc4;
                    local_34[1] = 0x403e10;
                    piVar7 = FUN_004099fa(DAT_00413bc4 + DAT_00413c3c,(int *)hKey,0x1218,
                                          DAT_00413c3c,local_103c,local_1440,(LPCSTR)0x0);
                    if (piVar7 == (int *)0x0) {
                      *(undefined4 *)(DAT_00413bc4[DAT_00413c3c] + 0x1210) = 0;
                      *(undefined4 *)(DAT_00413bc4[DAT_00413c3c] + 0x120c) = uVar18;
                      *(int *)(DAT_00413bc4[DAT_00413c3c] + 0x1208) = iVar5;
                      *(short *)(DAT_00413bc4[DAT_00413c3c] + 0x1214) = DAT_00413cd4;
                      lstrcpyA((LPSTR)(DAT_00413bc4[DAT_00413c3c] + 8),local_103c);
                      lstrcpyA((LPSTR)(DAT_00413bc4[DAT_00413c3c] + 0x108),local_1440);
                      pCVar12 = (LPSTR)(DAT_00413bc4[DAT_00413c3c] + 0x208);
                      do {
                        lstrcpyA(pCVar12,&local_82d);
                        iVar4 = lstrlenA(pCVar12);
                        pCVar12 = pCVar12 + iVar4 + 1;
                        FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                        iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Old__00410430,0xb);
                      } while (iVar4 == 0);
                      *pCVar12 = '\0';
                      lstrcpyA((LPSTR)(DAT_00413bc4[DAT_00413c3c] + 0xa08),
                               (LPCSTR)(DAT_00413bc4[DAT_00413c3c] + 0x208));
                      DAT_00413c3c = DAT_00413c3c + 1;
                    }
                    else {
                      pCVar13 = local_1c50;
                      do {
                        lstrcpyA(pCVar13,&local_82d);
                        iVar4 = lstrlenA(pCVar13);
                        pCVar13 = pCVar13 + iVar4 + 1;
                        FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                        iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Old__00410430,0xb);
                      } while (iVar4 == 0);
                      *pCVar13 = '\0';
                      lstrcpyA((LPSTR)(piVar7 + 0x282),local_1c50);
                      *(short *)(piVar7 + 0x485) = DAT_00413cd4;
                    }
                  }
                  else {
                    hKey = (HKEY)*DAT_00413848;
                    local_34[1] = 0x403fc6;
                    piVar7 = FUN_004099fa(DAT_00413848 + DAT_00413cdc,(int *)hKey,0x218,DAT_00413cdc
                                          ,local_103c,local_1440,(LPCSTR)0x0);
                    if (piVar7 == (int *)0x0) {
                      *(undefined4 *)(DAT_00413848[DAT_00413cdc] + 0x210) = 0;
                      *(int *)(DAT_00413848[DAT_00413cdc] + 0x20c) = iVar5;
                      *(short *)(DAT_00413848[DAT_00413cdc] + 0x214) = DAT_00413cd4;
                      lstrcpyA((LPSTR)(DAT_00413848[DAT_00413cdc] + 8),local_103c);
                      lstrcpyA((LPSTR)(DAT_00413848[DAT_00413cdc] + 0x10c),local_1440);
                      DAT_00413cdc = DAT_00413cdc + 1;
                    }
                    else {
                      *(short *)(piVar7 + 0x85) = DAT_00413cd4;
                    }
                  }
                }
              }
            }
            else {
              iVar4 = __strnicmp(acStackY_839 + 1,s_File_Edit__00410424,0xb);
              if (iVar4 == 0) {
                lstrcpyA(local_e3c,&local_82d);
                FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                local_113c[0] = '\0';
                iVar4 = __strnicmp(acStackY_839 + 1,s_Backup_Copy__00410414,0xd);
                bVar15 = iVar4 == 0;
                if (bVar15) {
                  lstrcpyA(local_113c,&local_82b);
                }
                pcVar2 = local_e3c;
                iVar4 = __strnicmp(pcVar2,&DAT_00410410,2);
                if ((iVar4 != 0) || (pcVar2 != (char *)0x2)) {
                  iVar5 = 0x40411b;
                  iVar4 = __strnicmp(local_e3c,&DAT_0041040c,2);
                  if (((iVar4 != 0) || (iVar5 != 2)) &&
                     ((local_113c[0] != '\0' && (iVar4 = FUN_00408bcd(local_e3c), iVar4 == 0)))) {
                    lstrcpyA(acStackY_b39 + 1,local_e3c);
                    iVar4 = 0;
                    if (0 < DAT_00413be8) {
                      do {
                        iVar5 = lstrcmpiA(local_e3c,*(LPCSTR *)(DAT_00413828 + iVar4 * 4));
                        if (iVar5 == 0) break;
                        iVar4 = iVar4 + 1;
                      } while (iVar4 < DAT_00413be8);
                    }
                    if (iVar4 < DAT_00413be8) {
                      *(short *)(*(int *)(DAT_00413828 + iVar4 * 4) + 0x208) = DAT_00413cd4;
                      pCVar13 = local_113c;
                      pHVar8 = (HKEY)(*(int *)(DAT_00413828 + iVar4 * 4) + 0x104);
                      goto LAB_0040528a;
                    }
                    puVar3 = FUN_004098e3(0x20a);
                    *(undefined4 **)(DAT_00413828 + DAT_00413be8 * 4) = puVar3;
                    if (DAT_0041387c == 0) {
                      OemToCharA(local_e3c,*(LPSTR *)(DAT_00413828 + DAT_00413be8 * 4));
                    }
                    else {
                      lstrcpyA(*(LPSTR *)(DAT_00413828 + DAT_00413be8 * 4),local_e3c);
                    }
                    if (DAT_0041387c == 0) {
                      OemToCharA(local_113c,
                                 (LPSTR)(*(int *)(DAT_00413828 + DAT_00413be8 * 4) + 0x104));
                    }
                    else {
                      lstrcpyA((LPSTR)(*(int *)(DAT_00413828 + DAT_00413be8 * 4) + 0x104),local_113c
                              );
                    }
                    *(short *)(*(int *)(DAT_00413828 + DAT_00413be8 * 4) + 0x208) = DAT_00413cd4;
                    DAT_00413be8 = DAT_00413be8 + 1;
                  }
                }
              }
              else {
                iVar4 = __strnicmp(acStackY_839 + 1,s_Create_Service__004103f8,0x10);
                if (iVar4 == 0) {
                  iVar4 = 0;
                  if (0 < DAT_00413bc0) {
                    do {
                      iVar5 = lstrcmpiA(local_82a + 2,*(LPCSTR *)(DAT_00413cd8 + iVar4 * 4));
                      if (iVar5 == 0) break;
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < DAT_00413bc0);
                  }
                  if (iVar4 < DAT_00413bc0) {
                    iVar4 = *(int *)(DAT_00413cd8 + iVar4 * 4);
LAB_00405153:
                    *(short *)(iVar4 + 0x108) = DAT_00413cd4;
                  }
                  else {
                    puVar3 = FUN_004098e3(0x10c);
                    *(undefined4 **)(DAT_00413cd8 + DAT_00413bc0 * 4) = puVar3;
                    *(undefined4 *)(*(int *)(DAT_00413cd8 + DAT_00413bc0 * 4) + 0x104) = 0;
                    *(short *)(*(int *)(DAT_00413cd8 + DAT_00413bc0 * 4) + 0x108) = DAT_00413cd4;
                    lstrcpyA(*(LPSTR *)(DAT_00413cd8 + DAT_00413bc0 * 4),local_82a + 2);
                    DAT_00413bc0 = DAT_00413bc0 + 1;
                  }
                }
                else {
                  iVar4 = __strnicmp(acStackY_839 + 1,s_Add_Device__004103e8,0xc);
                  if (iVar4 == 0) {
                    iVar4 = 0;
                    if (0 < DAT_00413bec) {
                      do {
                        iVar5 = lstrcmpiA((LPCSTR)(DAT_00413858[iVar4] + 8),(LPCSTR)&local_82c);
                        if (iVar5 == 0) {
                          *(short *)(DAT_00413858[iVar4] + 0x21a) = DAT_00413cd4;
                        }
                        iVar4 = iVar4 + 1;
                      } while (iVar4 < DAT_00413bec);
                    }
                    iVar4 = 0;
                    if (0 < DAT_004138c0) {
                      do {
                        iVar5 = lstrcmpiA(*(LPCSTR *)(DAT_00413c4c + iVar4 * 4),(LPCSTR)&local_82c);
                        if (iVar5 == 0) {
                          *(short *)(*(int *)(DAT_00413c4c + iVar4 * 4) + 0x212) = DAT_00413cd4;
                        }
                        iVar4 = iVar4 + 1;
                      } while (iVar4 < DAT_004138c0);
                    }
                  }
                  else {
                    iVar4 = __strnicmp(acStackY_839 + 1,s_Self_Register__004103d8,0xf);
                    if (iVar4 == 0) {
                      lstrcpyA(acStackY_b39 + 1,local_82a + 1);
                      FUN_00408a39(acStackY_b39 + 1,1);
                      iVar4 = 0;
                      if (0 < DAT_00413bec) {
                        do {
                          lstrcpyA(local_103c,(LPCSTR)(DAT_00413858[iVar4] + 8));
                          FUN_00408a39(local_103c,1);
                          iVar5 = lstrcmpiA(local_103c,acStackY_b39 + 1);
                          if (iVar5 == 0) {
                            *(short *)(DAT_00413858[iVar4] + 0x218) = DAT_00413cd4;
                          }
                          iVar4 = iVar4 + 1;
                        } while (iVar4 < DAT_00413bec);
                      }
                      iVar4 = 0;
                      if (0 < DAT_004138c0) {
                        do {
                          lstrcpyA(local_103c,*(LPCSTR *)(DAT_00413c4c + iVar4 * 4));
                          FUN_00408a39(local_103c,1);
                          iVar5 = lstrcmpiA(local_103c,acStackY_b39 + 1);
                          if (iVar5 == 0) {
                            *(short *)(*(int *)(DAT_00413c4c + iVar4 * 4) + 0x210) = DAT_00413cd4;
                          }
                          iVar4 = iVar4 + 1;
                        } while (iVar4 < DAT_004138c0);
                      }
                    }
                    else {
                      iVar4 = __strnicmp(acStackY_839 + 1,s_INI_New__004103cc,9);
                      if (iVar4 == 0) {
                        bVar15 = false;
                        FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                        iVar4 = __strnicmp(acStackY_839 + 1,s_INI_File__004103c0,10);
                        if (iVar4 == 0) {
                          pcVar2 = local_831 + 3;
                          iVar4 = __strnicmp(pcVar2,&DAT_00410410,2);
                          if ((iVar4 != 0) || (pcVar2 != (char *)0x2)) {
                            iVar5 = 0x4045a9;
                            iVar4 = __strnicmp(local_831 + 3,&DAT_0041040c,2);
                            if (((iVar4 != 0) || (iVar5 != 2)) &&
                               (iVar4 = FUN_00408bcd(local_831 + 3), iVar4 == 0)) {
                              iVar4 = 0;
                              if (0 < DAT_004138cc) {
                                do {
                                  iVar5 = lstrcmpiA(local_831 + 3,
                                                    *(LPCSTR *)(DAT_0041382c + iVar4 * 4));
                                  if (iVar5 == 0) break;
                                  iVar4 = iVar4 + 1;
                                } while (iVar4 < DAT_004138cc);
                                if (iVar4 < DAT_004138cc) {
                                  *(short *)(*(int *)(DAT_0041382c + iVar4 * 4) + 0x108) =
                                       DAT_00413cd4;
                                  goto LAB_004046af;
                                }
                              }
                              puVar3 = FUN_004098e3(0x10c);
                              *(undefined4 **)(DAT_0041382c + DAT_004138cc * 4) = puVar3;
                              *(undefined4 *)(*(int *)(DAT_0041382c + DAT_004138cc * 4) + 0x104) = 0
                              ;
                              if (DAT_0041387c == 0) {
                                OemToCharA(local_831 + 3,*(LPSTR *)(DAT_0041382c + DAT_004138cc * 4)
                                          );
                              }
                              else {
                                lstrcpyA(*(LPSTR *)(DAT_0041382c + DAT_004138cc * 4),local_831 + 3);
                              }
                              *(short *)(*(int *)(DAT_0041382c + DAT_004138cc * 4) + 0x108) =
                                   DAT_00413cd4;
                              DAT_004138cc = DAT_004138cc + 1;
                            }
                          }
LAB_004046af:
                          do {
                            FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                            iVar4 = __strnicmp(acStackY_839 + 1,&DAT_004103b8,4);
                            if ((iVar4 != 0) || (local_834 == 'F')) break;
                          } while (local_834 != 'N');
                        }
                      }
                      else {
                        iVar4 = __strnicmp(acStackY_839 + 1,s_INI_File__004103c0,10);
                        if (iVar4 == 0) {
                          pcVar2 = local_831 + 3;
                          iVar4 = __strnicmp(pcVar2,&DAT_00410410,2);
                          if ((iVar4 == 0) && (pcVar2 == (char *)0x2)) {
LAB_0040475a:
                            bVar14 = false;
                          }
                          else {
                            iVar5 = 0x40474e;
                            iVar4 = __strnicmp(local_831 + 3,&DAT_0041040c,2);
                            if ((iVar4 == 0) && (iVar5 == 2)) goto LAB_0040475a;
                            bVar14 = true;
                          }
                          if (DAT_0041387c == 0) {
                            OemToCharA(local_831 + 3,local_1440);
                          }
                          else {
                            lstrcpyA(local_1440,local_831 + 3);
                          }
                          FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                          if (bVar14) {
                            bVar15 = false;
                            iVar4 = __strnicmp(acStackY_839 + 1,s_INI_Sect__004103ac,10);
                            if (iVar4 == 0) {
                              lstrcpyA(acStackY_b39 + 1,local_831 + 3);
                              FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                              iVar4 = __strnicmp(acStackY_839 + 1,s_INI_Item__004103a0,10);
                              if (iVar4 == 0) {
                                lstrcpyA(local_103c,local_831 + 3);
                                FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                                iVar4 = __strnicmp(acStackY_839 + 1,s_INI_Val__00410394,9);
                                if (iVar4 == 0) {
                                  FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                                  iVar4 = __strnicmp(acStackY_839 + 1,s_INI_Old__00410388,9);
                                  if (iVar4 != 0) {
                                    pCVar13 = &DAT_00413420;
                                  }
                                  else {
                                    pCVar13 = local_831 + 2;
                                  }
                                  bVar15 = iVar4 == 0;
                                  hKey = (HKEY)*DAT_004138fc;
                                  local_34[1] = 0x4048c8;
                                  piVar7 = FUN_004099fa(DAT_004138fc + DAT_00413884,(int *)hKey,
                                                        0x714,DAT_00413884,local_1440,
                                                        acStackY_b39 + 1,local_103c);
                                  if (piVar7 != (int *)0x0) {
                                    pHVar8 = (HKEY)(piVar7 + 0x143);
                                    goto LAB_0040528a;
                                  }
                                  *(undefined4 *)(DAT_004138fc[DAT_00413884] + 0x70c) = 0;
                                  *(short *)(DAT_004138fc[DAT_00413884] + 0x710) = DAT_00413cd4;
                                  lstrcpyA((LPSTR)(DAT_004138fc[DAT_00413884] + 8),local_1440);
                                  lstrcpyA((LPSTR)(DAT_004138fc[DAT_00413884] + 0x10c),
                                           acStackY_b39 + 1);
                                  lstrcpyA((LPSTR)(DAT_004138fc[DAT_00413884] + 0x20c),local_103c);
                                  lstrcpyA((LPSTR)(DAT_004138fc[DAT_00413884] + 0x30c),pCVar13);
                                  lstrcpyA((LPSTR)(DAT_004138fc[DAT_00413884] + 0x50c),
                                           (LPCSTR)(DAT_004138fc[DAT_00413884] + 0x30c));
                                  DAT_00413884 = DAT_00413884 + 1;
                                }
                              }
                            }
                          }
                        }
                        else {
                          iVar4 = __strnicmp(acStackY_839 + 1,s_Execute_Path__00410378,0xe);
                          if ((iVar4 == 0) ||
                             (iVar4 = __strnicmp(acStackY_839 + 1,s_Execute_Program__00410364,0x11),
                             iVar4 == 0)) {
                            iVar4 = 0;
                            uVar9 = (local_82f != 'r') - 1 & 3;
                            if (0 < DAT_00413bd8) {
                              do {
                                iVar5 = lstrcmpiA(local_82a + uVar9,
                                                  *(LPCSTR *)(DAT_004138a4 + iVar4 * 4));
                                if (iVar5 == 0) break;
                                iVar4 = iVar4 + 1;
                              } while (iVar4 < DAT_00413bd8);
                              if (iVar4 < DAT_00413bd8) {
                                *(short *)(*(int *)(DAT_004138a4 + iVar4 * 4) + 0x208) =
                                     DAT_00413cd4;
                                goto LAB_00405d65;
                              }
                            }
                            puVar3 = FUN_004098e3(0x20c);
                            *(undefined4 **)(DAT_004138a4 + DAT_00413bd8 * 4) = puVar3;
                            *(undefined4 *)(*(int *)(DAT_004138a4 + DAT_00413bd8 * 4) + 0x204) = 0;
                            *(short *)(*(int *)(DAT_004138a4 + DAT_00413bd8 * 4) + 0x208) =
                                 DAT_00413cd4;
                            lstrcpyA(*(LPSTR *)(DAT_004138a4 + DAT_00413bd8 * 4),local_82a + uVar9);
                            *(undefined1 *)(*(int *)(DAT_004138a4 + DAT_00413bd8 * 4) + 0x104) = 0;
                            FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                            iVar4 = __strnicmp(acStackY_839 + 1,s_Execute_Name__004101f4,0xe);
                            bVar15 = iVar4 == 0;
                            if (bVar15) {
                              lstrcpyA((LPSTR)(*(int *)(DAT_004138a4 + DAT_00413bd8 * 4) + 0x104),
                                       local_82a);
                            }
                            DAT_00413bd8 = DAT_00413bd8 + 1;
                          }
                          else {
                            iVar4 = __strnicmp(acStackY_839 + 1,s_Icon_Group__00410354,0xc);
                            if (iVar4 == 0) {
                              lstrcpyA(acStackY_b39 + 1,(LPCSTR)&local_82c);
                              FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                              iVar4 = __strnicmp(acStackY_839 + 1,s_Icon_Name__00410348,0xb);
                              if (iVar4 == 0) {
                                lstrcpyA(local_103c,&local_82d);
                                FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                                iVar4 = __strnicmp(acStackY_839 + 1,s_Icon_Cmd__0041033c,10);
                                if (iVar4 == 0) {
                                  iVar4 = 0;
                                  if (0 < DAT_00413844) {
                                    do {
                                      iVar5 = lstrcmpiA(*(LPCSTR *)(DAT_00413898 + iVar4 * 4),
                                                        acStackY_b39 + 1);
                                      if ((iVar5 == 0) &&
                                         (iVar5 = lstrcmpiA((LPCSTR)(*(int *)(DAT_00413898 +
                                                                             iVar4 * 4) + 0x100),
                                                            local_103c), iVar5 == 0)) break;
                                      iVar4 = iVar4 + 1;
                                    } while (iVar4 < DAT_00413844);
                                    if (iVar4 < DAT_00413844) {
                                      pCVar13 = local_831 + 3;
                                      pHVar8 = (HKEY)(*(int *)(DAT_00413898 + iVar4 * 4) + 0x200);
                                      goto LAB_0040528a;
                                    }
                                  }
                                  puVar3 = FUN_004098e3(0x308);
                                  *(undefined4 **)(DAT_00413898 + DAT_00413844 * 4) = puVar3;
                                  *(undefined4 *)(*(int *)(DAT_00413898 + DAT_00413844 * 4) + 0x300)
                                       = 0;
                                  *(short *)(*(int *)(DAT_00413898 + DAT_00413844 * 4) + 0x304) =
                                       DAT_00413cd4;
                                  lstrcpyA((LPSTR)(*(int *)(DAT_00413898 + DAT_00413844 * 4) + 0x100
                                                  ),local_103c);
                                  lstrcpyA(*(LPSTR *)(DAT_00413898 + DAT_00413844 * 4),
                                           acStackY_b39 + 1);
                                  lstrcpyA((LPSTR)(*(int *)(DAT_00413898 + DAT_00413844 * 4) + 0x200
                                                  ),local_831 + 3);
                                  DAT_00413844 = DAT_00413844 + 1;
                                  goto LAB_00405d65;
                                }
                              }
                              bVar15 = false;
                            }
                            else {
                              iVar4 = __strnicmp(acStackY_839 + 1,s_SubSystem__B_0041032c,0xc);
                              if (iVar4 == 0) {
                                iVar4 = lstrlenA(&local_82d);
                                DAT_004138f0 = (LPSTR)FUN_004098e3(iVar4 + 1);
                                lstrcpyA(DAT_004138f0,&local_82d);
                                DAT_0041384c = 0;
                                goto LAB_00405d65;
                              }
                              iVar4 = __strnicmp(acStackY_839 + 1,s_Made_Dir__00410320,10);
                              if (iVar4 == 0) {
                                lstrcatA(acStackY_839 + 1,&DAT_004100cc);
                                lstrcpyA(acStackY_b39 + 1,local_831 + 3);
                                FUN_00408a39(acStackY_b39 + 1,0);
                                sVar6 = lstrlenA(acStackY_b39 + 1);
                                iVar4 = __strnicmp(acStackY_b39 + 1,param_2,sVar6);
                                if (iVar4 == 0) {
                                  iVar4 = lstrlenA(acStackY_b39 + 1);
                                  param_2[iVar4] = '\0';
                                }
                                sVar6 = lstrlenA(local_831 + 3);
                                if (3 < (int)sVar6) {
                                  if ((local_82e != '\\') || (local_82d != '\\')) {
                                    if (DAT_0041103c < 2) {
                                      uVar9 = *(ushort *)(PTR_DAT_00410e30 + local_82e * 2) & 0x103;
                                    }
                                    else {
                                      uVar9 = FUN_0040a3b0((int)local_82e,0x103);
                                    }
                                    if (((uVar9 == 0) || (local_82d != ':')) || (local_82c != 0x5c))
                                    goto LAB_00405d65;
                                  }
                                  iVar4 = 0;
                                  if (0 < DAT_00413cc8) {
                                    do {
                                      iVar5 = lstrlenA(*(LPCSTR *)(DAT_0041386c + iVar4 * 4));
                                      _MaxCount = sVar6;
                                      if (iVar5 <= (int)sVar6) {
                                        _MaxCount = lstrlenA(*(LPCSTR *)(DAT_0041386c + iVar4 * 4));
                                      }
                                      iVar5 = __strnicmp(local_831 + 3,
                                                         *(char **)(DAT_0041386c + iVar4 * 4),
                                                         _MaxCount);
                                    } while ((iVar5 != 0) &&
                                            (iVar4 = iVar4 + 1, iVar4 < DAT_00413cc8));
                                    if (iVar4 < DAT_00413cc8) {
                                      iVar4 = iVar4 * 4;
                                      iVar5 = lstrlenA(*(LPCSTR *)(DAT_0041386c + iVar4));
                                      if (iVar5 <= (int)sVar6) {
                                        sVar6 = lstrlenA(*(LPCSTR *)(DAT_0041386c + iVar4));
                                      }
                                      *(undefined1 *)(*(int *)(DAT_0041386c + iVar4) + sVar6) = 0;
                                      iVar4 = *(int *)(DAT_0041386c + iVar4);
                                      goto LAB_00404fea;
                                    }
                                  }
                                  puVar3 = FUN_004098e3(0x10c);
                                  *(undefined4 **)(DAT_0041386c + DAT_00413cc8 * 4) = puVar3;
                                  *(undefined4 *)(*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x104)
                                       = 0;
                                  *(undefined2 *)(*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x108)
                                       = 0;
                                  *(short *)(*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x10a) =
                                       DAT_00413cd4;
                                  if (DAT_0041387c == 0) {
                                    OemToCharA(local_831 + 3,
                                               *(LPSTR *)(DAT_0041386c + DAT_00413cc8 * 4));
                                  }
                                  else {
                                    pCVar13 = local_831 + 3;
                                    pHVar8 = *(HKEY *)(DAT_0041386c + DAT_00413cc8 * 4);
LAB_00404fb8:
                                    lstrcpyA((LPSTR)pHVar8,pCVar13);
                                  }
                                  DAT_00413cc8 = DAT_00413cc8 + 1;
                                }
                                goto LAB_00405d65;
                              }
                              iVar4 = __strnicmp(acStackY_839 + 1,s_File_Tree__00410314,0xb);
                              if (iVar4 == 0) {
                                iVar4 = lstrlenA(&local_82d);
                                iVar5 = lstrcmpA(local_831 + iVar4,&DAT_0041030c);
                                if (iVar5 == 0) {
                                  local_831[iVar4] = '\0';
                                }
                                lstrcatA(acStackY_839 + 1,&DAT_004100cc);
                                iVar4 = lstrlenA(&local_82d);
                                if (3 < iVar4) {
                                  if ((local_82d != '\\') || (local_82c != 0x5c)) {
                                    if (DAT_0041103c < 2) {
                                      uVar9 = *(ushort *)(PTR_DAT_00410e30 + local_82d * 2) & 0x103;
                                    }
                                    else {
                                      uVar9 = FUN_0040a3b0((int)local_82d,0x103);
                                    }
                                    if (((uVar9 == 0) || (local_82c != 0x3a)) || (local_82b != '\\')
                                       ) goto LAB_00405d65;
                                  }
                                  iVar4 = 0;
                                  if (0 < DAT_00413cc8) {
                                    do {
                                      iVar5 = lstrcmpiA(&local_82d,
                                                        *(LPCSTR *)(DAT_0041386c + iVar4 * 4));
                                      if (iVar5 == 0) break;
                                      iVar4 = iVar4 + 1;
                                    } while (iVar4 < DAT_00413cc8);
                                  }
                                  if (DAT_00413cc8 <= iVar4) {
                                    puVar3 = FUN_004098e3(0x10c);
                                    *(undefined4 **)(DAT_0041386c + DAT_00413cc8 * 4) = puVar3;
                                    *(undefined4 *)
                                     (*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x104) = 0;
                                    *(short *)(*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x108) =
                                         DAT_00413cd4;
                                    *(short *)(*(int *)(DAT_0041386c + DAT_00413cc8 * 4) + 0x10a) =
                                         DAT_00413cd4;
                                    pCVar13 = &local_82d;
                                    pHVar8 = *(HKEY *)(DAT_0041386c + DAT_00413cc8 * 4);
                                    goto LAB_00404fb8;
                                  }
                                  *(short *)(*(int *)(DAT_0041386c + iVar4 * 4) + 0x108) =
                                       DAT_00413cd4;
                                  iVar4 = *(int *)(DAT_0041386c + iVar4 * 4);
LAB_00404fea:
                                  *(short *)(iVar4 + 0x10a) = DAT_00413cd4;
                                }
                                goto LAB_00405d65;
                              }
                              iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Tree__004102fc,0xc);
                              if (iVar4 == 0) {
                                lstrcpyA(local_103c,(LPCSTR)&local_82c);
                                iVar5 = 0;
                                bVar15 = false;
                                FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                                iVar4 = __strnicmp(acStackY_839 + 1,s_RegDB_Root__0041043c,0xc);
                                if (iVar4 == 0) {
                                  iVar5 = FUN_0040a4f0(&local_82c);
                                  FUN_00405e01(acStackY_839 + 1,0x800,hFile,0);
                                }
                                iVar4 = 0;
                                if (0 < DAT_00413c44) {
                                  do {
                                    iVar10 = lstrcmpiA(local_103c,
                                                       *(LPCSTR *)(DAT_00413910 + iVar4 * 4));
                                    if ((iVar10 == 0) &&
                                       (iVar5 == *(int *)(*(int *)(DAT_00413910 + iVar4 * 4) + 0x100
                                                         ))) break;
                                    iVar4 = iVar4 + 1;
                                  } while (iVar4 < DAT_00413c44);
                                  if (iVar4 < DAT_00413c44) {
                                    iVar4 = *(int *)(DAT_00413910 + iVar4 * 4);
                                    goto LAB_00405153;
                                  }
                                }
                                puVar3 = FUN_004098e3(0x10c);
                                *(undefined4 **)(DAT_00413910 + DAT_00413c44 * 4) = puVar3;
                                *(undefined4 *)(*(int *)(DAT_00413910 + DAT_00413c44 * 4) + 0x104) =
                                     0;
                                *(int *)(*(int *)(DAT_00413910 + DAT_00413c44 * 4) + 0x100) = iVar5;
                                *(short *)(*(int *)(DAT_00413910 + DAT_00413c44 * 4) + 0x108) =
                                     DAT_00413cd4;
                                lstrcpyA(*(LPSTR *)(DAT_00413910 + DAT_00413c44 * 4),local_103c);
                                DAT_00413c44 = DAT_00413c44 + 1;
                                goto LAB_00405d65;
                              }
                              iVar4 = __strnicmp(acStackY_839 + 1,&DAT_00410510,4);
                              if (iVar4 == 0) {
                                iVar4 = lstrlenA(acStackY_839 + 1);
                                DAT_004138e8 = ((DAT_004138e0 + DAT_004138c4) - iVar4) + -1;
                                DAT_00413cd4 = DAT_00413cd4 + 1;
                                DAT_0041387c = (uint)(local_834 == ' ');
                                goto LAB_00405d65;
                              }
                              iVar4 = __strnicmp(acStackY_839 + 1,s_Uninstall_MIF__004102ec,0xf);
                              if (iVar4 == 0) {
                                pCVar13 = local_82a + 1;
                                pHVar8 = (HKEY)&DAT_00413920;
                              }
                              else {
                                iVar4 = __strnicmp(acStackY_839 + 1,s_Manufacturer__004102dc,0xe);
                                if (iVar4 == 0) {
                                  pCVar13 = local_82a;
                                  pHVar8 = (HKEY)&DAT_004139a0;
                                }
                                else {
                                  iVar4 = __strnicmp(acStackY_839 + 1,s_Product__004102d0,9);
                                  if (iVar4 == 0) {
                                    pCVar13 = local_831 + 2;
                                    pHVar8 = (HKEY)&DAT_00413a20;
                                  }
                                  else {
                                    iVar4 = __strnicmp(acStackY_839 + 1,s_Version_Number__004102bc,
                                                       0x10);
                                    if (iVar4 == 0) {
                                      pCVar13 = local_82a + 2;
                                      pHVar8 = (HKEY)&DAT_00413aa0;
                                    }
                                    else {
                                      iVar4 = __strnicmp(acStackY_839 + 1,s_Serial_Number__004102ac,
                                                         0xf);
                                      if (iVar4 != 0) {
                                        iVar4 = __strcmpi(acStackY_839 + 1,
                                                          s_User_Rights__Admin_00410298);
                                        if (iVar4 == 0) {
                                          if ((hKey == (HKEY)0x0) && (DAT_00413834 == 1)) {
                                            hKey = (HKEY)0x1;
                                            hSCObject = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,
                                                                       0xe0000000);
                                            if (hSCObject == (SC_HANDLE)0x0) {
                                              FUN_00408e33(DAT_00413bd0,0x19,local_1a50,0x100);
                                              FUN_00408e33(DAT_00413bd0,0x43,local_1950,0x100);
                                              if (DAT_0041381c != (HWND)0x0) {
                                                DestroyWindow(DAT_0041381c);
                                              }
                                              MessageBoxA(DAT_00413820,local_1950,local_1a50,0);
                                              _lclose(hFile);
                                              return 1;
                                            }
                                            CloseServiceHandle(hSCObject);
                                          }
                                        }
                                        else {
                                          iVar4 = __strnicmp(acStackY_839 + 1,
                                                             s_Per_User_ID__00410288,0xd);
                                          if (iVar4 == 0) {
                                            DAT_004138d8 = (LPSTR)FUN_004098e3(0x100);
                                            lstrcpyA(DAT_004138d8,&local_82b);
                                            if (DAT_0041385c != 0) {
                                              hKey = (HKEY)0x405346;
                                              LVar11 = RegOpenKeyExA((HKEY)0x80000001,
                                                                                                                                          
                                                  s_Software_Microsoft_Windows_Curre_00410244,0,0x13
                                                  ,(PHKEY)&stack0xffffffe8);
                                              if (LVar11 == 0) {
                                                hKey = (HKEY)(acStackY_b39 + 1);
                                                pHVar8 = hKey;
                                                LVar11 = RegQueryValueExA(hKey,s_Start_Menu_00410238
                                                                          ,(LPDWORD)0x0,&local_38,
                                                                          (LPBYTE)hKey,
                                                                          (LPDWORD)&stack0xffffffec)
                                                ;
                                                if ((LVar11 == 0) && (acStackY_b39[1] != '\0')) {
                                                  lstrcpyA(local_d3c,acStackY_b39 + 1);
                                                  pHVar8 = (HKEY)0x40539d;
                                                  iVar4 = lstrlenA(local_d3c);
                                                  for (pcVar2 = local_d3c + iVar4;
                                                      (local_d3c < pcVar2 && (*pcVar2 != '\\'));
                                                      pcVar2 = pcVar2 + -1) {
                                                  }
                                                  if (pcVar2 <= local_d3c) goto LAB_004053c1;
                                                  do {
                                                    pcVar2 = pcVar2 + -1;
LAB_004053c1:
                                                  } while ((local_d3c < pcVar2) && (*pcVar2 != '\\')
                                                          );
                                                  pcVar2[1] = '\0';
                                                }
                                                RegCloseKey(pHVar8);
                                              }
                                              if (DAT_00413834 == 1) {
                                                hKey = (HKEY)0x4053fa;
                                                LVar11 = RegOpenKeyExA((HKEY)0x80000002,
                                                                                                                                              
                                                  s_Software_Microsoft_Windows_Curre_00410244,0,0x13
                                                  ,(PHKEY)&stack0xffffffe8);
                                                if (LVar11 == 0) {
                                                  hKey = (HKEY)(acStackY_b39 + 1);
                                                  pHVar8 = hKey;
                                                  LVar11 = RegQueryValueExA(hKey,
                                                  s_Common_Start_Menu_00410224,(LPDWORD)0x0,
                                                  local_34 + 1,(LPBYTE)hKey,
                                                  (LPDWORD)&stack0xffffffec);
                                                  if ((LVar11 == 0) && (acStackY_b39[1] != '\0')) {
                                                    lstrcpyA(local_1240,acStackY_b39 + 1);
                                                    pHVar8 = (HKEY)0x405451;
                                                    iVar4 = lstrlenA(local_1240);
                                                    for (pcVar2 = local_1240 + iVar4;
                                                        (local_1240 < pcVar2 && (*pcVar2 != '\\'));
                                                        pcVar2 = pcVar2 + -1) {
                                                    }
                                                    pcVar2[1] = '\0';
                                                  }
                                                  RegCloseKey(pHVar8);
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            iVar4 = __strnicmp(acStackY_839 + 1,
                                                               s_Delete_in_use_files__On_0041020c,
                                                               0x15);
                                            if (iVar4 == 0) {
                                              iVar4 = __strnicmp(local_823,&DAT_00410208,2);
                                              if (iVar4 == 0) {
                                                DAT_004138ec = 1;
                                              }
                                              else {
                                                iVar4 = __strnicmp(local_823,&DAT_00410204,2);
                                                if (iVar4 == 0) {
                                                  DAT_004138ec = 0;
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto LAB_00405d65;
                                      }
                                      pCVar13 = local_82a + 1;
                                      pHVar8 = (HKEY)&DAT_00413b20;
                                    }
                                  }
                                }
                              }
LAB_0040528a:
                              lstrcpyA((LPSTR)pHVar8,pCVar13);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00405d65:
        } while (!bVar15);
      } while( true );
    }
    FUN_00408e33(DAT_00413bd0,4,acStackY_839 + 1,0x100);
    FUN_00408e33(DAT_00413bd0,2,acStackY_b39 + 1,0x100);
    if (DAT_0041381c != (HWND)0x0) {
      DestroyWindow(DAT_0041381c);
    }
    MessageBoxA(DAT_00413820,acStackY_839 + 1,acStackY_b39 + 1,0);
    _lclose(hFile);
  }
  return 1;
}


