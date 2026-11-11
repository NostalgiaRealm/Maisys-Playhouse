
/* ==== CWnd::SetWindowPos @ 004a825e ==== 
 * signature: int __thiscall SetWindowPos(CWnd * this, CWnd * param_1, int param_2, int param_3, int param_4, int param_5, uint param_6)
 * body: 004a825e-004a82b1
 * note: Library Function - Single Match  public: int __thiscall CWnd::SetWindowPos(class CWnd const *,int,int,int,int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::SetWindowPos(class CWnd const *,int,int,int,int,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  HWND hWndInsertAfter;
  
  if (*(int **)(this + 0x38) == (int *)0x0) {
    hWndInsertAfter = (HWND)0x0;
    if (param_1 != (CWnd *)0x0) {
      hWndInsertAfter = *(HWND *)(param_1 + 0x1c);
    }
    iVar1 = ::SetWindowPos(*(HWND *)(this + 0x1c),hWndInsertAfter,param_2,param_3,param_4,param_5,
                           param_6);
  }
  else {
    iVar1 = (**(code **)(**(int **)(this + 0x38) + 0xa0))
                      (param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return iVar1;
}


