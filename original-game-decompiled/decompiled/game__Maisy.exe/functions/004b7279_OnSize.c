
/* ==== CMDIChildWnd::OnSize @ 004b7279 ==== 
 * signature: void __thiscall OnSize(CMDIChildWnd * this, uint param_1, int param_2, int param_3)
 * body: 004b7279-004b72a3
 * note: Library Function - Single Match  protected: void __thiscall CMDIChildWnd::OnSize(unsigned int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CMDIChildWnd::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMDIChildWnd::OnSize(CMDIChildWnd *this,uint param_1,int param_2,int param_3)

{
  CMDIFrameWnd *pCVar1;
  
  CFrameWnd::OnSize((CFrameWnd *)this,param_1,param_2,param_3);
  pCVar1 = GetMDIFrame(this);
  (**(code **)(*(int *)pCVar1 + 0xe4))(1);
  return;
}


