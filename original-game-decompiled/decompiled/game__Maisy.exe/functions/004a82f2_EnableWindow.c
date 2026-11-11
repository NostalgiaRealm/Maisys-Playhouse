
/* ==== CWnd::EnableWindow @ 004a82f2 ==== 
 * signature: int __thiscall EnableWindow(CWnd * this, int param_1)
 * body: 004a82f2-004a8314
 * note: Library Function - Single Match  public: int __thiscall CWnd::EnableWindow(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::EnableWindow(int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
  if (*(int **)(this + 0x38) == (int *)0x0) {
    iVar1 = ::EnableWindow(*(HWND *)(this + 0x1c),param_1);
  }
  else {
    iVar1 = (**(code **)(**(int **)(this + 0x38) + 0xac))();
  }
  return iVar1;
}


