
/* ==== CWnd::OnSysColorChange @ 004aaf3f ==== 
 * signature: void __thiscall OnSysColorChange(CWnd * this)
 * body: 004aaf3f-004aafc8
 * note: Library Function - Single Match  protected: void __thiscall CWnd::OnSysColorChange(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnSysColorChange(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::OnSysColorChange(CWnd *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_004bafca();
  iVar1 = *(int *)(iVar1 + 4);
  FUN_004bbf67();
  if (*(CWnd **)(iVar1 + 0x1c) == this) {
    FUN_004ad73f(0x4e5180);
  }
  iVar1 = FUN_004bafca();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_004a7052();
    if (iVar1 != 0) {
      iVar1 = FUN_004a7052();
      if (*(CWnd **)(iVar1 + 0x1c) == this) {
        iVar1 = FUN_004bbf67();
        if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
          (**(code **)(iVar1 + 0x1c))();
        }
      }
    }
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    SendMessageToDescendants(*(HWND__ **)(this + 0x1c),0x15,0,0,1,1);
  }
  FUN_004a8882((int *)this);
  return;
}


