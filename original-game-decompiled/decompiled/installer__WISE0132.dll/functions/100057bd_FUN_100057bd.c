
/* ==== FUN_100057bd @ 100057bd ==== 
 * signature: int __stdcall FUN_100057bd(void)
 * body: 100057bd-10006a1e
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_100057bd(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  HANDLE pvVar4;
  PGENERIC_MAPPING pGVar5;
  DWORD DVar6;
  byte *pbVar7;
  byte *pbVar8;
  GENERIC_MAPPING *pGVar9;
  HWND pHVar10;
  BOOL BVar11;
  LPCSTR pCVar12;
  HFILE HVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  byte local_10c8 [256];
  CHAR local_fc8 [72];
  CHAR local_f80 [184];
  byte local_ec8;
  char local_e80 [256];
  CHAR local_d80 [256];
  GENERIC_MAPPING local_c80 [64];
  byte local_880 [1024];
  CHAR local_480 [256];
  GENERIC_MAPPING local_380 [16];
  GENERIC_MAPPING local_280 [16];
  GENERIC_MAPPING local_180;
  GENERIC_MAPPING local_170 [16];
  uint local_70;
  undefined4 local_6c;
  _PRIVILEGE_SET local_68;
  DWORD local_54;
  uint local_50;
  byte *local_4c;
  GENERIC_MAPPING local_48;
  ACCESS_MASK local_38;
  undefined1 *PrivilegeSetLength;
  byte bVar18;
  PGENERIC_MAPPING in_stack_ffffffd8;
  PGENERIC_MAPPING GenericMapping;
  PGENERIC_MAPPING pGVar19;
  HFILE hFile;
  undefined4 uVar20;
  HANDLE DesiredAccess;
  undefined1 *hObject;
  GENERIC_MAPPING *pGVar21;
  code *pcVar22;
  GENERIC_MAPPING *pGVar23;
  LPARAM dwInitParam;
  char *pcVar24;
  PHANDLE TokenHandle;
  byte bVar25;
  
  FUN_10016480();
  bVar1 = *(byte *)(DAT_10023310 + 1);
  bVar2 = *(byte *)(DAT_10023310 + 2);
  iVar3 = FUN_1001254f(0);
  if (iVar3 != 0) {
    return -2;
  }
  FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_10023314);
  FUN_1000bb0e();
  FUN_10009eff((byte *)local_170,(byte *)(DAT_10023310 + 0x2b));
  local_38 = *(ACCESS_MASK *)(DAT_10023310 + 0x27);
  GenericMapping = *(PGENERIC_MAPPING *)(DAT_10023310 + 0xf);
  local_48.GenericExecute = 0;
  local_48.GenericWrite = 0;
  if ((((DAT_100238dc & 0x400000) != 0) && ((bVar2 & 0x48) == 0)) && ((bVar1 & 0x40) == 0)) {
    if ((local_38 != 0) &&
       (pvVar4 = (HANDLE)FUN_1001223a((LPCSTR)local_170,0,0), pvVar4 != (HANDLE)0xffffffff)) {
      pGVar5 = (PGENERIC_MAPPING)FUN_10012303(pvVar4,0,2);
      if (pGVar5 == GenericMapping) {
        (**(code **)(DAT_1002392c + 0x94))();
        FUN_10012303(pvVar4,0,0);
        while (DVar6 = FUN_100122b9(pvVar4,DAT_10024170,0x7800), 0 < (int)DVar6) {
          (**(code **)(DAT_1002392c + 0x94))();
        }
      }
      CloseHandle(pvVar4);
    }
    if (((bVar1 & 1) != 0) && (*(uint *)(DAT_10023310 + 0x13) != 0)) {
      local_6c = *(undefined4 *)(DAT_10023310 + 0x17);
      local_68.PrivilegeCount = *(DWORD *)(DAT_10023310 + 0x1b);
      local_68.Control = *(DWORD *)(DAT_10023310 + 0x1f);
      local_68.Privilege[0].Luid.LowPart = *(DWORD *)(DAT_10023310 + 0x23);
      local_70 = *(uint *)(DAT_10023310 + 0x13);
      FUN_1001373b((LPCSTR)0x0,(LPCSTR)local_170,&local_70);
    }
  }
  iVar3 = FUN_10012539((LPCSTR)local_170);
  pbVar7 = (byte *)(~-(uint)(iVar3 != 0) & (uint)local_170);
  if (((bVar1 & 0x18) == 0x18) && (pbVar7 != (byte *)0x0)) {
    FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_1001f3f8);
  }
  pGVar9 = (GENERIC_MAPPING *)0x1;
  if (DAT_10023e9c != '\x01') {
    FUN_1000b5ca((LPCSTR)local_170);
  }
  pbVar8 = (byte *)FUN_1000bc0e((char *)(DAT_10023310 + 0x2b));
  for (iVar3 = DAT_10024020; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar8 = (byte *)FUN_1000bc0e((char *)pbVar8);
  }
  FUN_10009eff(local_10c8,pbVar8);
  if (((DAT_10023e9c == '\x01') && ((bVar1 & 4) == 0)) || ((bVar1 & 0x40) == 0)) {
    if (DAT_10023e9c == '\x01') {
      FUN_100039fd((LPCSTR)local_c80,&DAT_1001f5c4);
    }
    else {
      FUN_1001393a((LPSTR)local_c80,(LPCSTR)local_170);
    }
  }
  else {
    pbVar8 = (byte *)FUN_1000bc0e((char *)pbVar8);
    FUN_10009eff((byte *)local_c80,pbVar8);
    iVar3 = FUN_1001b090((byte *)local_c80,s_ftp____1001f5d0,6);
    if (iVar3 != 0) {
      FUN_1001b090((byte *)local_c80,s_http____1001f5c8,7);
    }
  }
  pGVar23 = local_c80;
  pGVar21 = (GENERIC_MAPPING *)0x10005a99;
  FUN_1000b94f((LPCSTR)pGVar23);
  if (((bVar1 & 0x18) != 0) && ((bVar1 & 0x18) != 0x18)) {
    if (((bVar1 & 2) == 0) || ((DAT_10023930 == 0 || (DAT_100241e8 == 0)))) {
      pGVar9 = (GENERIC_MAPPING *)0x0;
    }
    GenericMapping = (PGENERIC_MAPPING)0x10005adc;
    pGVar23 = pGVar9;
    iVar3 = FUN_1000bc1c((LPCSTR)local_170,(LPCSTR)local_c80,(int)pGVar9,(int)pGVar9);
    pGVar21 = pGVar9;
    if (iVar3 != 0) {
      pGVar23 = (GENERIC_MAPPING *)&DAT_1001f5c0;
      FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_1001f5c0);
      pGVar21 = (GENERIC_MAPPING *)0x1;
    }
  }
  if (DAT_100238b4 == 0) {
    if (DAT_10023fac == (PGENERIC_MAPPING)0x0) {
      if (((bVar1 & 0x20) == 0) && (*(int *)(DAT_1002392c + 0x30) == 0)) {
        if (DAT_100238cc != (HWND)0x0) {
          DestroyWindow(DAT_100238cc);
          DAT_100238cc = (HWND)0x0;
        }
        dwInitParam = 0;
        pcVar22 = CopyDlg;
        pHVar10 = (HWND)FUN_100157cf();
        in_stack_ffffffd8 = (PGENERIC_MAPPING)0x10005b50;
        GenericMapping = DAT_10024178;
        DAT_10023fac = (PGENERIC_MAPPING)
                       CreateDialogParamA((HINSTANCE)DAT_10024178,(LPCSTR)0x602,pHVar10,pcVar22,
                                          dwInitParam);
        FUN_10010d18((HWND)DAT_10023fac,'\x02',0);
        ShowWindow((HWND)DAT_10023fac,5);
        pGVar23 = (GENERIC_MAPPING *)0x0;
        pGVar21 = DAT_100238d8;
        EnableWindow((HWND)DAT_100238d8,0);
      }
    }
    else {
      pGVar23 = (GENERIC_MAPPING *)0x0;
      pGVar21 = (GENERIC_MAPPING *)0x0;
      InvalidateRgn((HWND)DAT_10023fac,(HRGN)0x0,0);
    }
  }
  pcVar22 = lstrcpyA_exref;
  if (pGVar21 == (GENERIC_MAPPING *)0x0) {
    if (pGVar23 == (GENERIC_MAPPING *)0x0) {
      pCVar12 = *(LPCSTR *)(DAT_100240b8 + 0xc);
    }
    else {
      pCVar12 = *(LPCSTR *)(DAT_100240b8 + 0x34);
    }
  }
  else {
    pCVar12 = *(LPCSTR *)(DAT_100240b8 + 0x38);
  }
  lstrcpyA((LPSTR)local_880,pCVar12);
  iVar3 = lstrlenA((LPCSTR)local_880);
  local_4c = local_880 + iVar3;
  pbVar8 = (byte *)FUN_1000bc0e((char *)(DAT_10023310 + 0x2b));
  FUN_1000b97c((int *)&stack0xfffffff0,1);
  if (*pbVar8 == 0) {
    lstrcatA((LPSTR)local_880,*(LPCSTR *)(DAT_100240b8 + 0x10));
  }
  else {
    iVar3 = lstrlenA((LPCSTR)local_880);
    FUN_10009eff(local_880 + iVar3,pbVar8);
  }
  lstrcatA((LPSTR)local_880,&DAT_1001f5bc);
  lstrlenA((LPCSTR)local_880);
  lstrcpyA((LPSTR)local_280,(LPCSTR)local_170);
  if (DAT_100238b4 == 0) {
    pGVar9 = local_280;
    pHVar10 = GetDlgItem((HWND)DAT_10023fac,0xef5);
    FUN_10009801(pHVar10,(LPCSTR)pGVar9);
  }
  pcVar24 = (char *)local_280;
  pbVar8 = local_880;
  pvVar4 = (HANDLE)0x10005c8a;
  lstrcatA((LPSTR)pbVar8,pcVar24);
  bVar18 = bVar1 & 0x20;
  if (((bVar1 & 0x20) == 0) && (*(int *)(DAT_1002392c + 0x30) == 0)) {
    pbVar8 = (byte *)0x10005cac;
    FUN_10013bba((LPCSTR)local_880);
    pcVar24 = (char *)0x10005cb2;
    FUN_10012db9();
  }
  if (pbVar8 != (byte *)0x0) {
    if (pvVar4 != (HANDLE)0x0) {
      DeleteFileA((LPCSTR)local_c80);
    }
    if ((((bVar1 & 2) != 0) && (DAT_10023930 != 0)) && (DAT_100241e8 != 0)) {
      if ((bVar1 & 4) == 0) {
        GenericMapping = local_170;
        FUN_1000aef7((LPCSTR)GenericMapping,(LPCSTR)0x0,(char *)pbVar7,(char *)0x0,(char *)0x0);
      }
      FUN_10006d9f((LPCSTR)local_170,1,0);
    }
    if (((bVar2 & 0x10) != 0) && (DAT_10023e9c != '\x01')) {
      FUN_100158d2((LPCSTR)local_170);
    }
    if ((DAT_100238dc & 0x10000) == 0) {
      return 0;
    }
    *(int *)(DAT_1002392c + 0x14) =
         (int)((int)&GenericMapping->GenericRead + *(int *)(DAT_1002392c + 0x14));
    return 0;
  }
  if (DAT_100238b8 != 0) {
    pcVar24 = (char *)&local_48;
    GenericMapping = local_170;
    in_stack_ffffffd8 = (PGENERIC_MAPPING)0x10005d77;
    BVar11 = GetFileSecurityA((LPCSTR)GenericMapping,7,DAT_10024170,0x7800,(LPDWORD)pcVar24);
    if (BVar11 != 0) {
      pcVar24 = (char *)0x1;
      BVar11 = ImpersonateSelf(SecurityIdentification);
      if (BVar11 != 0) {
        TokenHandle = (PHANDLE)&stack0xffffffe4;
        BVar11 = 1;
        DesiredAccess = (HANDLE)0x8;
        pvVar4 = GetCurrentThread();
        GenericMapping = (PGENERIC_MAPPING)0x10005da0;
        BVar11 = OpenThreadToken(pvVar4,(DWORD)DesiredAccess,BVar11,TokenHandle);
        if (BVar11 != 0) {
          _memset(&local_180,0,0x10);
          PrivilegeSetLength = &stack0xffffffe0;
          GenericMapping = &local_180;
          in_stack_ffffffd8 = (PGENERIC_MAPPING)0x180;
          pbVar7 = DAT_10024170;
          hObject = PrivilegeSetLength;
          BVar11 = AccessCheck(DAT_10024170,PrivilegeSetLength,0x180,GenericMapping,&local_68,
                               (LPDWORD)PrivilegeSetLength,&local_54,(LPBOOL)&stack0xffffffd8);
          bVar18 = (byte)((uint)PrivilegeSetLength >> 0x18);
          if ((BVar11 != 0) && (in_stack_ffffffd8 == (PGENERIC_MAPPING)0x0)) goto LAB_10005e66;
          CloseHandle(hObject);
        }
        pcVar24 = (char *)0x10005e00;
        RevertToSelf();
      }
    }
  }
  if ((((*DAT_10023eb0 == '\0') && (DAT_10023e9c != '\x01')) && ((bVar1 & 4) == 0)) &&
     (DAT_10023e30 == 0)) {
    lstrcpyA(DAT_10023eb0,(LPCSTR)local_170);
    pCVar12 = FUN_1000b94f(DAT_10023eb0);
    pcVar24 = s_INSTALL_LOG_1001f5b0;
    lstrcpyA(pCVar12,s_INSTALL_LOG_1001f5b0);
  }
  bVar25 = bVar1 & 0x40;
  pGVar19 = GenericMapping;
  pGVar5 = GenericMapping;
  if ((bVar1 & 0x40) == 0) {
    pcVar24 = (char *)0x1;
    GenericMapping = local_c80;
    in_stack_ffffffd8 = (PGENERIC_MAPPING)FUN_1001223a((LPCSTR)local_c80,1,1);
    if ((int)in_stack_ffffffd8 < 0) {
LAB_10005e66:
      FUN_10011024((LPCSTR)local_170,1);
      return -2;
    }
    pGVar5 = GenericMapping;
    if ((GENERIC_MAPPING *)pcVar24 == (GENERIC_MAPPING *)0x0) {
      GenericMapping = (PGENERIC_MAPPING)(*(int *)(DAT_10023310 + 7) - *(int *)(DAT_10023310 + 3));
      *(int *)(DAT_1002392c + 8) = *(int *)(DAT_10023310 + 3) + DAT_100238bc;
      pcVar24 = (char *)0x10005ea3;
      pGVar5 = GenericMapping;
      FUN_1000bde0();
    }
  }
  DAT_10023f9c = pGVar19;
  DAT_10023ecc = *(int *)(DAT_1002392c + 0x14);
  pGVar19 = DAT_10023f9c;
  if (bVar25 == 0) {
    if ((GENERIC_MAPPING *)pcVar24 == (GENERIC_MAPPING *)0x0) {
      uVar20 = *(undefined4 *)(DAT_1002392c + 0x18);
      iVar3 = 0;
LAB_1000606d:
      uVar15 = DAT_100238dc;
      if (((bVar2 & 0x40) != 0) || (iVar3 != 0)) {
        *(byte *)(DAT_1002392c + 0x36) = *(byte *)(DAT_1002392c + 0x36) & 0xfe;
      }
      pGVar19 = (PGENERIC_MAPPING)0x10006098;
      FUN_10013192(uVar20,in_stack_ffffffd8,GenericMapping,&local_38);
      *(uint *)(DAT_1002392c + 0x34) = uVar15;
      uVar15 = (uint)*(ushort *)(DAT_10023310 + 0xd);
      HVar13 = 0x100060ba;
      pGVar5 = in_stack_ffffffd8;
      FUN_10012318(in_stack_ffffffd8,*(WORD *)(DAT_10023310 + 0xb),*(ushort *)(DAT_10023310 + 0xd));
      if (uVar15 != 0) {
        _lclose(HVar13);
      }
      CloseHandle(in_stack_ffffffd8);
      if ((*(char *)(DAT_1002392c + 0x20) == '\0') && (*(int *)(DAT_1002392c + 0x1c) == 0))
      goto LAB_100060ee;
    }
    else {
      uVar15 = *(uint *)(DAT_10023310 + 3);
      GenericMapping = *(PGENERIC_MAPPING *)(DAT_10023310 + 7);
      uVar16 = uVar15 & 0x3fff;
      FUN_10006a1f(uVar16 % 0x24);
      FUN_10006a1f((int)(((ulonglong)uVar16 / 0x24) % 0x24));
      FUN_10006a1f(uVar16 / 0x510);
      in_stack_ffffffd8 = local_380;
      pcVar24 = s__s_c_c_c_1001f5a4;
      bVar18 = 0x10;
      wsprintfA((LPSTR)in_stack_ffffffd8,s__s_c_c_c_1001f5a4);
      FUN_10009f15((byte *)local_380,(byte *)local_380,0x100);
      if ((int)DAT_1001f0b0 == uVar16) {
        iVar3 = 0;
        if ((DAT_100238dc & 0x10000) != 0) {
          *(int *)(DAT_1002392c + 0x14) = (int)(pcVar24 + *(int *)(DAT_1002392c + 0x14));
        }
LAB_10005fec:
        if (iVar3 != 0) {
LAB_10006039:
          CloseHandle(in_stack_ffffffd8);
          DeleteFileA((LPCSTR)local_c80);
          return -2;
        }
        FUN_10012386(DAT_1002416c,0);
        HVar13 = _lopen(DAT_1002416c,0);
        hFile = 0x1000601d;
        _lread(HVar13,&local_48,4);
        if (local_48.GenericRead != DAT_10023eac) {
          FUN_1000b352(*(char **)(DAT_100240b8 + 0xac));
          goto LAB_10006039;
        }
        iVar3 = 0;
        uVar20 = 0x1000605f;
        _llseek(hFile,uVar15 >> 0xe,0);
        pcVar22 = lstrcpyA_exref;
        goto LAB_1000606d;
      }
      if (DAT_1001f0b0 < 0) {
        FUN_100039fd(DAT_1002416c,&DAT_1001f5a0);
      }
      else {
        DeleteFileA(DAT_1002416c);
      }
      in_stack_ffffffd8 = local_380;
      bVar18 = 0x10;
      iVar3 = FUN_10013e86(in_stack_ffffffd8,DAT_1002416c,(int)GenericMapping,pcVar24,0,0);
      DAT_1001f0b0 = (short)uVar16;
      if ((*(char *)(DAT_1002392c + 0x20) == '\0') && (*(int *)(DAT_1002392c + 0x1c) == 0))
      goto LAB_10005fec;
      CloseHandle(in_stack_ffffffd8);
    }
LAB_1000686d:
    pGVar9 = local_c80;
    goto LAB_100069f4;
  }
LAB_100060ee:
  if ((bVar18 == 0) && (*(int *)(DAT_1002392c + 0x30) == 0)) {
    if (local_10c8[0] != 0) {
      (*pcVar22)();
      pGVar5 = (PGENERIC_MAPPING)0x10006130;
      lstrcatA(local_f80,(LPCSTR)local_4c);
      pCVar12 = local_f80;
      FUN_10013bba(pCVar12);
      if ((((DAT_100238dc & 0x10000) != 0) && ((bVar2 & 0x40) == 0)) && (pCVar12 == (LPCSTR)0x0)) {
        *(LPCSTR *)(DAT_1002392c + 0x14) = (LPCSTR)((int)&pGVar19->GenericRead + DAT_10023ecc);
      }
    }
    if (DAT_100238b4 == 0) {
      pGVar5 = DAT_10023fac;
      InvalidateRgn((HWND)DAT_10023fac,(HRGN)0x0,0);
    }
    UpdateScreen(1);
  }
  if (local_10c8[0] != 0) {
    (*pcVar22)();
    pGVar5 = local_c80;
    (*pcVar22)();
    pbVar7 = local_10c8;
    local_38 = 0x100061d7;
    iVar3 = (*DAT_10024054)();
    if (iVar3 != 0) {
      DeleteFileA(local_480);
      pcVar24 = local_e80;
      goto LAB_1000683e;
    }
  }
  local_280[0].GenericRead._0_1_ = '\0';
  if ((DAT_10023e9c == '\x01') || ((bVar1 & 1) == 0)) {
    FUN_10012539((LPCSTR)local_170);
    if ((DAT_10023e9c == '\x01') && ((bVar1 & 4) == 0)) goto LAB_10006724;
    if ((DAT_100239ac != '\0') && ((bVar1 & 4) == 0)) {
      (*pcVar22)();
      pbVar7 = (byte *)0x1000676e;
      iVar3 = FUN_1000b673((LPCSTR)local_280,(LPCSTR)0x0,1,0,0,&local_48.GenericExecute,
                           (int *)&local_48.GenericWrite);
      if (iVar3 != 0) {
        local_280[0].GenericRead._0_1_ = '\0';
      }
    }
    if (bVar25 != 0) {
      pGVar9 = local_170;
      FUN_1001393a((LPSTR)local_880,(LPCSTR)pGVar9);
      if (pGVar9 == (GENERIC_MAPPING *)0x0) {
        pbVar7 = (byte *)0x100067e7;
        iVar3 = FUN_1000b673((LPCSTR)local_c80,(LPCSTR)local_880,0,(int)GenericMapping,0,&local_38,
                             (int *)&stack0xffffffdc);
      }
      else {
        iVar3 = FUN_10013e86(local_c80,local_880,(int)GenericMapping,GenericMapping,
                             (uint)*(ushort *)(DAT_10023310 + 0xb),
                             (uint)*(ushort *)(DAT_10023310 + 0xd));
      }
      if (iVar3 != 0) {
        (*pcVar22)();
        FUN_10012386(local_480,1);
        wsprintfA(local_f80,*(LPCSTR *)(DAT_100240b8 + 0x68));
        pcVar24 = local_f80;
LAB_1000683e:
        FUN_1000b352(pcVar24);
        return -2;
      }
      (*pcVar22)();
      if ((*(char *)(DAT_1002392c + 0x20) != '\0') || (*(int *)(DAT_1002392c + 0x1c) != 0))
      goto LAB_1000686d;
    }
    do {
      SetFileAttributesA((LPCSTR)local_170,0);
      BVar11 = DeleteFileA((LPCSTR)local_170);
      if ((BVar11 == 0) && (iVar3 = FUN_10012539((LPCSTR)local_170), iVar3 == 0)) {
        pbVar7 = (byte *)0x100068c3;
        uVar15 = FUN_1000b673((LPCSTR)local_c80,(LPCSTR)local_170,0,0,0,(undefined4 *)0x0,(int *)0x0
                             );
        if (uVar15 == 0) {
          DeleteFileA((LPCSTR)local_c80);
        }
      }
      else {
        BVar11 = MoveFileA((LPCSTR)local_c80,(LPCSTR)local_170);
        uVar15 = (uint)(BVar11 == 0);
      }
      pcVar24 = (char *)local_170;
      pGVar5 = (PGENERIC_MAPPING)0x10006903;
      iVar3 = FUN_1000b9a2(pcVar24,uVar15);
    } while (iVar3 != 0);
    if (uVar15 != 0) {
      iVar3 = FUN_100134fe(0,0,(CHAR *)local_c80,(LPCSTR)local_170);
      if (iVar3 == 0) {
        DeleteFileA((LPCSTR)local_c80);
      }
      if (iVar3 < 0) {
        return iVar3;
      }
      pGVar5 = (PGENERIC_MAPPING)0x10006959;
      pcVar24 = PTR_s_INSTALL_RESULT_1001f03c;
      FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,&DAT_1001f59c);
    }
  }
  else {
    pCVar12 = FUN_1000b94f((LPCSTR)local_170);
    lstrcpyA(local_d80,pCVar12);
    lstrcpyA((LPSTR)local_880,(LPCSTR)local_170);
    pCVar12[-0x711] = '\0';
    local_48.GenericAll = 0x104;
    local_50 = 0x104;
    GetWindowsDirectoryA(local_480,0x100);
    GetSystemDirectoryA((LPSTR)local_380,0x100);
    iVar3 = lstrcmpiA((LPCSTR)local_880,local_480);
    bVar17 = iVar3 == 0;
    if (!bVar17) {
      iVar3 = lstrcmpiA((LPCSTR)local_880,(LPCSTR)local_380);
      bVar17 = iVar3 == 0;
    }
    pGVar9 = local_c80;
    local_38 = 0x100062f8;
    iVar3 = FUN_10012ffe((LPCSTR)pGVar9,(uint)bVar17,local_d80,(LPCSTR)local_880,(LPCSTR)local_880,
                         DAT_100239a4,&local_50,(LPSTR)DAT_10023904,&local_48.GenericAll);
    if (bVar17) {
      iVar14 = lstrcmpiA((LPCSTR)local_880,DAT_100239a4);
      if ((iVar14 == 0) && (bVar25 != 0)) {
        *DAT_100239a4 = '\0';
      }
      if (((DAT_100241e8 != 0) && (DAT_10024168 == 0)) && (iVar3 == 0)) {
        GetSystemDirectoryA(local_e80,0x100);
        iVar3 = lstrcmpiA((LPCSTR)DAT_10023904,(LPCSTR)local_380);
        if ((iVar3 == 0) && (iVar3 = lstrcmpiA(DAT_100239a4,local_e80), iVar3 == 0)) {
          *DAT_100239a4 = '\0';
        }
      }
      iVar3 = lstrcmpiA((LPCSTR)DAT_10023904,local_480);
      if (iVar3 == 0) {
        FUN_10010cf9((LPCSTR)local_380);
        iVar3 = lstrcmpiA(local_480,(LPCSTR)local_380);
        bVar17 = iVar3 == 0;
      }
    }
    else {
      lstrcpyA(DAT_100239a4,(LPCSTR)local_880);
      lstrcpyA((LPSTR)DAT_10023904,(LPCSTR)local_880);
    }
    if ((bVar2 & 0x20) != 0) {
      bVar17 = false;
    }
    wsprintfA((LPSTR)local_170,s__s__s_1001f2e4);
    wsprintfA((LPSTR)local_280,s__s__s_1001f2e4);
    if (*DAT_100239a4 == '\0') {
      lstrcpyA((LPSTR)local_280,(LPCSTR)local_170);
    }
    iVar3 = 1;
    SetFileAttributesA((LPCSTR)local_280,0);
    if ((DAT_100239ac != '\0') && ((bVar1 & 4) == 0)) {
      iVar3 = FUN_1000b673((LPCSTR)local_280,(LPCSTR)0x0,1,0,0,&local_48.GenericExecute,
                           (int *)&local_48.GenericWrite);
    }
    if (iVar3 != 0) {
      local_280[0].GenericRead._0_1_ = '\0';
    }
    lstrcpyA((LPSTR)local_880,(LPCSTR)local_c80);
    pbVar7 = (byte *)FUN_1000b94f((LPCSTR)local_880);
    if ((local_880 < pbVar7) && (pbVar7[-1] == 0x5c)) {
      pbVar7 = pbVar7 + -1;
    }
    *pbVar7 = 0;
    if (local_880[2] == '\0') {
      lstrcatA((LPSTR)local_880,&DAT_1001f314);
    }
    *DAT_10023f54 = '\0';
    local_48.GenericAll = 0x104;
    FUN_10012539((LPCSTR)local_170);
    pbVar8 = (byte *)((-(uint)bVar17 & 0xfffffffe) + 2);
    do {
      local_38 = 0x10006541;
      pGVar23 = DAT_10023904;
      pbVar7 = pbVar8;
      DVar6 = FUN_1001302f((int)DAT_10023904,(DWORD)pbVar8,(LPCSTR)pGVar9,local_d80,
                           (LPCSTR)local_880,(CHAR *)DAT_10023904,DAT_100239a4,DAT_10023f54,
                           &local_48.GenericAll);
      if ((DVar6 & 1) != 0) {
        FUN_10006a30((LPCSTR)DAT_10023904,DAT_10023f54);
      }
      pGVar9 = pGVar23;
      if (((DVar6 & 8) != 0) && ((DVar6 & 0x84) == 0)) {
        pbVar7 = (byte *)((uint)pbVar8 | 1);
        local_38 = 0x1000659c;
        pGVar9 = DAT_10023904;
        DVar6 = FUN_1001302f((int)DAT_10023904,(DWORD)pbVar7,(LPCSTR)pGVar23,local_d80,
                             (LPCSTR)local_880,(CHAR *)DAT_10023904,DAT_100239a4,DAT_10023f54,
                             &local_48.GenericAll);
        if ((DVar6 & 1) != 0) {
          FUN_10006a30((LPCSTR)DAT_10023904,DAT_10023f54);
        }
      }
      if ((((DVar6 & 0x200) != 0) && (iVar3 = FUN_10012539((LPCSTR)local_170), iVar3 == 0)) &&
         (iVar3 = FUN_100120c5((LPCSTR)local_170,7,local_fc8), iVar3 == 0)) {
        if ((local_ec8 & 0x10) == 0) {
          DVar6 = DVar6 | 0x80;
        }
        FUN_1001221a((int)local_fc8);
      }
      pcVar24 = (char *)local_170;
      pGVar5 = (PGENERIC_MAPPING)0x1000661a;
      iVar3 = FUN_1000b9a2(pcVar24,(uint)((DVar6 & 0x80) != 0));
    } while (iVar3 != 0);
    iVar3 = 1;
    if ((DVar6 & 0xfe) != 0) {
      if ((DVar6 & 0x80) == 0) {
        pCVar12 = &DAT_1001f598;
      }
      else {
        iVar14 = FUN_100134fe(1,bVar1 & 0x40,(CHAR *)local_c80,(LPCSTR)local_170);
        if (iVar14 == 1) {
          iVar3 = 0;
        }
        if (iVar14 < 0) {
          return iVar14;
        }
        pCVar12 = &DAT_1001f59c;
      }
      pGVar5 = (PGENERIC_MAPPING)0x1000667c;
      pcVar24 = PTR_s_INSTALL_RESULT_1001f03c;
      FUN_100105d2(PTR_s_INSTALL_RESULT_1001f03c,pCVar12);
      if (((DAT_1001f030 != (PGENERIC_MAPPING)0xffffffff) && ((DVar6 & 0x80) == 0)) &&
         (DAT_10023edc == 0)) {
        pcVar24 = s_Version__Following_file_not_copi_1001f570;
        pGVar5 = DAT_1001f030;
        FileWrite(DAT_1001f030,s_Version__Following_file_not_copi_1001f570,0x25);
        if ((((bVar1 & 2) == 0) || (DAT_10023930 == 0)) || (DAT_100241e8 == 0)) {
          pcVar24 = &DAT_1001f288;
          pGVar5 = DAT_1001f030;
          FileWrite(DAT_1001f030,&DAT_1001f288,1);
        }
      }
      if ((char)local_280[0].GenericRead != '\0') {
        pcVar24 = (char *)0x100066e0;
        DeleteFileA((LPCSTR)local_280);
        local_280[0].GenericRead._0_1_ = '\0';
      }
    }
    if ((bVar25 == 0) && (iVar3 != 0)) {
LAB_10006724:
      pcVar24 = (char *)0x10006731;
      DeleteFileA((LPCSTR)local_c80);
    }
  }
  if ((bVar1 & 0x41) == 0x41) {
    *(int *)(DAT_1002392c + 0x14) = (int)((int)&pGVar5->GenericRead + *(int *)(DAT_1002392c + 0x14))
    ;
  }
  if ((DAT_10023930 != 0) && (DAT_100241e8 != 0)) {
    FUN_10006d9f((LPCSTR)local_170,(int)pcVar24,(byte)~bVar1 >> 1 & 1);
  }
  if (((bVar2 & 0x10) != 0) && (DAT_10023e9c != '\x01')) {
    FUN_100158d2((LPCSTR)local_170);
  }
  if ((bVar1 & 4) != 0) {
    return 0;
  }
  pGVar9 = local_170;
  FUN_1000aef7((LPCSTR)pGVar9,(LPCSTR)0x0,(char *)pbVar7,(char *)0x0,(char *)0x0);
  if ((char)local_280[0].GenericRead == '\0') {
    return 0;
  }
  if ((pGVar9 != (GENERIC_MAPPING *)local_48.GenericWrite) || (local_38 != local_48.GenericExecute))
  {
    FUN_1000aef7((LPCSTR)local_280,(LPCSTR)local_280,(char *)pbVar7,(char *)0x0,(char *)0x0);
    return 0;
  }
  pGVar9 = local_280;
LAB_100069f4:
  DeleteFileA((LPCSTR)pGVar9);
  return 0;
}


