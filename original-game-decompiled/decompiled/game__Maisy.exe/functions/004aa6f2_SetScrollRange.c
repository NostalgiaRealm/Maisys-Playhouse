
/* ==== CWnd::SetScrollRange @ 004aa6f2 ==== 
 * signature: void __thiscall SetScrollRange(CWnd * this, int param_1, int param_2, int param_3, int param_4)
 * body: 004aa6f2-004aa724
 * note: Library Function - Single Match  public: void __thiscall CWnd::SetScrollRange(int,int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::SetScrollRange(int,int,int,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::SetScrollRange(CWnd *this,int param_1,int param_2,int param_3,int param_4)

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
  ::SetScrollRange(hWnd,param_1,param_2,param_3,param_4);
  return;
}


