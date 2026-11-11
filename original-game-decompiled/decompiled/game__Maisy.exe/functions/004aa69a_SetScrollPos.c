
/* ==== CWnd::SetScrollPos @ 004aa69a ==== 
 * signature: int __thiscall SetScrollPos(CWnd * this, int param_1, int param_2, int param_3)
 * body: 004aa69a-004aa6c9
 * note: Library Function - Single Match  public: int __thiscall CWnd::SetScrollPos(int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::SetScrollPos(int,int,int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::SetScrollPos(CWnd *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x6c))(param_1);
  if (iVar1 == 0) {
    hWnd = *(HWND *)(this + 0x1c);
  }
  else {
    param_1 = 2;
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  iVar1 = ::SetScrollPos(hWnd,param_1,param_2,param_3);
  return iVar1;
}


