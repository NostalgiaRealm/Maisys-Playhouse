
/* ==== CWnd::ModifyStyle @ 004a8156 ==== 
 * signature: int __thiscall ModifyStyle(CWnd * this, ulong param_1, ulong param_2, uint param_3)
 * body: 004a8156-004a8180
 * note: Library Function - Single Match  public: int __thiscall CWnd::ModifyStyle(unsigned long,unsigned long,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::ModifyStyle(unsigned long,unsigned long,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::ModifyStyle(CWnd *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
  if (*(int **)(this + 0x38) == (int *)0x0) {
    iVar1 = ModifyStyleEx(*(HWND__ **)(this + 0x1c),param_1,param_2,param_3);
  }
  else {
    iVar1 = (**(code **)(**(int **)(this + 0x38) + 0x80))();
  }
  return iVar1;
}


