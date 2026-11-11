
/* ==== CWnd::OnWinIniChange @ 004aafc9 ==== 
 * signature: void __thiscall OnWinIniChange(CWnd * this, char * param_1)
 * body: 004aafc9-004ab014
 * note: Library Function - Single Match  protected: void __thiscall CWnd::OnWinIniChange(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnWinIniChange(char const *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::OnWinIniChange(CWnd *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004bafca();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_004bbf67();
    iVar2 = FUN_004a7052();
    if (iVar2 != 0) {
      iVar2 = FUN_004a7052();
      if ((*(CWnd **)(iVar2 + 0x1c) == this) && (*(code **)(iVar1 + 0x24) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x24))();
      }
    }
  }
  OnDisplayChange(this,0,0);
  return;
}


