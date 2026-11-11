
/* ==== FUN_00408f39 @ 00408f39 ==== 
 * signature: undefined __cdecl FUN_00408f39(char * param_1)
 * body: 00408f39-004091e6
 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00408f39(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t _MaxCount;
  UINT uBytes;
  UINT UVar4;
  char *pcVar5;
  CHAR local_528 [260];
  CHAR local_424 [250];
  CHAR aCStack_32a [10];
  CHAR local_320 [260];
  char local_21c [259];
  char acStack_119 [261];
  int local_14;
  HFILE local_10;
  int local_c;
  HFILE local_8;
  
  GetWindowsDirectoryA(local_424,0x104);
  lstrcatA(local_424,s__SYSTEM_INI_00410744);
  lstrcpyA(local_320,local_424);
  pcVar5 = s__GLBS383_TMP_00410734;
  iVar3 = lstrlenA(local_320);
  lstrcpyA(aCStack_32a + iVar3,pcVar5);
  local_8 = _lopen(local_424,0);
  if (local_8 != -1) {
    local_10 = _lcreat(local_320,0);
    if (local_10 == -1) {
      _lclose(local_8);
    }
    else {
      local_c = 0;
      local_14 = 0;
      _memset(DAT_00413808,0,0x4000);
      DAT_00413bdc = 0;
      DAT_004138c4 = 0;
      GetSystemDirectoryA((LPSTR)((int)acStack_119 + 1),0x104);
      iVar3 = lstrlenA((LPCSTR)((int)acStack_119 + 1));
      if (acStack_119[iVar3] != '\\') {
        lstrcatA((LPSTR)((int)acStack_119 + 1),&DAT_004100cc);
      }
      _MaxCount = lstrlenA((LPCSTR)((int)acStack_119 + 1));
      iVar3 = __strnicmp((char *)((int)acStack_119 + 1),param_1,_MaxCount);
      pcVar5 = param_1;
      if (iVar3 == 0) {
        iVar3 = lstrlenA((LPCSTR)((int)acStack_119 + 1));
        pcVar5 = param_1 + iVar3;
      }
      lstrcpyA((LPSTR)((int)acStack_119 + 1),pcVar5);
      do {
        iVar3 = FUN_00405e01(local_21c,0x104,local_8,1);
        if (iVar3 == 0) {
          _lclose(local_8);
          _lclose(local_10);
          if (local_14 != 0) {
            FUN_00408713(local_424);
            FUN_0040ad00(local_320,local_424);
            return;
          }
          goto LAB_0040919c;
        }
        pcVar5 = local_21c;
        cVar2 = local_21c[0];
        while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
          pcVar1 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          cVar2 = *pcVar1;
        }
        if (local_c == 0) {
          iVar3 = __strnicmp(pcVar5,s__386Enh__00410720,8);
          if (iVar3 == 0) {
            local_c = 1;
          }
        }
        else if (*pcVar5 == '[') {
          local_c = 0;
        }
        else {
          iVar3 = __strnicmp(pcVar5,s_device__0041072c,7);
          if (iVar3 == 0) {
            iVar3 = lstrcmpiA(pcVar5 + 7,(LPCSTR)((int)acStack_119 + 1));
            if ((iVar3 == 0) || (iVar3 = lstrcmpiA(pcVar5 + 7,param_1), iVar3 == 0)) {
              lstrcpyA(local_528,local_21c);
              local_21c[0] = ';';
              lstrcpyA((LPSTR)((int)local_21c + 1),local_528);
              local_14 = 1;
            }
          }
        }
        lstrcatA(local_21c,&DAT_00410704);
        uBytes = lstrlenA(local_21c);
        UVar4 = _lwrite(local_10,local_21c,uBytes);
      } while (UVar4 == uBytes);
      _lclose(local_8);
      _lclose(local_10);
LAB_0040919c:
      FUN_00408713(local_320);
    }
  }
  return;
}


