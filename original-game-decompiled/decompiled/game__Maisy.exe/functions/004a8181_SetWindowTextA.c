
/* ==== CWnd::SetWindowTextA @ 004a8181 ==== 
 * signature: void __thiscall SetWindowTextA(CWnd * this, char * param_1)
 * body: 004a8181-004a81a3
 * note: Library Function - Single Match  public: void __thiscall CWnd::SetWindowTextA(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::SetWindowTextA(char const *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1)

{
  if (*(int **)(this + 0x38) == (int *)0x0) {
    ::SetWindowTextA(*(HWND *)(this + 0x1c),param_1);
  }
  else {
    (**(code **)(**(int **)(this + 0x38) + 0x84))();
  }
  return;
}


