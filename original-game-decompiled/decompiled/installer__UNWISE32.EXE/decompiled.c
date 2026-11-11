/* Ghidra 12.1.4 generated C-like pseudocode for stream_015_000263ed.exe.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

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



/* ==== FUN_00401dfe @ 00401dfe ==== 
 * signature: ATOM __cdecl FUN_00401dfe(HINSTANCE param_1)
 * body: 00401dfe-00401e5c
 */

ATOM __cdecl FUN_00401dfe(HINSTANCE param_1)

{
  ATOM AVar1;
  WNDCLASSA local_2c;
  
  local_2c.style = 0;
  local_2c.lpfnWndProc = _MainWndProc_16;
  local_2c.cbClsExtra = 0;
  local_2c.cbWndExtra = 0;
  local_2c.hInstance = param_1;
  local_2c.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = GetStockObject(0);
  local_2c.lpszClassName = PTR_s_GLBSUninstall_00410050;
  local_2c.lpszMenuName = (LPCSTR)0x0;
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}



/* ==== FUN_00401e5d @ 00401e5d ==== 
 * signature: undefined4 __cdecl FUN_00401e5d(HINSTANCE param_1)
 * body: 00401e5d-00401f75
 */

undefined4 __cdecl FUN_00401e5d(HINSTANCE param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int nWidth;
  int nHeight;
  HWND hWndParent;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  
  DAT_00413bd0 = param_1;
  if ((DAT_00413878 == 0) && (DAT_004138a8 == 0)) {
    DAT_004138ac = FUN_00409e03(0x6f,&DAT_00413cc4);
    GetObjectA(DAT_004138ac,0x18,local_1c);
    lpParam = (LPVOID)0x0;
    hMenu = (HMENU)0x0;
    hWndParent = (HWND)0x0;
    nWidth = local_18;
    nHeight = local_14;
    hInstance = param_1;
    iVar1 = GetSystemMetrics(1);
    iVar1 = (iVar1 - local_14) / 2;
    iVar2 = GetSystemMetrics(0);
    DAT_0041381c = CreateWindowExA(8,PTR_s_GLBSUninstall_00410050,&DAT_004101ac,0x90000000,
                                   (iVar2 - local_18) / 2,iVar1,nWidth,nHeight,hWndParent,hMenu,
                                   hInstance,lpParam);
    SetTimer(DAT_0041381c,1,0x9c4,(TIMERPROC)0x0);
  }
  DAT_00413820 = CreateWindowExA(0,PTR_s_GLBSUninstall_00410050,&DAT_004101ac,0xcd0000,0,0,0x280,
                                 0x1e0,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (DAT_00413820 == (HWND)0x0) {
    uVar3 = 0;
  }
  else {
    if (DAT_00413bfc != (LPCSTR)0x0) {
      SetWindowTextA(DAT_00413820,DAT_00413bfc);
    }
    if (((DAT_00413878 == 0) && (DAT_004138a8 == 0)) && (DAT_00413838 == 0)) {
      ShowWindow(DAT_00413820,3);
    }
    UpdateWindow(DAT_00413820);
    uVar3 = 1;
  }
  return uVar3;
}



/* ==== _MainWndProc@16 @ 00401f76 ==== 
 * signature: UINT __stdcall _MainWndProc@16(HWND param_1, UINT param_2, HWND param_3, int param_4)
 * body: 00401f76-00402298
 */

UINT _MainWndProc_16(HWND param_1,UINT param_2,HWND param_3,int param_4)

{
  int *piVar1;
  HDC pHVar2;
  COLORREF color;
  HBRUSH h;
  HGDIOBJ pvVar3;
  HPALETTE pHVar4;
  UINT UVar5;
  HDC hdc;
  int iVar6;
  int iVar7;
  uint uVar8;
  tagPAINTSTRUCT local_7c;
  tagRECT local_3c;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10;
  undefined1 local_c;
  uint local_8;
  
                    /* 0x1f76  2  _MainWndProc@16 */
  if ((param_1 == DAT_0041381c) || (DAT_00413820 == 0)) {
    if (param_2 == 2) {
      DAT_0041381c = (HWND)0x0;
    }
    else if (param_2 == 0xf) {
      pHVar2 = BeginPaint(param_1,&local_7c);
      if (DAT_004138bc != (HPALETTE)0x0) {
        SelectPalette(pHVar2,DAT_004138bc,0);
        RealizePalette(pHVar2);
      }
      hdc = CreateCompatibleDC(pHVar2);
      pvVar3 = SelectObject(hdc,DAT_004138ac);
      GetObjectA(DAT_004138ac,0x18,local_2c);
      BitBlt(pHVar2,0,0,local_28,local_24,hdc,0,0,0xcc0020);
      SelectObject(hdc,pvVar3);
      DeleteDC(hdc);
      EndPaint(param_1,&local_7c);
    }
    else if (param_2 == 0x113) {
      DAT_00413880 = 1;
    }
    else {
      if (param_2 != 0x30f) {
        if (param_2 != 0x311) goto LAB_00402166;
        if (param_3 == param_1) {
          return 0;
        }
      }
      if (DAT_00413cc4 != (HPALETTE)0x0) {
        pHVar2 = GetDC(param_1);
        pHVar4 = DAT_00413cc4;
        goto LAB_004021a1;
      }
    }
  }
  else if (param_2 == 2) {
    PostQuitMessage(0);
  }
  else if (param_2 == 0xf) {
    pHVar2 = BeginPaint(param_1,&local_7c);
    GetClientRect(param_1,&local_3c);
    if (DAT_004138bc != (HPALETTE)0x0) {
      SelectPalette(pHVar2,DAT_004138bc,0);
      RealizePalette(pHVar2);
    }
    iVar7 = -1;
    uVar8 = 0;
    do {
      local_8 = uVar8 + 1;
      local_18 = (int)(local_3c.bottom * (uVar8 + 1)) / 0x60;
      param_3 = (HWND)0x0;
      param_4 = 3;
      do {
        iVar6 = param_3[0x104f08].unused + (int)(param_3[0x104f0b].unused * uVar8) / 0x5f;
        piVar1 = (int *)(local_14 + (int)param_3);
        *piVar1 = iVar6;
        if (iVar6 < 0) {
          *piVar1 = 0;
        }
        if (0xff < *piVar1) {
          *piVar1 = 0xff;
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      if (DAT_004138bc == (HPALETTE)0x0) {
        color = (COLORREF)CONCAT21(CONCAT11(local_c,local_10),local_14[0]);
      }
      else {
        color = uVar8 & 0xffff | 0x1000000;
      }
      local_20 = iVar7;
      h = CreateSolidBrush(color);
      pvVar3 = SelectObject(pHVar2,h);
      iVar7 = local_18;
      PatBlt(pHVar2,0,local_20,local_3c.right,local_18 - local_20,0xf00021);
      SelectObject(pHVar2,pvVar3);
      DeleteObject(h);
      uVar8 = local_8;
    } while ((int)local_8 < 0x60);
    EndPaint(param_1,&local_7c);
  }
  else {
    if (param_2 == 0x14) {
      return 1;
    }
    if (param_2 == 0x113) {
      DAT_00413be4 = 0;
    }
    else {
      if (param_2 != 0x30f) {
        if (param_2 != 0x311) {
LAB_00402166:
          UVar5 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,param_4);
          return UVar5;
        }
        if (param_3 == param_1) {
          return 0;
        }
      }
      if (DAT_004138bc != (HPALETTE)0x0) {
        pHVar2 = GetDC(param_1);
        pHVar4 = DAT_004138bc;
LAB_004021a1:
        pHVar4 = SelectPalette(pHVar2,pHVar4,0);
        UVar5 = RealizePalette(pHVar2);
        if (UVar5 != 0) {
          InvalidateRect(param_1,(RECT *)0x0,1);
        }
        SelectPalette(pHVar2,pHVar4,1);
        RealizePalette(pHVar2);
        ReleaseDC(param_1,pHVar2);
        return UVar5;
      }
    }
  }
  return 0;
}



/* ==== _SharedDlg@16 @ 00402299 ==== 
 * signature: undefined4 __stdcall _SharedDlg@16(HWND param_1, int param_2, INT_PTR param_3)
 * body: 00402299-004023f1
 */

undefined4 _SharedDlg_16(HWND param_1,int param_2,INT_PTR param_3)

{
  char local_114 [256];
  tagRECT local_14;
  
                    /* 0x2299  3  _SharedDlg@16 */
  if (param_2 == 0x110) {
    FUN_00408c86(param_1);
    SetDlgItemTextA(param_1,0x3ea,DAT_004138b0);
    FUN_00408e33(DAT_00413bd0,0x3e,local_114,0x100);
    SetWindowTextA(param_1,local_114);
    FUN_00408e33(DAT_00413bd0,0x33,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ed,local_114);
    FUN_00408e33(DAT_00413bd0,0x34,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ee,local_114);
    FUN_00408e33(DAT_00413bd0,0x45,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ef,local_114);
    FUN_00408e33(DAT_00413bd0,0x35,local_114,0x100);
    SetDlgItemTextA(param_1,1,local_114);
    GetWindowRect(param_1,&local_14);
    MoveWindow(param_1,(DAT_004138f4 - (local_14.right - local_14.left)) / 2,
               (DAT_004138f8 - (local_14.bottom - local_14.top)) / 2,local_14.right - local_14.left,
               local_14.bottom - local_14.top,0);
  }
  else {
    if (param_2 != 0x111) {
      return 0;
    }
    EndDialog(param_1,param_3);
  }
  return 1;
}



/* ==== _ItemDlg@16 @ 004023f2 ==== 
 * signature: undefined4 __stdcall _ItemDlg@16(HWND param_1, int param_2, int param_3)
 * body: 004023f2-004028ce
 */

undefined4 _ItemDlg_16(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  uint uVar3;
  HBRUSH hbr;
  uint uVar4;
  WPARAM wParam;
  char local_254 [256];
  tagPAINTSTRUCT local_154;
  char local_114 [256];
  tagRECT local_14;
  
                    /* 0x23f2  1  _ItemDlg@16 */
  if (param_2 == 0xf) {
    if (DAT_00413424 == 0) {
      SetTimer(param_1,0x19,0x96,(TIMERPROC)0x0);
      DAT_00413424 = 1;
    }
    hdc = BeginPaint(param_1,&local_154);
    hdc_00 = CreateCompatibleDC(hdc);
    h = SelectObject(hdc_00,DAT_00413bf8);
    BitBlt(hdc,0xc,0xc,0x7a,0x106,hdc_00,0,0,0xcc0020);
    SelectObject(hdc_00,h);
    DeleteDC(hdc_00);
    if (DAT_00413bcc != 0) {
      FUN_00409abb(hdc,param_1);
      uVar3 = ((DAT_00413814 - DAT_0041390c & 0xffffU) << 1) / 3;
      uVar4 = (int)((DAT_00413810 - DAT_00413908 & 0xffffU) * DAT_00413868) / DAT_00413c38 & 0xffff;
      SetBkColor(hdc,0x7f0000);
      param_3 = 0;
      local_14.top = DAT_0041390c + 1;
      local_14.bottom = DAT_00413814 + -1;
      local_14.left = DAT_00413908;
      if (uVar4 != 0) {
        do {
          local_14.right = (uVar3 - 3) + local_14.left;
          ExtTextOutA(hdc,local_14.left,local_14.top,6,&local_14,&DAT_00413420,0,(INT *)0x0);
          param_3 = param_3 + uVar3;
          local_14.left = local_14.left + uVar3;
        } while (param_3 < (int)uVar4);
      }
      if (DAT_004138d4 == 0) {
        local_14.top = DAT_0041390c + -1;
        local_14.left = DAT_00413908 + -1;
        local_14.bottom = DAT_00413814 + 1;
        local_14.right = DAT_00413810 + 1;
        hbr = CreateSolidBrush(0);
        FrameRect(hdc,&local_14,hbr);
        DeleteObject(hbr);
      }
    }
    EndPaint(param_1,&local_154);
  }
  else {
    if (param_2 == 0x110) {
      FUN_00408c86(param_1);
      FUN_00408e33(DAT_00413bd0,0x2f,local_114,0x100);
      SetDlgItemTextA(param_1,5,local_114);
      FUN_00408e33(DAT_00413bd0,0x30,local_114,0x100);
      SetDlgItemTextA(param_1,2,local_114);
      FUN_00408e33(DAT_00413bd0,0x31,local_114,0x100);
      SetDlgItemTextA(param_1,3,local_114);
      FUN_00408e33(DAT_00413bd0,0x32,local_114,0x100);
      SetDlgItemTextA(param_1,4,local_114);
      GetWindowTextA(DAT_00413820,local_114,0x100);
      SetWindowTextA(param_1,local_114);
      GetWindowRect(param_1,&local_14);
      MoveWindow(param_1,(DAT_004138f4 - (local_14.right - local_14.left)) / 2,
                 (DAT_004138f8 - (local_14.bottom - local_14.top)) / 2,
                 local_14.right - local_14.left,local_14.bottom - local_14.top,0);
      DAT_00413818 = param_1;
      if ((DAT_00413ba0 == '\v') && (DAT_00413c40 != 0)) {
        iVar1 = 0;
        pHVar2 = GetDlgItem(param_1,1);
        ShowWindow(pHVar2,iVar1);
        iVar1 = 0;
        pHVar2 = GetDlgItem(DAT_00413818,5);
        ShowWindow(pHVar2,iVar1);
      }
      FUN_00402bd3();
      iVar1 = 0;
      pHVar2 = GetDlgItem(DAT_00413818,0xef6);
      ShowWindow(pHVar2,iVar1);
      pHVar2 = GetDlgItem(param_1,0xef6);
      if (pHVar2 != (HWND)0x0) {
        GetWindowRect(pHVar2,&local_14);
        DAT_00413908 = local_14.left + 1;
        DAT_0041390c = local_14.top + 1;
        ScreenToClient(param_1,(LPPOINT)&DAT_00413908);
        DAT_00413810 = local_14.right + -1;
        DAT_00413814 = local_14.bottom + -1;
        ScreenToClient(param_1,(LPPOINT)&DAT_00413810);
      }
      if ((DAT_004138d4 == 0) && (pHVar2 != (HWND)0x0)) {
        ShowWindow(pHVar2,0);
      }
      return 1;
    }
    if (param_2 == 0x111) {
      if (param_3 == 2) {
        FUN_00408e33(DAT_00413bd0,0x19,local_254,0x100);
        FUN_00408e33(DAT_00413bd0,0x3b,local_114,0x100);
        if (DAT_00413bcc != 0) {
          KillTimer(param_1,0x19);
        }
        iVar1 = MessageBoxA(param_1,local_114,local_254,4);
        if (iVar1 == 6) {
          DAT_0041388c = 1;
          EndDialog(param_1,2);
        }
        if (DAT_00413bcc == 0) {
          return 1;
        }
        SetTimer(param_1,0x19,0x96,(TIMERPROC)0x0);
        return 1;
      }
      if (param_3 == 1) {
        if (DAT_00413ba0 == '\v') {
          DAT_00413830 = 1;
          return 0;
        }
        FUN_004029ee(param_1);
        iVar1 = 1;
      }
      else {
        if (param_3 != 5) {
          if (param_3 == 3) {
            wParam = 1;
          }
          else {
            if (param_3 != 4) {
              return 0;
            }
            wParam = 0;
          }
          SendDlgItemMessageA(param_1,0x3eb,0x185,wParam,-1);
          return 0;
        }
        FUN_004029ee(param_1);
        iVar1 = 0;
      }
      FUN_004028cf(iVar1);
      FUN_00402bd3();
    }
    else if ((param_2 == 0x113) && (param_3 == 0x19)) {
      DAT_00410054 = DAT_00410054 + 1;
      if (0x19 < DAT_00410054) {
        DAT_00410054 = 1;
      }
      InvalidateRect(param_1,(RECT *)&DAT_00413bb0,0);
      UpdateWindow(param_1);
    }
  }
  return 0;
}



/* ==== FUN_004028cf @ 004028cf ==== 
 * signature: undefined __cdecl FUN_004028cf(int param_1)
 * body: 004028cf-004029c1
 */

void __cdecl FUN_004028cf(int param_1)

{
  bool bVar1;
  bool bVar2;
  
  if (DAT_00413840 == 1000) {
    if (param_1 == 0) {
      if (DAT_00413ba0 != '\0') {
        if (DAT_00413ba0 != '\f') {
          DAT_00413ba0 = (DAT_00413bd4 == 0) - 1U & 0xc;
          return;
        }
        DAT_00413ba0 = 0;
        return;
      }
    }
    else if (DAT_00413ba0 != '\v') {
      if (DAT_00413ba0 != '\f') {
        DAT_00413ba0 = (DAT_00413bd4 != 0) + '\v';
        return;
      }
switchD_0040294e_default:
      DAT_00413ba0 = '\v';
    }
  }
  else {
    do {
      if (param_1 == 0) {
        DAT_00413ba0 = DAT_00413ba0 + -1;
      }
      else {
        DAT_00413ba0 = DAT_00413ba0 + '\x01';
      }
      switch(DAT_00413ba0) {
      case 0:
        goto switchD_0040294e_caseD_0;
      case 1:
        bVar2 = DAT_00413bec < 0;
        bVar1 = DAT_00413bec == 0;
        break;
      case 2:
        bVar2 = DAT_004138c0 < 0;
        bVar1 = DAT_004138c0 == 0;
        break;
      case 3:
        bVar2 = DAT_00413cc8 < 0;
        bVar1 = DAT_00413cc8 == 0;
        break;
      case 4:
        bVar2 = DAT_004138cc < 0;
        bVar1 = DAT_004138cc == 0;
        break;
      case 5:
        bVar2 = DAT_00413884 < 0;
        bVar1 = DAT_00413884 == 0;
        break;
      case 6:
        bVar2 = DAT_00413cdc < 0;
        bVar1 = DAT_00413cdc == 0;
        break;
      case 7:
        bVar2 = DAT_00413c44 < 0;
        bVar1 = DAT_00413c44 == 0;
        break;
      case 8:
        bVar2 = DAT_00413c3c < 0;
        bVar1 = DAT_00413c3c == 0;
        break;
      case 9:
        bVar2 = DAT_00413844 < 0;
        bVar1 = DAT_00413844 == 0;
        break;
      case 10:
        if (DAT_004138f0 != 0) {
          return;
        }
        if (0 < DAT_00413bd8) {
          return;
        }
        bVar2 = DAT_00413bc0 < 0;
        bVar1 = DAT_00413bc0 == 0;
        break;
      default:
        goto switchD_0040294e_default;
      }
    } while (bVar1 || bVar2);
  }
switchD_0040294e_caseD_0:
  return;
}



/* ==== FUN_004029ee @ 004029ee ==== 
 * signature: undefined __cdecl FUN_004029ee(HWND param_1)
 * body: 004029ee-00402b79
 */

void __cdecl FUN_004029ee(HWND param_1)

{
  bool bVar1;
  LRESULT LVar2;
  int iVar3;
  int iVar4;
  WPARAM wParam;
  
  if (DAT_00413ba0 == '\0') {
    LVar2 = SendDlgItemMessageA(DAT_00413818,1000,0xf0,0,0);
    DAT_00413840 = 0x3e9 - (uint)(LVar2 != 0);
  }
  else if (DAT_00413ba0 == '\f') {
    LVar2 = SendDlgItemMessageA(DAT_00413818,1000,0xf0,0,0);
    DAT_004138c8 = (uint)(LVar2 != 0);
  }
  else if (DAT_00413ba0 == '\v') {
    return;
  }
  wParam = 0;
  if (0 < DAT_00413c38) {
    do {
      LVar2 = SendDlgItemMessageA(param_1,0x3eb,0x187,wParam,0);
      switch(DAT_00413ba0) {
      case '\x01':
        iVar4 = DAT_00413858;
        goto LAB_00402ad2;
      case '\x02':
        *(LRESULT *)(*(int *)(DAT_00413c4c + wParam * 4) + 0x208) = LVar2;
        break;
      case '\x03':
        iVar4 = DAT_0041386c;
        goto LAB_00402ae6;
      case '\x04':
        iVar4 = DAT_0041382c;
        goto LAB_00402ae6;
      case '\x05':
        *(LRESULT *)(*(int *)(DAT_004138fc + wParam * 4) + 0x70c) = LVar2;
        break;
      case '\x06':
        iVar4 = DAT_00413848;
LAB_00402ad2:
        *(LRESULT *)(*(int *)(iVar4 + wParam * 4) + 0x210) = LVar2;
        break;
      case '\a':
        iVar4 = DAT_00413910;
LAB_00402ae6:
        iVar4 = *(int *)(iVar4 + wParam * 4);
LAB_00402b62:
        *(LRESULT *)(iVar4 + 0x104) = LVar2;
        break;
      case '\b':
        *(LRESULT *)(*(int *)(DAT_00413bc4 + wParam * 4) + 0x1210) = LVar2;
        break;
      case '\t':
        *(LRESULT *)(*(int *)(DAT_00413898 + wParam * 4) + 0x300) = LVar2;
        break;
      case '\n':
        iVar4 = 0;
        iVar3 = 0;
        if ((DAT_004138f0 != 0) && (iVar4 = 1, wParam == 0)) {
          iVar3 = iVar4;
          DAT_0041384c = LVar2;
        }
        if (iVar3 != 0) break;
        iVar3 = wParam - iVar4;
        bVar1 = iVar3 < DAT_00413bd8;
        if (bVar1) {
          *(LRESULT *)(*(int *)(DAT_004138a4 + iVar3 * 4) + 0x204) = LVar2;
        }
        if (bVar1) break;
        iVar4 = *(int *)(DAT_00413cd8 + (wParam - (iVar4 + DAT_00413bd8)) * 4);
        goto LAB_00402b62;
      }
      wParam = wParam + 1;
    } while ((int)wParam < DAT_00413c38);
  }
  return;
}



/* ==== FUN_00402ba2 @ 00402ba2 ==== 
 * signature: undefined __cdecl FUN_00402ba2(int param_1, int param_2)
 * body: 00402ba2-00402bd2
 */

void __cdecl FUN_00402ba2(int param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(DAT_00413818,param_1);
  EnableWindow(hWnd,param_2);
  ShowWindow(hWnd,(uint)(param_2 != 0));
  return;
}



/* ==== FUN_00402bd3 @ 00402bd3 ==== 
 * signature: undefined __stdcall FUN_00402bd3(void)
 * body: 00402bd3-0040366b
 */

void FUN_00402bd3(void)

{
  bool bVar1;
  HWND pHVar2;
  HDC hdc;
  int iVar3;
  uint uVar4;
  HDC lpString;
  HDC pHVar5;
  code *pcVar6;
  UINT UVar7;
  RECT *lpRect;
  tagSIZE *lpsz;
  BOOL BVar8;
  int local_954;
  uint local_950;
  tagSIZE local_948;
  HDC__ local_940 [256];
  tagPAINTSTRUCT local_540;
  char local_500 [255];
  undefined1 local_401;
  CHAR local_400 [1024];
  
  if (DAT_00413ba0 == '\v') {
    UVar7 = 0x3f;
  }
  else {
    UVar7 = 0x2e;
  }
  FUN_00408e33(DAT_00413bd0,UVar7,(char *)local_940,0x400);
  SetDlgItemTextA(DAT_00413818,1,(LPCSTR)local_940);
  if ((DAT_00413ba0 == '\0') || (DAT_00413ba0 == '\f')) {
    FUN_00402ba2(0x3eb,0);
    FUN_00402ba2(3,0);
    FUN_00402ba2(4,0);
    FUN_00402ba2(1000,1);
    FUN_00402ba2(0x3e9,1);
    FUN_00402ba2(0x3ec,1);
    if (DAT_00413ba0 == '\0') {
      FUN_00408e33(DAT_00413bd0,0x3c,(char *)local_940,0x100);
      SetDlgItemTextA(DAT_00413818,1000,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x3d,(char *)local_940,0x100);
      SetDlgItemTextA(DAT_00413818,0x3e9,(LPCSTR)local_940);
      SendDlgItemMessageA(DAT_00413818,1000,0xf1,(uint)(DAT_00413840 != 0x3e9),0);
      SendDlgItemMessageA(DAT_00413818,0x3e9,0xf1,(uint)(DAT_00413840 == 0x3e9),0);
      FUN_00408e33(DAT_00413bd0,7,(char *)local_940,0x400);
      wsprintfA(local_400,(LPCSTR)local_940,DAT_00413be0);
      SetDlgItemTextA(DAT_00413818,0x3ea,local_400);
      FUN_00408e33(DAT_00413bd0,10,(char *)local_940,0x400);
      SetDlgItemTextA(DAT_00413818,0x3ec,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x10,(char *)local_940,0x400);
      SetWindowTextA(DAT_00413818,(LPCSTR)local_940);
      BVar8 = 0;
    }
    else {
      FUN_00408e33(DAT_00413bd0,0x33,(char *)local_940,0x100);
      SetDlgItemTextA(DAT_00413818,1000,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x34,(char *)local_940,0x100);
      SetDlgItemTextA(DAT_00413818,0x3e9,(LPCSTR)local_940);
      SendDlgItemMessageA(DAT_00413818,1000,0xf1,(uint)(DAT_004138c8 != 0),0);
      SendDlgItemMessageA(DAT_00413818,0x3e9,0xf1,(uint)(DAT_004138c8 == 0),0);
      FUN_00408e33(DAT_00413bd0,0x41,(char *)local_940,0x400);
      SetDlgItemTextA(DAT_00413818,0x3ea,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x42,(char *)local_940,0x400);
      SetDlgItemTextA(DAT_00413818,0x3ec,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x40,(char *)local_940,0x400);
      SetWindowTextA(DAT_00413818,(LPCSTR)local_940);
      BVar8 = 1;
    }
  }
  else {
    if (DAT_00413ba0 == '\v') {
      FUN_00402ba2(0x3eb,0);
      FUN_00402ba2(3,0);
      FUN_00402ba2(4,0);
      FUN_00402ba2(1000,0);
      FUN_00402ba2(0x3e9,0);
      FUN_00402ba2(0x3ec,1);
      FUN_00408e33(DAT_00413bd0,0xd,(char *)local_940,0x400);
      wsprintfA(local_400,(LPCSTR)local_940,DAT_00413be0);
      SetDlgItemTextA(DAT_00413818,0x3ea,local_400);
      FUN_00408e33(DAT_00413bd0,0x16,(char *)local_940,0x400);
      SetDlgItemTextA(DAT_00413818,0x3ec,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x13,(char *)local_940,0x400);
      SetWindowTextA(DAT_00413818,(LPCSTR)local_940);
      uVar4 = (uint)(DAT_00413ba4 == 0);
      pHVar2 = GetDlgItem(DAT_00413818,5);
      EnableWindow(pHVar2,uVar4);
      goto LAB_0040303d;
    }
    FUN_00402ba2(0x3eb,1);
    FUN_00402ba2(3,1);
    FUN_00402ba2(4,1);
    FUN_00402ba2(1000,0);
    FUN_00402ba2(0x3e9,0);
    FUN_00402ba2(0x3ec,0);
    BVar8 = 1;
  }
  pHVar2 = GetDlgItem(DAT_00413818,5);
  EnableWindow(pHVar2,BVar8);
LAB_0040303d:
  switch(DAT_00413ba0) {
  case '\x01':
    FUN_00408e33(DAT_00413bd0,5,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,6,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413bec;
    break;
  case '\x02':
    FUN_00408e33(DAT_00413bd0,8,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,9,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_004138c0;
    break;
  case '\x03':
    FUN_00408e33(DAT_00413bd0,0xb,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0xc,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413cc8;
    break;
  case '\x04':
    FUN_00408e33(DAT_00413bd0,0xe,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0xf,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_004138cc;
    break;
  case '\x05':
    FUN_00408e33(DAT_00413bd0,0x11,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x12,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413884;
    break;
  case '\x06':
    FUN_00408e33(DAT_00413bd0,0x14,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x15,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413cdc;
    break;
  case '\a':
    FUN_00408e33(DAT_00413bd0,0x36,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x37,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413c44;
    break;
  case '\b':
    FUN_00408e33(DAT_00413bd0,0x17,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x18,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413c3c;
    break;
  case '\t':
    FUN_00408e33(DAT_00413bd0,0x1a,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x1b,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413844;
    break;
  case '\n':
    FUN_00408e33(DAT_00413bd0,0x2a,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x29,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413bc0 + DAT_00413bd8;
    if (DAT_004138f0 != (HDC)0x0) {
      DAT_00413c38 = DAT_00413c38 + 1;
    }
  }
  pcVar6 = SendDlgItemMessageA_exref;
  if (((DAT_00413ba0 != '\0') && (DAT_00413ba0 != '\v')) && (DAT_00413ba0 != '\f')) {
    SendDlgItemMessageA(DAT_00413818,0x3eb,0x184,0,0);
    SetDlgItemTextA(DAT_00413818,0x3ea,DAT_004138b0);
    SetWindowTextA(DAT_00413818,DAT_00413cc0);
    uVar4 = 0;
    local_950 = 0;
    hdc = BeginPaint(DAT_00413818,&local_540);
    SendDlgItemMessageA(DAT_00413818,0x3eb,0xb,0,0);
    lpString = hdc;
    pHVar5 = hdc;
    if (0 < DAT_00413c38) {
      do {
        switch(DAT_00413ba0) {
        case '\x01':
          iVar3 = *(int *)(DAT_00413858 + uVar4 * 4);
          lpString = (HDC)(iVar3 + 8);
          goto LAB_0040343b;
        case '\x02':
          lpString = *(HDC *)(DAT_00413c4c + uVar4 * 4);
          pHVar5 = (HDC)lpString[0x82].unused;
          break;
        case '\x03':
          lstrcpyA((LPSTR)local_940,*(LPCSTR *)(DAT_0041386c + uVar4 * 4));
          lpString = local_940;
          iVar3 = lstrlenA((LPCSTR)local_940);
          *(undefined1 *)((int)local_940 + iVar3 + -1) = 0;
          pHVar5 = *(HDC *)(*(int *)(DAT_0041386c + uVar4 * 4) + 0x104);
          break;
        case '\x04':
          iVar3 = DAT_0041382c;
          goto LAB_0040344b;
        case '\x05':
          iVar3 = *(int *)(DAT_004138fc + uVar4 * 4);
          wsprintfA((LPSTR)local_940,s__s____s___s__s_004101e4,iVar3 + 8,iVar3 + 0x10c,iVar3 + 0x20c
                    ,iVar3 + 0x30c);
          lpString = local_940;
          pHVar5 = *(HDC *)(*(int *)(DAT_004138fc + uVar4 * 4) + 0x70c);
          break;
        case '\x06':
          iVar3 = *(int *)(DAT_00413848 + uVar4 * 4);
          if (*(char *)(iVar3 + 0x10c) == '\0') {
            lpString = (HDC)(iVar3 + 8);
          }
          else {
            wsprintfA((LPSTR)local_940,s__s_Value_Name___s_004101d0,iVar3 + 8,iVar3 + 0x10c);
            lpString = local_940;
          }
          iVar3 = *(int *)(DAT_00413848 + uVar4 * 4);
LAB_0040343b:
          pHVar5 = *(HDC *)(iVar3 + 0x210);
          break;
        case '\a':
          iVar3 = DAT_00413910;
LAB_0040344b:
          lpString = *(HDC *)(iVar3 + uVar4 * 4);
LAB_0040357c:
          pHVar5 = (HDC)lpString[0x41].unused;
          break;
        case '\b':
          iVar3 = *(int *)(DAT_00413bc4 + uVar4 * 4);
          if (*(char *)(iVar3 + 0x108) == '\0') {
            wsprintfA((LPSTR)local_940,s__s__s_004101b0,iVar3 + 8,iVar3 + 0x208);
          }
          else {
            _strncpy(local_500,(char *)(iVar3 + 0x208),0xff);
            local_401 = 0;
            iVar3 = *(int *)(DAT_00413bc4 + uVar4 * 4);
            wsprintfA((LPSTR)local_940,s__s_Value_Name___s__s_004101b8,iVar3 + 8,iVar3 + 0x108,
                      local_500);
          }
          lpString = local_940;
          pHVar5 = *(HDC *)(*(int *)(DAT_00413bc4 + uVar4 * 4) + 0x1210);
          break;
        case '\t':
          iVar3 = *(int *)(DAT_00413898 + uVar4 * 4);
          pHVar5 = *(HDC *)(iVar3 + 0x300);
          lpString = (HDC)(iVar3 + 0x100);
          break;
        case '\n':
          local_954 = 0;
          bVar1 = false;
          if ((DAT_004138f0 != (HDC)0x0) && (local_954 = 1, uVar4 == 0)) {
            bVar1 = true;
            lpString = DAT_004138f0;
            pHVar5 = DAT_0041384c;
          }
          if (bVar1) break;
          bVar1 = false;
          if ((int)(uVar4 - local_954) < DAT_00413bd8) {
            pHVar5 = *(HDC *)(DAT_004138a4 + (uVar4 - local_954) * 4);
            lpString = pHVar5 + 0x41;
            if ((char)pHVar5[0x41].unused == '\0') {
              lpString = pHVar5;
            }
            pHVar5 = (HDC)pHVar5[0x81].unused;
            bVar1 = true;
          }
          if (bVar1) break;
          lpString = *(HDC *)(DAT_00413cd8 + (uVar4 - (local_954 + DAT_00413bd8)) * 4);
          goto LAB_0040357c;
        }
        lpsz = &local_948;
        iVar3 = lstrlenA((LPCSTR)lpString);
        GetTextExtentPointA(hdc,(LPCSTR)lpString,iVar3,lpsz);
        if (local_950 < (local_948.cx & 0xffffU)) {
          local_950 = local_948.cx;
        }
        SendDlgItemMessageA(DAT_00413818,0x3eb,0x180,0,(LPARAM)lpString);
        if (pHVar5 != (HDC)0x0) {
          SendDlgItemMessageA(DAT_00413818,0x3eb,0x185,1,uVar4 & 0xffff);
        }
        uVar4 = uVar4 + 1;
        pcVar6 = SendDlgItemMessageA_exref;
      } while ((int)uVar4 < DAT_00413c38);
    }
    EndPaint(DAT_00413818,&local_540);
    (*pcVar6)(DAT_00413818,0x3eb,0x194,local_950,0);
    (*pcVar6)(DAT_00413818,0x3eb,0x197,0,0);
    (*pcVar6)(DAT_00413818,0x3eb,0xb,1,0);
    BVar8 = 0;
    lpRect = (RECT *)0x0;
    pHVar2 = GetDlgItem(DAT_00413818,0x3eb);
    InvalidateRect(pHVar2,lpRect,BVar8);
  }
  pHVar2 = GetDlgItem(DAT_00413818,1);
  SetFocus(pHVar2);
  return;
}



/* ==== FUN_004036bc @ 004036bc ==== 
 * signature: undefined4 __stdcall FUN_004036bc(void)
 * body: 004036bc-004036c0
 */

undefined4 FUN_004036bc(void)

{
  return 0;
}



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



/* ==== FUN_00405e01 @ 00405e01 ==== 
 * signature: undefined4 __cdecl FUN_00405e01(char * param_1, int param_2, HFILE param_3, int param_4)
 * body: 00405e01-00405e9f
 */

undefined4 __cdecl FUN_00405e01(char *param_1,int param_2,HFILE param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  param_2 = param_2 + -1;
  pcVar2 = param_1;
  do {
    while( true ) {
      if ((int)DAT_00413bdc <= DAT_004138c4) {
        DAT_004138e0 = DAT_004138e0 + DAT_004138c4;
        DAT_004138c4 = 0;
        DAT_00413bdc = _lread(param_3,DAT_00413808,0x4000);
        if ((int)DAT_00413bdc < 1) {
          *pcVar2 = '\0';
          return 0;
        }
      }
      cVar1 = *(char *)(DAT_004138c4 + (int)DAT_00413808);
      if (cVar1 == '\r') break;
      if ((cVar1 != '\n') && (0 < param_2)) {
        param_2 = param_2 + -1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      }
      DAT_004138c4 = DAT_004138c4 + 1;
    }
    DAT_004138c4 = DAT_004138c4 + 1;
  } while ((pcVar2 == param_1) && (param_4 == 0));
  *pcVar2 = '\0';
  return 1;
}



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



/* ==== FUN_004073c5 @ 004073c5 ==== 
 * signature: undefined __cdecl FUN_004073c5(int param_1)
 * body: 004073c5-004074ca
 */

void __cdecl FUN_004073c5(int param_1)

{
  int iVar1;
  HWND hWnd;
  tagRECT *lpRect;
  CHAR local_81c [1024];
  CHAR local_41c [1024];
  tagRECT local_1c;
  tagPOINT local_c;
  
  if (DAT_00413818 != (HWND)0x0) {
    if (param_1 != 0) {
      wsprintfA(local_41c,s__s_00410568,param_1);
      GetDlgItemTextA(DAT_00413818,0x3ef,local_81c,0x400);
      iVar1 = lstrcmpA(local_81c,local_41c);
      if (iVar1 != 0) {
        SetDlgItemTextA(DAT_00413818,0x3ef,local_41c);
      }
    }
    lpRect = &local_1c;
    hWnd = GetDlgItem(DAT_00413818,0xef6);
    GetWindowRect(hWnd,lpRect);
    local_c.x = local_1c.left;
    local_c.y = local_1c.top;
    ScreenToClient(DAT_00413818,&local_c);
    local_1c.left = local_c.x;
    local_1c.top = local_c.y;
    local_c.x = local_1c.right;
    local_c.y = local_1c.bottom;
    ScreenToClient(DAT_00413818,&local_c);
    local_1c.right = local_c.x;
    local_1c.bottom = local_c.y;
    InvalidateRect(DAT_00413818,&local_1c,0);
  }
  FUN_004074cb(1);
  return;
}



/* ==== FUN_004074cb @ 004074cb ==== 
 * signature: undefined __cdecl FUN_004074cb(UINT param_1)
 * body: 004074cb-0040754d
 */

void __cdecl FUN_004074cb(UINT param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (param_1 == 0) {
    DAT_00413be4 = 0;
  }
  else {
    DAT_00413be4 = 1;
    SetTimer(DAT_00413820,0x206a,param_1,(TIMERPROC)0x0);
  }
  do {
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  } while (DAT_00413be4 != 0);
  if (param_1 != 0) {
    KillTimer(DAT_00413820,0x206a);
  }
  return;
}



/* ==== FUN_0040754e @ 0040754e ==== 
 * signature: undefined __cdecl FUN_0040754e(LPCSTR param_1, int param_2)
 * body: 0040754e-00407703
 */

void __cdecl FUN_0040754e(LPCSTR param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  char local_34c [256];
  byte local_24c;
  undefined1 auStack_108 [4];
  CHAR local_104 [256];
  
  iVar2 = lstrlenA(param_1);
  if (3 < iVar2) {
    GetWindowsDirectoryA(local_104,0x100);
    iVar2 = lstrcmpiA(param_1,local_104);
    if (iVar2 != 0) {
      GetSystemDirectoryA(local_104,0x100);
      iVar2 = lstrcmpiA(param_1,local_104);
      if ((iVar2 != 0) &&
         ((DAT_0041389c == (LPCSTR)0x0 || (iVar2 = lstrcmpiA(param_1,DAT_0041389c), iVar2 != 0)))) {
        lstrcpyA(local_104,param_1);
        lstrcatA(local_104,&DAT_0041030c);
        bVar1 = FUN_004089a3(local_104,0x17,local_34c);
        iVar2 = CONCAT31(extraout_var,bVar1);
        while (iVar2 == 0) {
          if ((local_24c & 0x10) == 0) {
            if (param_2 != 0) {
              lstrcpyA(local_104,param_1);
              lstrcatA(local_104,&DAT_004100cc);
              lstrcatA(local_104,local_34c);
              FUN_00408980(local_104,0);
              FUN_00408713(local_104);
            }
          }
          else if (local_34c[0] != '.') {
            lstrcpyA(local_104,param_1);
            lstrcatA(local_104,&DAT_004100cc);
            lstrcatA(local_104,local_34c);
            FUN_0040754e(local_104,param_2);
            iVar2 = lstrlenA(local_104);
            auStack_108[iVar2] = 0;
            FUN_004086d2(local_104);
          }
          bVar1 = FUN_004089e5(local_34c);
          iVar2 = CONCAT31(extraout_var_00,bVar1);
        }
        FUN_00408a22((int)local_34c);
        FUN_004086d2(param_1);
      }
    }
  }
  return;
}



/* ==== FUN_00407704 @ 00407704 ==== 
 * signature: undefined __stdcall FUN_00407704(void)
 * body: 00407704-004078d4
 */

void FUN_00407704(void)

{
  UINT UVar1;
  HSZ pHVar2;
  HDDEDATA hData;
  int iVar3;
  undefined4 *puVar4;
  char *_Str;
  CHAR local_10c [256];
  int local_c;
  HDDEDATA local_8;
  
  UVar1 = DdeInitializeA(&DAT_0041383c,FUN_004036bc,0x3f000,0);
  if (UVar1 == 0) {
    pHVar2 = DdeCreateStringHandleA(DAT_0041383c,s_PROGMAN_00410578,0x3ec);
    DAT_00413890 = DdeConnect(DAT_0041383c,pHVar2,pHVar2,(PCONVCONTEXT)0x0);
    if (DAT_00413890 != (HCONV)0x0) {
      pHVar2 = DdeCreateStringHandleA(DAT_0041383c,s_GROUPS_00410570,0x3ec);
      hData = DdeClientTransaction((LPBYTE)0x0,0,DAT_00413890,pHVar2,1,0x20b0,5000,(LPDWORD)0x0);
      if (hData != (HDDEDATA)0x0) {
        DdeGetData(hData,DAT_00413c50,0x4000,0);
        iVar3 = lstrlenA((LPCSTR)DAT_00413c50);
        DAT_00413850 = (char *)FUN_004098e3(iVar3 + 1);
        lstrcpyA(DAT_00413850,(LPCSTR)DAT_00413c50);
        DdeFreeDataHandle(hData);
        if (*DAT_00413850 != '\0') {
          local_c = 0;
          _Str = DAT_00413850;
          do {
            local_8 = (HDDEDATA)_strchr(_Str,0xd);
            if (local_8 == (HDDEDATA)0x0) {
              lstrcpyA(local_10c,_Str);
            }
            else {
              _strncpy(local_10c,_Str,(int)local_8 - (int)_Str);
              (local_10c + (int)local_8)[-(int)_Str] = '\0';
            }
            pHVar2 = DdeCreateStringHandleA(DAT_0041383c,local_10c,0x3ec);
            local_8 = DdeClientTransaction
                                ((LPBYTE)0x0,0,DAT_00413890,pHVar2,1,0x20b0,5000,(LPDWORD)0x0);
            if (local_8 != (HDDEDATA)0x0) {
              DdeGetData(local_8,DAT_00413c50,0x4000,0);
              iVar3 = lstrlenA((LPCSTR)DAT_00413c50);
              puVar4 = FUN_004098e3(iVar3 + 1);
              *(undefined4 **)(DAT_004138e4 + local_c) = puVar4;
              lstrcpyA(*(LPSTR *)(DAT_004138e4 + local_c),(LPCSTR)DAT_00413c50);
              local_c = local_c + 4;
              DdeFreeDataHandle(local_8);
            }
            for (; (*_Str != '\0' && (*_Str != '\r')); _Str = _Str + 1) {
            }
            for (; (*_Str == '\r' || (*_Str == '\n')); _Str = _Str + 1) {
            }
          } while (*_Str != '\0');
        }
      }
    }
  }
  return;
}



/* ==== FUN_004078d5 @ 004078d5 ==== 
 * signature: undefined __cdecl FUN_004078d5(int param_1)
 * body: 004078d5-00407b3d
 */

void __cdecl FUN_004078d5(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *_Str;
  int iVar5;
  char local_408 [256];
  char local_308 [256];
  char local_208 [256];
  BYTE local_108 [256];
  int local_8;
  
  if (*DAT_004138e4 != 0) {
    local_8 = 0;
    piVar4 = DAT_004138e4;
    do {
      if (**(char **)((int)piVar4 + local_8) == '\"') {
        _Str = *(char **)((int)piVar4 + local_8) + 1;
        pcVar1 = _strchr(_Str,0x22);
        piVar4 = DAT_004138e4;
        if (pcVar1 != (char *)0x0) {
          _strncpy(local_208,_Str,(int)pcVar1 - (int)_Str);
          (local_208 + (int)pcVar1)[-(int)_Str] = '\0';
          for (; (*_Str != '\0' && (*_Str != '\r')); _Str = _Str + 1) {
          }
          while( true ) {
            pcVar1 = _Str;
            if (*_Str != '\0') {
              pcVar1 = _Str + 2;
            }
            piVar4 = DAT_004138e4;
            if (*pcVar1 == '\0') break;
            _Str = pcVar1;
            if (*pcVar1 == '\"') {
              _Str = pcVar1 + 1;
              pcVar2 = _strchr(_Str,0x22);
              if (pcVar2 != (char *)0x0) {
                _strncpy(local_308,_Str,(int)pcVar2 - (int)_Str);
                iVar3 = -(int)_Str;
                _Str = pcVar2 + 1;
                (local_308 + (int)pcVar2)[iVar3] = '\0';
                if ((*_Str == ',') && (pcVar2[2] == '\"')) {
                  _Str = pcVar2 + 3;
                  pcVar2 = _strchr(_Str,0x22);
                  if (pcVar2 != (char *)0x0) {
                    _strncpy(local_408,_Str,(int)pcVar2 - (int)_Str);
                    (local_408 + (int)pcVar2)[-(int)_Str] = '\0';
                    iVar5 = param_1 * 4;
                    iVar3 = lstrcmpiA(local_408,(LPCSTR)(*(int *)(DAT_00413898 + iVar5) + 0x200));
                    if ((iVar3 == 0) ||
                       ((iVar3 = lstrcmpiA(local_208,*(LPCSTR *)(DAT_00413898 + iVar5)), iVar3 == 0
                        && (iVar3 = lstrcmpiA(local_308,
                                              (LPCSTR)(*(int *)(DAT_00413898 + iVar5) + 0x100)),
                           iVar3 == 0)))) {
                      *pcVar1 = '*';
                      wsprintfA((LPSTR)local_108,s__ShowGroup__s_2___004105c4,local_208);
                      FUN_00407b3e(local_108);
                      wsprintfA((LPSTR)local_108,s__ShowGroup__s_1___004105b0,local_208);
                      FUN_00407b3e(local_108);
                      wsprintfA((LPSTR)local_108,s__DeleteItem__s___0041059c,local_308);
                      FUN_00407b3e(local_108);
                      iVar3 = FUN_00407b85(*(char **)((int)DAT_004138e4 + local_8));
                      if ((iVar3 != 0) &&
                         (iVar3 = lstrcmpiA(local_208,s_STARTUP_00410594), iVar3 != 0)) {
                        wsprintfA((LPSTR)local_108,s__DeleteGroup__s___00410580,local_208);
                        FUN_00407b3e(local_108);
                      }
                    }
                  }
                }
              }
            }
            for (; (*_Str != '\0' && (*_Str != '\r')); _Str = _Str + 1) {
            }
          }
        }
      }
      local_8 = local_8 + 4;
    } while (*(int *)((int)piVar4 + local_8) != 0);
  }
  return;
}



/* ==== FUN_00407b3e @ 00407b3e ==== 
 * signature: undefined __cdecl FUN_00407b3e(LPBYTE param_1)
 * body: 00407b3e-00407b84
 */

void __cdecl FUN_00407b3e(LPBYTE param_1)

{
  int iVar1;
  HDDEDATA pData;
  DWORD cbOff;
  HSZ hszItem;
  UINT wFmt;
  UINT afCmd;
  
  if (DAT_00413890 != (HCONV)0x0) {
    afCmd = 0;
    wFmt = 0;
    hszItem = (HSZ)0x0;
    cbOff = 0;
    iVar1 = lstrlenA((LPCSTR)param_1);
    pData = DdeCreateDataHandle(DAT_0041383c,param_1,iVar1 + 1,cbOff,hszItem,wFmt,afCmd);
    DdeClientTransaction((LPBYTE)pData,0xffffffff,DAT_00413890,(HSZ)0x0,0,0x4050,1000,(LPDWORD)0x0);
  }
  return;
}



/* ==== FUN_00407b85 @ 00407b85 ==== 
 * signature: undefined4 __cdecl FUN_00407b85(char * param_1)
 * body: 00407b85-00407bc6
 */

undefined4 __cdecl FUN_00407b85(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  pcVar2 = param_1;
  while ((cVar3 != '\0' && (cVar3 != '\r'))) {
    pcVar1 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    cVar3 = *pcVar1;
  }
  while( true ) {
    if (*pcVar2 != '\0') {
      pcVar2 = pcVar2 + 2;
    }
    cVar3 = *pcVar2;
    if (cVar3 == '\0') break;
    if (cVar3 == '\"') {
      return 0;
    }
    while ((cVar3 != '\0' && (cVar3 != '\r'))) {
      pcVar1 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar1;
    }
  }
  *param_1 = '*';
  return 1;
}



/* ==== FUN_00407bc7 @ 00407bc7 ==== 
 * signature: undefined __cdecl FUN_00407bc7(HWND param_1, LPCSTR param_2)
 * body: 00407bc7-00407db2
 */

void __cdecl FUN_00407bc7(HWND param_1,LPCSTR param_2)

{
  char *pcVar1;
  char cVar2;
  HDC hdc;
  int iVar3;
  LPSTR pCVar4;
  char *pcVar5;
  tagSIZE *ptVar6;
  CHAR *lpString2;
  CHAR local_32c [256];
  CHAR local_22c [256];
  CHAR aCStack_12c [4];
  char local_128 [255];
  undefined1 local_29;
  tagRECT local_28;
  HGDIOBJ local_18;
  tagSIZE local_14;
  HGDIOBJ local_c;
  LPCSTR local_8;
  
  cVar2 = *param_2;
  local_8 = param_2;
  while (((cVar2 != '\n' && (cVar2 != '\r')) && (cVar2 != '\0'))) {
    pcVar5 = local_8 + 1;
    local_8 = local_8 + 1;
    cVar2 = *pcVar5;
  }
  for (; (*local_8 == '\r' || (*local_8 == '\n')); local_8 = local_8 + 1) {
  }
  if (*local_8 == '\0') {
    lstrcpyA(local_22c,param_2);
    local_8 = param_2;
  }
  else {
    lstrcpyA(local_22c,local_8);
  }
  if (param_1 != (HWND)0x0) {
    GetWindowRect(param_1,&local_28);
    local_28.right = local_28.right - local_28.left;
    local_c = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
    hdc = GetDC(param_1);
    if (local_c != (HGDIOBJ)0x0) {
      local_18 = SelectObject(hdc,local_c);
    }
    ptVar6 = &local_14;
    iVar3 = lstrlenA(param_2);
    GetTextExtentPointA(hdc,local_22c,iVar3,ptVar6);
    if (local_28.right <= local_14.cx) {
      lstrcpynA(local_128,local_22c,0x100);
      local_29 = 0;
      pcVar5 = local_128;
      while ((local_128[0] != '\0' && (local_128[0] != '\\'))) {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        local_128[0] = *pcVar1;
      }
      if (*pcVar5 == '\\') {
        pcVar5 = pcVar5 + 1;
      }
      if (local_28.right <= local_14.cx) {
        do {
          pCVar4 = pcVar5;
          if (*pcVar5 != '.') goto LAB_00407d07;
          cVar2 = '.';
          do {
            if (cVar2 == '\\') break;
            cVar2 = pCVar4[1];
            pCVar4 = pCVar4 + 1;
          } while (cVar2 != '\0');
          if (*pCVar4 != '\\') goto LAB_00407d07;
          do {
            pCVar4 = pCVar4 + 1;
LAB_00407d07:
          } while ((*pCVar4 != '\0') && (*pCVar4 != '\\'));
          if ((*pCVar4 == '\0') || ((int)pCVar4 - (int)pcVar5 < 4)) {
            lpString2 = &DAT_00410560;
            iVar3 = lstrlenA(local_128);
            pCVar4 = aCStack_12c + iVar3;
          }
          else {
            lstrcpyA(local_32c,pCVar4);
            lstrcpyA(pcVar5,&DAT_00410560);
            lpString2 = local_32c;
            pCVar4 = pcVar5 + 3;
          }
          lstrcpyA(pCVar4,lpString2);
          ptVar6 = &local_14;
          iVar3 = lstrlenA(local_128);
          GetTextExtentPointA(hdc,local_128,iVar3,ptVar6);
        } while (local_28.right <= local_14.cx);
      }
      lstrcpyA(local_8,local_128);
    }
    if (local_c != (HGDIOBJ)0x0) {
      SelectObject(hdc,local_18);
    }
    ReleaseDC(param_1,hdc);
  }
  return;
}



/* ==== FUN_00407db3 @ 00407db3 ==== 
 * signature: char __cdecl FUN_00407db3(LPCSTR param_1, undefined4 param_2, int param_3)
 * body: 00407db3-00407fb9
 */

char __cdecl FUN_00407db3(LPCSTR param_1,undefined4 param_2,int param_3)

{
  LSTATUS LVar1;
  int iVar2;
  char local_210 [256];
  int local_110 [64];
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  if ((DAT_0041385c != 0) &&
     (LVar1 = RegOpenKeyExA((HKEY)0x80000002,PTR_s_Software_Microsoft_Windows_Curre_0041004c,0,0x1f,
                            &local_8), LVar1 == 0)) {
    local_10 = 0x100;
    LVar1 = RegQueryValueExA(local_8,param_1,(LPDWORD)0x0,&local_c,(LPBYTE)local_110,&local_10);
    if (LVar1 == 0) {
      if (local_c == 1) {
        iVar2 = FUN_0040a4f0((byte *)local_110);
      }
      else if ((local_c == 4) || ((iVar2 = -1, local_c == 3 && (local_10 == 4)))) {
        iVar2 = local_110[0];
      }
      if (iVar2 < 1) {
        local_110[0] = -1;
      }
      else {
        if (DAT_004138c8 == 0) {
          local_110[0] = -param_3;
        }
        else {
          local_110[0] = -1;
        }
        local_110[0] = iVar2 + local_110[0];
        if (local_110[0] < 0) {
          local_110[0] = 0;
        }
      }
      if (local_110[0] == 0) {
        FUN_00408e33(DAT_00413bd0,0x26,local_210,0x100);
        wsprintfA(DAT_004138b0,local_210,param_1);
        FUN_00408e33(DAT_00413bd0,0x27,local_210,0x100);
        lstrcatA(DAT_004138b0,local_210);
        if ((DAT_00413878 == 0) && (DAT_00413cd0 == 0)) {
          if (DAT_00413894 == 0) {
            if (DAT_00413bcc != 0) {
              KillTimer(DAT_00413818,0x19);
            }
            iVar2 = DialogBoxParamA(DAT_00413bd0,(LPCSTR)0x68,DAT_00413818,_SharedDlg_16,0);
            if (DAT_00413bcc != 0) {
              SetTimer(DAT_00413818,0x19,0x96,(TIMERPROC)0x0);
            }
            if (iVar2 == 1) {
              DAT_00413cd0 = 1;
            }
            if (iVar2 == 0x3ef) {
              iVar2 = 0x3ed;
              DAT_00413894 = 1;
            }
            SetFocus(DAT_00413818);
          }
          else {
            iVar2 = 0x3ed;
          }
        }
        else {
          iVar2 = 7;
        }
        RegDeleteValueA(local_8,param_1);
        return (iVar2 == 0x3ed) + '\x01';
      }
      if (0 < local_110[0]) {
        RegSetValueExA(local_8,param_1,0,4,(BYTE *)local_110,4);
        return '\x01';
      }
    }
    RegCloseKey(local_8);
  }
  return '\0';
}



/* ==== FUN_00407fba @ 00407fba ==== 
 * signature: undefined4 __cdecl FUN_00407fba(char * param_1, LPCSTR param_2, int param_3)
 * body: 00407fba-0040812a
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00407fba(char *param_1,LPCSTR param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  CHAR local_34c [256];
  byte local_24c;
  char acStack_105 [257];
  
  pcVar2 = _strchr(param_1,0x2a);
  if ((pcVar2 == (char *)0x0) && (pcVar2 = _strchr(param_1,0x3f), pcVar2 == (char *)0x0)) {
    FUN_0040812b(param_1);
    if ((param_3 != 0) && (*param_2 != '\0')) {
      FUN_0040959c(param_2,param_1);
    }
  }
  else {
    iVar3 = lstrlenA(param_1);
    if ((2 < iVar3) && (iVar3 = lstrcmpA(param_1 + iVar3 + -3,&DAT_004105d8), iVar3 == 0)) {
      iVar3 = lstrlenA(param_1);
      if (iVar3 < 4) {
        return 0;
      }
      GetWindowsDirectoryA((LPSTR)((int)acStack_105 + 1),0x100);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)((int)acStack_105 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      GetSystemDirectoryA((LPSTR)((int)acStack_105 + 1),0x100);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)((int)acStack_105 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = lstrcmpiA(param_1,DAT_0041389c);
      if (iVar3 == 0) {
        return 0;
      }
    }
    lstrcpyA((LPSTR)((int)acStack_105 + 1),param_1);
    iVar3 = lstrlenA((LPCSTR)((int)acStack_105 + 1));
    for (pcVar2 = acStack_105 + iVar3; (uint)((int)acStack_105 + 1U) < pcVar2; pcVar2 = pcVar2 + -1)
    {
      if (*pcVar2 == '\\') goto LAB_004080ca;
    }
    if (*pcVar2 == '\\') {
LAB_004080ca:
      pcVar2 = pcVar2 + 1;
    }
    bVar1 = FUN_004089a3((LPCSTR)((int)acStack_105 + 1),7,local_34c);
    iVar3 = CONCAT31(extraout_var,bVar1);
    while (iVar3 == 0) {
      if ((local_24c & 0x10) == 0) {
        lstrcpyA(pcVar2,local_34c);
        FUN_0040812b((LPCSTR)((int)acStack_105 + 1));
      }
      bVar1 = FUN_004089e5(local_34c);
      iVar3 = CONCAT31(extraout_var_00,bVar1);
    }
    FUN_00408a22((int)local_34c);
  }
  return 1;
}



/* ==== FUN_0040812b @ 0040812b ==== 
 * signature: undefined __cdecl FUN_0040812b(LPCSTR param_1)
 * body: 0040812b-004081b9
 */

void __cdecl FUN_0040812b(LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  CHAR local_104 [256];
  
  FUN_00408980(param_1,0);
  FUN_00408713(param_1);
  iVar1 = lstrlenA(param_1);
  if ((4 < iVar1) && (DAT_00413834 != 0)) {
    iVar2 = lstrcmpiA(param_1 + iVar1 + -4,&DAT_004105ec);
    if (iVar2 == 0) {
      lstrcpyA(local_104,param_1);
      lstrcpyA(local_104 + iVar1 + -4,&DAT_004105e4);
      FUN_00408713(local_104);
      lstrcpyA(local_104 + iVar1 + -4,&DAT_004105dc);
      FUN_00408713(local_104);
    }
  }
  return;
}



/* ==== FUN_004081ba @ 004081ba ==== 
 * signature: undefined __cdecl FUN_004081ba(LPCSTR param_1, LPCSTR param_2, int param_3)
 * body: 004081ba-0040836e
 */

void __cdecl FUN_004081ba(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  HWND pHVar1;
  char *pcVar2;
  int iVar3;
  LPCSTR lpString1;
  BOOL BVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  HMODULE hModule_00;
  LPSTR pCVar6;
  CHAR local_458 [512];
  CHAR local_258 [256];
  CHAR local_158 [256];
  _STARTUPINFOA local_58;
  _PROCESS_INFORMATION local_14;
  
  lstrcpyA(DAT_004138b0,param_1);
  lstrcatA(DAT_004138b0,param_2);
  pCVar6 = DAT_004138b0;
  pHVar1 = GetDlgItem(DAT_00413818,0x3ef);
  FUN_00407bc7(pHVar1,pCVar6);
  FUN_004073c5((int)DAT_004138b0);
  lstrcpyA(local_158,param_2);
  pcVar2 = FUN_004097b1(local_158);
  if (local_158 < pcVar2) {
    pcVar2[-1] = '\0';
  }
  FUN_00408a39(local_158,0);
  FUN_00409fe0(local_158);
  iVar3 = lstrlenA(param_2);
  lpString1 = param_2 + iVar3 + -3;
  if (param_2 + iVar3 + -3 < param_2) {
    lpString1 = param_2;
  }
  iVar3 = lstrcmpiA(lpString1,&DAT_00410190);
  if (iVar3 == 0) {
    lstrcpyA(local_258,param_2);
    FUN_00408a39(local_258,0);
    _memset(&local_58,0,0x44);
    local_58.cb = 0x44;
    wsprintfA(local_458,s__s__UNREGSERVER_00410648,local_258);
    BVar4 = CreateProcessA((LPCSTR)0x0,local_458,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_58,
                           &local_14);
    if (BVar4 != 0) {
      WaitForSingleObject(local_14.hProcess,0xffffffff);
    }
  }
  else {
    iVar3 = FUN_00408be3(param_2);
    if (iVar3 != 0) {
      hModule = LoadLibraryA(s_OLE32_DLL_0041063c);
      if (hModule != (HMODULE)0x0) {
        pFVar5 = GetProcAddress(hModule,s_OleInitialize_0041062c);
        if (pFVar5 != (FARPROC)0x0) {
          iVar3 = (*pFVar5)(0);
          if (iVar3 == 0) {
            hModule_00 = LoadLibraryA(param_2);
            if (hModule_00 != (HMODULE)0x0) {
              pcVar2 = s_DllRegisterServer_00410618;
              if (param_3 == 0) {
                pcVar2 = s_DllUnregisterServer_00410604;
              }
              pFVar5 = GetProcAddress(hModule_00,pcVar2);
              if (pFVar5 != (FARPROC)0x0) {
                (*pFVar5)();
              }
              FreeLibrary(hModule_00);
            }
          }
        }
        pFVar5 = GetProcAddress(hModule,s_OleUninitialize_004105f4);
        if (pFVar5 != (FARPROC)0x0) {
          (*pFVar5)();
        }
        FreeLibrary(hModule);
      }
    }
  }
  return;
}



/* ==== FUN_0040836f @ 0040836f ==== 
 * signature: undefined4 __stdcall FUN_0040836f(void)
 * body: 0040836f-00408572
 */

undefined4 FUN_0040836f(void)

{
  LSTATUS LVar1;
  int iVar2;
  HWND pHVar3;
  char local_310 [256];
  char local_210 [256];
  int local_110 [64];
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  if (DAT_00413834 == 0) {
    return 0;
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_Database_Engine_004106a0,0,0x1f,&local_8
                       );
  if (LVar1 != 0) {
    return 0;
  }
  local_c = 0x100;
  LVar1 = RegQueryValueExA(local_8,s_UseCount_00410694,(LPDWORD)0x0,&local_10,(LPBYTE)local_110,
                           &local_c);
  if (LVar1 == 0) {
    if (local_10 == 1) {
      iVar2 = FUN_0040a4f0((byte *)local_110);
    }
    else if ((local_10 == 4) || ((iVar2 = -1, local_10 == 3 && (local_c == 4)))) {
      iVar2 = local_110[0];
    }
    if (iVar2 == 1) {
      do {
        pHVar3 = FindWindowA(s_IB_Server_00410688,(LPCSTR)0x0);
        if (pHVar3 == (HWND)0x0) {
          iVar2 = 5;
        }
        else {
          FUN_00408e33(DAT_00413bd0,0x1c,local_310,0x100);
          FUN_00408e33(DAT_00413bd0,0x19,local_210,0x100);
          iVar2 = MessageBoxA(DAT_00413818,local_310,local_210,2);
          if (iVar2 == 3) {
            return 1;
          }
        }
      } while (iVar2 != 5);
      RegCloseKey(local_8);
      FUN_00408573(s_Software_Borland_Database_Engine_004106a0,2);
      FUN_00408573(s_Software_Borland_BLW32_00410670,2);
      LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_0041065c,0,0x1f,&local_8);
      if (LVar1 != 0) {
        return 0;
      }
      LVar1 = RegEnumValueA(local_8,0,(LPSTR)local_110,&local_c,(LPDWORD)0x0,(LPDWORD)0x0,
                            (LPBYTE)0x0,(LPDWORD)0x0);
      if (LVar1 == 0) {
        RegCloseKey(local_8);
        return 0;
      }
      local_c = 0x100;
      LVar1 = RegEnumKeyExA(local_8,0,(LPSTR)local_110,&local_c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0
                            ,(PFILETIME)0x0);
      RegCloseKey(local_8);
      if (LVar1 == 0) {
        return 0;
      }
      RegDeleteKeyA((HKEY)0x80000002,s_Software_Borland_0041065c);
      return 0;
    }
    if (iVar2 < 2) {
      return 0;
    }
    wsprintfA((LPSTR)local_110,&DAT_00410658,iVar2 + -1);
    iVar2 = lstrlenA((LPCSTR)local_110);
    RegSetValueExA(local_8,s_UseCount_00410694,0,1,(BYTE *)local_110,iVar2 + 1);
  }
  RegCloseKey(local_8);
  return 0;
}



/* ==== FUN_00408573 @ 00408573 ==== 
 * signature: undefined __cdecl FUN_00408573(LPCSTR param_1, int param_2)
 * body: 00408573-0040868a
 */

void __cdecl FUN_00408573(LPCSTR param_1,int param_2)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY hKey;
  CHAR local_194;
  CHAR aCStack_193 [383];
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  int local_8;
  
  local_8 = 0;
  do {
    lstrcpyA(&local_194,param_1);
    lstrcatA(&local_194,&DAT_004100cc);
    iVar1 = lstrlenA(param_1);
    if (DAT_00413834 == 0) {
      LVar2 = RegOpenKeyA((HKEY)0x80000000,param_1,&local_c);
      if (LVar2 == 0) {
        LVar2 = RegEnumKeyA(local_c,0,aCStack_193 + iVar1,0x100);
        RegCloseKey(local_c);
        if (LVar2 == 0) goto LAB_0040863a;
      }
LAB_0040864d:
      local_8 = 0x800;
    }
    else {
      LVar2 = RegOpenKeyExA(*(HKEY *)(&DAT_00410020 + param_2 * 4),param_1,0,0x1f,&local_10);
      if (LVar2 != 0) goto LAB_0040864d;
      local_14 = 0x100;
      LVar2 = RegEnumKeyExA(local_10,0,aCStack_193 + iVar1,&local_14,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      RegCloseKey(local_10);
      if (LVar2 != 0) goto LAB_0040864d;
LAB_0040863a:
      FUN_00408573(&local_194,param_2);
    }
    local_8 = local_8 + 1;
    if (0x7ff < local_8) {
      if (DAT_00413834 == 0) {
        hKey = (HKEY)0x80000000;
      }
      else {
        hKey = *(HKEY *)(&DAT_00410020 + param_2 * 4);
      }
      RegDeleteKeyA(hKey,param_1);
      return;
    }
  } while( true );
}



/* ==== FUN_0040868b @ 0040868b ==== 
 * signature: undefined __stdcall FUN_0040868b(void)
 * body: 0040868b-004086d1
 */

void FUN_0040868b(void)

{
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  DAT_00413834 = (local_98.dwPlatformId != 2) + 1;
  if (3 < local_98.dwMajorVersion) {
    DAT_0041385c = 1;
  }
  return;
}



/* ==== FUN_004086d2 @ 004086d2 ==== 
 * signature: bool __cdecl FUN_004086d2(LPCSTR param_1)
 * body: 004086d2-00408712
 */

bool __cdecl FUN_004086d2(LPCSTR param_1)

{
  BOOL BVar1;
  
  FUN_00408980(param_1,0);
  BVar1 = RemoveDirectoryA(param_1);
  if (((DAT_0041385c != 0) && (BVar1 != 0)) && (DAT_00413ccc != (code *)0x0)) {
    (*DAT_00413ccc)(0x10,1,param_1,0);
  }
  return BVar1 == 0;
}



/* ==== FUN_00408713 @ 00408713 ==== 
 * signature: uint __cdecl FUN_00408713(LPCSTR param_1)
 * body: 00408713-0040897f
 */

/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_00408713(LPCSTR param_1)

{
  int iVar1;
  BOOL BVar2;
  HFILE hFile;
  UINT UVar3;
  CHAR local_308 [255];
  char acStack_209 [256];
  char acStack_109 [257];
  uint local_8;
  
  lstrcpyA(local_308,param_1);
  FUN_00408a39(local_308,1);
  iVar1 = lstrcmpiA(local_308,DAT_004138b8);
  if (iVar1 == 0) {
    DAT_00413bc8 = 1;
  }
  BVar2 = DeleteFileA(param_1);
  local_8 = (uint)(BVar2 == 0);
  if (((DAT_0041385c != 0) && (local_8 == 0)) && (DAT_00413ccc != (code *)0x0)) {
    (*DAT_00413ccc)(4,1,param_1,0);
  }
  if (local_8 == 0) {
    return 0;
  }
  if (DAT_004138ec == 0) {
    return local_8;
  }
  DAT_00413864 = 1;
  lstrcpyA(acStack_109 + 1,param_1);
  FUN_00408a39(acStack_109 + 1,0);
  if (DAT_00413834 == 2) {
    GetWindowsDirectoryA(acStack_209 + 1,0x100);
    iVar1 = lstrlenA(acStack_209 + 1);
    if (acStack_209[iVar1] != '\\') {
      lstrcatA(acStack_209 + 1,&DAT_004100cc);
    }
    lstrcatA(acStack_209 + 1,s_WININIT_INI_004106f8);
    hFile = _lopen(acStack_209 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_209 + 1,0);
      _lwrite(hFile,s__rename__004106ec,10);
    }
    else {
      _llseek(hFile,0,2);
    }
    if (hFile == -1) {
      return local_8;
    }
    wsprintfA(acStack_209 + 1,s_NUL__s_004106e0,acStack_109 + 1);
    UVar3 = lstrlenA(acStack_209 + 1);
    _lwrite(hFile,acStack_109 + 1,UVar3);
  }
  else {
    if (DAT_00413834 == 1) {
      MoveFileExA(param_1,(LPCSTR)0x0,4);
      return local_8;
    }
    wsprintfA(acStack_209 + 1,s_del__s_004106d4,acStack_109 + 1);
    GetWindowsDirectoryA(acStack_109 + 1,0x100);
    iVar1 = lstrlenA(acStack_109 + 1);
    if (acStack_109[iVar1] != '\\') {
      lstrcatA(acStack_109 + 1,&DAT_004100cc);
    }
    lstrcatA(acStack_109 + 1,s__MSSETUP_BAT_004106c4);
    hFile = _lopen(acStack_109 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_109 + 1,0);
    }
    else {
      _llseek(hFile,0,2);
    }
    if (hFile == -1) {
      return local_8;
    }
    UVar3 = lstrlenA(acStack_209 + 1);
    _lwrite(hFile,local_308,UVar3);
  }
  _lclose(hFile);
  return local_8;
}



/* ==== FUN_00408980 @ 00408980 ==== 
 * signature: bool __cdecl FUN_00408980(LPCSTR param_1, DWORD param_2)
 * body: 00408980-004089a2
 */

bool __cdecl FUN_00408980(LPCSTR param_1,DWORD param_2)

{
  BOOL BVar1;
  
  if (param_2 == 0) {
    param_2 = 0x80;
  }
  BVar1 = SetFileAttributesA(param_1,param_2);
  return (bool)('\x01' - (BVar1 != 0));
}



/* ==== FUN_004089a3 @ 004089a3 ==== 
 * signature: bool __cdecl FUN_004089a3(LPCSTR param_1, undefined4 param_2, LPSTR param_3)
 * body: 004089a3-004089e4
 */

bool __cdecl FUN_004089a3(LPCSTR param_1,undefined4 param_2,LPSTR param_3)

{
  HANDLE pvVar1;
  
  pvVar1 = FindFirstFileA(param_1,(LPWIN32_FIND_DATAA)(param_3 + 0x108));
  *(HANDLE *)(param_3 + 0x104) = pvVar1;
  if (pvVar1 != (HANDLE)0xffffffff) {
    lstrcpyA(param_3,param_3 + 0x134);
    *(DWORD *)(param_3 + 0x100) = ((LPWIN32_FIND_DATAA)(param_3 + 0x108))->dwFileAttributes;
  }
  return pvVar1 == (HANDLE)0xffffffff;
}



/* ==== FUN_004089e5 @ 004089e5 ==== 
 * signature: bool __cdecl FUN_004089e5(LPSTR param_1)
 * body: 004089e5-00408a21
 */

bool __cdecl FUN_004089e5(LPSTR param_1)

{
  BOOL BVar1;
  
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x104),(LPWIN32_FIND_DATAA)(param_1 + 0x108));
  if (BVar1 != 0) {
    lstrcpyA(param_1,param_1 + 0x134);
    *(DWORD *)(param_1 + 0x100) = ((LPWIN32_FIND_DATAA)(param_1 + 0x108))->dwFileAttributes;
  }
  return BVar1 == 0;
}



/* ==== FUN_00408a22 @ 00408a22 ==== 
 * signature: undefined __cdecl FUN_00408a22(int param_1)
 * body: 00408a22-00408a38
 */

void __cdecl FUN_00408a22(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x104) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x104));
  }
  return;
}



/* ==== FUN_00408a39 @ 00408a39 ==== 
 * signature: undefined __cdecl FUN_00408a39(char * param_1, int param_2)
 * body: 00408a39-00408bcc
 */

void __cdecl FUN_00408a39(char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  LPCSTR pCVar6;
  CHAR local_348 [256];
  CHAR local_248 [568];
  char local_10 [16];
  
  pcVar3 = _strchr(param_1,0x7e);
  if (((pcVar3 != (char *)0x0) || (param_2 == 0)) && (DAT_00413834 != 0)) {
    pcVar3 = _strchr(param_1,0x5c);
    if (pcVar3 == (char *)0x0) {
      lstrcpyA(local_348,param_1);
      FUN_0040ab70(param_1,0x100);
      iVar4 = lstrlenA(param_1);
      if (param_1[iVar4 + -1] != '\\') {
        lstrcatA(param_1,&DAT_004100cc);
      }
      lstrcatA(param_1,local_348);
    }
    if (DAT_0041103c < 2) {
      uVar5 = *(ushort *)(PTR_DAT_00410e30 + *param_1 * 2) & 0x103;
    }
    else {
      uVar5 = FUN_0040a3b0((int)*param_1,0x103);
    }
    if ((uVar5 != 0) && (param_1[1] == ':')) {
      uVar5 = FUN_0040a1b0((int)*param_1);
      *param_1 = (char)uVar5;
    }
    pcVar3 = param_1;
    if (*param_1 != '\\') goto LAB_00408b27;
    if (param_1[1] != '\\') goto LAB_00408b27;
    for (pcVar3 = param_1 + 2; (*pcVar3 != '\0' && (*pcVar3 != '\\')); pcVar3 = pcVar3 + 1) {
    }
    if (*pcVar3 != '\\') goto LAB_00408b27;
    do {
      pcVar3 = pcVar3 + 1;
LAB_00408b27:
    } while ((*pcVar3 != '\0') && (*pcVar3 != '\\'));
    while( true ) {
      if (*pcVar3 == '\\') {
        pcVar3 = pcVar3 + 1;
      }
      cVar1 = *pcVar3;
      pCVar6 = pcVar3;
      if (cVar1 == '\0') break;
      while ((cVar1 != '\0' && (cVar1 != '\\'))) {
        cVar1 = pCVar6[1];
        pCVar6 = pCVar6 + 1;
      }
      lstrcpyA(local_348,pCVar6);
      *pCVar6 = '\0';
      bVar2 = FUN_004089a3(param_1,0x17,local_248);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if ((param_2 != 0) || (pCVar6 = local_10, (bool)local_10[0] == bVar2)) {
          pCVar6 = local_248;
        }
        lstrcpyA(pcVar3,pCVar6);
        FUN_00408a22((int)local_248);
      }
      iVar4 = lstrlenA(param_1);
      pcVar3 = param_1 + iVar4;
      lstrcatA(param_1,local_348);
    }
  }
  return;
}



/* ==== FUN_00408bcd @ 00408bcd ==== 
 * signature: int __cdecl FUN_00408bcd(LPCSTR param_1)
 * body: 00408bcd-00408be2
 */

int __cdecl FUN_00408bcd(LPCSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  return (DVar1 != 0xffffffff) - 1;
}



/* ==== FUN_00408be3 @ 00408be3 ==== 
 * signature: undefined4 __cdecl FUN_00408be3(LPCSTR param_1)
 * body: 00408be3-00408c85
 */

undefined4 __cdecl FUN_00408be3(LPCSTR param_1)

{
  HFILE hFile;
  CHAR local_10c [256];
  LONG local_c;
  undefined4 local_8;
  
  lstrcpyA(local_10c,param_1);
  FUN_00408a39(local_10c,0);
  local_8 = 0;
  if (DAT_00413834 != 0) {
    hFile = _lopen(param_1,0);
    if (-1 < hFile) {
      _lread(hFile,(LPVOID)((int)&param_1 + 2),2);
      if (param_1._2_2_ == 0x5a4d) {
        _llseek(hFile,0x3c,0);
        _lread(hFile,&local_c,4);
        _llseek(hFile,local_c,0);
        _lread(hFile,(LPVOID)((int)&param_1 + 2),2);
        if (param_1._2_2_ == 0x4550) {
          local_8 = 1;
        }
      }
      _lclose(hFile);
    }
  }
  return local_8;
}



/* ==== FUN_00408c86 @ 00408c86 ==== 
 * signature: undefined __cdecl FUN_00408c86(HWND param_1)
 * body: 00408c86-00408d98
 */

void __cdecl FUN_00408c86(HWND param_1)

{
  HANDLE h;
  int iVar1;
  HDC hdc;
  int nDenominator;
  LOGFONTA local_50;
  tagRECT local_14;
  
  GetWindowRect(param_1,&local_14);
  local_14.left = local_14.left + local_14.left / 6;
  local_14.right = local_14.right + local_14.right / 6;
  MoveWindow(param_1,local_14.left,local_14.top,local_14.right - local_14.left,
             local_14.bottom - local_14.top,0);
  if ((DAT_0041385c != 0) && (DAT_00413bf0 != (code *)0x0)) {
    (*DAT_00413bf0)(param_1,0x38);
  }
  if (DAT_00413c48 == (HFONT)0x0) {
    DAT_00413c48 = (HFONT)0x0;
    h = (HANDLE)SendMessageA(param_1,0x31,0,0);
    if (h != (HANDLE)0x0) {
      iVar1 = GetObjectA(h,0x3c,&local_50);
      if (iVar1 != 0) {
        local_50.lfWeight = 300;
        local_50.lfCharSet = DAT_00413854;
        hdc = GetDC(param_1);
        nDenominator = 0x48;
        iVar1 = GetDeviceCaps(hdc,0x5a);
        local_50.lfHeight = MulDiv((uint)DAT_004138a0,iVar1,nDenominator);
        local_50.lfHeight = -local_50.lfHeight;
        ReleaseDC(param_1,hdc);
        if (DAT_00413824 != (LPCSTR)0x0) {
          lstrcpyA(local_50.lfFaceName,DAT_00413824);
        }
        DAT_00413c48 = CreateFontIndirectA(&local_50);
      }
    }
  }
  if (DAT_00413c48 != (HFONT)0x0) {
    EnumChildWindows(param_1,FUN_00408d99,(LPARAM)DAT_00413c48);
  }
  return;
}



/* ==== FUN_00408d99 @ 00408d99 ==== 
 * signature: undefined4 __stdcall FUN_00408d99(HWND param_1, WPARAM param_2)
 * body: 00408d99-00408e32
 */

undefined4 FUN_00408d99(HWND param_1,WPARAM param_2)

{
  HWND hWnd;
  tagRECT local_24;
  tagPOINT local_14;
  tagPOINT local_c;
  
  GetWindowRect(param_1,&local_24);
  hWnd = GetParent(param_1);
  local_c.x = local_24.left;
  local_c.y = local_24.top;
  ScreenToClient(hWnd,&local_c);
  local_14.x = local_24.right;
  local_14.y = local_24.bottom;
  ScreenToClient(hWnd,&local_14);
  local_c.x = local_c.x + local_c.x / 6;
  local_14.x = local_14.x + local_14.x / 6;
  MoveWindow(param_1,local_c.x,local_c.y,local_14.x - local_c.x,local_14.y - local_c.y,0);
  SendMessageA(param_1,0x30,param_2,0);
  return 1;
}



/* ==== FUN_00408e33 @ 00408e33 ==== 
 * signature: DWORD __cdecl FUN_00408e33(HINSTANCE param_1, UINT param_2, char * param_3, DWORD param_4)
 * body: 00408e33-00408ee3
 */

DWORD __cdecl FUN_00408e33(HINSTANCE param_1,UINT param_2,char *param_3,DWORD param_4)

{
  DWORD DVar1;
  LPSTR lpString1;
  CHAR local_224 [512];
  CHAR local_24 [32];
  
  wsprintfA(local_24,s_Msg_d_00410718,param_2);
  DVar1 = GetPrivateProfileStringA
                    (s_Language_00410708,local_24,&DAT_00410714,param_3,param_4,DAT_00413bf4);
  if ((*param_3 == '\x7f') && (DVar1 == 1)) {
    LoadStringA(param_1,param_2,param_3,param_4);
  }
  else {
    lpString1 = _strchr(param_3,0x7c);
    while (lpString1 != (LPSTR)0x0) {
      lstrcpyA(local_224,lpString1 + 1);
      lstrcpyA(lpString1,&DAT_00410704);
      lstrcpyA(lpString1 + 2,local_224);
      lpString1 = _strchr(param_3,0x7c);
    }
  }
  return DVar1;
}



/* ==== FUN_00408ee4 @ 00408ee4 ==== 
 * signature: undefined __cdecl FUN_00408ee4(LPCSTR param_1)
 * body: 00408ee4-00408f38
 */

void __cdecl FUN_00408ee4(LPCSTR param_1)

{
  SC_HANDLE hSCManager;
  SC_HANDLE hService;
  _SERVICE_STATUS local_20;
  
  hSCManager = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,1);
  if (hSCManager != (SC_HANDLE)0x0) {
    hService = OpenServiceA(hSCManager,param_1,0x10020);
    if (hService != (SC_HANDLE)0x0) {
      ControlService(hService,1,&local_20);
      DeleteService(hService);
      CloseServiceHandle(hService);
    }
    CloseServiceHandle(hSCManager);
  }
  return;
}



/* ==== FUN_00408f39 @ 00408f39 ==== 
 * signature: undefined __cdecl FUN_00408f39(char * param_1)
 * body: 00408f39-004091e6
 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00408f39(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t _MaxCount;
  UINT uBytes;
  UINT UVar4;
  char *pcVar5;
  CHAR local_528 [260];
  CHAR local_424 [250];
  CHAR aCStack_32a [10];
  CHAR local_320 [260];
  char local_21c [259];
  char acStack_119 [261];
  int local_14;
  HFILE local_10;
  int local_c;
  HFILE local_8;
  
  GetWindowsDirectoryA(local_424,0x104);
  lstrcatA(local_424,s__SYSTEM_INI_00410744);
  lstrcpyA(local_320,local_424);
  pcVar5 = s__GLBS383_TMP_00410734;
  iVar3 = lstrlenA(local_320);
  lstrcpyA(aCStack_32a + iVar3,pcVar5);
  local_8 = _lopen(local_424,0);
  if (local_8 != -1) {
    local_10 = _lcreat(local_320,0);
    if (local_10 == -1) {
      _lclose(local_8);
    }
    else {
      local_c = 0;
      local_14 = 0;
      _memset(DAT_00413808,0,0x4000);
      DAT_00413bdc = 0;
      DAT_004138c4 = 0;
      GetSystemDirectoryA((LPSTR)((int)acStack_119 + 1),0x104);
      iVar3 = lstrlenA((LPCSTR)((int)acStack_119 + 1));
      if (acStack_119[iVar3] != '\\') {
        lstrcatA((LPSTR)((int)acStack_119 + 1),&DAT_004100cc);
      }
      _MaxCount = lstrlenA((LPCSTR)((int)acStack_119 + 1));
      iVar3 = __strnicmp((char *)((int)acStack_119 + 1),param_1,_MaxCount);
      pcVar5 = param_1;
      if (iVar3 == 0) {
        iVar3 = lstrlenA((LPCSTR)((int)acStack_119 + 1));
        pcVar5 = param_1 + iVar3;
      }
      lstrcpyA((LPSTR)((int)acStack_119 + 1),pcVar5);
      do {
        iVar3 = FUN_00405e01(local_21c,0x104,local_8,1);
        if (iVar3 == 0) {
          _lclose(local_8);
          _lclose(local_10);
          if (local_14 != 0) {
            FUN_00408713(local_424);
            FUN_0040ad00(local_320,local_424);
            return;
          }
          goto LAB_0040919c;
        }
        pcVar5 = local_21c;
        cVar2 = local_21c[0];
        while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
          pcVar1 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          cVar2 = *pcVar1;
        }
        if (local_c == 0) {
          iVar3 = __strnicmp(pcVar5,s__386Enh__00410720,8);
          if (iVar3 == 0) {
            local_c = 1;
          }
        }
        else if (*pcVar5 == '[') {
          local_c = 0;
        }
        else {
          iVar3 = __strnicmp(pcVar5,s_device__0041072c,7);
          if (iVar3 == 0) {
            iVar3 = lstrcmpiA(pcVar5 + 7,(LPCSTR)((int)acStack_119 + 1));
            if ((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar5 + 7,param_1), iVar3 == 0)) {
              lstrcpyA(local_528,local_21c);
              local_21c[0] = ';';
              lstrcpyA((LPSTR)((int)local_21c + 1),local_528);
              local_14 = 1;
            }
          }
        }
        lstrcatA(local_21c,&DAT_00410704);
        uBytes = lstrlenA(local_21c);
        UVar4 = _lwrite(local_10,local_21c,uBytes);
      } while (UVar4 == uBytes);
      _lclose(local_8);
      _lclose(local_10);
LAB_0040919c:
      FUN_00408713(local_320);
    }
  }
  return;
}



/* ==== FUN_004091e7 @ 004091e7 ==== 
 * signature: undefined __stdcall FUN_004091e7(void)
 * body: 004091e7-00409306
 */

void FUN_004091e7(void)

{
  HDC hdc;
  UINT UVar1;
  uint iCharSet;
  int iVar2;
  int nDenominator;
  int cWidth;
  int cEscapement;
  int cOrientation;
  int cWeight;
  DWORD bItalic;
  DWORD bUnderline;
  DWORD bStrikeOut;
  DWORD iOutPrecision;
  DWORD iClipPrecision;
  DWORD iQuality;
  DWORD iPitchAndFamily;
  char *pszFaceName;
  char local_108 [256];
  HDC local_8;
  
  local_8 = GetDC(DAT_00413820);
  GetPrivateProfileStringA
            (s_Settings_00410178,s_Text_Font_00410794,&DAT_00413420,local_108,0x100,DAT_00413bf4);
  if (local_108[0] != '\0') {
    DAT_00413824 = (LPSTR)FUN_004098e3(0x100);
    lstrcpyA(DAT_00413824,local_108);
  }
  GetPrivateProfileStringA
            (s_Settings_00410178,s_Title_Font_00410778,s_Times_New_Roman_00410784,local_108,0x100,
             DAT_00413bf4);
  UVar1 = GetPrivateProfileIntA(s_Settings_00410178,s_Font_Character_Set_00410764,0,DAT_00413bf4);
  DAT_00413854 = (byte)UVar1;
  UVar1 = GetPrivateProfileIntA(s_Settings_00410178,s_Font_Character_Size_00410750,8,DAT_00413bf4);
  hdc = local_8;
  pszFaceName = local_108;
  iPitchAndFamily = 0x10;
  iCharSet = (uint)DAT_00413854;
  iQuality = 0;
  iClipPrecision = 0;
  iOutPrecision = 0;
  bStrikeOut = 0;
  bUnderline = 0;
  bItalic = 1;
  cWeight = 700;
  cOrientation = 0;
  cEscapement = 0;
  cWidth = 0;
  nDenominator = 0x48;
  DAT_004138a0 = (char)UVar1;
  iVar2 = GetDeviceCaps(local_8,0x5a);
  iVar2 = MulDiv(0x10,iVar2,nDenominator);
  DAT_00413888 = CreateFontA(-iVar2,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,
                             bStrikeOut,iCharSet,iOutPrecision,iClipPrecision,iQuality,
                             iPitchAndFamily,pszFaceName);
  GetDeviceCaps(hdc,0xc);
  GetDeviceCaps(hdc,0xe);
  DAT_004138f4 = GetDeviceCaps(hdc,8);
  DAT_004138f8 = GetDeviceCaps(hdc,10);
  return;
}



/* ==== FUN_00409307 @ 00409307 ==== 
 * signature: undefined __stdcall FUN_00409307(void)
 * body: 00409307-00409536
 */

void FUN_00409307(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  UINT uBytes;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  CHAR local_148 [256];
  CHAR local_48 [64];
  char *local_8;
  
  if (DAT_00413920 != '\0') {
    GetWindowsDirectoryA(local_148,0x100);
    iVar2 = lstrlenA(local_148);
    if (local_148[iVar2 + -1] != '\\') {
      lstrcatA(local_148,&DAT_004100cc);
    }
    lstrcatA(local_148,&DAT_00413920);
    local_8 = (char *)_lcreat(local_148,0);
    if (local_8 != (char *)0xffffffff) {
      DVar3 = GetPrivateProfileStringA
                        (s_Language_00410708,s_Msg1000_00410dc4,&DAT_00410714,DAT_00413c50,0x4000,
                         DAT_00413bf4);
      if ((*DAT_00413c50 == '\x7f') && (DVar3 == 1)) {
        lstrcpyA(DAT_00413c50,s_START_COMPONENT_NAME____WORKSTAT_004107dc);
      }
      else {
        while (pcVar6 = _strchr(DAT_00413c50,0x5e), pcVar6 != (char *)0x0) {
          cVar1 = *pcVar6;
          pcVar5 = pcVar6;
          while (cVar1 != '\0') {
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
          }
          for (; pcVar6 <= pcVar5; pcVar5 = pcVar5 + -1) {
            pcVar5[1] = *pcVar5;
          }
          *pcVar6 = '\r';
          pcVar6[1] = '\n';
        }
      }
      FUN_00409537(local_48);
      cVar1 = *DAT_00413c50;
      pcVar5 = DAT_00413c50;
      pcVar6 = local_8;
      while (cVar1 != '\0') {
        if ((((cVar1 == '%') && (cVar1 = pcVar5[1], '0' < cVar1)) && (cVar1 < '9')) &&
           (pcVar5[2] == '%')) {
          if (cVar1 < '5') {
            pcVar6 = &DAT_00413920 + (cVar1 + -0x30) * 0x80;
          }
          else if (cVar1 == '5') {
            if (DAT_004138c8 == 0) {
              pcVar6 = s_Uninstall_004107c4;
            }
            else {
              pcVar6 = s_Rollback_004107d0;
            }
          }
          else if (cVar1 == '6') {
            pcVar6 = local_48;
          }
          else if (cVar1 == '7') {
            if (DAT_0041388c == 0) {
              pcVar6 = s_Success_004107b4;
            }
            else {
              pcVar6 = s_Failed_004107bc;
            }
          }
          else if ((cVar1 == '8') && (pcVar6 = s_Canceled_by_user_004107a0, DAT_0041388c == 0)) {
            pcVar6 = &DAT_00413420;
          }
          iVar2 = lstrlenA(pcVar6);
          iVar2 = iVar2 + -3;
          if (iVar2 < 1) {
            if (iVar2 < 0) {
              for (pcVar4 = pcVar5 + 3; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
                pcVar4[iVar2] = *pcVar4;
              }
              pcVar4[iVar2] = '\0';
            }
          }
          else {
            for (pcVar4 = pcVar5 + 3; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
            }
            for (; pcVar5 + 3 <= pcVar4; pcVar4 = pcVar4 + -1) {
              pcVar4[iVar2] = *pcVar4;
            }
          }
          for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + 1) {
            *pcVar5 = *pcVar6;
            pcVar5 = pcVar5 + 1;
          }
          pcVar5 = pcVar5 + -1;
        }
        pcVar4 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar4;
      }
      uBytes = lstrlenA(DAT_00413c50);
      _lwrite((HFILE)local_8,DAT_00413c50,uBytes);
      _lclose((HFILE)local_8);
    }
  }
  return;
}



