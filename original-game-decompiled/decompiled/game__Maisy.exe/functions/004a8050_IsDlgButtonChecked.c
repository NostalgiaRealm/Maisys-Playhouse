
/* ==== CWnd::IsDlgButtonChecked @ 004a8050 ==== 
 * signature: uint __thiscall IsDlgButtonChecked(CWnd * this, int param_1)
 * body: 004a8050-004a8072
 * note: Library Function - Single Match  public: unsigned int __thiscall CWnd::IsDlgButtonChecked(int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: unsigned int __thiscall CWnd::IsDlgButtonChecked(int)const 
   
   Library: Visual Studio 1998 Release */

uint __thiscall CWnd::IsDlgButtonChecked(CWnd *this,int param_1)

{
  uint uVar1;
  
  if (*(int **)(this + 0x34) == (int *)0x0) {
    uVar1 = ::IsDlgButtonChecked(*(HWND *)(this + 0x1c),param_1);
  }
  else {
    uVar1 = (**(code **)(**(int **)(this + 0x34) + 0x8c))();
  }
  return uVar1;
}


