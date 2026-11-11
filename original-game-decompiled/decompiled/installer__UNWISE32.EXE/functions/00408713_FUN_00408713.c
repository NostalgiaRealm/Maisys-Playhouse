
/* ==== FUN_00408713 @ 00408713 ==== 
 * signature: uint __cdecl FUN_00408713(LPCSTR param_1)
 * body: 00408713-0040897f
 */

/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_00408713(LPCSTR param_1)

{
  int iVar1;
  BOOL BVar2;
  HFILE hFile;
  UINT UVar3;
  CHAR local_308 [255];
  char acStack_209 [256];
  char acStack_109 [257];
  uint local_8;
  
  lstrcpyA(local_308,param_1);
  FUN_00408a39(local_308,1);
  iVar1 = lstrcmpiA(local_308,DAT_004138b8);
  if (iVar1 == 0) {
    DAT_00413bc8 = 1;
  }
  BVar2 = DeleteFileA(param_1);
  local_8 = (uint)(BVar2 == 0);
  if (((DAT_0041385c != 0) && (local_8 == 0)) && (DAT_00413ccc != (code *)0x0)) {
    (*DAT_00413ccc)(4,1,param_1,0);
  }
  if (local_8 == 0) {
    return 0;
  }
  if (DAT_004138ec == 0) {
    return local_8;
  }
  DAT_00413864 = 1;
  lstrcpyA(acStack_109 + 1,param_1);
  FUN_00408a39(acStack_109 + 1,0);
  if (DAT_00413834 == 2) {
    GetWindowsDirectoryA(acStack_209 + 1,0x100);
    iVar1 = lstrlenA(acStack_209 + 1);
    if (acStack_209[iVar1] != '\\') {
      lstrcatA(acStack_209 + 1,&DAT_004100cc);
    }
    lstrcatA(acStack_209 + 1,s_WININIT_INI_004106f8);
    hFile = _lopen(acStack_209 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_209 + 1,0);
      _lwrite(hFile,s__rename__004106ec,10);
    }
    else {
      _llseek(hFile,0,2);
    }
    if (hFile == -1) {
      return local_8;
    }
    wsprintfA(acStack_209 + 1,s_NUL__s_004106e0,acStack_109 + 1);
    UVar3 = lstrlenA(acStack_209 + 1);
    _lwrite(hFile,acStack_109 + 1,UVar3);
  }
  else {
    if (DAT_00413834 == 1) {
      MoveFileExA(param_1,(LPCSTR)0x0,4);
      return local_8;
    }
    wsprintfA(acStack_209 + 1,s_del__s_004106d4,acStack_109 + 1);
    GetWindowsDirectoryA(acStack_109 + 1,0x100);
    iVar1 = lstrlenA(acStack_109 + 1);
    if (acStack_109[iVar1] != '\\') {
      lstrcatA(acStack_109 + 1,&DAT_004100cc);
    }
    lstrcatA(acStack_109 + 1,s__MSSETUP_BAT_004106c4);
    hFile = _lopen(acStack_109 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_109 + 1,0);
    }
    else {
      _llseek(hFile,0,2);
    }
    if (hFile == -1) {
      return local_8;
    }
    UVar3 = lstrlenA(acStack_209 + 1);
    _lwrite(hFile,local_308,UVar3);
  }
  _lclose(hFile);
  return local_8;
}


