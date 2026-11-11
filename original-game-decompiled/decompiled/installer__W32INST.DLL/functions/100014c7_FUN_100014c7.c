
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