/* ==== FUN_00409537 @ 00409537 ==== 
 * signature: undefined __cdecl FUN_00409537(LPSTR param_1)
 * body: 00409537-00409578
 */

void __cdecl FUN_00409537(LPSTR param_1)

{
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  wsprintfA(param_1,s__02d__02d__02d__d__02d_00410dcc,(uint)local_14.wMonth,(uint)local_14.wDay,
            (uint)local_14.wYear % 100,(uint)local_14.wHour,(uint)local_14.wMinute);
  return;
}



/* ==== FUN_00409579 @ 00409579 ==== 
 * signature: CHAR __stdcall FUN_00409579(void)
 * body: 00409579-0040959b
 */

CHAR FUN_00409579(void)

{
  CHAR local_104 [256];
  
  GetTempPathA(0x100,local_104);
  return local_104[0];
}



/* ==== FUN_0040959c @ 0040959c ==== 
 * signature: undefined __cdecl FUN_0040959c(LPCSTR param_1, LPCSTR param_2)
 * body: 0040959c-00409768
 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0040959c(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  char *pcVar2;
  int iVar3;
  HFILE hFile;
  UINT uBytes;
  LPCSTR pCVar4;
  CHAR local_504 [512];
  CHAR local_304 [256];
  CHAR local_204 [255];
  char acStack_105 [257];
  
  BVar1 = CopyFileA(param_1,param_2,0);
  pCVar4 = param_1;
  if (BVar1 == 0) {
    FUN_00409769(local_304,param_2);
    BVar1 = CopyFileA(param_1,local_304,0);
    pCVar4 = param_2;
    if (BVar1 != 0) {
      DAT_00413864 = 1;
      FUN_0040812b(param_1);
      lstrcpyA(local_204,local_304);
      lstrcpyA(acStack_105 + 1,param_2);
      FUN_00408a39(local_204,0);
      FUN_00408a39(acStack_105 + 1,0);
      if (DAT_00413834 == 2) {
        WritePrivateProfileStringA
                  (s_rename_00410dfc,acStack_105 + 1,local_204,s_WININIT_INI_004106f8);
        return;
      }
      if (DAT_00413834 == 1) {
        MoveFileExA(param_2,(LPCSTR)0x0,4);
        MoveFileExA(local_204,param_2,4);
        return;
      }
      pcVar2 = FUN_004097b1(acStack_105 + 1);
      wsprintfA(local_504,s_del__s_rename__s__s_00410de4,acStack_105 + 1,local_204,pcVar2);
      GetWindowsDirectoryA(acStack_105 + 1,0x100);
      iVar3 = lstrlenA(acStack_105 + 1);
      if (acStack_105[iVar3] != '\\') {
        lstrcatA(acStack_105 + 1,&DAT_004100cc);
      }
      lstrcatA(acStack_105 + 1,s__MSSETUP_BAT_004106c4);
      hFile = _lopen(acStack_105 + 1,1);
      if (hFile == -1) {
        hFile = _lcreat(acStack_105 + 1,0);
      }
      else {
        _llseek(hFile,0,2);
      }
      if (hFile == -1) {
        return;
      }
      uBytes = lstrlenA(local_504);
      _lwrite(hFile,local_504,uBytes);
      _lclose(hFile);
      return;
    }
  }
  FUN_0040812b(pCVar4);
  return;
}



/* ==== FUN_00409769 @ 00409769 ==== 
 * signature: undefined __cdecl FUN_00409769(LPSTR param_1, LPCSTR param_2)
 * body: 00409769-004097b0
 */

