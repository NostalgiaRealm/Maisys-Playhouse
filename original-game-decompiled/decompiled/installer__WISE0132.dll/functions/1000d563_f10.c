
/* ==== f10 @ 1000d563 ==== 
 * signature: undefined4 __stdcall f10(int param_1)
 * body: 1000d563-1000d7eb
 */

undefined4 f10(int param_1)

{
  char *lpKeyName;
  int iVar1;
  LPCSTR pCVar2;
  int iVar3;
  char local_30c [252];
  CHAR aCStack_210 [4];
  HKEY__ local_20c [64];
  CHAR aCStack_10c [4];
  BYTE local_108 [260];
  
                    /* 0xd563  17  f10 */
  if (*(char *)(param_1 + 0x18) != '\x01') {
    lpKeyName = FUN_10010950(local_30c,*(char **)(param_1 + 0x20));
    lstrcpyA((LPSTR)local_108,local_30c);
    if (((DAT_100241e8 == 0) || ((DAT_10024168 == 0 && (DAT_10023930 == 0)))) &&
       (iVar1 = lstrlenA(local_30c), 4 < iVar1)) {
      pCVar2 = &DAT_1001fc24;
      iVar1 = lstrlenA(local_30c);
      iVar1 = lstrcmpiA(local_30c + iVar1 + -4,pCVar2);
      if (iVar1 == 0) {
        GetSystemDirectoryA((LPSTR)local_108,0x104);
        wsprintfA((LPSTR)local_20c,s__s__s_1001f2e4,local_108,local_30c);
        pCVar2 = &DAT_1001fc1c;
        iVar1 = lstrlenA((LPCSTR)local_20c);
        lstrcpyA(aCStack_210 + iVar1,pCVar2);
        CreateScalableFontResourceA(0,(LPCSTR)local_20c,local_30c,(LPCSTR)local_108);
        lstrcpyA((LPSTR)local_108,local_30c);
        pCVar2 = &DAT_1001fc1c;
        iVar1 = lstrlenA((LPCSTR)local_108);
        lstrcpyA(aCStack_10c + iVar1,pCVar2);
      }
    }
    if (DAT_10023930 != 0) {
      GetWindowsDirectoryA((LPSTR)local_108,0x104);
      wsprintfA((LPSTR)local_20c,s__s_Fonts__s_1001fc10,local_108,local_30c);
      iVar1 = FUN_10012539((LPCSTR)local_20c);
      if (iVar1 == 0) {
        lstrcpyA((LPSTR)local_108,local_30c);
      }
      else {
        GetSystemDirectoryA((LPSTR)local_20c,0x104);
        wsprintfA((LPSTR)local_108,s__s__s_1001f2e4,local_20c,local_30c);
      }
    }
    AddFontResourceA((LPCSTR)local_108);
    if (*lpKeyName != '\0') {
      if (DAT_100241e8 == 0) {
        WriteProfileStringA(s_Fonts_1001fbd4,lpKeyName,(LPCSTR)local_108);
      }
      else {
        lstrcpyA((LPSTR)local_20c,s_Software_Microsoft_Windows_1001fbf4);
        if (DAT_10024168 == 0) {
          lstrcatA((LPSTR)local_20c,&DAT_1001f524);
        }
        lstrcatA((LPSTR)local_20c,s__CurrentVersion_Fonts_1001fbdc);
        iVar3 = 0;
        iVar1 = lstrlenA((LPCSTR)local_108);
        FUN_10004d00(2,local_20c,lpKeyName,0,local_108,iVar1 + 1,iVar3);
      }
      SendMessageA((HWND)&DAT_0000ffff,0x1d,0,0);
    }
  }
  return 0;
}


