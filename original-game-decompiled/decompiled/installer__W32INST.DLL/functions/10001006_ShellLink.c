
/* ==== ShellLink @ 10001006 ==== 
 * signature: undefined4 __stdcall ShellLink(int param_1)
 * body: 10001006-100014c6
 */

undefined4 ShellLink(int param_1)

{
  bool bVar1;
  HRESULT HVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  DWORD DVar6;
  LPVOID lpData;
  BOOL BVar7;
  LPCSTR lpString2;
  int iVar8;
  char *pcVar9;
  DWORD *pDVar10;
  LPOVERLAPPED p_Var11;
  WCHAR local_84c [519];
  CHAR aCStack_43d [261];
  char local_338 [520];
  char local_130 [260];
  CHAR local_2c [16];
  uint local_1c;
  char *local_18;
  LPVOID local_14;
  int *local_10;
  HGLOBAL local_c;
  DWORD local_8;
  
                    /* 0x1006  1  ShellLink */
  if (*(int *)(param_1 + 0x20) != 1) {
    HVar2 = CoInitialize((LPVOID)0x0);
    if (HVar2 == 0) {
      HVar2 = CoCreateInstance((IID *)&DAT_100020a8,(LPUNKNOWN)0x0,1,(IID *)&DAT_10002198,
                               &DAT_100030d0);
      if (HVar2 == 0) {
        iVar3 = (**(code **)*DAT_100030d0)(DAT_100030d0,&DAT_10002388,&local_10);
        if (iVar3 == 0) {
          pcVar4 = FUN_10001851(local_338,*(char **)(param_1 + 0x28));
          uVar5 = FUN_10001879(local_338);
          (**(code **)(*DAT_100030d0 + 0x3c))(DAT_100030d0,uVar5 & 7);
          local_18 = FUN_10001851(local_338,pcVar4);
          if ((uVar5 & 0x80) != 0) {
            GetSystemDirectoryA(local_130,0x104);
            lstrcatA(local_130,s__SHELL32_DLL_1000307c);
            DVar6 = GetFileVersionInfoSizeA(local_130,&local_8);
            if (DVar6 != 0) {
              local_c = GlobalAlloc(2,DVar6);
              lpData = GlobalLock(local_c);
              BVar7 = GetFileVersionInfoA(local_130,0,DVar6,lpData);
              if (BVar7 != 0) {
                lstrcpyA(local_2c,&DAT_10003078);
                BVar7 = VerQueryValueA(lpData,local_2c,&local_14,&local_1c);
                if (BVar7 != 0) {
                  bVar1 = false;
                  if ((0x40048 < *(uint *)((int)local_14 + 8)) ||
                     ((*(uint *)((int)local_14 + 8) == 0x40048 &&
                      (0x839ffff < *(uint *)((int)local_14 + 0xc))))) {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    lstrcpyA(aCStack_43d + 1,local_338);
                    FUN_100018b6(param_1,s_APPTITLE_1000306c,local_130);
                    wsprintfA(local_338,s____9db1186f_40df_11d1_aa8c_00c04_1000303c,local_130,
                              aCStack_43d + 1);
                  }
                }
              }
              GlobalUnlock(local_c);
              GlobalFree(local_c);
            }
          }
          (**(code **)(*DAT_100030d0 + 0x50))(DAT_100030d0,local_338);
          pcVar4 = FUN_10001851(aCStack_43d + 1,local_18);
          iVar8 = 0;
          MultiByteToWideChar(0,0,aCStack_43d + 1,-1,local_84c,0x104);
          pcVar4 = FUN_10001851(local_338,pcVar4);
          (**(code **)(*DAT_100030d0 + 0x2c))(DAT_100030d0,local_338);
          pcVar4 = FUN_10001851(local_338,pcVar4);
          (**(code **)(*DAT_100030d0 + 0x24))(DAT_100030d0,local_338);
          pcVar4 = FUN_10001851(local_338,pcVar4);
          iVar3 = FUN_10001879(local_338);
          pcVar4 = FUN_10001851(local_338,pcVar4);
          (**(code **)(*DAT_100030d0 + 0x44))(DAT_100030d0,local_338,iVar3);
          pcVar4 = FUN_10001851(local_338,pcVar4);
          (**(code **)(*DAT_100030d0 + 0x1c))(DAT_100030d0,local_338);
          FUN_10001851(local_338,pcVar4);
          iVar3 = FUN_10001879(local_338);
          if ((char)iVar3 != '\0') {
            (**(code **)(*DAT_100030d0 + 0x34))(DAT_100030d0,iVar3);
          }
          wsprintfA(local_338,s_Shell_Link___s_10003028,aCStack_43d + 1);
          iVar3 = FUN_100019be(param_1);
          if (iVar3 != 0) {
            pDVar10 = &local_8;
            p_Var11 = (LPOVERLAPPED)0x0;
            DVar6 = lstrlenA(local_338);
            WriteFile(*(HANDLE *)(param_1 + 0x24),local_338,DVar6,pDVar10,p_Var11);
          }
          FUN_100018b6(param_1,s_BACKUPDIR_1000301c,local_130);
          local_338[0] = '\0';
          if (local_130[0] != '\0') {
            iVar3 = lstrlenA(aCStack_43d + 1);
            for (lpString2 = aCStack_43d + iVar3;
                (aCStack_43d + 1 < lpString2 && (*lpString2 != '\\')); lpString2 = lpString2 + -1) {
            }
            lstrcatA(local_130,lpString2);
            iVar3 = lstrlenA(local_130);
            pcVar4 = local_130 + iVar3;
            pcVar9 = pcVar4;
            if (local_130 < pcVar4) {
              do {
                if ((*pcVar9 == '\\') || (*pcVar9 == '.')) break;
                pcVar9 = pcVar9 + -1;
              } while (local_130 < pcVar9);
            }
            if (*pcVar9 != '.') {
              pcVar9 = pcVar4;
            }
            do {
              if (iVar8 != 0) {
                wsprintfA(pcVar9,s___03d_10003014,iVar8);
              }
              iVar8 = iVar8 + 1;
              if (999 < iVar8) goto LAB_10001433;
              DVar6 = GetFileAttributesA(local_130);
            } while (DVar6 != 0xffffffff);
            if (iVar8 < 1000) {
              BVar7 = CopyFileA(aCStack_43d + 1,local_130,1);
              if (BVar7 != 0) {
                wsprintfA(local_338,s_Backup_Copy___s_10003000,local_130);
              }
            }
          }
LAB_10001433:
          (**(code **)(*local_10 + 0x18))(local_10,local_84c,0);
          (**(code **)(*local_10 + 8))(local_10);
          if (local_338[0] != '\0') {
            iVar3 = FUN_100014c7(local_130,aCStack_43d + 1);
            if (iVar3 == 0) {
              DeleteFileA(local_130);
            }
            else {
              iVar3 = FUN_100019be(param_1);
              if (iVar3 != 0) {
                pDVar10 = &local_8;
                p_Var11 = (LPOVERLAPPED)0x0;
                DVar6 = lstrlenA(local_338);
                WriteFile(*(HANDLE *)(param_1 + 0x24),local_338,DVar6,pDVar10,p_Var11);
              }
            }
          }
        }
        (**(code **)(*DAT_100030d0 + 8))(DAT_100030d0);
      }
      CoUninitialize();
    }
  }
  return 0;
}