void __cdecl FUN_00409769(LPSTR param_1,LPCSTR param_2)

{
  char *pcVar1;
  int iVar2;
  
  do {
    lstrcpyA(param_1,param_2);
    pcVar1 = FUN_004097b1(param_1);
    wsprintfA(pcVar1,s__GLU_04x_TMP_00410e04,(uint)(ushort)DAT_00413870);
    DAT_00413870 = DAT_00413870 + 1;
    iVar2 = FUN_00408bcd(param_1);
  } while (iVar2 == 0);
  return;
}



/* ==== FUN_004097b1 @ 004097b1 ==== 
 * signature: char * __cdecl FUN_004097b1(LPCSTR param_1)
 * body: 004097b1-004097d2
 */

char * __cdecl FUN_004097b1(LPCSTR param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = lstrlenA(param_1);
  for (pcVar2 = param_1 + iVar1; param_1 < pcVar2; pcVar2 = pcVar2 + -1) {
    if (*pcVar2 == '\\') goto LAB_004097d0;
  }
  if (*pcVar2 == '\\') {
LAB_004097d0:
    pcVar2 = pcVar2 + 1;
  }
  return pcVar2;
}



/* ==== FUN_004097d3 @ 004097d3 ==== 
 * signature: undefined __cdecl FUN_004097d3(LPCSTR param_1)
 * body: 004097d3-004098e2
 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_004097d3(LPCSTR param_1)

{
  int iVar1;
  HFILE hFile;
  UINT uBytes;
  CHAR local_304 [511];
  char acStack_105 [257];
  
  if (DAT_00413834 == 2) {
    GetWindowsDirectoryA(acStack_105 + 1,0x100);
    iVar1 = lstrlenA(acStack_105 + 1);
    if (acStack_105[iVar1] != '\\') {
      lstrcatA(acStack_105 + 1,&DAT_004100cc);
    }
    lstrcatA(acStack_105 + 1,s_WININIT_INI_004106f8);
    hFile = _lopen(acStack_105 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_105 + 1,0);
      if (hFile == -1) {
        return;
      }
      wsprintfA(local_304,s__rename__NUL__s_00410e14,param_1);
      uBytes = lstrlenA(local_304);
    }
    else {
      wsprintfA(local_304,s_NUL__s_004106e0,param_1);
      _llseek(hFile,0,2);
      uBytes = lstrlenA(local_304);
    }
    _lwrite(hFile,local_304,uBytes);
    _lclose(hFile);
  }
  else {
    MoveFileExA(param_1,(LPCSTR)0x0,4);
  }
  return;
}



/* ==== FUN_004098e3 @ 004098e3 ==== 
 * signature: undefined4 * __cdecl FUN_004098e3(uint param_1)
 * body: 004098e3-00409964
 */

