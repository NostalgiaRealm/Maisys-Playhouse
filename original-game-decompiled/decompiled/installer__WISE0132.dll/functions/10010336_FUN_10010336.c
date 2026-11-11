
/* ==== FUN_10010336 @ 10010336 ==== 
 * signature: undefined __cdecl FUN_10010336(LPCSTR param_1, uint param_2, int param_3)
 * body: 10010336-1001054c
 */

void __cdecl FUN_10010336(LPCSTR param_1,uint param_2,int param_3)

{
  int iVar1;
  LPSTR lpString1;
  uint dwFileAttributes;
  LPCSTR pCVar2;
  char *lpString2;
  char local_44c [256];
  byte local_34c;
  CHAR aCStack_207 [259];
  CHAR local_104 [256];
  
  iVar1 = FUN_100120c5(param_1,7,local_44c);
  while (iVar1 == 0) {
    lstrcpyA(local_104,param_1);
    lpString1 = FUN_10014834(local_104,0x5c);
    if (*lpString1 == '\\') {
      lpString1 = lpString1 + 1;
    }
    lstrcpyA(lpString1,local_44c);
    if (param_3 == 0) {
      if (local_44c[0] != '.') {
        dwFileAttributes = 0x20;
        if ((param_2 & 1) != 0) {
          dwFileAttributes = 0x21;
        }
        if ((param_2 & 2) != 0) {
          dwFileAttributes = dwFileAttributes | 2;
        }
        if ((param_2 & 4) != 0) {
          dwFileAttributes = dwFileAttributes | 4;
        }
        if ((param_2 & 0x10) != 0) {
          dwFileAttributes = dwFileAttributes & 0xffffffdf;
        }
        SetFileAttributesA(local_104,dwFileAttributes);
      }
    }
    else if ((local_34c & 0x10) == 0) {
      SetFileAttributesA(local_104,0);
      if (DAT_100239ac != '\0') {
        FUN_1000b673(local_104,(LPCSTR)0x0,0,0,0,(undefined4 *)0x0,(int *)0x0);
      }
      DeleteFileA(local_104);
    }
    iVar1 = FUN_100121d4(local_44c);
  }
  FUN_1001221a((int)local_44c);
  if ((param_2 & 8) != 0) {
    lstrcpyA(local_104,param_1);
    pCVar2 = FUN_10014834(local_104,0x5c);
    lstrcpyA(pCVar2,&DAT_1001f568);
    iVar1 = FUN_100120c5(local_104,0x10,local_44c);
    while (iVar1 == 0) {
      if (((local_34c & 0x10) != 0) && (local_44c[0] != '.')) {
        pCVar2 = FUN_10014834(param_1,0x5c);
        lstrcpyA(aCStack_207 + 3,local_104);
        lpString2 = local_44c;
        iVar1 = lstrlenA(aCStack_207 + 3);
        lstrcpyA(aCStack_207 + iVar1,lpString2);
        lstrcatA(aCStack_207 + 3,pCVar2);
        pCVar2 = FUN_1000b94f(aCStack_207 + 3);
        FUN_10010336(aCStack_207 + 3,param_2,param_3);
        if ((param_3 != 0) && ((param_2 & 4) != 0)) {
          pCVar2[-1] = '\0';
          RemoveDirectoryA(aCStack_207 + 3);
        }
      }
      iVar1 = FUN_100121d4(local_44c);
    }
    FUN_1001221a((int)local_44c);
  }
  return;
}


