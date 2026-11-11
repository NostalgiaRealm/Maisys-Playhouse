
/* ==== CFrameWnd::OnCommandHelp @ 004b7d3f ==== 
 * signature: long __thiscall OnCommandHelp(CFrameWnd * this, uint param_1, long param_2)
 * body: 004b7d3f-004b7d92
 * note: Library Function - Single Match  protected: long __thiscall CFrameWnd::OnCommandHelp(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnCommandHelp(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CFrameWnd::OnCommandHelp(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = IsTracking(this);
    if (iVar1 == 0) {
      param_2 = *(int *)(this + 0x8c) + 0x20000;
    }
    else {
      param_2 = *(int *)(this + 0x90) + 0x10000;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_004bafca();
  (**(code **)(**(int **)(iVar1 + 4) + 0x9c))(param_2,1);
  return 1;
}


