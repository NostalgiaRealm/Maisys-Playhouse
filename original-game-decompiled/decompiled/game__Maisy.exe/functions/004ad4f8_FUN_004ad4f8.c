
/* ==== FUN_004ad4f8 @ 004ad4f8 ==== 
 * signature: undefined __fastcall FUN_004ad4f8(int param_1)
 * body: 004ad4f8-004ad576
 */

void __fastcall FUN_004ad4f8(int param_1)

{
  int iVar1;
  CWinApp *this;
  char *pcVar2;
  LPSTR pCVar3;
  int iVar4;
  
  pCVar3 = (LPSTR)FUN_004a5fed(*(int *)(*(int *)(param_1 + 0x10) + -8) + 5);
  iVar4 = FUN_004bafca();
  this = *(CWinApp **)(iVar4 + 4);
  CWinApp::WriteProfileStringA(this,*(char **)(param_1 + 0xc),(char *)0x0,(char *)0x0);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar1 = iVar4 + 1;
      wsprintfA(pCVar3,*(LPCSTR *)(param_1 + 0x10),iVar1);
      pcVar2 = *(char **)(*(int *)(param_1 + 8) + iVar4 * 4);
      if (*(int *)(pcVar2 + -8) != 0) {
        CWinApp::WriteProfileStringA(this,*(char **)(param_1 + 0xc),pCVar3,pcVar2);
      }
      iVar4 = iVar1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  FUN_004a602d(pCVar3);
  return;
}


