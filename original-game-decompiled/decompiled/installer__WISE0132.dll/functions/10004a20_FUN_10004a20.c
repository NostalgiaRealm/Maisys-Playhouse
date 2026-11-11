
/* ==== FUN_10004a20 @ 10004a20 ==== 
 * signature: undefined __stdcall FUN_10004a20(void)
 * body: 10004a20-10004b9c
 */

void FUN_10004a20(void)

{
  undefined1 *puVar1;
  FARPROC pFVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  int local_24;
  char *local_20;
  int local_1c;
  char *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  HMODULE local_c;
  uint local_8;
  
  local_8 = (uint)(*(char *)(DAT_10023310 + 1) != '\0');
  if ((local_8 != 0) && (DAT_100241e8 == 0)) {
    return;
  }
  local_20 = (char *)(DAT_10023310 + 2);
  local_18 = FUN_1000bc0e(local_20);
  piVar4 = &local_24;
  iVar5 = 2;
  do {
    if ((LPCSTR)piVar4[1] == (LPCSTR)0x0) {
      *piVar4 = 0;
    }
    else {
      puVar1 = FUN_1000ba71((LPCSTR)piVar4[1]);
      *piVar4 = (int)puVar1;
    }
    piVar4 = piVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (DAT_10023e9c == '\x01') {
    piVar4 = &local_24;
    iVar5 = 2;
    do {
      if ((LPSTR)*piVar4 != (LPSTR)0x0) {
        FUN_1001054d(&DAT_1001f3ec,(LPSTR)*piVar4);
      }
      piVar4 = piVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  if (local_8 == 0) {
    local_c = LoadLibraryA(s_ODBCINST_DLL_1001f478);
  }
  else {
    local_c = LoadLibraryExA(s_ODBCCP32_DLL_1001f488,(HANDLE)0x0,0);
  }
  if (local_c == (HMODULE)0x0) {
    return;
  }
  if (local_24 != 0) {
    if (local_8 == 0) {
      pFVar2 = GetProcAddress(local_c,s_SQLInstallDriverManager_1001f460);
      if (pFVar2 != (FARPROC)0x0) {
        puVar1 = local_10;
        goto LAB_10004b09;
      }
    }
    else {
      pFVar2 = GetProcAddress(local_c,s_SQLInstallDriverManager_1001f460);
      if (pFVar2 != (FARPROC)0x0) {
        puVar1 = local_14;
LAB_10004b09:
        (*pFVar2)(local_24,0x104,puVar1);
      }
    }
  }
  pbVar3 = (byte *)FUN_1000bc0e(local_18);
  FUN_10009f15(DAT_10024170,pbVar3,0x7800);
  for (pbVar3 = DAT_10024170; *pbVar3 != 0; pbVar3 = pbVar3 + 1) {
    if (*pbVar3 == 0x7f) {
      *pbVar3 = 0;
    }
  }
  pbVar3[1] = 0;
  if ((*DAT_10024170 != 0) && (local_1c != 0)) {
    if (local_8 == 0) {
      pFVar2 = GetProcAddress(local_c,s_SQLInstallDriver_1001f44c);
      if (pFVar2 == (FARPROC)0x0) goto LAB_10004b85;
      puVar1 = local_10;
    }
    else {
      pFVar2 = GetProcAddress(local_c,s_SQLInstallDriver_1001f44c);
      if (pFVar2 == (FARPROC)0x0) goto LAB_10004b85;
      puVar1 = local_14;
    }
    (*pFVar2)(0,DAT_10024170,local_1c,0x104,puVar1);
  }
LAB_10004b85:
  FreeLibrary(local_c);
  return;
}


