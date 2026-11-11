/* Ghidra 12.1.4 generated C-like pseudocode for stream_008_000215e3.exe.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== entry @ 10001000 ==== 
 * signature: undefined4 __stdcall entry(void)
 * body: 10001000-10001005
 */

undefined4 entry(void)

{
  return 1;
}



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



/* ==== FUN_100014c7 @ 100014c7 ==== 
 * signature: undefined4 __cdecl FUN_100014c7(LPCSTR param_1, LPCSTR param_2)
 * body: 100014c7-10001599
 */

undefined4 __cdecl FUN_100014c7(LPCSTR param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  char local_fdc [2024];
  char local_7f4 [2024];
  DWORD local_c;
  DWORD local_8;
  
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 != (HANDLE)0xffffffff) {
    BVar2 = ReadFile(pvVar1,local_7f4,0x7e8,&local_c,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      CloseHandle(pvVar1);
      return 1;
    }
    CloseHandle(pvVar1);
  }
  uVar4 = 1;
  pvVar1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 != (HANDLE)0xffffffff) {
    BVar2 = ReadFile(pvVar1,local_fdc,0x7e8,&local_8,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      CloseHandle(pvVar1);
    }
    else {
      CloseHandle(pvVar1);
      if (local_c == local_8) {
        if (local_c != 0) {
          iVar3 = 0;
          do {
            if (local_7f4[iVar3] != local_fdc[iVar3]) {
              return 1;
            }
            iVar3 = iVar3 + 1;
            local_c = local_c - 1;
          } while (local_c != 0);
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* ==== DoService @ 1000159a ==== 
 * signature: bool __stdcall DoService(int param_1)
 * body: 1000159a-10001831
 */

bool DoService(int param_1)

{
  char *pcVar1;
  SC_HANDLE hSCObject;
  BOOL BVar2;
  char *pcVar3;
  int iVar4;
  DWORD nNumberOfBytesToWrite;
  bool bVar5;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  char local_62c [256];
  char local_52c [256];
  char local_42c [256];
  char local_32c [256];
  char local_22c [256];
  char local_12c [256];
  DWORD local_2c;
  int local_28;
  DWORD local_24;
  LPCSTR local_20;
  LPCSTR local_1c;
  DWORD local_18;
  DWORD local_14;
  SC_HANDLE local_10;
  SC_LOCK local_c;
  SC_HANDLE local_8;
  
                    /* 0x159a  2  DoService */
  if (*(int *)(param_1 + 0x20) == 1) {
    bVar5 = false;
  }
  else {
    pcVar1 = FUN_10001851(local_22c,*(char **)(param_1 + 0x28));
    pcVar1 = FUN_10001851(local_62c,pcVar1);
    pcVar1 = FUN_10001851(local_32c,pcVar1);
    local_1c = (LPCSTR)(-(uint)(local_32c[0] != '\0') & (uint)local_32c);
    pcVar1 = FUN_10001851(local_52c,pcVar1);
    local_20 = (LPCSTR)(-(uint)(local_52c[0] != '\0') & (uint)local_52c);
    pcVar1 = FUN_10001851(local_12c,pcVar1);
    local_14 = FUN_10001879(local_12c);
    pcVar1 = FUN_10001851(local_12c,pcVar1);
    local_18 = FUN_10001879(local_12c);
    pcVar1 = FUN_10001851(local_12c,pcVar1);
    local_24 = FUN_10001879(local_12c);
    FUN_10001851(local_42c,pcVar1);
    bVar5 = true;
    local_28 = 0;
    local_10 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,10);
    pcVar1 = &DAT_100030cc;
    if (local_10 != (SC_HANDLE)0x0) {
      hSCObject = CreateServiceA(local_10,local_22c,local_42c,0xf01ff,local_14,local_18,local_24,
                                 local_62c,(LPCSTR)0x0,(LPDWORD)0x0,&DAT_100030cc,local_1c,local_20)
      ;
      if (hSCObject == (SC_HANDLE)0x0) {
        local_28 = 1;
        local_8 = (SC_HANDLE)0x0;
        do {
          local_c = LockServiceDatabase(local_10);
          if (local_c == (SC_LOCK)0x0) {
            Sleep(0x32);
          }
          local_8 = (SC_HANDLE)((int)&local_8->unused + 1);
          if (local_c != (SC_LOCK)0x0) {
            local_8 = OpenServiceA(local_10,local_22c,2);
            if (local_8 != (SC_HANDLE)0x0) {
              BVar2 = ChangeServiceConfigA
                                (local_8,local_14,local_18,local_24,local_62c,(LPCSTR)0x0,
                                 (LPDWORD)0x0,&DAT_100030cc,local_1c,local_20,local_42c);
              bVar5 = BVar2 == 0;
              CloseServiceHandle(local_8);
            }
            UnlockServiceDatabase(local_c);
            break;
          }
        } while ((int)local_8 < 0x32);
      }
      else {
        bVar5 = false;
        CloseServiceHandle(hSCObject);
      }
      CloseServiceHandle(local_10);
    }
    pcVar3 = s_Update_100030c0;
    if (local_28 == 0) {
      pcVar3 = s_Create_100030b8;
    }
    if (bVar5) {
      pcVar1 = s_Could_not_100030ac;
    }
    wsprintfA(local_12c,s__s_s_Service___s_10003098,pcVar1,pcVar3,local_22c);
    iVar4 = FUN_100019be(param_1);
    if (iVar4 != 0) {
      lpNumberOfBytesWritten = &local_2c;
      lpOverlapped = (LPOVERLAPPED)0x0;
      nNumberOfBytesToWrite = lstrlenA(local_12c);
      WriteFile(*(HANDLE *)(param_1 + 0x24),local_12c,nNumberOfBytesToWrite,lpNumberOfBytesWritten,
                lpOverlapped);
    }
    if (bVar5) {
      if (*(int *)(param_1 + 0x34) == 0) {
        MessageBoxA(*(HWND *)(param_1 + 4),*(LPCSTR *)(param_1 + 0x30),*(LPCSTR *)(param_1 + 0x2c),0
                   );
      }
    }
    else {
      FUN_10001932(param_1,s_RESTART_1000308c,&DAT_10003094);
    }
  }
  return bVar5;
}



/* ==== IsAdmin @ 10001832 ==== 
 * signature: undefined4 __stdcall IsAdmin(void)
 * body: 10001832-10001850
 */

undefined4 IsAdmin(void)

{
  SC_HANDLE hSCObject;
  
                    /* 0x1832  3  IsAdmin */
  hSCObject = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xe0000000);
  if (hSCObject == (SC_HANDLE)0x0) {
    return 0;
  }
  CloseServiceHandle(hSCObject);
  return 1;
}



/* ==== FUN_10001851 @ 10001851 ==== 
 * signature: char * __cdecl FUN_10001851(char * param_1, char * param_2)
 * body: 10001851-10001878
 */

char * __cdecl FUN_10001851(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_2;
  while ((cVar2 != '\0' && (cVar2 != '\x7f'))) {
    *param_1 = cVar2;
    pcVar1 = param_2 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  *param_1 = '\0';
  if (*param_2 == '\x7f') {
    param_2 = param_2 + 1;
  }
  return param_2;
}



/* ==== FUN_10001879 @ 10001879 ==== 
 * signature: int __cdecl FUN_10001879(char * param_1)
 * body: 10001879-100018b5
 */

int __cdecl FUN_10001879(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  iVar3 = 0;
  iVar2 = 1;
  if (*param_1 != '-') goto LAB_10001899;
  iVar2 = -1;
  while( true ) {
    param_1 = param_1 + 1;
LAB_10001899:
    cVar1 = *param_1;
    if ((cVar1 < '0') || ('9' < cVar1)) break;
    iVar3 = cVar1 + -0x30 + iVar3 * 10;
  }
  return iVar2 * iVar3;
}



/* ==== FUN_100018b6 @ 100018b6 ==== 
 * signature: undefined __cdecl FUN_100018b6(int param_1, LPCSTR param_2, LPSTR param_3)
 * body: 100018b6-10001931
 */

void __cdecl FUN_100018b6(int param_1,LPCSTR param_2,LPSTR param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  CHAR local_24;
  CHAR local_23 [31];
  
  local_24 = '%';
  lstrcpyA(local_23,param_2);
  lstrcatA(&local_24,&DAT_100030c8);
  uVar1 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      iVar2 = lstrcmpA((LPCSTR)(*(int *)(param_1 + 0xc) * uVar1 + *(int *)(param_1 + 0x18)),
                       &local_24);
      if (iVar2 == 0) break;
      uVar3 = uVar3 + 1;
      uVar1 = uVar3 & 0xffff;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  if ((uVar3 & 0xffff) < *(uint *)(param_1 + 0x14)) {
    lstrcpyA(param_3,(LPCSTR)(*(int *)(param_1 + 0x10) * (uVar3 & 0xffff) + *(int *)(param_1 + 0x1c)
                             ));
  }
  else {
    *param_3 = '\0';
  }
  return;
}



/* ==== FUN_10001932 @ 10001932 ==== 
 * signature: undefined __cdecl FUN_10001932(int param_1, LPCSTR param_2, LPCSTR param_3)
 * body: 10001932-100019bd
 */

void __cdecl FUN_10001932(int param_1,LPCSTR param_2,LPCSTR param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  CHAR local_24;
  CHAR local_23 [31];
  
  local_24 = '%';
  lstrcpyA(local_23,param_2);
  lstrcatA(&local_24,&DAT_100030c8);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = 0;
    do {
      iVar2 = lstrcmpA((LPCSTR)(*(int *)(param_1 + 0xc) * uVar1 + *(int *)(param_1 + 0x18)),
                       &local_24);
      if (iVar2 == 0) break;
      uVar3 = uVar3 + 1;
      uVar1 = uVar3 & 0xffff;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  uVar3 = uVar3 & 0xffff;
  if (*(uint *)(param_1 + 0x14) <= uVar3) {
    if (*(uint *)(param_1 + 8) <= uVar3) {
      return;
    }
    lstrcpyA((LPSTR)(*(int *)(param_1 + 0xc) * uVar3 + *(int *)(param_1 + 0x18)),&local_24);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  lstrcpyA((LPSTR)(*(int *)(param_1 + 0x10) * uVar3 + *(int *)(param_1 + 0x1c)),param_3);
  return;
}



/* ==== FUN_100019be @ 100019be ==== 
 * signature: undefined4 __cdecl FUN_100019be(int param_1)
 * body: 100019be-100019d4
 */

undefined4 __cdecl FUN_100019be(int param_1)

{
  if ((*(int *)(param_1 + 0x24) != -1) && (*(int *)(param_1 + 0x38) == 0)) {
    return 1;
  }
  return 0;
}



/* ==== VERSION.DLL::VerQueryValueA @ 100019d6 ==== 
 * signature: BOOL __stdcall VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID * lplpBuffer, PUINT puLen)
 * body: 100019d6-100019db
 * thunk to: VERSION.DLL::VerQueryValueA
 */

BOOL VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100019d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}



/* ==== VERSION.DLL::GetFileVersionInfoA @ 100019dc ==== 
 * signature: BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
 * body: 100019dc-100019e1
 * thunk to: VERSION.DLL::GetFileVersionInfoA
 */

BOOL GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100019dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}



/* ==== VERSION.DLL::GetFileVersionInfoSizeA @ 100019e2 ==== 
 * signature: DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)
 * body: 100019e2-100019e7
 * thunk to: VERSION.DLL::GetFileVersionInfoSizeA
 */

DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100019e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}