undefined4 * __cdecl FUN_004098e3(uint param_1)

{
  undefined4 *puVar1;
  
  if (DAT_004138d0 == (undefined4 *)0x0) {
    DAT_004138d0 = (undefined4 *)FUN_0040ad40(0xfc00);
    DAT_00413c00 = DAT_004138d0;
    *DAT_004138d0 = 0;
  }
  else {
    if (param_1 <= 0xfc00U - DAT_00413874) {
      puVar1 = (undefined4 *)((int)DAT_00413c00 + DAT_00413874);
      DAT_00413874 = DAT_00413874 + param_1;
      return puVar1;
    }
    puVar1 = (undefined4 *)FUN_0040ad40(0xfc00);
    *DAT_00413c00 = puVar1;
    DAT_00413c00 = puVar1;
    *puVar1 = 0;
  }
  DAT_00413874 = param_1 + 4;
  return DAT_00413c00 + 1;
}



/* ==== FUN_00409965 @ 00409965 ==== 
 * signature: undefined __stdcall FUN_00409965(void)
 * body: 00409965-0040997f
 */

void FUN_00409965(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_004138d0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0040adf0((undefined *)puVar2);
    puVar2 = puVar1;
  }
  return;
}



/* ==== FUN_00409980 @ 00409980 ==== 
 * signature: uint __cdecl FUN_00409980(char * param_1, char * param_2)
 * body: 00409980-004099f9
 */

uint __cdecl FUN_00409980(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (pcVar4 = param_2, cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
  }
  do {
    pcVar5 = pcVar5 + -1;
    pcVar4 = pcVar4 + -1;
    if (pcVar5 < param_1) {
LAB_004099ef:
      return (uint)(param_2 <= pcVar4);
    }
    if (pcVar4 < param_2) {
      if (param_1 <= pcVar5) {
        return 0xffffffff;
      }
      goto LAB_004099ef;
    }
    uVar2 = FUN_0040a1b0((int)*pcVar4);
    uVar3 = FUN_0040a1b0((int)*pcVar5);
    if (uVar3 != uVar2) {
      uVar2 = FUN_0040a1b0((int)*pcVar4);
      uVar3 = FUN_0040a1b0((int)*pcVar5);
      return uVar3 - uVar2;
    }
  } while( true );
}



/* ==== FUN_004099fa @ 004099fa ==== 
 * signature: int * __cdecl FUN_004099fa(int * param_1, int * param_2, uint param_3, int param_4, char * param_5, LPCSTR param_6, LPCSTR param_7)
 * body: 004099fa-00409aba
 */

int * __cdecl
FUN_004099fa(int *param_1,int *param_2,uint param_3,int param_4,char *param_5,LPCSTR param_6,
            LPCSTR param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_4 == 0) {
    puVar1 = FUN_004098e3(param_3);
    *param_1 = (int)puVar1;
    puVar1[1] = 0;
    *(undefined4 *)*param_1 = 0;
  }
  else {
    do {
      while( true ) {
        piVar4 = param_2;
        uVar2 = FUN_00409980((char *)(piVar4 + 2),param_5);
        bVar5 = (int)uVar2 < 0;
        if (uVar2 == 0) {
          iVar3 = 0;
          if (param_6 != (LPCSTR)0x0) {
            iVar3 = lstrcmpiA((LPCSTR)(piVar4 + 0x43),param_6);
          }
          bVar5 = iVar3 < 0;
          if (iVar3 == 0) {
            iVar3 = 0;
            if (param_7 != (LPCSTR)0x0) {
              iVar3 = lstrcmpiA((LPCSTR)(piVar4 + 0x83),param_7);
            }
            bVar5 = iVar3 < 0;
            if (iVar3 == 0) {
              return piVar4;
            }
          }
        }
        if (!bVar5) break;
        param_2 = (int *)*piVar4;
        if ((int *)*piVar4 == (int *)0x0) {
          puVar1 = FUN_004098e3(param_3);
          *param_1 = (int)puVar1;
          puVar1[1] = 0;
          *(undefined4 *)*param_1 = 0;
          *piVar4 = *param_1;
          return (int *)0x0;
        }
      }
      param_2 = (int *)piVar4[1];
    } while ((int *)piVar4[1] != (int *)0x0);
    puVar1 = FUN_004098e3(param_3);
    *param_1 = (int)puVar1;
    puVar1[1] = 0;
    *(undefined4 *)*param_1 = 0;
    piVar4[1] = *param_1;
  }
  return (int *)0x0;
}



/* ==== FUN_00409abb @ 00409abb ==== 
 * signature: undefined __cdecl FUN_00409abb(HDC param_1, HWND param_2)
 * body: 00409abb-00409e02
 */

void __cdecl FUN_00409abb(HDC param_1,HWND param_2)

