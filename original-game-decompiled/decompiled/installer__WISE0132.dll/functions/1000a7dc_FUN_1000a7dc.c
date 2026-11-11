
/* ==== FUN_1000a7dc @ 1000a7dc ==== 
 * signature: undefined4 __stdcall FUN_1000a7dc(void)
 * body: 1000a7dc-1000aef6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000a7dc(void)

{
  uint uVar1;
  LSTATUS LVar2;
  HWND pHVar3;
  INT_PTR IVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  HANDLE hObject;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  code *pcVar13;
  LPARAM LVar14;
  undefined4 local_124;
  BYTE local_120 [256];
  char local_20 [32];
  
  _DAT_10024080 = 0x38;
  _DAT_10024084 = DAT_100238d8;
  _DAT_10024088 = 0xfa;
  _DAT_1002408a = 0x11;
  _DAT_1002408c = 0x100;
  _DAT_10024090 = DAT_10023efc;
  _DAT_10024094 = DAT_100238f8;
  DAT_10024098 = DAT_10023e9c;
  if (DAT_100241e8 != 0) {
    _DAT_100241a4 = DAT_100238d8;
    _DAT_100241a0 = 0x44;
    _DAT_100241c0 = (uint)DAT_10023e9c;
    _DAT_100241a8 = 0xfa;
    _DAT_100241ac = 0x11;
    _DAT_100241b0 = 0x100;
    _DAT_100241b8 = DAT_10023efc;
    _DAT_100241bc = DAT_100238f8;
    _DAT_100241d4 = *(undefined4 *)(DAT_1002392c + 0x30);
  }
  DAT_10023310 = DAT_10023fa8 + 0x25;
  DAT_10023f38 = *(undefined4 *)(DAT_10023fa8 + 5);
  DAT_10023f50 = *(undefined4 *)(DAT_10023fa8 + 9);
  uVar7 = *(uint *)(DAT_10023fa8 + 0xd);
  if ((uVar7 == 0) || (uVar1 = FUN_1000bbbb(3), uVar7 == uVar1)) {
    DAT_10023eac = *(undefined4 *)(DAT_10023fa8 + 0x11);
    DAT_10024198 = *(undefined4 *)(DAT_10023fa8 + 0x15);
    DAT_100240bc = *(undefined4 *)(DAT_10023fa8 + 0x19);
    DAT_10023f34 = *(undefined4 *)(DAT_10023fa8 + 0x1d);
    DAT_10023f4c = *(undefined4 *)(DAT_10023fa8 + 0x21);
    DAT_10024180 = *DAT_10023fa8 & 0xf;
    if ((*DAT_10023fa8 & 0x20) == 0) {
      DAT_1001f038 = 0;
    }
    if ((*DAT_10023fa8 & 0x40) != 0) {
      DAT_10023e30 = 1;
    }
    if ((*DAT_10023fa8 & 0x80) != 0) {
      DAT_10024038 = 1;
    }
    DAT_10023ed8 = (LPSTR)FUN_10015d50(0x20);
    lstrcpyA(DAT_10023ed8,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    DAT_10023f30 = DAT_10023310;
    _DAT_100241dc = DAT_10023310;
    FUN_1000b963();
    FUN_1000b963();
    FUN_1000b963();
    FUN_1000b963();
    DAT_10023310 = DAT_10023310 + 1;
    lstrcpyA(DAT_10023fa4,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    lstrcpyA(DAT_10023eb0,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    lstrcpyA(DAT_10023f08,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    puVar11 = &DAT_10023f80;
    DAT_10023910 = *DAT_10023310;
    DAT_10023ea9 = DAT_10023310[1];
    DAT_100239b0 = *(undefined4 *)(DAT_10023310 + 2);
    DAT_10024020 = (int)(char)DAT_10023310[6];
    DAT_10023310 = DAT_10023310 + 7;
    do {
      *puVar11 = DAT_10023310;
      FUN_1000b963();
      puVar11 = puVar11 + 1;
    } while ((int)puVar11 < 0x10023f9c);
    lstrcpyA((LPSTR)(DAT_10023efc + 0x11),s__LANG__1001f79c);
    if (DAT_10024020 < 2) {
      lstrcpyA((LPSTR)(DAT_100238f8 + 0x100),(LPCSTR)DAT_10023310);
      FUN_1000b963();
    }
    else {
      lstrcpyA(DAT_10023fb4,(LPCSTR)DAT_10023310);
      FUN_1000b963();
      lstrcpyA(DAT_10023ef8,(LPCSTR)DAT_10023310);
      FUN_1000b963();
      GetProfileStringA(&DAT_1001f788,s_sLanguage_1001f790,&DAT_10023314,(LPSTR)DAT_10024034,0x100);
      if ((DAT_100238b8 != 0) && (DAT_100241e8 != 0)) {
        lstrcpyA((LPSTR)&local_124,&DAT_1001f4b0);
        LVar2 = FUN_10004d80((HKEY)0x1,s_Control_Panel_International_1001f76c,DAT_10024034,
                             s_sLanguage_1001f790,(char *)&local_124,0x100,0);
        if (LVar2 != 0) {
          *DAT_10024034 = '\0';
        }
      }
      LVar14 = 0;
      pcVar13 = LanguageDlg;
      pHVar3 = (HWND)FUN_100157cf();
      IVar4 = DialogBoxParamA(DAT_10024178,&DAT_0000006b,pHVar3,pcVar13,LVar14);
      if (IVar4 != 1) goto LAB_1000a8d6;
    }
    FUN_1000b97c((int *)&DAT_10023310,0x35);
    SetWindowTextA(DAT_100238d8,(LPCSTR)DAT_10023310);
    lstrcpyA(DAT_10023f04,(LPCSTR)DAT_10023310);
    FUN_1000b963();
    DAT_100240b8 = FUN_10015d50(0xd0);
    iVar10 = 0;
    *(int *)(DAT_1002392c + 0x98) = DAT_100240b8;
    _DAT_100240a4 = DAT_100240b8;
    do {
      iVar5 = lstrlenA((LPCSTR)DAT_10023310);
      uVar6 = FUN_10015d50(iVar5 + 1U);
      *(undefined4 *)(DAT_100240b8 + iVar10) = uVar6;
      lstrcpyA(*(LPSTR *)(DAT_100240b8 + iVar10),(LPCSTR)DAT_10023310);
      DAT_10023310 = DAT_10023310 + iVar5 + 1U;
      iVar10 = iVar10 + 4;
    } while (iVar10 < 0xd0);
    iVar10 = 0;
    if (0 < ((DAT_10024020 - DAT_10023eec) + -1) * 0x35) {
      do {
        FUN_1000b963();
        iVar10 = iVar10 + 1;
      } while (iVar10 < ((DAT_10024020 - DAT_10023eec) + -1) * 0x35);
    }
    if (DAT_100241e8 != 0) {
      _DAT_100241cc = *(undefined4 *)(DAT_100240b8 + 0x44);
      _DAT_100241d0 = *(undefined4 *)(DAT_100240b8 + 0xb0);
    }
    _DAT_10023e80 = (int)DAT_10023fa8 - (int)DAT_10023310;
    DAT_100240c0 = DAT_100240c0 + _DAT_10023e80;
    lstrcpyA((LPSTR)(DAT_10023efc + 0x22),&DAT_1001f768);
    lstrcpyA((LPSTR)(DAT_100238f8 + 0x200),&DAT_1001f764);
    DAT_1002402c = 3;
    do {
      uVar7 = (uint)DAT_1002402c;
      iVar10 = uVar7 * 0x100;
      lstrcpyA((LPSTR)(uVar7 * 0x11 + DAT_10023efc),
               (LPCSTR)(&PTR_s_GLBSINST____1001f040 + uVar7 * 2));
      if (DAT_1002402c == 3) {
        GetWindowsDirectoryA((LPSTR)(DAT_100238f8 + iVar10),0x100);
      }
      else if ((DAT_1002402c == 4) || (DAT_1002402c == 5)) {
        GetSystemDirectoryA((LPSTR)(DAT_100238f8 + iVar10),0x100);
      }
      else if (DAT_1002402c == 6) {
        FUN_100039fd((LPCSTR)(DAT_100238f8 + iVar10),(LPCSTR)0x0);
      }
      else if (DAT_1002402c == 7) {
        GetModuleFileNameA(DAT_1002403c,(LPSTR)(DAT_100238f8 + iVar10),0x100);
        pcVar9 = (char *)(iVar10 + DAT_100238f8);
        for (pcVar8 = pcVar9; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
        }
        while (pcVar9 < pcVar8) {
          if (*pcVar8 == '\\') goto LAB_1000acb1;
          *pcVar8 = '\0';
          pcVar8 = pcVar8 + -1;
          pcVar9 = (char *)(DAT_100238f8 + iVar10);
        }
        if (*pcVar8 == '\\') {
LAB_1000acb1:
          *pcVar8 = '\0';
        }
      }
      local_124 = (LPCSTR)(DAT_100238f8 + iVar10);
      iVar5 = lstrlenA(local_124);
      if (local_124[iVar5 + -1] == '\\') {
        local_124[iVar5 + -1] = '\0';
      }
      if (DAT_10023e9c == 2) {
        *DAT_10023ef8 = '\0';
        lstrcpyA(DAT_10023908,*(LPCSTR *)(DAT_100240b8 + 0x20));
        lstrcatA(DAT_10023908,s_Windows_1001f080 + (DAT_1002402c - 3) * 9);
        lstrcatA(DAT_10023908,*(LPCSTR *)(DAT_100240b8 + 0x24));
        lstrcpyA(DAT_10023fb4,*(LPCSTR *)(DAT_100240b8 + 0x28));
        lstrcpyA((LPSTR)DAT_10024034,(LPCSTR)(DAT_100238f8 + iVar10));
        LVar14 = 0;
        pcVar13 = PathNameDlg;
        pHVar3 = (HWND)FUN_100157cf();
        IVar4 = DialogBoxParamA(DAT_10024178,&DAT_00000603,pHVar3,pcVar13,LVar14);
        if (IVar4 != 1) goto LAB_1000a8d6;
        lstrcpyA((LPSTR)(iVar10 + DAT_100238f8),(LPCSTR)DAT_10024034);
        FUN_1000b5ca((LPCSTR)DAT_10024034);
      }
      DAT_1002402c = DAT_1002402c + 1;
    } while (DAT_1002402c < 8);
    FUN_1001054d(&DAT_1001f3ec,(LPSTR)local_120);
    bVar12 = false;
    if (DAT_10023930 != 0) {
      LVar2 = FUN_10004d80((HKEY)0x2,s_SOFTWARE_Microsoft_Windows_Curre_1001f728,local_120,
                           s_SharedDir_1001f758,local_20,0x100,0);
      if (LVar2 == 0) {
        lstrcatA((LPSTR)local_120,s__Fonts__1001f720);
        iVar10 = lstrlenA((LPCSTR)local_120);
        lstrcatA((LPSTR)local_120,PTR_s_GLBSINST____1001f040);
        lstrcatA((LPSTR)local_120,&DAT_1001f3f8);
        SetErrorMode(0x8001);
        hObject = (HANDLE)FUN_1001223a((LPCSTR)local_120,1,1);
        bVar12 = -1 < (int)hObject;
        if (bVar12) {
          CloseHandle(hObject);
          DeleteFileA((LPCSTR)local_120);
        }
        SetErrorMode(0x8000);
        local_120[iVar10 + -1] = '\0';
      }
      if (!bVar12) {
        FUN_1001054d(&DAT_1001f3e8,(LPSTR)local_120);
        lstrcatA((LPSTR)local_120,s__Fonts_1001f718);
      }
    }
    FUN_100105d2(s_FONTS_1001f710,(LPCSTR)local_120);
    FUN_100105d2(s_DISK_NUMBER_1001f700,&DAT_1001f70c);
    FUN_100105d2(&DAT_1001f6f8,&DAT_1001f3a4);
    uVar6 = 0;
  }
  else {
    MessageBoxA(DAT_100238d8,s_Demo_installations_only_run_on_t_1001f7a4,s_Install_1001f7e8,0);
LAB_1000a8d6:
    uVar6 = 0xfffffffe;
  }
  return uVar6;
}


