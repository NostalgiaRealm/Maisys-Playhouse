
/* ==== CFrameWnd::ShowControlBar @ 004b8d99 ==== 
 * signature: void __thiscall ShowControlBar(CFrameWnd * this, CControlBar * param_1, int param_2, int param_3)
 * body: 004b8d99-004b8e9e
 * note: Library Function - Single Match  public: void __thiscall CFrameWnd::ShowControlBar(class CControlBar *,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CFrameWnd::ShowControlBar(class CControlBar *,int,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CFrameWnd::ShowControlBar(CFrameWnd *this,CControlBar *param_1,int param_2,int param_3)

{
  CFrameWnd *this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = CControlBar::GetDockingFrame(param_1);
  if (param_3 == 0) {
    CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,
                       (-(uint)(param_2 == 0) & 0x40) + 0x40 | 0x17);
    (**(code **)(*(int *)param_1 + 200))(param_2);
    if ((param_2 != 0) || (iVar1 = CControlBar::IsFloating(param_1), iVar1 == 0)) {
      (**(code **)(*(int *)this_00 + 0xcc))(0);
    }
  }
  else {
    (**(code **)(*(int *)param_1 + 200))(param_2);
    this_00[0xb8] = (CFrameWnd)((byte)this_00[0xb8] | 0xc);
  }
  iVar1 = CControlBar::IsFloating(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int **)(param_1 + 0x70) == (int *)0x0) {
    uVar2 = (uint)(param_2 != 0);
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x70) + 0xe4))();
  }
  if ((uVar2 == 1) && (param_2 != 0)) {
    *(undefined4 *)(this_00 + 0x88) = 0xffffffff;
    if (param_3 == 0) {
      CWnd::ShowWindow((CWnd *)this_00,8);
      return;
    }
    *(undefined4 *)(this_00 + 0x88) = 8;
  }
  else {
    if (uVar2 == 0) {
      *(undefined4 *)(this_00 + 0x88) = 0xffffffff;
      if (param_3 != 0) {
        *(undefined4 *)(this_00 + 0x88) = 0;
        return;
      }
      CWnd::ShowWindow((CWnd *)this_00,0);
      return;
    }
    if (param_3 != 0) {
      return;
    }
  }
  (**(code **)(*(int *)this_00 + 0xcc))(0);
  return;
}