{
  int hDest;
  HWND hWnd;
  DWORD color;
  HDC hdc;
  uint uVar1;
  int wDest;
  int local_104 [48];
  RECT local_44;
  tagRECT local_34;
  HGDIOBJ local_24;
  tagPOINT local_20;
  tagPOINT local_18;
  HBRUSH local_10;
  uint local_c;
  HBITMAP local_8;
  
  local_104[0] = 99;
  local_104[1] = 99;
  local_104[2] = 0;
  local_104[3] = 10;
  local_104[4] = 5;
  local_104[7] = 6;
  local_104[5] = 8;
  local_104[6] = 8;
  local_104[0xb] = 2;
  local_104[0xd] = 2;
  local_104[0xf] = 2;
  local_104[0x11] = 2;
  local_104[0x13] = 2;
  local_104[0x1d] = 2;
  local_104[8] = 0xe;
  local_104[9] = 5;
  local_104[10] = 0x13;
  local_104[0xc] = 0x1a;
  local_104[0xe] = 0x1e;
  local_104[0x10] = 0x26;
  local_104[0x12] = 0x2a;
  local_104[0x14] = 0x32;
  local_104[0x15] = 0;
  local_104[0x16] = 0x39;
  local_104[0x17] = 0;
  local_104[0x18] = 0x3e;
  local_104[0x19] = 0;
  local_104[0x1a] = 0x48;
  local_104[0x1b] = 0;
  local_104[0x1c] = 0x4e;
  local_104[0x1e] = 0x57;
  local_104[0x1f] = 3;
  local_104[0x20] = 0x5e;
  local_104[0x21] = 4;
  local_104[0x22] = 0x66;
  local_104[0x23] = 8;
  local_104[0x24] = 0x6e;
  local_104[0x25] = 10;
  local_104[0x26] = 0x72;
  local_104[0x27] = 0xb;
  local_104[0x28] = 0x76;
  local_104[0x29] = 0xd;
  local_104[0x2a] = 0x79;
  local_104[0x2b] = 5;
  local_104[0x2c] = 0x7e;
  local_104[0x2d] = 0x10;
  local_104[0x2e] = 0x7e;
  local_104[0x2f] = 0x11;
  hWnd = GetDlgItem(param_2,0x3ee);
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_34);
    local_18.x = local_34.left;
    local_18.y = local_34.top;
    local_20.x = local_34.right;
    local_20.y = local_34.bottom;
    ScreenToClient(param_2,&local_18);
    ScreenToClient(param_2,&local_20);
    DAT_00413bb0 = local_18.x;
    DAT_00413bb4 = local_18.y;
    DAT_00413bb8 = local_20.x;
    DAT_00413bbc = local_20.y;
    color = GetSysColor(0xf);
    local_10 = CreateSolidBrush(color);
    local_c = GetDialogBaseUnits();
    local_8 = CreateCompatibleBitmap
                        (param_1,(DAT_00413bb8 - DAT_00413bb0) + 1,(DAT_00413bbc - DAT_00413bb4) + 1
                        );
    if (local_8 != (HBITMAP)0x0) {
      hdc = CreateCompatibleDC(param_1);
      if (hdc != (HDC)0x0) {
        local_24 = SelectObject(hdc,local_8);
        local_44.left = 0;
        local_44.top = 0;
        local_44.right = (DAT_00413bb8 - DAT_00413bb0) + 1;
        local_44.bottom = (DAT_00413bbc - DAT_00413bb4) + 1;
        FillRect(hdc,&local_44,local_10);
        uVar1 = local_c >> 0x10;
        DrawIcon(hdc,0,(uVar1 * 10) / 8,DAT_00413c60);
        if (DAT_00410054 < 0x18) {
          DrawIcon(hdc,(int)(local_104[DAT_00410054 * 2] * (local_c & 0xffff)) / 4,
                   (int)(local_104[DAT_00410054 * 2 + 1] * uVar1) / 8,(&DAT_00413c60)[DAT_00410054])
          ;
        }
        hDest = (DAT_00413bbc - DAT_00413bb4) + 1;
        wDest = (DAT_00413bb8 - DAT_00413bb0) + 1;
        StretchBlt(param_1,DAT_00413bb0,DAT_00413bb4,wDest,hDest,hdc,0,0,wDest,hDest,0xcc0020);
        SelectObject(hdc,local_24);
        DeleteObject(local_8);
        DeleteObject(local_10);
        DeleteDC(hdc);
      }
    }
  }
  return;
}



/* ==== FUN_00409e03 @ 00409e03 ==== 
 * signature: HBITMAP __cdecl FUN_00409e03(uint param_1, undefined4 * param_2)
 * body: 00409e03-00409e9c
 */

HBITMAP __cdecl FUN_00409e03(uint param_1,undefined4 *param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  BITMAPINFOHEADER *pbmi;
  HDC hdc;
  HPALETTE hPal;
  HBITMAP pHVar1;
  
  pHVar1 = (HBITMAP)0x0;
  hResInfo = FindResourceA(DAT_00413bd0,(LPCSTR)(param_1 & 0xffff),(LPCSTR)0x2);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(DAT_00413bd0,hResInfo);
    pbmi = LockResource(hResData);
    hdc = GetDC((HWND)0x0);
    hPal = FUN_00409e9d((int)pbmi,(WORD *)&param_1);
    *param_2 = hPal;
    if (hPal != (HPALETTE)0x0) {
      SelectPalette(hdc,hPal,0);
      RealizePalette(hdc);
    }
    pHVar1 = CreateDIBitmap(hdc,pbmi,4,(void *)((int)&pbmi->biSize + pbmi->biSize + param_1 * 4),
                            (BITMAPINFO *)pbmi,0);
    ReleaseDC((HWND)0x0,hdc);
    FreeResource(hResData);
  }
  return pHVar1;
}



/* ==== FUN_00409e9d @ 00409e9d ==== 
 * signature: HPALETTE __cdecl FUN_00409e9d(int param_1, WORD * param_2)
 * body: 00409e9d-00409f46
 */

HPALETTE __cdecl FUN_00409e9d(int param_1,WORD *param_2)

{
  HGLOBAL hMem;
  LOGPALETTE *plpal;
  int iVar1;
  BYTE *pBVar2;
  BYTE *pBVar3;
  HPALETTE pHVar4;
  
  pHVar4 = (HPALETTE)0x0;
  if (*(ushort *)(param_1 + 0xe) < 9) {
    *(int *)param_2 = 1 << ((byte)*(ushort *)(param_1 + 0xe) & 0x1f);
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)param_2 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)param_2 != 0) {
    hMem = GlobalAlloc(0x42,*(int *)param_2 * 4 + 8);
    plpal = GlobalLock(hMem);
    plpal->palVersion = 0x300;
    plpal->palNumEntries = *param_2;
    iVar1 = 0;
    if (0 < *(int *)param_2) {
      pBVar2 = &plpal->palPalEntry[0].peGreen;
      pBVar3 = (BYTE *)(param_1 + 0x29);
      do {
        ((PALETTEENTRY *)(pBVar2 + -1))->peRed = pBVar3[1];
        *pBVar2 = *pBVar3;
        pBVar2[1] = pBVar3[-1];
        pBVar2[2] = '\0';
        iVar1 = iVar1 + 1;
        pBVar3 = pBVar3 + 4;
        pBVar2 = pBVar2 + 4;
      } while (iVar1 < *(int *)param_2);
    }
    pHVar4 = CreatePalette(plpal);
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  return pHVar4;
}



/* ==== FUN_00409f47 @ 00409f47 ==== 
 * signature: undefined __stdcall FUN_00409f47(void)
 * body: 00409f47-00409fa3
 */

void FUN_00409f47(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while (DAT_0041381c != (HWND)0x0) {
    if (DAT_00413880 != 0) {
      DestroyWindow(DAT_0041381c);
    }
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  }
  return;
}



/* ==== USER32.DLL::DdeUninitialize @ 00409fa4 ==== 
 * signature: BOOL __stdcall DdeUninitialize(DWORD idInst)
 * body: 00409fa4-00409fa9
 * thunk to: USER32.DLL::DdeUninitialize
 */

BOOL DdeUninitialize(DWORD idInst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUninitialize(idInst);
  return BVar1;
}



/* ==== USER32.DLL::DdeDisconnect @ 00409faa ==== 
 * signature: BOOL __stdcall DdeDisconnect(HCONV hConv)
 * body: 00409faa-00409faf
 * thunk to: USER32.DLL::DdeDisconnect
 */

BOOL DdeDisconnect(HCONV hConv)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeDisconnect(hConv);
  return BVar1;
}



/* ==== USER32.DLL::DdeFreeDataHandle @ 00409fb0 ==== 
 * signature: BOOL __stdcall DdeFreeDataHandle(HDDEDATA hData)
 * body: 00409fb0-00409fb5
 * thunk to: USER32.DLL::DdeFreeDataHandle
 */

BOOL DdeFreeDataHandle(HDDEDATA hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeFreeDataHandle(hData);
  return BVar1;
}



/* ==== USER32.DLL::DdeGetData @ 00409fb6 ==== 
 * signature: DWORD __stdcall DdeGetData(HDDEDATA hData, LPBYTE pDst, DWORD cbMax, DWORD cbOff)
 * body: 00409fb6-00409fbb
 * thunk to: USER32.DLL::DdeGetData
 */

DWORD DdeGetData(HDDEDATA hData,LPBYTE pDst,DWORD cbMax,DWORD cbOff)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeGetData(hData,pDst,cbMax,cbOff);
  return DVar1;
}



/* ==== USER32.DLL::DdeClientTransaction @ 00409fbc ==== 
 * signature: HDDEDATA __stdcall DdeClientTransaction(LPBYTE pData, DWORD cbData, HCONV hConv, HSZ hszItem, UINT wFmt, UINT wType, DWORD dwTimeout, LPDWORD pdwResult)
 * body: 00409fbc-00409fc1
 * thunk to: USER32.DLL::DdeClientTransaction
 */

HDDEDATA DdeClientTransaction
                   (LPBYTE pData,DWORD cbData,HCONV hConv,HSZ hszItem,UINT wFmt,UINT wType,
                   DWORD dwTimeout,LPDWORD pdwResult)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeClientTransaction(pData,cbData,hConv,hszItem,wFmt,wType,dwTimeout,pdwResult);
  return pHVar1;
}



/* ==== USER32.DLL::DdeConnect @ 00409fc2 ==== 
 * signature: HCONV __stdcall DdeConnect(DWORD idInst, HSZ hszService, HSZ hszTopic, PCONVCONTEXT pCC)
 * body: 00409fc2-00409fc7
 * thunk to: USER32.DLL::DdeConnect
 */

HCONV DdeConnect(DWORD idInst,HSZ hszService,HSZ hszTopic,PCONVCONTEXT pCC)

{
  HCONV pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeConnect(idInst,hszService,hszTopic,pCC);
  return pHVar1;
}



/* ==== USER32.DLL::DdeCreateStringHandleA @ 00409fc8 ==== 
 * signature: HSZ __stdcall DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)
 * body: 00409fc8-00409fcd
 * thunk to: USER32.DLL::DdeCreateStringHandleA
 */

HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}



/* ==== USER32.DLL::DdeInitializeA @ 00409fce ==== 
 * signature: UINT __stdcall DdeInitializeA(LPDWORD pidInst, PFNCALLBACK pfnCallback, DWORD afCmd, DWORD ulRes)
 * body: 00409fce-00409fd3
 * thunk to: USER32.DLL::DdeInitializeA
 */

UINT DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}



/* ==== USER32.DLL::DdeCreateDataHandle @ 00409fd4 ==== 
 * signature: HDDEDATA __stdcall DdeCreateDataHandle(DWORD idInst, LPBYTE pSrc, DWORD cb, DWORD cbOff, HSZ hszItem, UINT wFmt, UINT afCmd)
 * body: 00409fd4-00409fd9
 * thunk to: USER32.DLL::DdeCreateDataHandle
 */

HDDEDATA DdeCreateDataHandle(DWORD idInst,LPBYTE pSrc,DWORD cb,DWORD cbOff,HSZ hszItem,UINT wFmt,
                            UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateDataHandle(idInst,pSrc,cb,cbOff,hszItem,wFmt,afCmd);
  return pHVar1;
}



/* ==== COMDLG32.DLL::GetOpenFileNameA @ 00409fda ==== 
 * signature: BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
 * body: 00409fda-00409fdf
 * thunk to: COMDLG32.DLL::GetOpenFileNameA
 */

BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}



/* ==== FUN_00409fe0 @ 00409fe0 ==== 
 * signature: undefined4 __cdecl FUN_00409fe0(LPCSTR param_1)
 * body: 00409fe0-0040a078
 */

undefined4 __cdecl FUN_00409fe0(LPCSTR param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  CHAR local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  uint local_108 [66];
  
  BVar2 = SetCurrentDirectoryA(param_1);
  if (BVar2 != 0) {
    DVar3 = GetCurrentDirectoryA(0x105,(LPSTR)local_108);
    if (DVar3 != 0) {
      cVar1 = (char)local_108[0];
      if (((cVar1 == '\\') || (cVar1 == '/')) && (cVar1 == (char)(local_108[0] >> 8))) {
        return 0;
      }
      local_10c = '=';
      uVar4 = FUN_0040b0b0(local_108[0] & 0xff);
      local_10b = (undefined1)uVar4;
      local_10a = 0x3a;
      local_109 = 0;
      BVar2 = SetEnvironmentVariableA(&local_10c,(LPCSTR)local_108);
      if (BVar2 != 0) {
        return 0;
      }
    }
  }
  DVar3 = GetLastError();
  FUN_0040b040(DVar3);
  return 0xffffffff;
}



/* ==== _memset @ 0040a080 ==== 
 * signature: void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
 * body: 0040a080-0040a0d7
 * note: Library Function - Single Match  _memset  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* ==== FUN_0040a0e5 @ 0040a0e5 ==== 
 * signature: uint * __stdcall FUN_0040a0e5(uint * param_1, char param_2)
 * body: 0040a0e5-0040a0ef
 */

