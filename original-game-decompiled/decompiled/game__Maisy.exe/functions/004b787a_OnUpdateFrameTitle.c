
/* ==== CMDIFrameWnd::OnUpdateFrameTitle @ 004b787a ==== 
 * signature: void __thiscall OnUpdateFrameTitle(CMDIFrameWnd * this, int param_1)
 * body: 004b787a-004b78f0
 * note: Library Function - Single Match  public: virtual void __thiscall CMDIFrameWnd::OnUpdateFrameTitle(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CMDIFrameWnd::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMDIFrameWnd::OnUpdateFrameTitle(CMDIFrameWnd *this,int param_1)

{
  ulong uVar1;
  int iVar2;
  CMDIChildWnd *this_00;
  char *pcVar3;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar1 & 0x8000) == 0) {
    return;
  }
  if ((*(int **)(this + 0x68) != (int *)0x0) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x68) + 0x6c))(), iVar2 != 0)) {
    return;
  }
  iVar2 = (**(code **)(*(int *)this + 0xc0))();
  if ((((param_1 == 0) || (this_00 = MDIGetActive(this,(int *)0x0), this_00 == (CMDIChildWnd *)0x0))
      || (uVar1 = CWnd::GetExStyle((CWnd *)this_00), (uVar1 & 0x1000000) != 0)) ||
     ((iVar2 == 0 && (iVar2 = (**(code **)(*(int *)this_00 + 0xc0))(), iVar2 == 0)))) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = *(char **)(iVar2 + 0x1c);
  }
  CFrameWnd::UpdateFrameTitleForDocument((CFrameWnd *)this,pcVar3);
  return;
}


