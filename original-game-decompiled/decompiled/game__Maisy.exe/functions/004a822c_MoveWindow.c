
/* ==== CWnd::MoveWindow @ 004a822c ==== 
 * signature: void __thiscall MoveWindow(CWnd * this, int param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 004a822c-004a825d
 * note: Library Function - Single Match  public: void __thiscall CWnd::MoveWindow(int,int,int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::MoveWindow(int,int,int,int,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CWnd::MoveWindow(CWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(int **)(this + 0x38) == (int *)0x0) {
    ::MoveWindow(*(HWND *)(this + 0x1c),param_1,param_2,param_3,param_4,param_5);
  }
  else {
    (**(code **)(**(int **)(this + 0x38) + 0x9c))();
  }
  return;
}


