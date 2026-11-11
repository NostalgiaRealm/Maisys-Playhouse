
/* ==== CWnd::ShowWindow @ 004a82b2 ==== 
 * signature: int __thiscall ShowWindow(CWnd * this, int param_1)
 * body: 004a82b2-004a82d4
 * note: Library Function - Single Match  public: int __thiscall CWnd::ShowWindow(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::ShowWindow(int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
  if (*(int **)(this + 0x38) == (int *)0x0) {
    iVar1 = ::ShowWindow(*(HWND *)(this + 0x1c),param_1);
  }
  else {
    iVar1 = (**(code **)(**(int **)(this + 0x38) + 0xa4))();
  }
  return iVar1;
}


