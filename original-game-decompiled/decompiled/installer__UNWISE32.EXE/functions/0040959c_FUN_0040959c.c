
/* ==== FUN_0040959c @ 0040959c ==== 
 * signature: undefined __cdecl FUN_0040959c(LPCSTR param_1, LPCSTR param_2)
 * body: 0040959c-00409768
 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0040959c(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  char *pcVar2;
  int iVar3;
  HFILE hFile;
  UINT uBytes;
  LPCSTR pCVar4;
  CHAR local_504 [512];
  CHAR local_304 [256];
  CHAR local_204 [255];
  char acStack_105 [257];
  
  BVar1 = CopyFileA(param_1,param_2,0);
  pCVar4 = param_1;
  if (BVar1 == 0) {
    FUN_00409769(local_304,param_2);
    BVar1 = CopyFileA(param_1,local_304,0);
    pCVar4 = param_2;
    if (BVar1 != 0) {
      DAT_00413864 = 1;
      FUN_0040812b(param_1);
      lstrcpyA(local_204,local_304);
      lstrcpyA(acStack_105 + 1,param_2);
      FUN_00408a39(local_204,0);
      FUN_00408a39(acStack_105 + 1,0);
      if (DAT_00413834 == 2) {
        WritePrivateProfileStringA
                  (s_rename_00410dfc,acStack_105 + 1,local_204,s_WININIT_INI_004106f8);
        return;
      }
      if (DAT_00413834 == 1) {
        MoveFileExA(param_2,(LPCSTR)0x0,4);
        MoveFileExA(local_204,param_2,4);
        return;
      }
      pcVar2 = FUN_004097b1(acStack_105 + 1);
      wsprintfA(local_504,s_del__s_rename__s__s_00410de4,acStack_105 + 1,local_204,pcVar2);
      GetWindowsDirectoryA(acStack_105 + 1,0x100);
      iVar3 = lstrlenA(acStack_105 + 1);
      if (acStack_105[iVar3] != '\\') {
        lstrcatA(acStack_105 + 1,&DAT_004100cc);
      }
      lstrcatA(acStack_105 + 1,s__MSSETUP_BAT_004106c4);
      hFile = _lopen(acStack_105 + 1,1);
      if (hFile == -1) {
        hFile = _lcreat(acStack_105 + 1,0);
      }
      else {
        _llseek(hFile,0,2);
      }
      if (hFile == -1) {
        return;
      }
      uBytes = lstrlenA(local_504);
      _lwrite(hFile,local_504,uBytes);
      _lclose(hFile);
      return;
    }
  }
  FUN_0040812b(pCVar4);
  return;
}


