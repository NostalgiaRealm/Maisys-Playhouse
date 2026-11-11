
/* ==== CFrameWnd::OnUpdateContextHelp @ 004b9594 ==== 
 * signature: void __thiscall OnUpdateContextHelp(CFrameWnd * this, CCmdUI * param_1)
 * body: 004b9594-004b95d5
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnUpdateContextHelp(class CCmdUI *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnUpdateContextHelp(class CCmdUI *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnUpdateContextHelp(CFrameWnd *this,CCmdUI *param_1)

{
  int iVar1;
  int *piVar2;
  CFrameWnd *pCVar3;
  bool bVar4;
  
  iVar1 = FUN_004a7052();
  if (iVar1 == 0) {
    bVar4 = this == (CFrameWnd *)0x0;
  }
  else {
    piVar2 = (int *)FUN_004a7052();
    pCVar3 = (CFrameWnd *)(**(code **)(*piVar2 + 0x78))();
    bVar4 = pCVar3 == this;
  }
  if (bVar4) {
    (**(code **)(*(int *)param_1 + 4))(*(int *)(this + 0x50) != 0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}


