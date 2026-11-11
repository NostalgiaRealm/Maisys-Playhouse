
/* ==== FUN_10004f08 @ 10004f08 ==== 
 * signature: undefined __cdecl FUN_10004f08(DWORD param_1)
 * body: 10004f08-10005420
 */

void __cdecl FUN_10004f08(DWORD param_1)

{
  char cVar1;
  byte bVar2;
  LPBYTE lpString1;
  undefined *puVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  LPCSTR pCVar10;
  CHAR *lpString2;
  char *pcVar11;
  CHAR local_42c [8];
  char local_424;
  CHAR local_423 [575];
  char local_1e4 [32];
  byte local_1c4 [2];
  CHAR local_1c2 [254];
  _OSVERSIONINFOA local_c4;
  _MEMORYSTATUS local_30;
  CHAR local_10 [4];
  DWORD local_c;
  ushort local_8;
  ushort local_6;
  
  local_c = GetVersion();
  DVar4 = param_1;
  pCVar10 = (LPCSTR)(param_1 + 2);
  lpString1 = FUN_1000ba71(pCVar10);
  for (; *pCVar10 != '\0'; pCVar10 = pCVar10 + 1) {
  }
  FUN_10009eff(local_1c4,(byte *)(pCVar10 + 1));
  *lpString1 = '\0';
  cVar1 = *(char *)(DVar4 + 1);
  switch(cVar1) {
  case '\0':
    FUN_10013fb4((LPSTR)lpString1,1);
    break;
  case '\x01':
    if (DAT_100241e8 != 0) {
      local_c4.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_c4);
      wsprintfA((LPSTR)lpString1,s__ld__ld__ld_1001f55c,local_c4.dwMajorVersion,
                local_c4.dwMinorVersion,local_c4.dwBuildNumber & 0xffff);
      return;
    }
    uVar8 = local_c >> 8;
    bVar2 = (byte)local_c;
    goto LAB_10004fd7;
  case '\x02':
    uVar8 = local_c >> 0x10;
    bVar2 = (byte)(local_c >> 0x18);
LAB_10004fd7:
    uVar8 = uVar8 & 0xff;
    uVar6 = (uint)bVar2;
    pcVar11 = s__d__d_1001f554;
LAB_100052f8:
    wsprintfA((LPSTR)lpString1,pcVar11,uVar6,uVar8);
    break;
  case '\x03':
    local_30.dwLength = 0x20;
    GlobalMemoryStatus(&local_30);
    uVar8 = local_30.dwTotalPhys >> 10;
    pCVar10 = &DAT_1001f550;
    goto LAB_100052c4;
  case '\x04':
    pvVar5 = (HANDLE)FUN_1001223a((LPCSTR)local_1c4,0,0);
    if (pvVar5 != (HANDLE)0xffffffff) {
      FUN_1001234f(pvVar5,&local_6,&local_8);
      CloseHandle(pvVar5);
      wsprintfA((LPSTR)lpString1,s__02d__02d__02d__d__02d__02d_1001f534,local_6 >> 5 & 0xf,
                local_6 & 0x1f,((local_6 >> 9) + 0x50) % 100,(uint)(local_8 >> 0xb),
                local_8 >> 5 & 0x3f,(local_8 & 0x1f) << 1);
    }
    break;
  case '\x05':
    FUN_10012386((LPCSTR)local_1c4,0);
    iVar7 = FUN_100137b1((LPCSTR)local_1c4,&local_30.dwMemoryLoad);
    if (iVar7 == 0) {
      wsprintfA((LPSTR)lpString1,s__d__d__d__d_1001f528,local_30.dwMemoryLoad >> 0x10,
                local_30.dwMemoryLoad & 0xffff,local_30.dwTotalPhys >> 0x10,
                local_30.dwTotalPhys & 0xffff);
    }
    break;
  case '\x06':
  case '\a':
    puVar3 = &DAT_10023314;
    if (DAT_10024168 == 0) {
      puVar3 = &DAT_1001f524;
    }
    wsprintfA((LPSTR)local_1c4,s_SOFTWARE_Microsoft_Windows_s_Cur_1001f4f8,puVar3);
    pcVar11 = s_RegisteredOwner_1001f4e8;
    if (*(char *)(DVar4 + 1) != '\x06') {
      pcVar11 = s_RegisteredOrganization_1001f4d0;
    }
    FUN_10004d80((HKEY)0x2,(LPCSTR)local_1c4,lpString1,pcVar11,local_1e4,0x100,0);
    break;
  case '\b':
    lpString1[1] = '\0';
    uVar8 = FUN_10015b60((int)(char)local_1c4[0]);
    iVar7 = FUN_10011fc8(uVar8 - 0x41);
    if (iVar7 == 2) {
      *lpString1 = 'F';
    }
    else if (iVar7 == 3) {
      *lpString1 = 'H';
    }
    else if (iVar7 == 4) {
      *lpString1 = 'N';
    }
    else if (iVar7 == 5) {
      *lpString1 = 'C';
    }
    else if (iVar7 == 6) {
      *lpString1 = 'R';
    }
    break;
  case '\t':
  case '\n':
    uVar9 = 0;
    do {
      iVar7 = FUN_10011fc8((uint)uVar9);
      if (iVar7 == (cVar1 != '\t') + 4) break;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x1a);
    if (uVar9 < 0x1a) {
      lpString1[2] = '\0';
      *lpString1 = (char)uVar9 + 'A';
      lpString1[1] = ':';
    }
    break;
  case '\f':
    lstrcpyA((LPSTR)lpString1,(LPCSTR)local_1c4);
    if (DAT_100200d4 < 2) {
      uVar8 = *(ushort *)(PTR_DAT_1001fec8 + (char)*lpString1 * 2) & 0x103;
    }
    else {
      uVar8 = FUN_10015ac0((int)(char)*lpString1,0x103);
    }
    if ((uVar8 != 0) && (lpString1[1] == ':')) {
      wsprintfA(local_10,&DAT_1001f4cc,(int)(char)*lpString1);
      param_1 = 0x100;
      DVar4 = WNetGetConnectionA(local_10,(LPSTR)lpString1,&param_1);
      if (DVar4 == 0) {
        lstrcatA((LPSTR)lpString1,local_1c2);
      }
      else {
        lstrcpyA((LPSTR)lpString1,(LPCSTR)local_1c4);
      }
    }
    break;
  case '\r':
    GetModuleFileNameA(DAT_1002403c,(LPSTR)lpString1,0x100);
    break;
  case '\x0e':
    pvVar5 = (HANDLE)FUN_1001223a((LPCSTR)local_1c4,0,0);
    if (pvVar5 == (HANDLE)0xffffffff) {
      return;
    }
    uVar8 = FUN_10012303(pvVar5,0,2);
    CloseHandle(pvVar5);
    pCVar10 = &DAT_1001f4c8;
LAB_100052c4:
    wsprintfA((LPSTR)lpString1,pCVar10,uVar8);
    break;
  case '\x0f':
    uVar8 = FUN_10015b60((int)(char)local_1c4[0]);
    uVar6 = FUN_1000bbbb(uVar8 - 0x40);
    uVar8 = uVar6 & 0xffff;
    uVar6 = uVar6 >> 0x10;
    pcVar11 = s__04x__04x_1001f4bc;
    goto LAB_100052f8;
  case '\x10':
    wsprintfA((LPSTR)lpString1,s__c______1001f4b4,(int)(char)local_1c4[0]);
    iVar7 = FUN_100120c5((LPCSTR)lpString1,8,local_42c);
    cVar1 = local_424;
    if (iVar7 == 0) {
      local_424 = 0;
      lstrcpyA((LPSTR)lpString1,local_42c);
      if ((cVar1 == '.') && (iVar7 = lstrlenA(local_42c), iVar7 == 8)) {
        lstrcatA((LPSTR)lpString1,local_423);
      }
      FUN_1001221a((int)local_42c);
      return;
    }
    goto LAB_100053a4;
  case '\x11':
    uVar8 = FUN_10013a97(lpString1,(FARPROC)(-(uint)(local_1c4[0] != 0) & (uint)local_1c4));
    if (uVar8 != 0) {
      return;
    }
LAB_100053a4:
    *lpString1 = '\0';
    break;
  case '\x12':
    if (DAT_100241e8 != 0) {
      local_c4.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_c4);
      lpString2 = local_c4.szCSDVersion;
      while (local_c4.szCSDVersion[0] != '\0') {
        if (DAT_100200d4 < 2) {
          uVar8 = (byte)PTR_DAT_1001fec8[*lpString2 * 2] & 4;
        }
        else {
          uVar8 = FUN_10015ac0((int)*lpString2,4);
        }
        if (uVar8 != 0) break;
        lpString2 = lpString2 + 1;
        local_c4.szCSDVersion[0] = *lpString2;
      }
      if (*lpString2 == '\0') {
        lpString2 = &DAT_1001f4b0;
      }
      lstrcpyA((LPSTR)lpString1,lpString2);
    }
  }
  return;
}