uint * FUN_0040a0e5(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/* ==== _strchr @ 0040a0f0 ==== 
 * signature: char * __cdecl _strchr(char * _Str, int _Val)
 * body: 0040a0e0-0040a0e4;0040a0f0-0040a1ab
 * note: Library Function - Single Match  _strchr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



/* ==== FUN_0040a1b0 @ 0040a1b0 ==== 
 * signature: uint __cdecl FUN_0040a1b0(uint param_1)
 * body: 0040a1b0-0040a2ad
 */

uint __cdecl FUN_0040a1b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_00413448 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_0041103c < 2) {
        uVar2 = (byte)PTR_DAT_00410e30[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_0040a3b0(param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_00410e30[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_0040b150(DAT_00413448,0x200,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



/* ==== _strncpy @ 0040a2b0 ==== 
 * signature: char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * body: 0040a2b0-0040a3ad
 * note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x0040a2ee;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_0040a32b;
        goto LAB_0040a399;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x0040a395:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_0040a399:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_0040a32b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x0040a395;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x0040a395;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x0040a395;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0040a2ee:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_0040a32b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ==== FUN_0040a3b0 @ 0040a3b0 ==== 
 * signature: uint __cdecl FUN_0040a3b0(int param_1, uint param_2)
 * body: 0040a3b0-0040a444
 */

uint __cdecl FUN_0040a3b0(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
  iVar1 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_00410e30 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_00410e30[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    iVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._3_1_ = SUB41(iVar1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    iVar1 = 2;
  }
  BVar2 = FUN_0040b3b0(1,(LPCSTR)&param_1,iVar1,(LPWORD)&local_4,0,0,1);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



/* ==== FUN_0040a450 @ 0040a450 ==== 
 * signature: int __cdecl FUN_0040a450(byte * param_1)
 * body: 0040a450-0040a4e8
 */

int __cdecl FUN_0040a450(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    if (DAT_0041103c < 2) {
      uVar2 = (byte)PTR_DAT_00410e30[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_0040a3b0((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar6 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar4 = uVar2, uVar2 == 0x2b)) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = param_1 + 2;
  }
  iVar5 = 0;
  while( true ) {
    if (DAT_0041103c < 2) {
      uVar3 = (byte)PTR_DAT_00410e30[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_0040a3b0(uVar4,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = (uVar4 - 0x30) + iVar5 * 10;
    uVar4 = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar5 = -iVar5;
  }
  return iVar5;
}



/* ==== FUN_0040a4f0 @ 0040a4f0 ==== 
 * signature: undefined __cdecl FUN_0040a4f0(byte * param_1)
 * body: 0040a4f0-0040a4fd
 */

void __cdecl FUN_0040a4f0(byte *param_1)

{
  FUN_0040a450(param_1);
  return;
}



/* ==== FUN_0040a500 @ 0040a500 ==== 
 * signature: undefined __stdcall FUN_0040a500(void)
 * body: 0040a500-0040a52e
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040a500(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



/* ==== FUN_0040a530 @ 0040a530 ==== 
 * signature: undefined4 __cdecl FUN_0040a530(uint param_1)
 * body: 0040a530-0040a601
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040a530(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00413e00 <= param_1) {
    _DAT_00413464 = 9;
    DAT_00413468 = 0;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_00413464 = 9;
    DAT_00413468 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_0040b880(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0040b880(2);
      iVar2 = FUN_0040b880(1);
      if (iVar2 == iVar1) goto LAB_0040a5b7;
    }
    hObject = (HANDLE)FUN_0040b880(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0040a5b9;
    }
  }
LAB_0040a5b7:
  DVar4 = 0;
LAB_0040a5b9:
  FUN_0040b7e0(param_1);
  *(undefined1 *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_0040b040(DVar4);
  return 0xffffffff;
}



/* ==== FUN_0040a610 @ 0040a610 ==== 
 * signature: int __stdcall FUN_0040a610(void)
 * body: 0040a610-0040a789
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040a610(void)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  HANDLE hFile;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint in_stack_00001008;
  int in_stack_0000100c;
  
  FUN_0040a500();
  iVar7 = 0;
  if ((in_stack_00001008 < DAT_00413e00) &&
     ((*(byte *)((&DAT_00413d00)[(int)in_stack_00001008 >> 5] + 4 + (in_stack_00001008 & 0x1f) * 8)
      & 1) != 0)) {
    DVar1 = FUN_0040bd70(in_stack_00001008,0,1);
    if ((DVar1 != 0xffffffff) && (DVar2 = FUN_0040bd70(in_stack_00001008,0,2), DVar2 != 0xffffffff))
    {
      uVar8 = in_stack_0000100c - DVar2;
      if ((int)uVar8 < 1) {
        if ((int)uVar8 < 0) {
          FUN_0040bd70(in_stack_00001008,in_stack_0000100c,0);
          hFile = (HANDLE)FUN_0040b880(in_stack_00001008);
          BVar5 = SetEndOfFile(hFile);
          iVar7 = (BVar5 != 0) - 1;
          if (iVar7 == -1) {
            _DAT_00413464 = 0xd;
            DAT_00413468 = GetLastError();
          }
        }
        FUN_0040bd70(in_stack_00001008,DVar1,0);
        return iVar7;
      }
      puVar9 = (undefined4 *)register0x00000010;
      for (iVar6 = 0x400; puVar9 = puVar9 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
      }
      iVar6 = FUN_0040bcf0(in_stack_00001008,0x8000);
      while( true ) {
        uVar3 = 0x1000;
        if ((int)uVar8 < 0x1000) {
          uVar3 = uVar8;
        }
        iVar4 = FUN_0040bad0(in_stack_00001008,&stack0x00000004,uVar3);
        if (iVar4 == -1) break;
        uVar8 = uVar8 - iVar4;
        if ((int)uVar8 < 1) {
LAB_0040a6f1:
          FUN_0040bcf0(in_stack_00001008,iVar6);
          FUN_0040bd70(in_stack_00001008,DVar1,0);
          return iVar7;
        }
      }
      if (DAT_00413468 == 5) {
        _DAT_00413464 = 0xd;
      }
      iVar7 = -1;
      goto LAB_0040a6f1;
    }
  }
  else {
    _DAT_00413464 = 9;
  }
  return -1;
}



/* ==== FUN_0040a790 @ 0040a790 ==== 
 * signature: undefined __cdecl FUN_0040a790(LPCSTR param_1, uint param_2, undefined4 param_3)
 * body: 0040a790-0040a7a9
 */

void __cdecl FUN_0040a790(LPCSTR param_1,uint param_2,undefined4 param_3)

{
  FUN_0040a7b0(param_1,param_2,0x40,param_3);
  return;
}



/* ==== FUN_0040a7b0 @ 0040a7b0 ==== 
 * signature: uint __cdecl FUN_0040a7b0(LPCSTR param_1, uint param_2, uint param_3, undefined4 param_4)
 * body: 0040a7b0-0040ab1b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0040a7b0(LPCSTR param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  HANDLE hFile;
  int iVar2;
  DWORD DVar3;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  int iVar4;
  bool bVar5;
  byte local_11;
  uint local_10;
  _SECURITY_ATTRIBUTES local_c;
  
  bVar5 = (param_2 & 0x80) == 0;
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar5) {
    local_11 = 0;
  }
  else {
    local_11 = 0x10;
  }
  local_c.bInheritHandle = (BOOL)bVar5;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_004134b0 != 0x8000)))) {
    local_11 = local_11 | 0x80;
  }
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar1 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar1 != 2) {
      _DAT_00413464 = 0x16;
      DAT_00413468 = 0;
      return 0xffffffff;
    }
    local_10 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    DVar3 = 0;
    break;
  default:
    goto switchD_0040a848_caseD_11;
  case 0x20:
    DVar3 = 1;
    break;
  case 0x30:
    DVar3 = 2;
    break;
  case 0x40:
    DVar3 = 3;
  }
  uVar1 = param_2 & 0x700;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      dwCreationDisposition = 4;
      goto LAB_0040a8db;
    }
    if (uVar1 != 0) {
      _DAT_00413464 = 0x16;
      DAT_00413468 = 0;
      return 0xffffffff;
    }
LAB_0040a8b6:
    dwCreationDisposition = 3;
    goto LAB_0040a8db;
  }
  if (uVar1 < 0x301) {
    if (uVar1 == 0x300) {
      dwCreationDisposition = 2;
      goto LAB_0040a8db;
    }
    if (uVar1 != 0x200) {
      _DAT_00413464 = 0x16;
      DAT_00413468 = 0;
      return 0xffffffff;
    }
LAB_0040a8d6:
    dwCreationDisposition = 5;
  }
  else {
    if (uVar1 < 0x501) {
      if (uVar1 != 0x500) {
        if (uVar1 != 0x400) {
switchD_0040a848_caseD_11:
          DAT_00413468 = 0;
          _DAT_00413464 = 0x16;
          return 0xffffffff;
        }
        goto LAB_0040a8b6;
      }
    }
    else {
      if (uVar1 == 0x600) goto LAB_0040a8d6;
      if (uVar1 != 0x700) {
        _DAT_00413464 = 0x16;
        DAT_00413468 = 0;
        return 0xffffffff;
      }
    }
    dwCreationDisposition = 1;
  }
LAB_0040a8db:
  dwFlagsAndAttributes = 0x80;
  if (((param_2 & 0x100) != 0) && (((byte)param_4 & ~(byte)DAT_0041346c & 0x80) == 0)) {
    dwFlagsAndAttributes = 1;
  }
  if ((param_2 & 0x40) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x4000000;
    local_10 = local_10 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
    }
  }
  else {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  uVar1 = FUN_0040b670();
  if (uVar1 == 0xffffffff) {
    _DAT_00413464 = 0x18;
    DAT_00413468 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,DVar3,&local_c,dwCreationDisposition,dwFlagsAndAttributes,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar3 = GetLastError();
    FUN_0040b040(DVar3);
    return 0xffffffff;
  }
  DVar3 = GetFileType(hFile);
  if (DVar3 != 0) {
    if (DVar3 == 2) {
      local_11 = local_11 | 0x40;
    }
    else if (DVar3 == 3) {
      local_11 = local_11 | 8;
    }
    FUN_0040b730(uVar1,hFile);
    iVar4 = (uVar1 & 0x1f) * 8;
    *(byte *)(iVar4 + 4 + (&DAT_00413d00)[(int)uVar1 >> 5]) = local_11 | 1;
    if ((((local_11 & 0x48) == 0) && ((local_11 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
      DVar3 = FUN_0040bd70(uVar1,-1,2);
      if (DVar3 == 0xffffffff) {
        if (DAT_00413468 != 0x83) {
          FUN_0040a530(uVar1);
          return 0xffffffff;
        }
      }
      else {
        param_3 = param_3 & 0xffffff00;
        iVar2 = FUN_0040be30(uVar1,(char *)&param_3,1);
        if (((iVar2 == 0) && ((char)param_3 == '\x1a')) && (iVar2 = FUN_0040a610(), iVar2 == -1)) {
          FUN_0040a530(uVar1);
          return 0xffffffff;
        }
        DVar3 = FUN_0040bd70(uVar1,0,0);
        if (DVar3 == 0xffffffff) {
          FUN_0040a530(uVar1);
          return 0xffffffff;
        }
      }
    }
    if (((local_11 & 0x48) == 0) && ((param_2 & 8) != 0)) {
      *(byte *)(iVar4 + 4 + (&DAT_00413d00)[(int)uVar1 >> 5]) =
           *(byte *)(iVar4 + 4 + (&DAT_00413d00)[(int)uVar1 >> 5]) | 0x20;
    }
    return uVar1;
  }
  CloseHandle(hFile);
  DVar3 = GetLastError();
  FUN_0040b040(DVar3);
  return 0xffffffff;
}



/* ==== FUN_0040ab70 @ 0040ab70 ==== 
 * signature: undefined __cdecl FUN_0040ab70(char * param_1, uint param_2)
 * body: 0040ab70-0040ab84
 */

void __cdecl FUN_0040ab70(char *param_1,uint param_2)

{
  FUN_0040ab90(0,param_1,param_2);
  return;
}



/* ==== FUN_0040ab90 @ 0040ab90 ==== 
 * signature: char * __cdecl FUN_0040ab90(uint param_1, char * param_2, uint param_3)
 * body: 0040ab90-0040acb2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl FUN_0040ab90(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_10c [4];
  LPSTR local_108;
  CHAR local_104 [260];
  
  if (param_1 == 0) {
    DVar3 = GetCurrentDirectoryA(0x104,local_104);
  }
  else {
    iVar2 = FUN_0040acc0(param_1);
    if (iVar2 == 0) {
      DAT_00413468 = 0xf;
      _DAT_00413464 = 0xd;
      return (char *)0x0;
    }
    local_10c[0] = (char)param_1 + '@';
    local_10c[1] = 0x3a;
    local_10c[2] = 0x2e;
    local_10c[3] = 0;
    DVar3 = GetFullPathNameA(local_10c,0x104,local_104,&local_108);
  }
  if ((DVar3 == 0) || (uVar4 = DVar3 + 1, 0x104 < uVar4)) {
    return (char *)0x0;
  }
  if (param_2 == (char *)0x0) {
    if ((int)uVar4 <= (int)param_3) {
      uVar4 = param_3;
    }
    param_2 = (char *)FUN_0040ad40(uVar4);
    if (param_2 == (char *)0x0) {
      _DAT_00413464 = 0xc;
      return (char *)0x0;
    }
  }
  else if ((int)param_3 < (int)uVar4) {
    _DAT_00413464 = 0x22;
    return (char *)0x0;
  }
  uVar4 = 0xffffffff;
  pcVar6 = local_104;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = param_2;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return param_2;
}



/* ==== FUN_0040acc0 @ 0040acc0 ==== 
 * signature: undefined4 __cdecl FUN_0040acc0(uint param_1)
 * body: 0040acc0-0040acff
 */

undefined4 __cdecl FUN_0040acc0(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  cVar1 = (char)param_1;
  param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
  UVar2 = GetDriveTypeA((LPCSTR)&param_1);
  if ((UVar2 != 0) && (UVar2 != 1)) {
    return 1;
  }
  return 0;
}



/* ==== FUN_0040ad00 @ 0040ad00 ==== 
 * signature: undefined4 __cdecl FUN_0040ad00(LPCSTR param_1, LPCSTR param_2)
 * body: 0040ad00-0040ad31
 */

undefined4 __cdecl FUN_0040ad00(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_0040b040(uVar2);
    return 0xffffffff;
  }
  return 0;
}



/* ==== FUN_0040ad40 @ 0040ad40 ==== 
 * signature: undefined __cdecl FUN_0040ad40(uint param_1)
 * body: 0040ad40-0040ad53
 */

void __cdecl FUN_0040ad40(uint param_1)

{
  FUN_0040ad60(param_1,DAT_004134b4);
  return;
}



/* ==== FUN_0040ad60 @ 0040ad60 ==== 
 * signature: int __cdecl FUN_0040ad60(uint param_1, int param_2)
 * body: 0040ad60-0040ada3
 */

int __cdecl FUN_0040ad60(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        iVar1 = FUN_0040adb0(param_1);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = FUN_0040c090(param_1);
    } while (iVar1 != 0);
  }
  return 0;
}



/* ==== FUN_0040adb0 @ 0040adb0 ==== 
 * signature: undefined __cdecl FUN_0040adb0(int param_1)
 * body: 0040adb0-0040ade7
 */

void __cdecl FUN_0040adb0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if ((dwBytes <= DAT_004131f4) &&
     (piVar1 = FUN_0040c450(param_1 + 0xfU >> 4), piVar1 != (int *)0x0)) {
    return;
  }
  HeapAlloc(DAT_00413ce4,0,dwBytes);
  return;
}



/* ==== FUN_0040adf0 @ 0040adf0 ==== 
 * signature: undefined __cdecl FUN_0040adf0(undefined * param_1)
 * body: 0040adf0-0040ae39
 */

void __cdecl FUN_0040adf0(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    pbVar1 = (byte *)FUN_0040c390(param_1,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_0040c3f0(local_4,(int)param_1,pbVar1);
      return;
    }
    HeapFree(DAT_00413ce4,0,lpMem);
  }
  return;
}



/* ==== entry @ 0040ae40 ==== 
 * signature: undefined __stdcall entry(void)
 * body: 0040ae40-0040af89;0040afc6-0040afd4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  HMODULE pHVar4;
  UINT UVar5;
  byte *pbVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  byte *pbVar7;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0040e328;
  pcStack_10 = FUN_0040d4e8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &local_14;
  DVar2 = GetVersion();
  _DAT_0041347c = DVar2 >> 8 & 0xff;
  _DAT_00413478 = DVar2 & 0xff;
  _DAT_00413474 = _DAT_00413478 * 0x100 + _DAT_0041347c;
  _DAT_00413470 = DVar2 >> 0x10;
  iVar3 = FUN_0040c0b0();
  if (iVar3 == 0) {
    FUN_0040b010(0x1c);
  }
  local_8 = 0;
  FUN_0040b8d0();
  FUN_0040d3e0();
  DAT_00413e10 = (byte *)GetCommandLineA();
  DAT_00413428 = FUN_0040cda0();
  if ((DAT_00413428 == (LPSTR)0x0) || (DAT_00413e10 == (byte *)0x0)) {
    FUN_0040b560(0xffffffff);
  }
  FUN_0040caf0();
  FUN_0040ca00();
  FUN_0040b530();
  pbVar6 = DAT_00413e10;
  if (*DAT_00413e10 == 0x22) {
    while( true ) {
      pbVar7 = pbVar6;
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar3 = FUN_0040c9a0((uint)bVar1);
      if (iVar3 != 0) {
        pbVar6 = pbVar7 + 2;
      }
    }
    if (*pbVar6 == 0x22) {
      pbVar6 = pbVar7 + 2;
    }
  }
  else {
    for (; 0x20 < *pbVar6; pbVar6 = pbVar6 + 1) {
    }
  }
  for (; (*pbVar6 != 0 && (*pbVar6 < 0x21)); pbVar6 = pbVar6 + 1) {
  }
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  iVar3 = 0;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  UVar5 = FUN_00401000(pHVar4,iVar3,(char *)pbVar6);
  FUN_0040b560(UVar5);
  ExceptionList = local_14;
  return;
}



/* ==== FUN_0040af8a @ 0040af8a ==== 
 * signature: undefined __stdcall FUN_0040af8a(void)
 * body: 0040af8a-0040af9e
 */

void FUN_0040af8a(void)

{
  DWORD DVar1;
  int unaff_EBP;
  
  DVar1 = (*(_EXCEPTION_POINTERS **)(unaff_EBP + -0x14))->ExceptionRecord->ExceptionCode;
  *(DWORD *)(unaff_EBP + -0x68) = DVar1;
  FUN_0040c810(DVar1,*(_EXCEPTION_POINTERS **)(unaff_EBP + -0x14));
  return;
}



/* ==== FUN_0040af9f @ 0040af9f ==== 
 * signature: undefined FUN_0040af9f(void)
 * body: 0040af9f-0040afc5
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_0040af9f(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x68);
                    /* WARNING: Subroutine does not return */
  *(undefined4 *)(iVar1 + -8) = 0x40afab;
  __exit(*(int *)(iVar1 + -4));
}



/* ==== __amsg_exit @ 0040afe0 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 0040afe0-0040b005
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040b006-0040b009
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00413430 == 1) {
    FUN_0040d5c0();
  }
  FUN_0040d600(param_1);
  (*(code *)PTR___exit_00411050)(0xff);
  return;
}



/* ==== FUN_0040b010 @ 0040b010 ==== 
 * signature: undefined __cdecl FUN_0040b010(int param_1)
 * body: 0040b010-0040b035
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040b036-0040b036
 */

void __cdecl FUN_0040b010(int param_1)

{
  if (DAT_00413430 == 1) {
    FUN_0040d5c0();
  }
  FUN_0040d600(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}



/* ==== FUN_0040b040 @ 0040b040 ==== 
 * signature: undefined __cdecl FUN_0040b040(uint param_1)
 * body: 0040b040-0040b0a6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040b040(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  DAT_00413468 = param_1;
  iVar2 = 0;
  puVar1 = &DAT_00411058;
  do {
    if (param_1 == *puVar1) {
      _DAT_00413464 = *(undefined4 *)(iVar2 * 8 + 0x41105c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_004111c0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_00413464 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_00413464 = 8, 0xca < param_1)) {
    _DAT_00413464 = 0x16;
  }
  return;
}



/* ==== FUN_0040b0b0 @ 0040b0b0 ==== 
 * signature: uint __cdecl FUN_0040b0b0(uint param_1)
 * body: 0040b0b0-0040b14d
 */

uint __cdecl FUN_0040b0b0(uint param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (param_1 < 0x100) {
    if ((*(byte *)((int)&DAT_004135d8 + param_1 + 1) & 0x20) == 0x20) {
      return (uint)(byte)(&DAT_004136e0)[param_1];
    }
  }
  else {
    bVar2 = (byte)(param_1 >> 8);
    param_1 = CONCAT31(CONCAT21(param_1._2_2_,(char)param_1),bVar2);
    if ((*(byte *)((int)&DAT_004135d8 + bVar2 + 1) & 4) != 0) {
      iVar3 = FUN_0040b150(DAT_004137e4,0x200,(char *)&param_1,(LPCWSTR)0x2,(LPWSTR)local_8,2,
                           DAT_004137e0,1);
      if (iVar3 != 0) {
        return (local_8[0] & 0xff) * 0x100 + (local_8[0] >> 8 & 0xff);
      }
    }
  }
  return uVar1;
}



/* ==== FUN_0040b150 @ 0040b150 ==== 
 * signature: int __cdecl FUN_0040b150(LCID param_1, uint param_2, char * param_3, LPCWSTR param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * body: 0040b150-0040b374
 */

int __cdecl
FUN_0040b150(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  LPCWSTR cbMultiByte;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_00413438 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_00413438 = 2;
    }
    else {
      DAT_00413438 = 1;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPCWSTR)FUN_0040b380(param_3,(int)param_4);
  }
  if (DAT_00413438 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cbMultiByte,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_00413438 != 1) {
    return DAT_00413438;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_00413458;
  }
  iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,(int)cbMultiByte,
                              (LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_0040ad40(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_0040ad40(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_0040b358;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_0040b2bf;
      if (param_6 < iVar2) goto LAB_0040b358;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_0040b2bf:
      FUN_0040adf0((undefined *)lpWideCharStr);
      FUN_0040adf0((undefined *)param_4);
      return iVar2;
    }
  }
LAB_0040b358:
  FUN_0040adf0((undefined *)lpWideCharStr);
  FUN_0040adf0((undefined *)param_4);
  return 0;
}



/* ==== FUN_0040b380 @ 0040b380 ==== 
 * signature: int __cdecl FUN_0040b380(char * param_1, int param_2)
 * body: 0040b380-0040b3ae
 */

int __cdecl FUN_0040b380(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



/* ==== FUN_0040b3b0 @ 0040b3b0 ==== 
 * signature: BOOL __cdecl FUN_0040b3b0(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * body: 0040b3b0-0040b4e7
 */

BOOL __cdecl
FUN_0040b3b0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_00413460 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_00413460 = 2;
    }
    else {
      DAT_00413460 = 1;
    }
  }
  if (DAT_00413460 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_00413448;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_00413460;
  if (DAT_00413460 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_00413458;
    }
    iVar2 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_0040db20(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_0040adf0((undefined *)lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_0040adf0((undefined *)lpWideCharStr);
  }
  return param_6;
}



/* ==== FUN_0040b4f0 @ 0040b4f0 ==== 
 * signature: longlong __stdcall FUN_0040b4f0(uint param_1, int param_2, uint param_3, int param_4)
 * body: 0040b4f0-0040b523
 */

longlong FUN_0040b4f0(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* ==== FUN_0040b524 @ 0040b524 ==== 
 * signature: undefined FUN_0040b524(void)
 * body: 0040b524-0040b524
 */

void FUN_0040b524(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b525 @ 0040b525 ==== 
 * signature: undefined FUN_0040b525(void)
 * body: 0040b525-0040b525
 */

void FUN_0040b525(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b526 @ 0040b526 ==== 
 * signature: undefined FUN_0040b526(void)
 * body: 0040b526-0040b526
 */

void FUN_0040b526(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b527 @ 0040b527 ==== 
 * signature: undefined FUN_0040b527(void)
 * body: 0040b527-0040b527
 */

void FUN_0040b527(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b528 @ 0040b528 ==== 
 * signature: undefined FUN_0040b528(void)
 * body: 0040b528-0040b528
 */

void FUN_0040b528(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b529 @ 0040b529 ==== 
 * signature: undefined FUN_0040b529(void)
 * body: 0040b529-0040b529
 */

void FUN_0040b529(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b52a @ 0040b52a ==== 
 * signature: undefined FUN_0040b52a(void)
 * body: 0040b52a-0040b52a
 */

void FUN_0040b52a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b52b @ 0040b52b ==== 
 * signature: undefined FUN_0040b52b(void)
 * body: 0040b52b-0040b52b
 */

void FUN_0040b52b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b52c @ 0040b52c ==== 
 * signature: undefined FUN_0040b52c(void)
 * body: 0040b52c-0040b52c
 */

void FUN_0040b52c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b52d @ 0040b52d ==== 
 * signature: undefined FUN_0040b52d(void)
 * body: 0040b52d-0040b52d
 */

void FUN_0040b52d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b52e @ 0040b52e ==== 
 * signature: undefined FUN_0040b52e(void)
 * body: 0040b52e-0040b52e
 */

void FUN_0040b52e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b52f @ 0040b52f ==== 
 * signature: undefined FUN_0040b52f(void)
 * body: 0040b52f-0040b52f
 */

void FUN_0040b52f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_0040b530 @ 0040b530 ==== 
 * signature: undefined __stdcall FUN_0040b530(void)
 * body: 0040b530-0040b55f
 */

void FUN_0040b530(void)

{
  if (DAT_00413e0c != (code *)0x0) {
    (*DAT_00413e0c)();
  }
  FUN_0040b650((undefined4 *)&DAT_00410008,(undefined4 *)&DAT_0041000c);
  FUN_0040b650((undefined4 *)&DAT_00410000,(undefined4 *)&DAT_00410004);
  return;
}



/* ==== FUN_0040b560 @ 0040b560 ==== 
 * signature: undefined __cdecl FUN_0040b560(UINT param_1)
 * body: 0040b560-0040b571
 */

void __cdecl FUN_0040b560(UINT param_1)

{
  FUN_0040b5a0(param_1,0,0);
  return;
}



/* ==== __exit @ 0040b580 ==== 
 * signature: noreturn void __cdecl __exit(int _Code)
 * body: 0040b580-0040b591
 * note: Library Function - Single Match  __exit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __exit(int _Code)

{
  FUN_0040b5a0(_Code,1,0);
  return;
}



/* ==== FUN_0040b5a0 @ 0040b5a0 ==== 
 * signature: undefined __cdecl FUN_0040b5a0(UINT param_1, int param_2, int param_3)
 * body: 0040b5a0-0040b643
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040b5a0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  if (DAT_004134ac == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_004134a8 = 1;
  DAT_004134a4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00413e08 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_00413e04 + -4), puVar1 = DAT_00413e08, DAT_00413e08 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_00413e08;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_0040b650((undefined4 *)&DAT_00410010,(undefined4 *)&DAT_00410014);
  }
  FUN_0040b650((undefined4 *)&DAT_00410018,(undefined4 *)&DAT_0041001c);
  if (param_3 == 0) {
    DAT_004134ac = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  return;
}



/* ==== FUN_0040b650 @ 0040b650 ==== 
 * signature: undefined __cdecl FUN_0040b650(undefined4 * param_1, undefined4 * param_2)
 * body: 0040b650-0040b66f
 */

void __cdecl FUN_0040b650(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ==== FUN_0040b670 @ 0040b670 ==== 
 * signature: int __stdcall FUN_0040b670(void)
 * body: 0040b670-0040b72b
 */

int FUN_0040b670(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = -1;
  iVar5 = 0;
  iVar6 = 0;
  piVar3 = &DAT_00413d00;
  do {
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_0040ad40(0x100);
      if (puVar2 != (undefined4 *)0x0) {
        DAT_00413e00 = DAT_00413e00 + 0x20;
        (&DAT_00413d00)[iVar5] = puVar2;
        if (puVar2 < puVar2 + 0x40) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2 = puVar2 + 2;
          } while (puVar2 < (undefined4 *)((&DAT_00413d00)[iVar5] + 0x100));
        }
        iVar4 = iVar5 << 5;
      }
      return iVar4;
    }
    puVar1 = puVar2 + 0x40;
    for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        *puVar2 = 0xffffffff;
        iVar4 = ((int)puVar2 - *piVar3 >> 3) + iVar6;
        break;
      }
    }
    if (iVar4 != -1) {
      return iVar4;
    }
    piVar3 = piVar3 + 1;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x20;
    if (0x413dff < (int)piVar3) {
      return -1;
    }
  } while( true );
}



/* ==== FUN_0040b730 @ 0040b730 ==== 
 * signature: undefined4 __cdecl FUN_0040b730(uint param_1, HANDLE param_2)
 * body: 0040b730-0040b7d2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b730(uint param_1,HANDLE param_2)

{
  int iVar1;
  
  if (param_1 < DAT_00413e00) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_00413d00)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_00411054 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else {
          if (param_1 == 1) {
            SetStdHandle(0xfffffff5,param_2);
            *(HANDLE *)(DAT_00413d00 + 8) = param_2;
            return 0;
          }
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,param_2);
            *(HANDLE *)(DAT_00413d00 + 0x10) = param_2;
            return 0;
          }
        }
      }
      *(HANDLE *)((&DAT_00413d00)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return 0xffffffff;
}



/* ==== FUN_0040b7e0 @ 0040b7e0 ==== 
 * signature: undefined4 __cdecl FUN_0040b7e0(uint param_1)
 * body: 0040b7e0-0040b873
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b7e0(uint param_1)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00413e00) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (((*(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar1) & 1) != 0) &&
       (*(int *)((&DAT_00413d00)[(int)param_1 >> 5] + iVar1) != -1)) {
      if (DAT_00411054 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040b84a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0040b84a:
      *(undefined4 *)((&DAT_00413d00)[(int)param_1 >> 5] + iVar1) = 0xffffffff;
      return 0;
    }
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return 0xffffffff;
}



/* ==== FUN_0040b880 @ 0040b880 ==== 
 * signature: undefined4 __cdecl FUN_0040b880(uint param_1)
 * body: 0040b880-0040b8c3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040b880(uint param_1)

{
  if ((param_1 < DAT_00413e00) &&
     ((*(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00413d00)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return 0xffffffff;
}



/* ==== FUN_0040b8d0 @ 0040b8d0 ==== 
 * signature: undefined __stdcall FUN_0040b8d0(void)
 * body: 0040b8d0-0040bac7
 */

void FUN_0040b8d0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  UINT *pUVar8;
  UINT local_48;
  _STARTUPINFOA local_44;
  
  puVar2 = (undefined4 *)FUN_0040ad40(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_00413e00 = 0x20;
  DAT_00413d00 = puVar2;
  if (puVar2 < puVar2 + 0x40) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2 = puVar2 + 2;
    } while (puVar2 < DAT_00413d00 + 0x40);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    local_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar5 = (byte *)((int)pUVar8 + local_48);
    if (0x7ff < (int)local_48) {
      local_48 = 0x800;
    }
    if ((int)DAT_00413e00 < (int)local_48) {
      piVar6 = &DAT_00413d04;
      do {
        puVar2 = (undefined4 *)FUN_0040ad40(0x100);
        if (puVar2 == (undefined4 *)0x0) {
          local_48 = DAT_00413e00;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_00413e00 = DAT_00413e00 + 0x20;
        if (puVar2 < puVar2 + 0x40) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2 = puVar2 + 2;
          } while (puVar2 < (undefined4 *)(*piVar6 + 0x100));
        }
        piVar6 = piVar6 + 1;
      } while ((int)DAT_00413e00 < (int)local_48);
    }
    uVar7 = 0;
    if (0 < (int)local_48) {
      do {
        if (((*(HANDLE *)pbVar5 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar5), DVar3 != 0)))) {
          iVar4 = (int)(&DAT_00413d00)[(int)uVar7 >> 5];
          *(undefined4 *)(iVar4 + (uVar7 & 0x1f) * 8) = *(undefined4 *)pbVar5;
          *(byte *)(iVar4 + (uVar7 & 0x1f) * 8 + 4) = (byte)*pUVar8;
        }
        uVar7 = uVar7 + 1;
        pUVar8 = (UINT *)((int)pUVar8 + 1);
        pbVar5 = pbVar5 + 4;
      } while ((int)uVar7 < (int)local_48);
    }
  }
  iVar4 = 0;
  do {
    puVar2 = DAT_00413d00 + iVar4 * 2;
    if (DAT_00413d00[iVar4 * 2] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar4 == 0) {
        DVar3 = 0xfffffff6;
      }
      else {
        DVar3 = 0xfffffff5 - (iVar4 != 1);
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile == (HANDLE)0xffffffff) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_0040baab;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_0040baab;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_0040baab;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_0040baab:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      SetHandleCount(DAT_00413e00);
      return;
    }
  } while( true );
}



/* ==== FUN_0040bad0 @ 0040bad0 ==== 
 * signature: int __cdecl FUN_0040bad0(uint param_1, char * param_2, uint param_3)
 * body: 0040bad0-0040bced
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040bad0(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  BOOL BVar5;
  int iVar6;
  char *pcVar7;
  DWORD local_41c;
  uint local_414;
  DWORD local_410;
  int local_40c;
  int *local_408;
  char local_404 [1028];
  
  if (param_1 < DAT_00413e00) {
    piVar1 = &DAT_00413d00 + ((int)param_1 >> 5);
    iVar6 = (param_1 & 0x1f) * 8;
    bVar2 = *(byte *)(iVar6 + 4 + (&DAT_00413d00)[(int)param_1 >> 5]);
    if ((bVar2 & 1) != 0) {
      local_41c = 0;
      local_40c = 0;
      if (param_3 == 0) {
        return 0;
      }
      local_408 = piVar1;
      if ((bVar2 & 0x20) != 0) {
        FUN_0040bd70(param_1,0,2);
      }
      if ((*(byte *)((undefined4 *)(*piVar1 + iVar6) + 1) & 0x80) == 0) {
        BVar5 = WriteFile(*(HANDLE *)(*piVar1 + iVar6),param_2,param_3,&local_410,(LPOVERLAPPED)0x0)
        ;
        if (BVar5 == 0) {
          local_414 = GetLastError();
        }
        else {
          local_41c = local_410;
          local_414 = 0;
        }
      }
      else {
        local_414 = 0;
        pcVar7 = param_2;
        if (param_3 != 0) {
          do {
            pcVar4 = local_404;
            do {
              if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
              cVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              if (cVar3 == '\n') {
                *pcVar4 = '\r';
                local_40c = local_40c + 1;
                pcVar4 = pcVar4 + 1;
              }
              *pcVar4 = cVar3;
              pcVar4 = pcVar4 + 1;
            } while ((int)pcVar4 - (int)local_404 < 0x400);
            BVar5 = WriteFile(*(HANDLE *)(iVar6 + *local_408),local_404,(int)pcVar4 - (int)local_404
                              ,&local_410,(LPOVERLAPPED)0x0);
            if (BVar5 == 0) {
              local_414 = GetLastError();
              break;
            }
            local_41c = local_41c + local_410;
            if (((int)local_410 < (int)pcVar4 - (int)local_404) ||
               (param_3 <= (uint)((int)pcVar7 - (int)param_2))) break;
          } while( true );
        }
      }
      if (local_41c != 0) {
        return local_41c - local_40c;
      }
      if (local_414 == 0) {
        if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) != 0) && (*param_2 == '\x1a')) {
          return 0;
        }
        _DAT_00413464 = 0x1c;
        DAT_00413468 = 0;
        return -1;
      }
      if (local_414 == 5) {
        DAT_00413468 = local_414;
        _DAT_00413464 = 9;
        return -1;
      }
      FUN_0040b040(local_414);
      return -1;
    }
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return -1;
}



/* ==== FUN_0040bcf0 @ 0040bcf0 ==== 
 * signature: int __cdecl FUN_0040bcf0(uint param_1, int param_2)
 * body: 0040bcf0-0040bd6d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040bcf0(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 < DAT_00413e00) {
    bVar1 = *(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8);
    if ((bVar1 & 1) != 0) {
      if (param_2 == 0x8000) {
        bVar2 = bVar1 & 0x7f;
      }
      else {
        if (param_2 != 0x4000) {
          _DAT_00413464 = 0x16;
          return -1;
        }
        bVar2 = bVar1 | 0x80;
      }
      *(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) = bVar2;
      return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
    }
  }
  _DAT_00413464 = 9;
  return -1;
}



/* ==== FUN_0040bd70 @ 0040bd70 ==== 
 * signature: DWORD __cdecl FUN_0040bd70(uint param_1, LONG param_2, DWORD param_3)
 * body: 0040bd70-0040be2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl FUN_0040bd70(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < DAT_00413e00) {
    iVar3 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
      hFile = (HANDLE)FUN_0040b880(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_00413464 = 9;
        return 0xffffffff;
      }
      DVar1 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar1 == 0xffffffff) {
        uVar2 = GetLastError();
      }
      else {
        uVar2 = 0;
      }
      if (uVar2 != 0) {
        FUN_0040b040(uVar2);
        return 0xffffffff;
      }
      *(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar3) =
           *(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar3) & 0xfd;
      return DVar1;
    }
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return 0xffffffff;
}



/* ==== FUN_0040be30 @ 0040be30 ==== 
 * signature: int __cdecl FUN_0040be30(uint param_1, char * param_2, DWORD param_3)
 * body: 0040be30-0040c083
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040be30(uint param_1,char *param_2,DWORD param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  DWORD local_c;
  int *local_8;
  char *local_4;
  
  if (param_1 < DAT_00413e00) {
    iVar6 = (param_1 & 0x1f) * 8;
    piVar1 = &DAT_00413d00 + ((int)param_1 >> 5);
    local_c = iVar6 + (&DAT_00413d00)[(int)param_1 >> 5];
    bVar3 = *(byte *)(local_c + 4);
    if ((bVar3 & 1) != 0) {
      iVar7 = 0;
      if ((param_3 == 0) || ((bVar3 & 2) != 0)) {
        return 0;
      }
      pcVar8 = param_2;
      DVar5 = param_3;
      if (((bVar3 & 0x48) != 0) && (*(char *)(local_c + 5) != '\n')) {
        *param_2 = *(char *)(local_c + 5);
        pcVar8 = param_2 + 1;
        iVar7 = 1;
        DVar5 = param_3 - 1;
        *(undefined1 *)(iVar6 + 5 + *piVar1) = 10;
      }
      local_8 = piVar1;
      BVar4 = ReadFile(*(HANDLE *)(iVar6 + *piVar1),pcVar8,DVar5,&local_c,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        DVar5 = GetLastError();
        if (DVar5 == 5) {
          DAT_00413468 = DVar5;
          _DAT_00413464 = 9;
          return -1;
        }
        if (DVar5 == 0x6d) {
          return 0;
        }
        FUN_0040b040(DVar5);
        return -1;
      }
      iVar7 = iVar7 + local_c;
      bVar3 = *(byte *)(iVar6 + 4 + *piVar1);
      if ((bVar3 & 0x80) != 0) {
        if ((local_c == 0) || (*param_2 != '\n')) {
          bVar3 = bVar3 & 0xfb;
        }
        else {
          bVar3 = bVar3 | 4;
        }
        *(byte *)(iVar6 + 4 + *piVar1) = bVar3;
        local_4 = param_2 + iVar7;
        pcVar8 = param_2;
        pcVar9 = param_2;
        if (param_2 < local_4) {
          while (cVar2 = *pcVar9, cVar2 != '\x1a') {
            if (cVar2 == '\r') {
              if (pcVar9 < local_4 + -1) {
                if (pcVar9[1] == '\n') {
                  pcVar9 = pcVar9 + 2;
                  *pcVar8 = '\n';
                  goto LAB_0040c018;
                }
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              }
              else {
                DVar5 = 0;
                pcVar9 = pcVar9 + 1;
                BVar4 = ReadFile(*(HANDLE *)(iVar6 + *local_8),&param_3,1,&local_c,(LPOVERLAPPED)0x0
                                );
                if (BVar4 == 0) {
                  DVar5 = GetLastError();
                }
                if ((DVar5 == 0) && (local_c != 0)) {
                  if ((*(byte *)(iVar6 + 4 + *local_8) & 0x48) == 0) {
                    if ((pcVar8 == param_2) && ((char)param_3 == '\n')) {
                      *pcVar8 = '\n';
                      goto LAB_0040c018;
                    }
                    FUN_0040bd70(param_1,-1,1);
                    if ((char)param_3 != '\n') goto LAB_0040c015;
                  }
                  else {
                    if ((char)param_3 == '\n') {
                      *pcVar8 = '\n';
                      goto LAB_0040c018;
                    }
                    *pcVar8 = '\r';
                    pcVar8 = pcVar8 + 1;
                    *(char *)(iVar6 + 5 + *local_8) = (char)param_3;
                  }
                }
                else {
LAB_0040c015:
                  *pcVar8 = '\r';
LAB_0040c018:
                  pcVar8 = pcVar8 + 1;
                }
              }
            }
            else {
              *pcVar8 = cVar2;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            }
            if (local_4 <= pcVar9) {
              return (int)pcVar8 - (int)param_2;
            }
          }
          bVar3 = *(byte *)(iVar6 + 4 + *local_8);
          if ((bVar3 & 0x40) == 0) {
            *(byte *)(iVar6 + 4 + *local_8) = bVar3 | 2;
          }
        }
        iVar7 = (int)pcVar8 - (int)param_2;
      }
      return iVar7;
    }
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return -1;
}



/* ==== FUN_0040c090 @ 0040c090 ==== 
 * signature: undefined4 __cdecl FUN_0040c090(undefined4 param_1)
 * body: 0040c090-0040c0af
 */

undefined4 __cdecl FUN_0040c090(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_004134b8 != (code *)0x0) {
    iVar1 = (*DAT_004134b8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ==== FUN_0040c0b0 @ 0040c0b0 ==== 
 * signature: undefined4 __stdcall FUN_0040c0b0(void)
 * body: 0040c0b0-0040c0e6
 */

undefined4 FUN_0040c0b0(void)

{
  undefined **ppuVar1;
  
  DAT_00413ce4 = HeapCreate(1,0x1000,0);
  if (DAT_00413ce4 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_0040c0f0();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_00413ce4);
    return 0;
  }
  return 1;
}



/* ==== FUN_0040c0f0 @ 0040c0f0 ==== 
 * signature: undefined * * __stdcall FUN_0040c0f0(void)
 * body: 0040c0f0-0040c251
 */

undefined ** FUN_0040c0f0(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_004111e0 == -1) {
    lpMem = &PTR_LOOP_004111d0;
  }
  else {
    lpMem = HeapAlloc(DAT_00413ce4,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_004111d0) {
        if (PTR_LOOP_004111d0 == (undefined *)0x0) {
          PTR_LOOP_004111d0 = (undefined *)&PTR_LOOP_004111d0;
        }
        if (PTR_LOOP_004111d4 == (undefined *)0x0) {
          PTR_LOOP_004111d4 = (undefined *)&PTR_LOOP_004111d0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_004111d0;
        lpMem[1] = PTR_LOOP_004111d4;
        PTR_LOOP_004111d4 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)(lpMem + 6);
      lpMem[3] = (undefined *)(lpMem + 0x26);
      iVar3 = 0;
      ppuVar4 = lpMem + 6;
      do {
        bVar1 = 0xf < iVar3;
        iVar3 = iVar3 + 1;
        *ppuVar4 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar4[1] = (undefined *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      puVar5 = lpAddress;
      for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < lpMem[4] + 0x10000) {
        do {
          lpAddress[1] = 0xf0;
          *lpAddress = lpAddress + 2;
          *(undefined1 *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < lpMem[4] + 0x10000);
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_004111d0) {
    HeapFree(DAT_00413ce4,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ==== FUN_0040c260 @ 0040c260 ==== 
 * signature: undefined __cdecl FUN_0040c260(undefined * * param_1)
 * body: 0040c260-0040c2ba
 */

void __cdecl FUN_0040c260(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_004131f0 == param_1) {
    PTR_LOOP_004131f0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_004111d0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_00413ce4,0,param_1);
    return;
  }
  DAT_004111e0 = 0xffffffff;
  return;
}



/* ==== FUN_0040c2c0 @ 0040c2c0 ==== 
 * signature: undefined __cdecl FUN_0040c2c0(int param_1)
 * body: 0040c2c0-0040c38c
 */

void __cdecl FUN_0040c2c0(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_LOOP_004111d4;
  do {
    ppuVar5 = ppuVar6;
    if (ppuVar6[4] != (undefined *)0xffffffff) {
      iVar4 = 0;
      ppuVar5 = ppuVar6 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar6[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_004134bc = DAT_004134bc + -1;
            if (((undefined **)ppuVar6[3] == (undefined **)0x0) || (ppuVar5 < ppuVar6[3])) {
              ppuVar6[3] = (undefined *)ppuVar5;
            }
            iVar4 = iVar4 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar6[1];
      if ((iVar4 != 0) && (ppuVar6[6] == (undefined *)0xffffffff)) {
        iVar3 = 1;
        ppuVar2 = ppuVar6 + 8;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_0040c260(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_004111d4) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ==== FUN_0040c390 @ 0040c390 ==== 
 * signature: int __cdecl FUN_0040c390(undefined * param_1, undefined4 * param_2, uint * param_3)
 * body: 0040c390-0040c3e8
 */

int __cdecl FUN_0040c390(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_004111d0;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_004111d0) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



/* ==== FUN_0040c3f0 @ 0040c3f0 ==== 
 * signature: undefined __cdecl FUN_0040c3f0(int param_1, int param_2, byte * param_3)
 * body: 0040c3f0-0040c442
 */

void __cdecl FUN_0040c3f0(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_004134bc = DAT_004134bc + 1, DAT_004134bc == 0x20)) {
    FUN_0040c2c0(0x10);
  }
  return;
}



/* ==== FUN_0040c450 @ 0040c450 ==== 
 * signature: int * __cdecl FUN_0040c450(uint param_1)
 * body: 0040c450-0040c682
 */

int * __cdecl FUN_0040c450(uint param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  bool bVar12;
  
  piVar11 = (int *)PTR_LOOP_004131f0;
  do {
    if (piVar11[4] != -1) {
      puVar10 = (uint *)piVar11[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)piVar11) >> 3) * 0x1000 + piVar11[4]);
      for (; puVar10 < piVar11 + 0x806; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_0040c690(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_LOOP_004131f0 = (undefined *)piVar11;
            *puVar10 = *puVar10 - param_1;
            piVar11[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
      puVar2 = (uint *)piVar11[2];
      piVar8 = (int *)piVar11[4];
      for (puVar10 = (uint *)(piVar11 + 6); puVar10 < puVar2; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_0040c690(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_LOOP_004131f0 = (undefined *)piVar11;
            *puVar10 = *puVar10 - param_1;
            piVar11[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
    }
    piVar11 = (int *)*piVar11;
  } while (piVar11 != (int *)PTR_LOOP_004131f0);
  ppuVar7 = &PTR_LOOP_004111d0;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_004111d0) {
      ppuVar7 = FUN_0040c0f0();
      if (ppuVar7 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar11 = (int *)ppuVar7[4];
      *(char *)(piVar11 + 2) = (char)param_1;
      PTR_LOOP_004131f0 = (undefined *)ppuVar7;
      *piVar11 = (int)piVar11 + param_1 + 8;
      piVar11[1] = 0xf0 - param_1;
      ppuVar7[6] = ppuVar7[6] + -(param_1 & 0xff);
      return piVar11 + 0x40;
    }
  }
  ppuVar3 = (undefined **)ppuVar7[3];
  puVar4 = *ppuVar3;
  piVar11 = (int *)(ppuVar7[4] + ((int)ppuVar3 + (-0x18 - (int)ppuVar7) >> 3) * 0x1000);
  ppuVar6 = ppuVar3;
  for (iVar9 = 0; (puVar4 == (undefined *)0xffffffff && (iVar9 < 0x10)); iVar9 = iVar9 + 1) {
    puVar4 = ppuVar6[2];
    ppuVar6 = ppuVar6 + 2;
  }
  piVar8 = VirtualAlloc(piVar11,iVar9 << 0xc,0x1000,4);
  if (piVar8 != piVar11) {
    return (int *)0x0;
  }
  ppuVar6 = ppuVar3;
  if (0 < iVar9) {
    piVar8 = piVar11 + 1;
    do {
      *piVar8 = 0xf0;
      piVar8[-1] = (int)(piVar8 + 1);
      *(undefined1 *)(piVar8 + 0x3d) = 0xff;
      *ppuVar6 = (undefined *)0xf0;
      ppuVar6[1] = (undefined *)0xf1;
      piVar8 = piVar8 + 0x400;
      ppuVar6 = ppuVar6 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  ppuVar1 = ppuVar7 + 0x806;
  bVar12 = false;
  if (ppuVar6 < ppuVar1) {
    do {
      if (*ppuVar6 == (undefined *)0xffffffff) break;
      ppuVar6 = ppuVar6 + 2;
    } while (ppuVar6 < ppuVar1);
    bVar12 = ppuVar6 < ppuVar1;
  }
  PTR_LOOP_004131f0 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar12 & (uint)ppuVar6);
  *(char *)(piVar11 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar11[1] = piVar11[1] - param_1;
  *piVar11 = (int)piVar11 + param_1 + 8;
  return piVar11 + 0x40;
}



/* ==== FUN_0040c690 @ 0040c690 ==== 
 * signature: int __cdecl FUN_0040c690(int * param_1, uint param_2, uint param_3)
 * body: 0040c690-0040c801
 */

int __cdecl FUN_0040c690(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  if (param_3 <= (uint)param_1[1]) {
    *pbVar2 = (byte)param_3;
    if (pbVar2 + param_3 < param_1 + 0x3e) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    return (int)(pbVar2 + 8) * 0x10 + (int)param_1 * -0xf;
  }
  pbVar6 = pbVar2;
  if (pbVar2[param_1[1]] != 0) {
    pbVar6 = pbVar2 + param_1[1];
  }
  if (pbVar6 + param_3 < param_1 + 0x3e) {
    do {
      if (*pbVar6 == 0) {
        pbVar3 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar3;
        }
        if (param_3 <= uVar5) {
          if (param_1 + 0x3e <= pbVar6 + param_3) {
            *param_1 = (int)(param_1 + 2);
            goto LAB_0040c7df;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_0040c7e6;
        }
        if (pbVar6 == pbVar2) {
          param_1[1] = uVar5;
        }
        else {
          param_2 = param_2 - uVar5;
          if (param_2 < param_3) {
            return 0;
          }
        }
      }
      else {
        pbVar3 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar3;
    } while (pbVar3 + param_3 < param_1 + 0x3e);
  }
  pbVar3 = (byte *)(param_1 + 2);
  pbVar6 = pbVar3;
  if (pbVar3 < pbVar2) {
    while (pbVar6 + param_3 < param_1 + 0x3e) {
      if (*pbVar6 == 0) {
        pbVar4 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar4 = pbVar4 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar4;
        }
        if (param_3 <= uVar5) {
          if (pbVar6 + param_3 < param_1 + 0x3e) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            *param_1 = (int)pbVar3;
LAB_0040c7df:
            param_1[1] = 0;
          }
LAB_0040c7e6:
          *pbVar6 = (byte)param_3;
          return (int)(pbVar6 + 8) * 0x10 + (int)param_1 * -0xf;
        }
        param_2 = param_2 - uVar5;
        if (param_2 < param_3) {
          return 0;
        }
      }
      else {
        pbVar4 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar4;
      if (pbVar2 <= pbVar4) {
        return 0;
      }
    }
  }
  return 0;
}



/* ==== FUN_0040c810 @ 0040c810 ==== 
 * signature: LONG __cdecl FUN_0040c810(int param_1, _EXCEPTION_POINTERS * param_2)
 * body: 0040c810-0040c94d
 */

LONG __cdecl FUN_0040c810(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int iVar7;
  
  piVar4 = FUN_0040c950(param_1);
  uVar3 = DAT_004134c0;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
    return LVar5;
  }
  if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    return 1;
  }
  if (pcVar1 != (code *)0x1) {
    DAT_004134c0 = param_2;
    if (piVar4[1] == 8) {
      if (DAT_00413270 < DAT_00413274 + DAT_00413270) {
        iVar7 = (DAT_00413274 + DAT_00413270) - DAT_00413270;
        puVar6 = (undefined4 *)(DAT_00413270 * 0xc + 0x413200);
        do {
          *puVar6 = 0;
          puVar6 = puVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar2 = DAT_0041327c;
      iVar7 = *piVar4;
      if (iVar7 == -0x3fffff72) {
        DAT_0041327c = 0x83;
      }
      else if (iVar7 == -0x3fffff70) {
        DAT_0041327c = 0x81;
      }
      else if (iVar7 == -0x3fffff6f) {
        DAT_0041327c = 0x84;
      }
      else if (iVar7 == -0x3fffff6d) {
        DAT_0041327c = 0x85;
      }
      else if (iVar7 == -0x3fffff73) {
        DAT_0041327c = 0x82;
      }
      else if (iVar7 == -0x3fffff71) {
        DAT_0041327c = 0x86;
      }
      else if (iVar7 == -0x3fffff6e) {
        DAT_0041327c = 0x8a;
      }
      (*pcVar1)(8,DAT_0041327c);
      DAT_0041327c = uVar2;
      DAT_004134c0 = (_EXCEPTION_POINTERS *)uVar3;
      return -1;
    }
    piVar4[2] = 0;
    (*pcVar1)(piVar4[1]);
    DAT_004134c0 = (_EXCEPTION_POINTERS *)uVar3;
    return -1;
  }
  return -1;
}



/* ==== FUN_0040c94e @ 0040c94e ==== 
 * signature: undefined FUN_0040c94e(void)
 * body: 0040c94e-0040c94f
 */

int * FUN_0040c94e(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_004131f8;
  if (DAT_004131f8 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_004131f8 + DAT_00413278 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_004131f8 + DAT_00413278 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



/* ==== FUN_0040c950 @ 0040c950 ==== 
 * signature: int * __cdecl FUN_0040c950(int param_1)
 * body: 0040c950-0040c994
 */

int * __cdecl FUN_0040c950(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_004131f8;
  if (DAT_004131f8 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_004131f8 + DAT_00413278 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_004131f8 + DAT_00413278 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



/* ==== FUN_0040c995 @ 0040c995 ==== 
 * signature: undefined FUN_0040c995(void)
 * body: 0040c995-0040c99f
 */

void FUN_0040c995(uint param_1)

{
  FUN_0040c9c0(param_1,0,4);
  return;
}



/* ==== FUN_0040c9a0 @ 0040c9a0 ==== 
 * signature: undefined __cdecl FUN_0040c9a0(uint param_1)
 * body: 0040c9a0-0040c9b1
 */

void __cdecl FUN_0040c9a0(uint param_1)

{
  FUN_0040c9c0(param_1,0,4);
  return;
}



/* ==== FUN_0040c9c0 @ 0040c9c0 ==== 
 * signature: undefined4 __cdecl FUN_0040c9c0(uint param_1, uint param_2, byte param_3)
 * body: 0040c9c0-0040c9f9
 */

undefined4 __cdecl FUN_0040c9c0(uint param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&DAT_004135d8 + (param_1 & 0xff) + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_00410e3a + (param_1 & 0xff) * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



/* ==== FUN_0040ca00 @ 0040ca00 ==== 
 * signature: undefined __stdcall FUN_0040ca00(void)
 * body: 0040ca00-0040caed
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ca00(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int *local_4;
  
  iVar8 = 0;
  cVar2 = *DAT_00413428;
  pcVar7 = DAT_00413428;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar8 = iVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pcVar9 = pcVar7 + ~uVar4;
    pcVar7 = pcVar7 + ~uVar4;
    cVar2 = *pcVar9;
  }
  piVar3 = (int *)FUN_0040ad40(iVar8 * 4 + 4);
  _DAT_0041348c = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_00413428;
  local_4 = piVar3;
  pcVar7 = DAT_00413428;
  do {
    if (cVar2 == '\0') {
      FUN_0040adf0(DAT_00413428);
      DAT_00413428 = (char *)0x0;
      *piVar3 = 0;
      return;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    if (cVar2 != '=') {
      iVar8 = FUN_0040ad40(uVar4);
      *piVar3 = iVar8;
      if (iVar8 == 0) {
        __amsg_exit(9);
      }
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar10 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar10 + -uVar5;
      pcVar10 = (char *)*local_4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      piVar3 = local_4 + 1;
      for (uVar5 = uVar5 & 3; local_4 = piVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    cVar2 = pcVar7[uVar4];
    pcVar7 = pcVar7 + uVar4;
  } while( true );
}



/* ==== FUN_0040caf0 @ 0040caf0 ==== 
 * signature: undefined __stdcall FUN_0040caf0(void)
 * body: 0040caf0-0040cb8d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040caf0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_004134c8,0x104);
  _DAT_0041349c = &DAT_004134c8;
  pbVar2 = DAT_00413e10;
  if (*DAT_00413e10 == 0) {
    pbVar2 = &DAT_004134c8;
  }
  FUN_0040cb90(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_0040ad40(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_0040cb90(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_00413484 = puVar1;
  _DAT_00413480 = local_8 + -1;
  return;
}



/* ==== FUN_0040cb90 @ 0040cb90 ==== 
 * signature: undefined __cdecl FUN_0040cb90(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * body: 0040cb90-0040cd9e
 */

void __cdecl FUN_0040cb90(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  
  piVar6 = param_5;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    bVar2 = param_1[1];
    while ((pbVar7 = param_1 + 1, bVar2 != 0x22 && (bVar2 != 0))) {
      if (((*(byte *)((int)&DAT_004135d8 + bVar2 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        pbVar7 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
      }
      param_1 = pbVar7;
      bVar2 = pbVar7[1];
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar7 == 0x22) {
      pbVar7 = param_1 + 2;
    }
  }
  else {
    do {
      *piVar6 = *piVar6 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar2 = *param_1;
      pbVar7 = param_1 + 1;
      param_5 = (int *)(uint)bVar2;
      if ((*(byte *)((int)param_5 + 0x4135d9) & 4) != 0) {
        *piVar6 = *piVar6 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar7;
          param_3 = param_3 + 1;
        }
        pbVar7 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_0040cc69;
      param_1 = pbVar7;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_0040cc69:
      pbVar7 = pbVar7 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar4 = false;
  bVar5 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar8 = 0;
      bVar3 = true;
      bVar2 = *pbVar7;
      while (bVar2 == 0x5c) {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar7 == 0x22) {
        if ((uVar8 & 1) == 0) {
          if ((bVar4) && (pbVar7[1] == 0x22)) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar3 = false;
          }
          bVar4 = !bVar5;
          bVar5 = bVar4;
        }
        uVar8 = uVar8 >> 1;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *piVar6 = *piVar6 + 1;
      }
      bVar2 = *pbVar7;
      if ((bVar2 == 0) || ((!bVar4 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_004135d8 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_0040cd65;
        }
        if ((*(byte *)((int)&DAT_004135d8 + bVar2 + 1) & 4) != 0) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
          pbVar7 = pbVar7 + 1;
          *piVar6 = *piVar6 + 1;
        }
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        *piVar6 = *piVar6 + 1;
        pbVar7 = pbVar7 + 1;
      }
      else {
LAB_0040cd65:
        pbVar7 = pbVar7 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *piVar6 = *piVar6 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ==== FUN_0040cda0 @ 0040cda0 ==== 
 * signature: LPSTR __stdcall FUN_0040cda0(void)
 * body: 0040cda0-0040cef5
 */

LPSTR FUN_0040cda0(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  int iVar5;
  uint uVar6;
  LPSTR pCVar7;
  LPCH pCVar8;
  LPCH pCVar9;
  LPCH pCVar10;
  LPWCH lpWideCharStr;
  CHAR *pCVar11;
  LPSTR pCVar12;
  WCHAR *pWVar4;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar10 = (LPCH)0x0;
  if (DAT_004135d0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_004135d0 = 2;
    }
    else {
      DAT_004135d0 = 1;
    }
  }
  if (DAT_004135d0 == 1) {
    if ((lpWideCharStr != (LPWCH)0x0) ||
       (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr != (LPWCH)0x0)) {
      WVar2 = *lpWideCharStr;
      pWVar3 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar4 = pWVar3;
          pWVar3 = pWVar4 + 1;
        } while (*pWVar3 != L'\0');
        pWVar3 = pWVar4 + 2;
        WVar2 = *pWVar3;
      }
      iVar5 = ((int)pWVar3 - (int)lpWideCharStr >> 1) + 1;
      uVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_0040ad40(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_0040adf0(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_004135d0 == 2) &&
          ((pCVar10 != (LPCH)0x0 || (pCVar10 = GetEnvironmentStrings(), pCVar10 != (LPCH)0x0)))) {
    cVar1 = *pCVar10;
    pCVar9 = pCVar10;
    while (cVar1 != '\0') {
      do {
        pCVar8 = pCVar9;
        pCVar9 = pCVar8 + 1;
      } while (pCVar8[1] != '\0');
      pCVar9 = pCVar8 + 2;
      cVar1 = pCVar8[2];
    }
    pCVar9 = pCVar9 + (1 - (int)pCVar10);
    pCVar7 = (LPSTR)FUN_0040ad40((uint)pCVar9);
    if (pCVar7 != (LPSTR)0x0) {
      pCVar11 = pCVar10;
      pCVar12 = pCVar7;
      for (uVar6 = (uint)pCVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar11;
        pCVar11 = pCVar11 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar6 = (uint)pCVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar12 = *pCVar11;
        pCVar11 = pCVar11 + 1;
        pCVar12 = pCVar12 + 1;
      }
      FreeEnvironmentStringsA(pCVar10);
      return pCVar7;
    }
    FreeEnvironmentStringsA(pCVar10);
    return (LPSTR)0x0;
  }
  return (LPSTR)0x0;
}



/* ==== FUN_0040cf00 @ 0040cf00 ==== 
 * signature: undefined4 __cdecl FUN_0040cf00(int param_1)
 * body: 0040cf00-0040d10f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040cf00(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  _cpinfo local_14;
  
  CodePage = FUN_0040d110(param_1);
  if (CodePage == DAT_004137e0) {
    return 0;
  }
  if (CodePage == 0) {
    FUN_0040d1c0();
    FUN_0040d200();
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_00413288;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_004135d8;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x413298);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_00413280)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_004135d8 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_00413ce0 = 1;
      DAT_004137e0 = CodePage;
      DAT_004137e4 = FUN_0040d160(CodePage);
      _DAT_004137e8 = *(undefined4 *)(iVar10 + 0x41328c);
      _DAT_004137ec = *(undefined4 *)(iVar10 + 0x413290);
      _DAT_004137f0 = *(undefined4 *)(iVar10 + 0x413294);
      FUN_0040d200();
      return 0;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_00413378);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 != 1) {
    if (DAT_004137f4 == 0) {
      return 0xffffffff;
    }
    FUN_0040d1c0();
    FUN_0040d200();
    return 0;
  }
  puVar14 = &DAT_004135d8;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)puVar14 = 0;
  DAT_004137e4 = 0;
  if (local_14.MaxCharSize < 2) {
    _DAT_00413ce0 = 0;
    DAT_004137e0 = CodePage;
  }
  else {
    DAT_004137e0 = CodePage;
    if (local_14.LeadByte[0] != '\0') {
      pBVar11 = local_14.LeadByte + 1;
      do {
        bVar3 = *pBVar11;
        if (bVar3 == 0) break;
        for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
          *(byte *)((int)&DAT_004135d8 + uVar7 + 1) = *(byte *)((int)&DAT_004135d8 + uVar7 + 1) | 4;
        }
        pBVar1 = pBVar11 + 1;
        pBVar11 = pBVar11 + 2;
      } while (*pBVar1 != 0);
    }
    uVar7 = 1;
    do {
      *(byte *)((int)&DAT_004135d8 + uVar7 + 1) = *(byte *)((int)&DAT_004135d8 + uVar7 + 1) | 8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xff);
    DAT_004137e4 = FUN_0040d160(CodePage);
    _DAT_00413ce0 = 1;
  }
  _DAT_004137e8 = 0;
  _DAT_004137ec = 0;
  _DAT_004137f0 = 0;
  FUN_0040d200();
  return 0;
}



/* ==== FUN_0040d110 @ 0040d110 ==== 
 * signature: int __cdecl FUN_0040d110(int param_1)
 * body: 0040d110-0040d15c
 */

int __cdecl FUN_0040d110(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_004137f4 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040d12d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_004137f4 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040d142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00413458;
  }
  DAT_004137f4 = (uint)bVar2;
  return param_1;
}



/* ==== FUN_0040d160 @ 0040d160 ==== 
 * signature: undefined4 __cdecl FUN_0040d160(undefined4 param_1)
 * body: 0040d160-0040d197
 */

undefined4 __cdecl FUN_0040d160(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



/* ==== FUN_0040d1c0 @ 0040d1c0 ==== 
 * signature: undefined __stdcall FUN_0040d1c0(void)
 * body: 0040d1c0-0040d1f1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d1c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004135d8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_004137e0 = 0;
  _DAT_00413ce0 = 0;
  DAT_004137e4 = 0;
  _DAT_004137e8 = 0;
  _DAT_004137ec = 0;
  _DAT_004137f0 = 0;
  return;
}



/* ==== FUN_0040d200 @ 0040d200 ==== 
 * signature: undefined __stdcall FUN_0040d200(void)
 * body: 0040d200-0040d3d9
 */

void FUN_0040d200(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  BYTE *pBVar5;
  ushort *puVar6;
  CHAR *pCVar7;
  _cpinfo local_514;
  CHAR local_500 [256];
  WCHAR local_400 [128];
  WCHAR local_300 [128];
  WORD local_200 [256];
  
  BVar1 = GetCPInfo(DAT_004137e0,&local_514);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      local_500[uVar2] = (CHAR)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_500[0] = ' ';
    if (local_514.LeadByte[0] != 0) {
      pBVar5 = local_514.LeadByte + 1;
      do {
        uVar2 = (uint)local_514.LeadByte[0];
        if (uVar2 <= *pBVar5) {
          uVar3 = (*pBVar5 - uVar2) + 1;
          uVar4 = uVar3 >> 2;
          pCVar7 = local_500 + uVar2;
          while (uVar4 != 0) {
            uVar4 = uVar4 - 1;
            builtin_memcpy(pCVar7,"    ",4);
            pCVar7 = pCVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pCVar7 = ' ';
            pCVar7 = pCVar7 + 1;
          }
        }
        local_514.LeadByte[0] = pBVar5[1];
        pBVar5 = pBVar5 + 2;
      } while (local_514.LeadByte[0] != 0);
    }
    FUN_0040b3b0(1,local_500,0x100,local_200,DAT_004137e0,DAT_004137e4,0);
    FUN_0040b150(DAT_004137e4,0x100,local_500,(LPCWSTR)0x100,local_400,0x100,DAT_004137e0,0);
    FUN_0040b150(DAT_004137e4,0x200,local_500,(LPCWSTR)0x100,local_300,0x100,DAT_004137e0,0);
    uVar2 = 0;
    puVar6 = local_200;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) == 0) {
          (&DAT_004136e0)[uVar2] = 0;
        }
        else {
          *(byte *)((int)&DAT_004135d8 + uVar2 + 1) =
               *(byte *)((int)&DAT_004135d8 + uVar2 + 1) | 0x20;
          (&DAT_004136e0)[uVar2] = *(undefined1 *)((int)local_300 + uVar2);
        }
      }
      else {
        *(byte *)((int)&DAT_004135d8 + uVar2 + 1) = *(byte *)((int)&DAT_004135d8 + uVar2 + 1) | 0x10
        ;
        (&DAT_004136e0)[uVar2] = *(undefined1 *)((int)local_400 + uVar2);
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
    return;
  }
  uVar2 = 0;
  do {
    if ((uVar2 < 0x41) || (0x5a < uVar2)) {
      if ((uVar2 < 0x61) || (0x7a < uVar2)) {
        (&DAT_004136e0)[uVar2] = 0;
      }
      else {
        *(byte *)((int)&DAT_004135d8 + uVar2 + 1) = *(byte *)((int)&DAT_004135d8 + uVar2 + 1) | 0x20
        ;
        (&DAT_004136e0)[uVar2] = (char)uVar2 + -0x20;
      }
    }
    else {
      *(byte *)((int)&DAT_004135d8 + uVar2 + 1) = *(byte *)((int)&DAT_004135d8 + uVar2 + 1) | 0x10;
      (&DAT_004136e0)[uVar2] = (char)uVar2 + ' ';
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}



/* ==== FUN_0040d3e0 @ 0040d3e0 ==== 
 * signature: undefined __stdcall FUN_0040d3e0(void)
 * body: 0040d3e0-0040d3ea
 */

void FUN_0040d3e0(void)

{
  FUN_0040cf00(-3);
  return;
}



/* ==== __global_unwind2 @ 0040d3f0 ==== 
 * signature: undefined __cdecl __global_unwind2(PVOID param_1)
 * body: 0040d3f0-0040d40f
 * note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x40d408,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ==== FUN_0040d410 @ 0040d410 ==== 
 * signature: undefined4 __cdecl FUN_0040d410(int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * body: 0040d410-0040d431
 */

undefined4 __cdecl
FUN_0040d410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}



/* ==== __local_unwind2 @ 0040d432 ==== 
 * signature: undefined __cdecl __local_unwind2(int param_1, int param_2)
 * body: 0040d432-0040d499
 * note: Library Function - Single Match  __local_unwind2  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  code *pcStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  pcStack_18 = FUN_0040d410;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_0040d4c6();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ==== FUN_0040d49a @ 0040d49a ==== 
 * signature: undefined FUN_0040d49a(void)
 * body: 0040d49a-0040d4bc
 */

undefined4 FUN_0040d49a(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(code **)((int)ExceptionList + 4) == FUN_0040d410) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    uVar1 = 1;
  }
  return uVar1;
}



/* ==== FUN_0040d4bd @ 0040d4bd ==== 
 * signature: undefined FUN_0040d4bd(void)
 * body: 0040d4bd-0040d4c5
 */

void __fastcall FUN_0040d4bd(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00413380 = param_1;
  DAT_0041337c = in_EAX;
  DAT_00413384 = unaff_EBP;
  return;
}



/* ==== FUN_0040d4c6 @ 0040d4c6 ==== 
 * signature: undefined __stdcall FUN_0040d4c6(void)
 * body: 0040d4c6-0040d4dd
 */

void FUN_0040d4c6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00413380 = *(undefined4 *)(unaff_EBP + 8);
  DAT_0041337c = in_EAX;
  DAT_00413384 = unaff_EBP;
  return;
}



/* ==== FUN_0040d4e8 @ 0040d4e8 ==== 
 * signature: undefined4 __cdecl FUN_0040d4e8(int param_1, PVOID param_2, undefined4 param_3)
 * body: 0040d4e8-0040d5a4
 */

undefined4 __cdecl FUN_0040d4e8(int param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_ECX;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_c;
  undefined4 local_8;
  
  puVar4 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  if ((*(uint *)(param_1 + 4) & 6) == 0) {
    local_c = param_1;
    local_8 = param_3;
    *(int **)((int)param_2 + -4) = &local_c;
    iVar1 = *(int *)((int)param_2 + 8);
    for (iVar3 = *(int *)((int)param_2 + 0xc); iVar3 != -1; iVar3 = *(int *)(iVar1 + iVar3 * 0xc)) {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) != 0) {
        iVar1 = (**(code **)(iVar1 + 4 + iVar3 * 0xc))(puVar2,iVar3,puVar4);
        param_2 = *(PVOID *)(puVar2 + 0xc);
        if (iVar1 != 0) {
          if (iVar1 < 0) {
            return 0;
          }
          iVar1 = *(int *)((int)param_2 + 8);
          __global_unwind2(param_2);
          puVar2 = (undefined1 *)((int)param_2 + 0x10);
          __local_unwind2((int)param_2,iVar3);
          FUN_0040d4c6();
          *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)(iVar1 + extraout_ECX * 4);
          (**(code **)(iVar1 + 8 + extraout_ECX * 4))();
        }
      }
      iVar1 = *(int *)((int)param_2 + 8);
    }
  }
  else {
    __local_unwind2((int)param_2,-1);
  }
  return 1;
}



/* ==== FUN_0040d5a5 @ 0040d5a5 ==== 
 * signature: undefined __stdcall FUN_0040d5a5(int param_1)
 * body: 0040d5a5-0040d5bf
 */

void FUN_0040d5a5(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ==== FUN_0040d5c0 @ 0040d5c0 ==== 
 * signature: undefined __stdcall FUN_0040d5c0(void)
 * body: 0040d5c0-0040d5fc
 */

void FUN_0040d5c0(void)

{
  if ((DAT_00413430 == 1) || ((DAT_00413430 == 0 && (DAT_00411054 == 1)))) {
    FUN_0040d600(0xfc);
    if (DAT_004137f8 != (code *)0x0) {
      (*DAT_004137f8)();
    }
    FUN_0040d600(0xff);
  }
  return;
}



/* ==== FUN_0040d600 @ 0040d600 ==== 
 * signature: undefined __cdecl FUN_0040d600(int param_1)
 * body: 0040d600-0040d7d5
 */

void __cdecl FUN_0040d600(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  DWORD local_1a8;
  char local_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  piVar2 = &DAT_00413388;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_00413418);
  if (param_1 == (&DAT_00413388)[iVar8 * 2]) {
    if ((DAT_00413430 == 1) || ((DAT_00413430 == 0 && (DAT_00411054 == 1)))) {
      if ((DAT_00413d00 == 0) ||
         (hFile = *(HANDLE *)(DAT_00413d00 + 0x10), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar7 = *(char **)(iVar8 * 8 + 0x41338c);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar7,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar7 = "<program name unknown>";
        pCVar10 = local_104;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar7;
        pCVar10[2] = pcVar7[2];
      }
      uVar5 = 0xffffffff;
      pcVar7 = local_104;
      pcVar9 = local_104;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar5) {
        uVar5 = 0xffffffff;
        pcVar7 = local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar7 = acStack_140 + ~uVar5;
        _strncpy(pcVar7,&DAT_00410560,3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar11 = local_1a4;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = "\n\n";
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = *(char **)(iVar8 * 8 + 0x41338c);
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_0040dbc0(local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



/* ==== FUN_0040d7e0 @ 0040d7e0 ==== 
 * signature: undefined4 * __cdecl FUN_0040d7e0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * body: 0040d7e0-0040d83a;0040d83c-0040d842;0040d850-0040d878;0040d978-0040d99d
 */

undefined4 * __cdecl FUN_0040d7e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_0040d997_caseD_2;
        case 3:
          goto switchD_0040d997_caseD_3;
        }
        goto switchD_0040d997_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_0040d997_caseD_0;
      case 1:
        goto switchD_0040d997_caseD_1;
      case 2:
        goto switchD_0040d997_caseD_2;
      case 3:
        goto switchD_0040d997_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040d997_caseD_2;
            case 3:
              goto switchD_0040d997_caseD_3;
            }
            goto switchD_0040d997_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040d997_caseD_2;
            case 3:
              goto switchD_0040d997_caseD_3;
            }
            goto switchD_0040d997_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040d997_caseD_2;
            case 3:
              goto switchD_0040d997_caseD_3;
            }
            goto switchD_0040d997_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0040d997_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_0040d997_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_0040d997_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_0040d997_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_0040d815_caseD_2;
      case 3:
        goto switchD_0040d815_caseD_3;
      }
      goto switchD_0040d815_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_0040d815_caseD_0;
    case 1:
      goto switchD_0040d815_caseD_1;
    case 2:
      goto switchD_0040d815_caseD_2;
    case 3:
      goto switchD_0040d815_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040d815_caseD_2;
          case 3:
            goto switchD_0040d815_caseD_3;
          }
          goto switchD_0040d815_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040d815_caseD_2;
          case 3:
            goto switchD_0040d815_caseD_3;
          }
          goto switchD_0040d815_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040d815_caseD_2;
          case 3:
            goto switchD_0040d815_caseD_3;
          }
          goto switchD_0040d815_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0040d815_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_0040d815_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_0040d815_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_0040d815_caseD_0:
  return param_1;
}



/* ==== FUN_0040d879 @ 0040d879 ==== 
 * signature: undefined FUN_0040d879(void)
 * body: 0040d879-0040d89e
 */

void __fastcall FUN_0040d879(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  unaff_EDI[1] = unaff_ESI[1];
  puVar2 = (undefined4 *)(unaff_ESI + 2);
  puVar3 = (undefined4 *)(unaff_EDI + 2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1a) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1a);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x16) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x16);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x12) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x12);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xe) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xe);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -10) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -10);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -6) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -6);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -2) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -2);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0040d91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0040d815::switchdataD_0040d928)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0040d898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0040d815::switchdataD_0040d928)[param_2 & param_1])();
    return;
  }
}



