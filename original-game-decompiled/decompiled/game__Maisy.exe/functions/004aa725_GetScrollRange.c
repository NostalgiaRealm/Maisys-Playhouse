
/* ==== CWnd::GetScrollRange @ 004aa725 ==== 
 * signature: void __thiscall GetScrollRange(CWnd * this, int param_1, int * param_2, int * param_3)
 * body: 004aa725-004aa754
 * note: Library Function - Single Match  public: void __thiscall CWnd::GetScrollRange(int,int *,int *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::GetScrollRange(int,int *,int *)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::GetScrollRange(CWnd *this,int param_1,int *param_2,int *param_3)

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
  ::GetScrollRange(hWnd,param_1,param_2,param_3);
  return;
}


