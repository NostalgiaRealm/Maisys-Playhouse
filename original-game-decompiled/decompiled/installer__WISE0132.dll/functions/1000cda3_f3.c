
/* ==== f3 @ 1000cda3 ==== 
 * signature: undefined4 __stdcall f3(int param_1)
 * body: 1000cda3-1000d16a
 */

undefined4 f3(int param_1)

{
  int iVar1;
  CHAR CVar2;
  int iVar3;
  undefined4 uVar4;
  char *lpString2;
  char local_818 [256];
  CHAR local_718 [256];
  CHAR local_618 [256];
  CHAR local_518 [256];
  char local_418;
  CHAR local_417 [245];
  CHAR aCStack_322 [10];
  CHAR local_318 [256];
  CHAR local_218 [256];
  char local_118;
  CHAR local_117 [255];
  byte *local_18;
  int local_14;
  HANDLE local_10;
  int local_c;
  HANDLE local_8;
  
                    /* 0xcda3  39  f3 */
  iVar1 = param_1;
  if (*(char *)(param_1 + 0x18) == '\x01') {
LAB_1000d162:
    uVar4 = 0;
  }
  else {
    GetWindowsDirectoryA(local_218,0x100);
    CVar2 = FUN_10014819(local_218);
    if (CVar2 != '\\') {
      lstrcatA(local_218,&DAT_1001f314);
    }
    lstrcatA(local_218,s_SYSTEM_INI_1001fb60);
    lstrcpyA(local_318,local_218);
    lpString2 = s__GLBS382_TMP_1001fb50;
    iVar3 = lstrlenA(local_318);
    lstrcpyA(aCStack_322 + iVar3,lpString2);
    local_8 = (HANDLE)FUN_1001223a(local_218,0,0);
    if (-1 < (int)local_8) {
      local_10 = (HANDLE)FUN_1001223a(local_318,1,1);
      if ((int)local_10 < 0) {
        CloseHandle(local_8);
      }
      else {
        FUN_10013278(local_8);
        param_1 = 0;
        local_c = 0;
        FUN_1000d16b(&local_418,*(LPSTR *)(iVar1 + 0x20));
        do {
          iVar3 = FUN_10013297(&local_118,0x100,local_8);
          if (iVar3 == 0) {
            if ((param_1 == 1) && (**(LPCSTR *)(iVar1 + 0x20) != ';')) {
              FUN_1000c2aa(local_10,*(LPCSTR *)(iVar1 + 0x20),1);
              local_c = 1;
            }
            CloseHandle(local_8);
            CloseHandle(local_10);
            if (local_c == 0) {
              DeleteFileA(local_318);
            }
            else {
              iVar3 = FUN_1001b090(*(byte **)(iVar1 + 0x20),s_device__1001fb3c,7);
              if (iVar3 == 0) {
                lstrcpyA(local_518,s_Add_Device__1001fb2c);
                if ((*(char *)(*(int *)(iVar1 + 0x20) + 8) != ':') &&
                   (*(char *)(*(int *)(iVar1 + 0x20) + 7) != '\\')) {
                  GetSystemDirectoryA(local_718,0x100);
                  lstrcatA(local_518,local_718);
                  CVar2 = FUN_10014819(local_718);
                  if (CVar2 != '\\') {
                    lstrcatA(local_518,&DAT_1001f314);
                  }
                }
                lstrcatA(local_518,(LPCSTR)(*(int *)(iVar1 + 0x20) + 7));
                FUN_10002639(local_518);
              }
              FUN_10010ec8(local_218,local_318,*(byte *)(iVar1 + 0x28) & 4);
              *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 4;
              FUN_1001054d(s_RESTART_1001fa74,&local_118);
              if (local_118 != 'S') {
                FUN_100105d2(s_RESTART_1001fa74,&DAT_1001fb28);
              }
            }
            goto LAB_1000d162;
          }
          local_18 = (byte *)FUN_1000d16b(local_818,&local_118);
          if (param_1 == 1) {
            if ((local_418 != ';') && (iVar3 = lstrcmpiA((LPCSTR)local_18,&local_418), iVar3 == 0))
            {
              iVar3 = lstrcmpiA(&local_118,*(LPCSTR *)(iVar1 + 0x20));
              if (iVar3 == 0) {
                param_1 = 0;
              }
              else {
                lstrcpyA(local_618,&local_118);
                local_118 = ';';
                lstrcpyA(local_117,local_618);
                local_c = 1;
              }
            }
            if (((param_1 == 1) && (local_418 == ';')) &&
               (iVar3 = lstrcmpiA((LPCSTR)local_18,local_417), iVar3 == 0)) {
              lstrcpyA(local_618,&local_118);
              local_118 = ';';
              lstrcpyA(local_117,local_618);
              local_c = 1;
            }
          }
          local_14 = 0;
          if ((param_1 == 1) && (*local_18 == 0x5b)) {
            if (local_418 != ';') {
              local_14 = FUN_1000c2aa(local_10,*(LPCSTR *)(iVar1 + 0x20),1);
              local_c = 1;
            }
            param_1 = 2;
          }
          iVar3 = FUN_1001b090(local_18,s__386Enh__1001fb44,8);
          if (iVar3 == 0) {
            param_1 = 1;
          }
        } while ((-1 < local_14) && (local_14 = FUN_1000c2aa(local_10,&local_118,1), -1 < local_14))
        ;
        CloseHandle(local_8);
        CloseHandle(local_10);
        DeleteFileA(local_318);
      }
    }
    uVar4 = FUN_10011024(s_SYSTEM_INI_1001fb60,0);
  }
  return uVar4;
}