/* ==== switchD_0040d82d::caseD_3 @ 0040d8a0 ==== 
 * signature: undefined caseD_3(void)
 * body: 0040d8a0-0040d8b8;0040d8dc-0040d925;0040d938-0040d93e;0040d940-0040d94a;0040d94c-0040d95c
 */

void __fastcall switchD_0040d82d::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 *unaff_ESI;
  undefined4 *puVar2;
  undefined1 *unaff_EDI;
  undefined4 *puVar3;
  
  *unaff_EDI = *unaff_ESI;
  uVar1 = param_1 >> 2;
  puVar2 = (undefined4 *)(unaff_ESI + 1);
  puVar3 = (undefined4 *)(unaff_EDI + 1);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x1b) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x1b);
  case 6:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x17) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x17);
  case 5:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0x13) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0x13);
  case 4:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xf) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xf);
  case 3:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -0xb) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -0xb);
  case 2:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -7) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -7);
  case 1:
    *(undefined4 *)(unaff_EDI + uVar1 * 4 + -3) = *(undefined4 *)(unaff_ESI + uVar1 * 4 + -3);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0040d91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0040d815::switchdataD_0040d928)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0040d8b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0040d815::switchdataD_0040d928)[param_2 & param_1])();
    return;
  }
}



/* ==== FUN_0040d8b9 @ 0040d8b9 ==== 
 * signature: undefined FUN_0040d8b9(void)
 * body: 0040d8b9-0040d8bb
 */

