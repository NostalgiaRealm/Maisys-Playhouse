
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


