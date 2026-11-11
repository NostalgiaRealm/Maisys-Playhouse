
/* ==== FUN_00401000 @ 00401000 ==== 
 * signature: undefined4 __stdcall FUN_00401000(HMODULE param_1, int param_2, char * param_3)
 * body: 00401000-00401dfd
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401000(HMODULE param_1,int param_2,char *param_3)

{
  char cVar1;
  ATOM AVar2;
  int iVar3;
  char *pcVar4;
  BOOL BVar5;
  HRSRC pHVar6;
  uint uVar7;
  UINT UVar8;
  undefined2 extraout_var;
  CHAR *pCVar9;
  HMODULE hModule;
  int iVar10;
  HCURSOR pHVar11;
  DWORD uBytes;
  HGLOBAL hResData;
  HFILE hFile;
  bool bVar12;
  LPCSTR pCVar13;
  code *lpDialogFunc;
  LPARAM dwInitParam;
  char local_97c [512];
  CHAR local_77c [253];
  CHAR aCStack_67f [259];
  char local_57c [256];
  char local_47c;
  CHAR aCStack_47b [254];
  char acStack_37d [256];
  char acStack_27d [121];
  _OFSTRUCT local_204;
  CHAR local_17c [256];
  undefined1 local_7c [92];
  undefined4 local_20;
  int local_c;
  LPCCH local_8;
  
  local_77c[0] = '\0';
  FUN_0040868b();
  DAT_004138b8 = (char *)FUN_004098e3(0x100);
  GetModuleFileNameA(param_1,DAT_004138b8,0x100);
  FUN_00408a39(DAT_004138b8,1);
  DAT_00413bf4 = (LPCSTR)FUN_004098e3(0x100);
  GetModuleFileNameA(param_1,DAT_00413bf4,0x100);
  pCVar13 = &DAT_004101a8;
  iVar3 = lstrlenA(DAT_00413bf4);
  lstrcpyA(DAT_00413bf4 + iVar3 + -3,pCVar13);
  DAT_00413c50 = FUN_004098e3(0x4000);
  local_c = 1;
  lstrcpyA(local_57c,param_3);
  if (local_57c[0] == '\0') {
    lstrcpyA(acStack_27d + 1,DAT_00413bf4);
    FUN_00408a39(acStack_27d + 1,0);
    iVar3 = lstrlenA(acStack_27d + 1);
    for (pcVar4 = acStack_27d + iVar3; acStack_27d + 1 < pcVar4; pcVar4 = pcVar4 + -1) {
      if (*pcVar4 == '\\') goto LAB_004010f1;
    }
    if (*pcVar4 == '\\') {
LAB_004010f1:
      pcVar4 = pcVar4 + 1;
    }
    lstrcpyA(pcVar4,s_INSTALL_LOG_0041019c);
    iVar3 = FUN_00408bcd(acStack_27d + 1);
    if (iVar3 == 0) {
      lstrcpyA(local_57c,acStack_27d + 1);
    }
  }
  iVar3 = __strnicmp(local_57c,&DAT_00410198,2);
  if (iVar3 != 0) {
    GetTempPathA(0x100,acStack_27d + 1);
    GetTempFileNameA(acStack_27d + 1,&DAT_00410194,0x1a2b,aCStack_67f + 3);
    pCVar13 = &DAT_00410190;
    iVar3 = lstrlenA(aCStack_67f + 3);
    lstrcpyA(aCStack_67f + iVar3,pCVar13);
    GetModuleFileNameA(param_1,local_17c,0x100);
    BVar5 = CopyFileA(local_17c,aCStack_67f + 3,0);
    if (BVar5 != 0) {
      FUN_004097d3(aCStack_67f + 3);
    }
    local_c = 0;
  }
  pHVar6 = FindResourceA(param_1,(LPCSTR)0x6a,(LPCSTR)0x5);
  local_8 = LoadResource(param_1,pHVar6);
  LockResource(local_8);
  pHVar6 = FindResourceA(param_1,(LPCSTR)0x68,(LPCSTR)0x5);
  local_7c._76_4_ = LoadResource(param_1,pHVar6);
  LockResource((HGLOBAL)local_7c._76_4_);
  pHVar6 = FindResourceA(param_1,(LPCSTR)0x6a,(LPCSTR)0x2);
  local_7c._80_4_ = LoadResource(param_1,pHVar6);
  LockResource((HGLOBAL)local_7c._80_4_);
  DAT_00413bf8 = LoadBitmapA(param_1,(LPCSTR)0x6a);
  param_3 = local_57c;
  DAT_00413c40 = 0;
  while (local_57c[0] == '/') {
    uVar7 = FUN_0040a1b0((int)param_3[1]);
    if (uVar7 == 0x5a) {
      if (param_3[1] == 'z') {
        DAT_004138a8 = 1;
      }
      param_3 = param_3 + 2;
      if (*param_3 == ' ') {
        do {
          param_3 = param_3 + 1;
        } while (*param_3 == ' ');
        goto LAB_004012f9;
      }
    }
    else {
      uVar7 = FUN_0040a1b0((int)param_3[1]);
      if (uVar7 == 0x41) {
        DAT_00413c40 = 1;
      }
      else {
        uVar7 = FUN_0040a1b0((int)param_3[1]);
        if (uVar7 == 0x53) {
          DAT_00413878 = 1;
          DAT_00413c40 = 1;
        }
        else {
          uVar7 = FUN_0040a1b0((int)param_3[1]);
          if (uVar7 == 0x52) {
            DAT_004138c8 = 1;
          }
          else {
            uVar7 = FUN_0040a1b0((int)param_3[1]);
            if (uVar7 != 0x55) break;
            DAT_00413ba4 = 1;
          }
        }
      }
      param_3 = param_3 + 2;
LAB_004012f9:
      cVar1 = *param_3;
      while (cVar1 == ' ') {
        param_3 = param_3 + 1;
        cVar1 = *param_3;
      }
    }
    local_57c[0] = *param_3;
  }
  cVar1 = *param_3;
  while (cVar1 == ' ') {
    param_3 = param_3 + 1;
    cVar1 = *param_3;
  }
  pcVar4 = _strchr(param_3,0x20);
  if ((pcVar4 != (char *)0x0) && (DAT_004138a8 == 0)) {
    *pcVar4 = '\0';
    DAT_00413bfc = pcVar4 + 1;
    if (*DAT_00413bfc == '\"') {
      DAT_00413bfc = pcVar4 + 2;
    }
    iVar3 = lstrlenA(DAT_00413bfc);
    if ((-1 < iVar3 + -1) && (DAT_00413bfc[iVar3 + -1] == '\"')) {
      DAT_00413bfc[iVar3 + -1] = '\0';
    }
  }
  _DAT_00413c20 = GetPrivateProfileIntA(s_Settings_00410178,s_Start_Red_00410184,0,DAT_00413bf4);
  _DAT_00413c24 = GetPrivateProfileIntA(s_Settings_00410178,s_Start_Green_0041016c,0,DAT_00413bf4);
  _DAT_00413c28 = GetPrivateProfileIntA(s_Settings_00410178,s_Start_Blue_00410160,0xff,DAT_00413bf4)
  ;
  UVar8 = GetPrivateProfileIntA(s_Settings_00410178,s_End_Red_00410158,0,DAT_00413bf4);
  _DAT_00413c2c = UVar8 - _DAT_00413c20;
  UVar8 = GetPrivateProfileIntA(s_Settings_00410178,s_End_Green_0041014c,0,DAT_00413bf4);
  _DAT_00413c30 = UVar8 - _DAT_00413c24;
  UVar8 = GetPrivateProfileIntA(s_Settings_00410178,s_End_Blue_00410140,0,DAT_00413bf4);
  _DAT_00413c34 = UVar8 - _DAT_00413c28;
  DAT_00413838 = GetPrivateProfileIntA(s_Settings_00410178,s_No_Background_00410130,1,DAT_00413bf4);
  FUN_004091e7();
  if (((param_2 == 0) && (AVar2 = FUN_00401dfe(param_1), CONCAT22(extraout_var,AVar2) == 0)) ||
     (iVar3 = FUN_00401e5d(param_1), iVar3 == 0)) {
    return 0;
  }
  if (DAT_0041381c != (HWND)0x0) {
    DAT_00413be4 = 1;
    SetTimer(DAT_00413820,0x206a,100,(TIMERPROC)0x0);
    do {
      while (BVar5 = PeekMessageA((LPMSG)(local_7c + 0x54),(HWND)0x0,0,0,1), BVar5 != 0) {
        TranslateMessage((MSG *)(local_7c + 0x54));
        DispatchMessageA((MSG *)(local_7c + 0x54));
      }
    } while (DAT_00413be4 != 0);
    KillTimer(DAT_00413820,0x206a);
  }
  if ((DAT_004138a8 != 0) && (*param_3 != '\0')) {
    DAT_00413be4 = 1;
    SetTimer(DAT_00413820,0x206a,1000,(TIMERPROC)0x0);
    do {
      while (BVar5 = PeekMessageA((LPMSG)(local_7c + 0x54),(HWND)0x0,0,0,1), BVar5 != 0) {
        TranslateMessage((MSG *)(local_7c + 0x54));
        DispatchMessageA((MSG *)(local_7c + 0x54));
      }
    } while (DAT_00413be4 != 0);
    KillTimer(DAT_00413820,0x206a);
    lstrcpyA(local_17c,param_3);
    pcVar4 = _strchr(local_17c,0x20);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    iVar3 = lstrlenA(local_17c);
    if (local_204.szPathName[iVar3 + 0x7f] != '\\') {
      DeleteFileA(local_17c);
    }
    iVar3 = lstrlenA(local_17c);
    for (pCVar9 = local_204.szPathName + iVar3 + 0x7f; local_17c < pCVar9; pCVar9 = pCVar9 + -1) {
      if (*pCVar9 == '\\') goto LAB_004015b1;
    }
    if (*pCVar9 == '\\') {
LAB_004015b1:
      *pCVar9 = '\0';
    }
    FUN_0040754e(local_17c,0);
    if ((pcVar4 != (char *)0x0) && (pCVar13 = pcVar4 + 1, *pCVar13 != '\0')) {
      iVar3 = lstrlenA(pCVar13);
      if (pCVar13[iVar3 + -1] == '\\') {
        pCVar13[iVar3 + -1] = '\0';
      }
      FUN_0040754e(pCVar13,0);
    }
    DestroyWindow(DAT_00413820);
    while (BVar5 = GetMessageA((LPMSG)(local_7c + 0x54),(HWND)0x0,0,0), BVar5 != 0) {
      TranslateMessage((MSG *)(local_7c + 0x54));
      DispatchMessageA((MSG *)(local_7c + 0x54));
    }
    DeleteObject(DAT_00413bf8);
    FreeResource((HGLOBAL)local_7c._80_4_);
    FreeResource((HGLOBAL)local_7c._76_4_);
    FreeResource(local_8);
    GetModuleFileNameA(param_1,local_17c,0x100);
    if (DAT_00413c48 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_00413c48);
    }
    if (DAT_00413888 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_00413888);
    }
    if (DAT_004138bc == (HGDIOBJ)0x0) {
      return local_20;
    }
    DeleteObject(DAT_004138bc);
    return local_20;
  }
  SetErrorMode(0x8000);
  hModule = LoadLibraryA(s_CTL3D32_DLL_00410124);
  if (hModule != (HMODULE)0x0) {
    DAT_004138d4 = GetProcAddress(hModule,s_Ctl3dRegister_00410114);
    DAT_004138b4 = GetProcAddress(hModule,s_Ctl3dUnregister_00410104);
    DAT_00413860 = GetProcAddress(hModule,s_Ctl3dAutoSubclass_004100f0);
    DAT_00413bf0 = GetProcAddress(hModule,s_Ctl3dSubclassDlgEx_004100dc);
  }
  _DAT_004138dc = 0xffffff;
  if (DAT_004138d4 != (FARPROC)0x0) {
    iVar3 = (*DAT_004138d4)(param_1);
    if (iVar3 == 0) {
      DAT_004138d4 = (FARPROC)0x0;
    }
    else {
      if (((DAT_00413834 != 1) || (DAT_0041385c == 0)) && (DAT_0041385c == 0)) {
        (*DAT_00413860)(param_1);
      }
      _DAT_004138dc = GetSysColor(0xf);
    }
  }
  acStack_37d[1] = '\0';
  if (*param_3 == '\0') {
    _memset(local_7c,0,0x4c);
    local_7c._4_4_ = DAT_00413820;
    local_7c._8_4_ = param_1;
    local_7c._0_4_ = 0x4c;
    local_7c._32_4_ = 0x100;
    local_7c._52_4_ = 0x1000;
    FUN_00408e33(DAT_00413bd0,1,&local_47c,0x100);
    iVar3 = lstrlenA(&local_47c);
    lstrcpyA(aCStack_47b + iVar3,s_install_log_004100d0);
    iVar10 = lstrlenA(aCStack_47b + iVar3);
    aCStack_47b[iVar10 + iVar3 + 1] = '\0';
    local_7c._12_4_ = &local_47c;
    lstrcpyA(local_17c,s_INSTALL_LOG_0041019c);
    local_7c._28_4_ = local_17c;
    FUN_00409f47();
    BVar5 = GetOpenFileNameA((LPOPENFILENAMEA)local_7c);
    if (BVar5 != 0) {
      lstrcpyA(acStack_37d + 1,(LPCSTR)local_7c._28_4_);
    }
  }
  else {
    lstrcpyA(acStack_37d + 1,param_3);
  }
  DAT_00413be0 = FUN_004098e3(0x100);
  DAT_00413808 = FUN_004098e3(0x4000);
  _memset(DAT_00413808,0,0x4000);
  DAT_00413cc0 = FUN_004098e3(0x100);
  DAT_004138b0 = FUN_004098e3(0x400);
  _DAT_00413900 = FUN_004098e3(0x100);
  DAT_0041389c = FUN_004098e3(0x104);
  DAT_004138e4 = FUN_004098e3(0x200);
  _memset(DAT_004138e4,0,0x200);
  DAT_00413858 = FUN_004098e3(64000);
  DAT_00413c4c = FUN_004098e3(64000);
  DAT_00413828 = FUN_004098e3(64000);
  DAT_0041386c = FUN_004098e3(64000);
  DAT_0041382c = FUN_004098e3(64000);
  DAT_004138fc = FUN_004098e3(64000);
  DAT_00413848 = FUN_004098e3(64000);
  DAT_00413910 = FUN_004098e3(64000);
  DAT_00413bc4 = FUN_004098e3(64000);
  DAT_00413898 = FUN_004098e3(64000);
  DAT_004138a4 = FUN_004098e3(64000);
  DAT_00413cd8 = FUN_004098e3(64000);
  if (acStack_37d[1] == '\0') goto LAB_00401b04;
  pHVar11 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  pHVar11 = SetCursor(pHVar11);
  iVar3 = FUN_004036c1(acStack_37d + 1,local_77c);
  if (iVar3 != 0) {
    SetCursor(pHVar11);
    goto LAB_00401b04;
  }
  SetCursor(pHVar11);
  if (DAT_00413c40 != 0) {
    DAT_00413840 = 1000;
    DAT_00413ba0 = 0xb;
  }
  if (DAT_00413ba4 != 0) {
    DAT_00413840 = 1000;
    DAT_00413ba0 = 0xb;
  }
  if (DAT_00413878 == 0) {
    FUN_00409f47();
    EnableWindow(DAT_00413820,0);
    dwInitParam = 0;
    lpDialogFunc = _ItemDlg_16;
    BVar5 = IsWindowVisible(DAT_00413820);
    DAT_00413818 = CreateDialogParamA(DAT_00413bd0,(LPCSTR)0x6a,
                                      (HWND)(-(uint)(BVar5 != 0) & (uint)DAT_00413820),lpDialogFunc,
                                      dwInitParam);
    if (DAT_00413c40 != 0) goto LAB_00401a43;
    if (DAT_0041388c == 0) {
      do {
        if (DAT_00413830 != 0) break;
        while (BVar5 = PeekMessageA((LPMSG)(local_7c + 0x54),(HWND)0x0,0,0,1), BVar5 != 0) {
          BVar5 = IsDialogMessageA(DAT_00413818,(LPMSG)(local_7c + 0x54));
          if (BVar5 == 0) {
            TranslateMessage((MSG *)(local_7c + 0x54));
            DispatchMessageA((MSG *)(local_7c + 0x54));
          }
        }
      } while (DAT_0041388c == 0);
      goto LAB_00401a43;
    }
  }
  else {
LAB_00401a43:
    if (DAT_0041388c == 0) {
      FUN_00409fe0(&DAT_004100cc);
      FUN_00405ea0(acStack_37d + 1);
      PostMessageA((HWND)0xffff,0x1a,0,0);
    }
  }
  if (DAT_00413864 == 0) {
LAB_00401ae7:
    if (DAT_00413878 == 0) {
      DestroyWindow(DAT_00413818);
    }
  }
  else if (DAT_00413878 == 0) {
    FUN_00408e33(DAT_00413bd0,0x19,acStack_27d + 1,0x100);
    FUN_00408e33(DAT_00413bd0,0x44,local_97c,0x200);
    iVar3 = MessageBoxA(DAT_00413818,local_97c,acStack_27d + 1,(uint)(DAT_00413834 != 0));
    if (iVar3 == 2) {
      DAT_00413864 = 0;
    }
    goto LAB_00401ae7;
  }
  FUN_00409307();
LAB_00401b04:
  if (DAT_0041381c != (HWND)0x0) {
    DestroyWindow(DAT_0041381c);
  }
  DestroyWindow(DAT_00413820);
  while (BVar5 = GetMessageA((LPMSG)(local_7c + 0x54),(HWND)0x0,0,0), BVar5 != 0) {
    TranslateMessage((MSG *)(local_7c + 0x54));
    DispatchMessageA((MSG *)(local_7c + 0x54));
  }
  if (DAT_004138b4 != (FARPROC)0x0) {
    (*DAT_004138b4)(param_1);
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  DeleteObject(DAT_00413bf8);
  FreeResource((HGLOBAL)local_7c._80_4_);
  FreeResource((HGLOBAL)local_7c._76_4_);
  FreeResource(local_8);
  if (((DAT_00413864 != 0) && ((DAT_00413834 == 1 || (DAT_00413834 == 0)))) &&
     (pHVar6 = FindResourceA(DAT_00413bd0,(LPCSTR)(0x75fa - (DAT_00413834 != 1) & 0xffff),
                             (LPCSTR)0x12c), pHVar6 != (HRSRC)0x0)) {
    uBytes = SizeofResource(DAT_00413bd0,pHVar6);
    hResData = LoadResource(DAT_00413bd0,pHVar6);
    if (hResData != (HGLOBAL)0x0) {
      local_8 = LockResource(hResData);
      if (local_8 != (LPCCH)0x0) {
        GetWindowsDirectoryA(acStack_37d + 1,0x100);
        iVar3 = lstrlenA(acStack_37d + 1);
        if (acStack_37d[iVar3] != '\\') {
          lstrcatA(acStack_37d + 1,&DAT_004100cc);
        }
        if (DAT_00413834 == 0) {
          pcVar4 = s__MSSETUP_EXE_004100bc;
        }
        else {
          pcVar4 = s__MSRSTRT_EXE_004100ac;
        }
        lstrcatA(acStack_37d + 1,pcVar4);
        hFile = _lcreat(acStack_37d + 1,0);
        if (hFile != -1) {
          _lwrite(hFile,local_8,uBytes);
          _lclose(hFile);
        }
      }
      FreeResource(hResData);
    }
  }
  if (DAT_00413c48 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_00413c48);
  }
  if (DAT_00413888 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_00413888);
  }
  if (DAT_004138ac != (HGDIOBJ)0x0) {
    DeleteObject(DAT_004138ac);
  }
  bVar12 = local_c == 0;
  if (!bVar12) {
    GetModuleFileNameA(param_1,local_17c,0x100);
    if (DAT_00413834 != 0) {
      OpenFile(local_17c,&local_204,0x200);
    }
    pCVar13 = &DAT_004101a8;
    iVar3 = lstrlenA(local_17c);
    lstrcpyA(local_204.szPathName + iVar3 + 0x7d,pCVar13);
    OpenFile(local_17c,&local_204,0x200);
    bVar12 = local_c == 0;
  }
  if (bVar12) {
    GetModuleFileNameA(param_1,&local_47c,0x100);
    FUN_00408a39(&local_47c,0);
    wsprintfA(local_17c,s__s__z__s__s_004100a0,aCStack_67f + 3,&local_47c,local_77c);
    if (DAT_00413bc8 == 0) {
      DeleteFileA(&local_47c);
    }
    else {
      WinExec(local_17c,5);
    }
  }
  FUN_00409965();
  if (DAT_004138bc != (HGDIOBJ)0x0) {
    DeleteObject(DAT_004138bc);
  }
  if (DAT_00413864 != 0) {
    if ((DAT_00413834 == 1) || (DAT_00413834 == 0)) {
      WinExec(acStack_37d + 1,5);
    }
    else {
      ExitWindowsEx(0,0xffffffff);
    }
  }
  return local_20;
}