void __fastcall FUN_0040d8b9(int param_1)

{
  char *pcVar1;
  byte in_AL;
  int unaff_EBX;
  
  pcVar1 = (char *)(param_1 + unaff_EBX * 8);
  *pcVar1 = *pcVar1 + (in_AL | 0xd9) + 1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ==== FUN_0040d926 @ 0040d926 ==== 
 * signature: undefined FUN_0040d926(void)
 * body: 0040d926-0040d927
 */

int __fastcall FUN_0040d926(int param_1)

{
  char *pcVar1;
  int in_EAX;
  int unaff_EBX;
  
  *(char *)(in_EAX + -0x26) = *(char *)(in_EAX + -0x26) + (char)in_EAX + '\x01';
  pcVar1 = (char *)(param_1 + 0x40 + unaff_EBX * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)(in_EAX + -0x25) = *(char *)(in_EAX + -0x25) + (char)((uint)(in_EAX + 2) >> 8);
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + (char)param_1;
  return in_EAX + 3;
}



/* ==== FUN_0040d95d @ 0040d95d ==== 
 * signature: undefined FUN_0040d95d(void)
 * body: 0040d95d-0040d976
 */

undefined4 FUN_0040d95d(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_0040d99e @ 0040d99e ==== 
 * signature: undefined FUN_0040d99e(void)
 * body: 0040d99e-0040d9a8
 */

void __fastcall FUN_0040d99e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040d9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_caseD_0_0040da70)[-param_1])();
  return;
}



/* ==== FUN_0040d9a9 @ 0040d9a9 ==== 
 * signature: undefined FUN_0040d9a9(void)
 * body: 0040d9a9-0040d9ca;0040d9d8-0040d9f4
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_0040d9a9(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  switch(param_1) {
  case 0:
    goto switchD_0040d997_caseD_0;
  case 1:
switchD_0040d997_caseD_1:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    return *(undefined4 *)(unaff_EBP + 8);
  case 2:
switchD_0040d997_caseD_2:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    return *(undefined4 *)(unaff_EBP + 8);
  case 3:
switchD_0040d997_caseD_3:
    *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
    *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
    *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
    return *(undefined4 *)(unaff_EBP + 8);
  default:
    uVar2 = param_1 - ((uint)unaff_EDI & 3);
    switch((uint)unaff_EDI & 3) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -1);
      uVar3 = uVar2 >> 2;
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -1);
      if (uVar3 < 8) {
LAB_0040d9a0:
                    /* WARNING: Could not recover jumptable at 0x0040d9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&PTR_caseD_0_0040da70)[-(uVar2 >> 2)])();
        return uVar1;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_0040d997_caseD_1;
      case 2:
        goto switchD_0040d997_caseD_2;
      case 3:
        goto switchD_0040d997_caseD_3;
      }
      break;
    case 2:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -2);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -2);
      if (uVar3 < 8) goto LAB_0040d9a0;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_0040d997_caseD_1;
      case 2:
        goto switchD_0040d997_caseD_2;
      case 3:
        goto switchD_0040d997_caseD_3;
      }
      break;
    case 3:
      *(undefined1 *)((int)unaff_EDI + 3) = *(undefined1 *)((int)unaff_ESI + 3);
      *(undefined1 *)((int)unaff_EDI + 2) = *(undefined1 *)((int)unaff_ESI + 2);
      uVar3 = uVar2 >> 2;
      *(undefined1 *)((int)unaff_EDI + 1) = *(undefined1 *)((int)unaff_ESI + 1);
      unaff_ESI = (undefined4 *)((int)unaff_ESI + -3);
      unaff_EDI = (undefined4 *)((int)unaff_EDI + -3);
      if (uVar3 < 8) goto LAB_0040d9a0;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *unaff_EDI = *unaff_ESI;
        unaff_ESI = unaff_ESI + -1;
        unaff_EDI = unaff_EDI + -1;
      }
      switch(uVar2 & 3) {
      case 1:
        goto switchD_0040d997_caseD_1;
      case 2:
        goto switchD_0040d997_caseD_2;
      case 3:
        goto switchD_0040d997_caseD_3;
      }
    }
switchD_0040d997_caseD_0:
    return *(undefined4 *)(unaff_EBP + 8);
  }
}



/* ==== FUN_0040d9f5 @ 0040d9f5 ==== 
 * signature: undefined FUN_0040d9f5(void)
 * body: 0040d9f5-0040da1e
 */

void __fastcall FUN_0040d9f5(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  puVar2 = (undefined4 *)(unaff_ESI + -2);
  puVar3 = (undefined4 *)(unaff_EDI + -2);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x1a + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x1a + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x16 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x16 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x12 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x12 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xe + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xe + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 10 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 10 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 6 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 6 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 2 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 2 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0040dab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0040d997::switchdataD_0040dac0)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x0040da18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0040d997::switchdataD_0040dac0)[param_2 & param_1])();
    return;
  }
}



/* ==== switchD_0040d9bd::caseD_3 @ 0040da20 ==== 
 * signature: undefined caseD_3(void)
 * body: 0040da20-0040da50;0040da74-0040dabd;0040dad0-0040dad6;0040dad8-0040dae4;0040dafc-0040db14
 */

void __fastcall switchD_0040d9bd::caseD_3(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined4 *puVar3;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  uVar1 = param_1 >> 2;
  *(undefined1 *)(unaff_EDI + 1) = *(undefined1 *)(unaff_ESI + 1);
  puVar2 = (undefined4 *)(unaff_ESI + -3);
  puVar3 = (undefined4 *)(unaff_EDI + -3);
  switch(uVar1) {
  case 7:
    *(undefined4 *)(unaff_EDI + 0x19 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x19 + uVar1 * -4);
  case 6:
    *(undefined4 *)(unaff_EDI + 0x15 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x15 + uVar1 * -4);
  case 5:
    *(undefined4 *)(unaff_EDI + 0x11 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0x11 + uVar1 * -4);
  case 4:
    *(undefined4 *)(unaff_EDI + 0xd + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 0xd + uVar1 * -4);
  case 3:
    *(undefined4 *)(unaff_EDI + 9 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 9 + uVar1 * -4);
  case 2:
    *(undefined4 *)(unaff_EDI + 5 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 5 + uVar1 * -4);
  case 1:
    *(undefined4 *)(unaff_EDI + 1 + uVar1 * -4) = *(undefined4 *)(unaff_ESI + 1 + uVar1 * -4);
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0040dab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0040d997::switchdataD_0040dac0)[param_2 & param_1])();
    return;
  default:
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x0040da4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0040d997::switchdataD_0040dac0)[param_2 & param_1])();
    return;
  }
}



/* ==== FUN_0040da51 @ 0040da51 ==== 
 * signature: undefined FUN_0040da51(void)
 * body: 0040da51-0040da53
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_0040da51(char param_1,int param_2)

{
  char *pcVar1;
  int in_EAX;
  int unaff_EBX;
  bool in_ZF;
  
  if (!in_ZF) {
    pcVar1 = (char *)(param_2 + 0x40 + unaff_EBX * 8);
    *pcVar1 = *pcVar1 + (char)((uint)unaff_EBX >> 8);
    pcVar1 = (char *)(param_2 + -0x2573ffc0 + unaff_EBX * 8);
    *pcVar1 = *pcVar1 + (char)in_EAX + '\x01';
    pcVar1 = (char *)(param_2 + -0x2563ffc0 + unaff_EBX * 8);
    *pcVar1 = *pcVar1 + (char)param_2;
    pcVar1 = (char *)(param_2 + -0x2548ffc0 + unaff_EBX * 8);
    *pcVar1 = *pcVar1 + (char)((uint)(in_EAX + 3) >> 8);
    *(char *)(unaff_EBX + -0x76e371bc) = *(char *)(unaff_EBX + -0x76e371bc) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ==== FUN_0040dabe @ 0040dabe ==== 
 * signature: undefined FUN_0040dabe(void)
 * body: 0040dabe-0040dabf
 */

undefined4 FUN_0040dabe(void)

{
  int unaff_EBP;
  
  func_0xfc411ba7();
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_0040dae5 @ 0040dae5 ==== 
 * signature: undefined FUN_0040dae5(void)
 * body: 0040dae5-0040dafa
 */

undefined4 FUN_0040dae5(void)

{
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 3) = *(undefined1 *)(unaff_ESI + 3);
  *(undefined1 *)(unaff_EDI + 2) = *(undefined1 *)(unaff_ESI + 2);
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_0040db20 @ 0040db20 ==== 
 * signature: int * __cdecl FUN_0040db20(int param_1, int param_2)
 * body: 0040db20-0040dbb7
 */

int * __cdecl FUN_0040db20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint dwBytes;
  int *piVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    piVar3 = (int *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_004131f4 < dwBytes) {
LAB_0040db80:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        piVar3 = FUN_0040c450(dwBytes >> 4);
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)piVar4 = 0;
            piVar4 = (int *)((int)piVar4 + 1);
          }
          goto LAB_0040db80;
        }
      }
      piVar3 = HeapAlloc(DAT_00413ce4,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_004134b4 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_0040c090(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



/* ==== FUN_0040dbc0 @ 0040dbc0 ==== 
 * signature: int __cdecl FUN_0040dbc0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 0040dbc0-0040dc4e
 */

int __cdecl FUN_0040dbc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004137fc != (FARPROC)0x0) {
LAB_0040dc10:
    if (DAT_00413800 != (FARPROC)0x0) {
      iVar1 = (*DAT_00413800)();
    }
    if ((iVar1 != 0) && (DAT_00413804 != (FARPROC)0x0)) {
      iVar1 = (*DAT_00413804)(iVar1);
    }
    iVar1 = (*DAT_004137fc)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004137fc = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_004137fc != (FARPROC)0x0) {
      DAT_00413800 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_00413804 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_0040dc10;
    }
  }
  return 0;
}



/* ==== KERNEL32.DLL::RtlUnwind @ 0040dc50 ==== 
 * signature: void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
 * body: 0040dc50-0040dc55
 * thunk to: KERNEL32.DLL::RtlUnwind
 */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x0040dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* ==== __strnicmp @ 0040dc60 ==== 
 * signature: int __cdecl __strnicmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * body: 0040dc60-0040dd0c
 * note: Library Function - Single Match  __strnicmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __strnicmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    if (DAT_00413448 == 0) {
      do {
        bVar2 = *_Str1;
        cVar1 = *_Str2;
        uVar3 = CONCAT11(bVar2,cVar1);
        if (bVar2 == 0) break;
        uVar3 = CONCAT11(bVar2,cVar1);
        uVar6 = (uint)uVar3;
        if (cVar1 == '\0') break;
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
          uVar6 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
        }
        uVar3 = (ushort)uVar6;
        bVar2 = (byte)uVar6;
        if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
          uVar3 = (ushort)CONCAT31((int3)(uVar6 >> 8),bVar2 + 0x20);
        }
        bVar2 = (byte)(uVar3 >> 8);
        bVar7 = bVar2 < (byte)uVar3;
        if (bVar2 != (byte)uVar3) goto LAB_0040dcbb;
        _MaxCount = _MaxCount - 1;
      } while (_MaxCount != 0);
      iVar5 = 0;
      bVar2 = (byte)(uVar3 >> 8);
      bVar7 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) {
LAB_0040dcbb:
        iVar5 = -1;
        if (!bVar7) {
          iVar5 = 1;
        }
      }
    }
    else {
      uVar6 = 0;
      uVar4 = 0;
      do {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),*_Str1);
        uVar6 = CONCAT31((int3)(uVar6 >> 8),*_Str2);
        if ((uVar4 == 0) || (uVar6 == 0)) break;
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        uVar6 = FUN_0040dda0(uVar6);
        uVar4 = FUN_0040dda0(uVar4);
        bVar7 = uVar4 < uVar6;
        if (uVar4 != uVar6) goto LAB_0040dcfd;
        _MaxCount = _MaxCount - 1;
      } while (_MaxCount != 0);
      iVar5 = 0;
      bVar7 = uVar4 < uVar6;
      if (uVar4 != uVar6) {
LAB_0040dcfd:
        iVar5 = -1;
        if (!bVar7) {
          iVar5 = 1;
        }
      }
    }
  }
  return iVar5;
}



/* ==== __strcmpi @ 0040dd10 ==== 
 * signature: int __cdecl __strcmpi(char * _Str1, char * _Str2)
 * body: 0040dd10-0040dd9b
 * note: Library Function - Single Match  __strcmpi  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __strcmpi
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl __strcmpi(char *_Str1,char *_Str2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar7;
  uint uVar8;
  int iVar6;
  
  if (DAT_00413448 == 0) {
    bVar4 = 0xff;
    do {
      do {
        cVar5 = '\0';
        if (bVar4 == 0) goto LAB_0040dd5e;
        bVar4 = *_Str2;
        _Str2 = _Str2 + 1;
        bVar3 = *_Str1;
        _Str1 = _Str1 + 1;
      } while (bVar3 == bVar4);
      bVar2 = bVar4 + 0xbf + (-((byte)(bVar4 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar3 = bVar3 + 0xbf;
      bVar4 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
    } while (bVar4 == bVar2);
    cVar5 = (bVar4 < bVar2) * -2 + '\x01';
LAB_0040dd5e:
    iVar6 = (int)cVar5;
  }
  else {
    uVar8 = 0;
    uVar7 = 0xff;
    do {
      do {
        if ((char)uVar7 == '\0') {
          return uVar7;
        }
        cVar5 = *_Str2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),cVar5);
        _Str2 = _Str2 + 1;
        cVar1 = *_Str1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),cVar1);
        _Str1 = _Str1 + 1;
      } while (cVar5 == cVar1);
      uVar8 = FUN_0040dda0(uVar8);
      uVar7 = FUN_0040dda0(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar7 = (uint)((byte)uVar8 < (byte)uVar7);
    iVar6 = (1 - uVar7) - (uint)(uVar7 != 0);
  }
  return iVar6;
}



/* ==== FUN_0040dda0 @ 0040dda0 ==== 
 * signature: uint __cdecl FUN_0040dda0(uint param_1)
 * body: 0040dda0-0040de9d
 */

uint __cdecl FUN_0040dda0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_00413448 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_0041103c < 2) {
        uVar2 = (byte)PTR_DAT_00410e30[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_0040a3b0(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_00410e30[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_0040b150(DAT_00413448,0x100,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}


