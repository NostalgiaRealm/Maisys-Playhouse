
/* ==== FUN_1001337f @ 1001337f ==== 
 * signature: uint __cdecl FUN_1001337f(LPCSTR param_1, DWORD param_2)
 * body: 1001337f-100134fd
 */

uint __cdecl FUN_1001337f(LPCSTR param_1,DWORD param_2)

{
  char *pcVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  undefined3 extraout_var;
  CHAR *lpString;
  char *pcVar5;
  bool bVar6;
  byte local_13c [2];
  char local_13a [254];
  CHAR local_3c [16];
  undefined1 local_2c [8];
  DWORD local_24;
  DWORD local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  DWORD local_8;
  
  lpString = param_1;
  if (param_1 == (LPCSTR)0x0) {
    wsprintfA(local_3c,&DAT_1001f6c0,param_2 + 0x41);
    lpString = local_3c;
  }
  if (DAT_100241e8 == 0) {
    if (lpString[1] == ':') {
      uVar4 = FUN_10015b60((int)*lpString);
      iVar2 = uVar4 - 0x40;
    }
    else {
      iVar2 = 0;
    }
    bVar6 = FUN_10014010(iVar2,&local_20);
    if (CONCAT31(extraout_var,bVar6) == 0) {
      return (local_1c * local_18 * local_14) / 0x400;
    }
  }
  else {
    iVar2 = lstrlenA(lpString);
    if (1 < iVar2) {
      lstrcpyA((LPSTR)local_13c,lpString);
      if (iVar2 == 2) {
        lstrcatA((LPSTR)local_13c,&DAT_1001f314);
      }
      pcVar5 = local_13a;
      while ((local_13a[0] != '\0' && (local_13a[0] != '\\'))) {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        local_13a[0] = *pcVar1;
      }
      iVar2 = FUN_1001b090(local_13c,&DAT_1001f6ac,2);
      if (iVar2 == 0) {
        bVar6 = *pcVar5 == '\0';
        while (!bVar6) {
          pcVar1 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          if (*pcVar1 == '\0') break;
          bVar6 = *pcVar1 == '\\';
        }
      }
      if (*pcVar5 == '\\') {
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = '\0';
      if ((DAT_10023e98 != (code *)0x0) &&
         (iVar2 = (*DAT_10023e98)(local_13c,&local_10,&local_18,local_2c), iVar2 != 0)) {
        return local_c << 0x16 | local_10 >> 10;
      }
      BVar3 = GetDiskFreeSpaceA((LPCSTR)local_13c,&local_8,&param_2,(LPDWORD)&param_1,&local_24);
      if (BVar3 != 0) {
        uVar4 = param_2 * local_8;
        if ((0x1ff < uVar4) && ((uVar4 & 0x1ff) == 0)) {
          return (uVar4 >> 9) * (int)param_1 >> 1;
        }
        return uVar4 * (int)param_1 >> 10;
      }
    }
  }
  return 0;
}


