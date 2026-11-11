
/* ==== CWnd::GetScrollInfo @ 004aa7ec ==== 
 * signature: int __thiscall GetScrollInfo(CWnd * this, int param_1, tagSCROLLINFO * param_2, uint param_3)
 * body: 004aa7ec-004aa83a
 * note: Library Function - Single Match  public: int __thiscall CWnd::GetScrollInfo(int,struct tagSCROLLINFO *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::GetScrollInfo(int,struct tagSCROLLINFO *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::GetScrollInfo(CWnd *this,int param_1,tagSCROLLINFO *param_2,uint param_3)

{
  int iVar1;
  HWND hwnd;
  
  if (DAT_004e51f0 < 0x333) {
    iVar1 = 0;
  }
  else {
    hwnd = *(HWND *)(this + 0x1c);
    if (param_1 != 2) {
      iVar1 = (**(code **)(*(int *)this + 0x6c))(param_1);
      if (iVar1 != 0) {
        hwnd = *(HWND *)(iVar1 + 0x1c);
        param_1 = 2;
      }
    }
    param_2->cbSize = 0x1c;
    param_2->fMask = param_3;
    iVar1 = ::GetScrollInfo(hwnd,param_1,param_2);
  }
  return iVar1;
}


