
/* ==== CFrameWnd::OnUpdateFrameTitle @ 004b95d6 ==== 
 * signature: void __thiscall OnUpdateFrameTitle(CFrameWnd * this, int param_1)
 * body: 004b95d6-004b9619
 * note: Library Function - Single Match  public: virtual void __thiscall CFrameWnd::OnUpdateFrameTitle(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnUpdateFrameTitle(CFrameWnd *this,int param_1)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar1 & 0x8000) != 0) {
    if ((*(int **)(this + 0x68) != (int *)0x0) &&
       (iVar2 = (**(code **)(**(int **)(this + 0x68) + 0x6c))(), iVar2 != 0)) {
      return;
    }
    iVar2 = (**(code **)(*(int *)this + 0xc0))();
    if ((param_1 == 0) || (iVar2 == 0)) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = *(char **)(iVar2 + 0x1c);
    }
    UpdateFrameTitleForDocument(this,pcVar3);
  }
  return;
}


