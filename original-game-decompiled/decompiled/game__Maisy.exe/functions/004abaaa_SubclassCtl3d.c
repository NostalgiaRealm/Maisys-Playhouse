
/* ==== CWnd::SubclassCtl3d @ 004abaaa ==== 
 * signature: int __thiscall SubclassCtl3d(CWnd * this, int param_1)
 * body: 004abaaa-004abaf3
 * note: Library Function - Single Match  public: int __thiscall CWnd::SubclassCtl3d(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::SubclassCtl3d(int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::SubclassCtl3d(CWnd *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bafca();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_004bbf67();
    if (param_1 == -1) {
      if (*(code **)(iVar1 + 0x28) != (code *)0x0) {
        iVar1 = (**(code **)(iVar1 + 0x28))(*(undefined4 *)(this + 0x1c));
        return iVar1;
      }
    }
    else if (*(code **)(iVar1 + 0x2c) != (code *)0x0) {
      iVar1 = (**(code **)(iVar1 + 0x2c))(*(undefined4 *)(this + 0x1c),param_1);
      return iVar1;
    }
  }
  return 0;
}


