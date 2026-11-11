
/* ==== CFrameWnd::OnEnterIdle @ 004b926d ==== 
 * signature: void __thiscall OnEnterIdle(CFrameWnd * this, uint param_1, CWnd * param_2)
 * body: 004b926d-004b929d
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnEnterIdle(unsigned int,class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnEnterIdle(unsigned int,class CWnd *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnEnterIdle(CFrameWnd *this,uint param_1,CWnd *param_2)

{
  CWnd::OnEnterIdle((CWnd *)this,param_1,param_2);
  if ((param_1 == 2) && (*(uint *)(this + 0x94) != *(uint *)(this + 0x90))) {
    SetMessageText(this,*(uint *)(this + 0x90));
  }
  return;
}


