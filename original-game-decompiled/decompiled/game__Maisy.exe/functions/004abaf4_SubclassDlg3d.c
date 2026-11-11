
/* ==== CWnd::SubclassDlg3d @ 004abaf4 ==== 
 * signature: int __thiscall SubclassDlg3d(CWnd * this, ulong param_1)
 * body: 004abaf4-004abb2d
 * note: Library Function - Single Match  public: int __thiscall CWnd::SubclassDlg3d(unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::SubclassDlg3d(unsigned long)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::SubclassDlg3d(CWnd *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004bafca();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_004bbf67();
    iVar2 = 0;
    if (*(code **)(iVar1 + 0x20) != (code *)0x0) {
      iVar2 = (**(code **)(iVar1 + 0x20))(*(undefined4 *)(this + 0x1c),param_1);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


