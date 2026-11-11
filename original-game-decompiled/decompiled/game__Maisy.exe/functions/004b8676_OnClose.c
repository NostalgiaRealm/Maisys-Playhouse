
/* ==== CFrameWnd::OnClose @ 004b8676 ==== 
 * signature: void __thiscall OnClose(CFrameWnd * this)
 * body: 004b8676-004b8772
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnClose(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnClose(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnClose(CFrameWnd *this)

{
  CWinApp *this_00;
  bool bVar1;
  int iVar2;
  int *piVar3;
  CWnd *this_01;
  CFrameWnd *pCVar4;
  int iStack_4;
  
  if ((*(code **)(this + 0x9c) != (code *)0x0) &&
     (iVar2 = (**(code **)(this + 0x9c))(this), iVar2 == 0)) {
    return;
  }
  piVar3 = (int *)(**(code **)(*(int *)this + 0xc0))();
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x90))(this), iVar2 == 0)) {
    return;
  }
  iVar2 = FUN_004bafca();
  this_00 = *(CWinApp **)(iVar2 + 4);
  if (*(CFrameWnd **)(this_00 + 0x1c) == this) {
    if ((piVar3 == (int *)0x0) && (iVar2 = (**(code **)(*(int *)this_00 + 0x8c))(), iVar2 == 0)) {
      return;
    }
    CWinApp::HideApplication(this_00);
    FUN_004b468f(this_00,0);
    iVar2 = AfxOleCanExitApp();
    if (iVar2 == 0) {
      AfxOleSetUserCtrl(0);
      return;
    }
    iVar2 = FUN_004bafca();
    if ((*(char *)(iVar2 + 0x14) == '\0') && (*(int *)(this_00 + 0x1c) == 0)) {
      FUN_004bd490(0);
      return;
    }
  }
  if ((piVar3 != (int *)0x0) && (piVar3[0x12] != 0)) {
    bVar1 = false;
    iVar2 = *piVar3;
    iStack_4 = (**(code **)(iVar2 + 100))();
    do {
      if (iStack_4 == 0) goto LAB_004b874d;
      this_01 = (CWnd *)(**(code **)(iVar2 + 0x68))(&iStack_4);
      pCVar4 = CWnd::GetParentFrame(this_01);
    } while (pCVar4 == this);
    bVar1 = true;
LAB_004b874d:
    if (!bVar1) {
      (**(code **)(iVar2 + 0x80))();
      return;
    }
    (**(code **)(iVar2 + 0x98))(this);
  }
  (**(code **)(*(int *)this + 0x5c))();
  return;
}


