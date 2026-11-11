
/* ==== CFrameWnd::OnActivateTopLevel @ 004b88ad ==== 
 * signature: long __thiscall OnActivateTopLevel(CFrameWnd * this, uint param_1, long param_2)
 * body: 004b88ad-004b8928
 * note: Library Function - Single Match  protected: long __thiscall CFrameWnd::OnActivateTopLevel(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnActivateTopLevel(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CFrameWnd::OnActivateTopLevel(CFrameWnd *this,uint param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  CWnd::OnActivateTopLevel((CWnd *)this,param_1,param_2);
  iVar4 = *(int *)this;
  (**(code **)(iVar4 + 0xf4))();
  if (*(int **)(this + 0x68) != (int *)0x0) {
    if (((short)param_1 == 0) || (uVar1 = 1, (short)(param_1 >> 0x10) != 0)) {
      uVar1 = 0;
    }
    (**(code **)(**(int **)(this + 0x68) + 0x5c))(uVar1);
  }
  iVar2 = FUN_004a7052();
  if (*(CFrameWnd **)(iVar2 + 0x1c) == this) {
    piVar3 = (int *)FUN_004b8d18((int)this);
    if (piVar3 == (int *)0x0) {
      iVar4 = (**(code **)(iVar4 + 0xc4))();
      piVar3 = (int *)FUN_004b8d18(iVar4);
      if (piVar3 == (int *)0x0) {
        return 0;
      }
    }
    (**(code **)(*piVar3 + 0xe8))(0,piVar3,piVar3);
  }
  return 0;
}


