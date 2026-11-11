
/* ==== CWnd::EnableScrollBarCtrl @ 004aa755 ==== 
 * signature: void __thiscall EnableScrollBarCtrl(CWnd * this, int param_1, int param_2)
 * body: 004aa755-004aa79a
 * note: Library Function - Single Match  public: void __thiscall CWnd::EnableScrollBarCtrl(int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::EnableScrollBarCtrl(int,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::EnableScrollBarCtrl(CWnd *this,int param_1,int param_2)

{
  CWnd *this_00;
  
  if (param_1 == 3) {
    param_1 = 1;
    EnableScrollBarCtrl(this,0,param_2);
  }
  this_00 = (CWnd *)(**(code **)(*(int *)this + 0x6c))(param_1);
  if (this_00 == (CWnd *)0x0) {
    ShowScrollBar(*(HWND *)(this + 0x1c),param_1,param_2);
  }
  else {
    EnableWindow(this_00,param_2);
  }
  return;
}


