
/* ==== CMDIFrameWnd::OnCommandHelp @ 004b6a76 ==== 
 * signature: long __thiscall OnCommandHelp(CMDIFrameWnd * this, uint param_1, long param_2)
 * body: 004b6a76-004b6af0
 * note: Library Function - Single Match  protected: long __thiscall CMDIFrameWnd::OnCommandHelp(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CMDIFrameWnd::OnCommandHelp(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CMDIFrameWnd::OnCommandHelp(CMDIFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  CMDIChildWnd *pCVar2;
  long lVar3;
  
  if ((param_2 == 0) && (iVar1 = CFrameWnd::IsTracking((CFrameWnd *)this), iVar1 != 0)) {
    param_2 = *(int *)(this + 0x90) + 0x10000;
  }
  pCVar2 = MDIGetActive(this,(int *)0x0);
  if (((pCVar2 == (CMDIChildWnd *)0x0) || (iVar1 = FUN_004a86b6(), iVar1 == 0)) &&
     (lVar3 = CFrameWnd::OnCommandHelp((CFrameWnd *)this,param_1,param_2), lVar3 == 0)) {
    if (param_2 == 0) {
      return 0;
    }
    iVar1 = FUN_004bafca();
    (**(code **)(**(int **)(iVar1 + 4) + 0x9c))(param_2,1);
  }
  return 1;
}


