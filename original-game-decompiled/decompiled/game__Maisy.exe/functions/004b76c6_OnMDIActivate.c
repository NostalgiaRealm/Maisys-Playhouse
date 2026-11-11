
/* ==== CMDIChildWnd::OnMDIActivate @ 004b76c6 ==== 
 * signature: void __thiscall OnMDIActivate(CMDIChildWnd * this, int param_1, CWnd * param_2, CWnd * param_3)
 * body: 004b76c6-004b779c
 * note: Library Function - Single Match  protected: void __thiscall CMDIChildWnd::OnMDIActivate(int,class CWnd *,class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CMDIChildWnd::OnMDIActivate(int,class CWnd *,class CWnd *)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CMDIChildWnd::OnMDIActivate(CMDIChildWnd *this,int param_1,CWnd *param_2,CWnd *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CMDIFrameWnd *pCVar7;
  
  *(undefined4 *)(this + 0xc0) = 0;
  FUN_004b72a4(this,(LPRECT)0x0);
  piVar2 = (int *)FUN_004b8d18((int)this);
  if ((param_1 == 0) && (piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xe8))(0,piVar2,piVar2);
  }
  bVar1 = false;
  if (*(int **)(this + 0x68) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(this + 0x68) + 0x60))(param_1);
    if (iVar3 != 0) {
      bVar1 = true;
    }
  }
  if (!bVar1) {
    if ((param_1 != 0) || (uVar4 = 0, param_2 != (CWnd *)0x0)) {
      uVar4 = 1;
    }
    (**(code **)(*(int *)this + 0xe4))(uVar4);
  }
  if ((param_1 != 0) && (piVar2 != (int *)0x0)) {
    pHVar5 = GetActiveWindow();
    pCVar6 = CWnd::FromHandle(pHVar5);
    pCVar7 = GetMDIFrame(this);
    if (pCVar6 == (CWnd *)pCVar7) {
      (**(code **)(*piVar2 + 0xe8))(1,piVar2,piVar2);
    }
  }
  if (!bVar1) {
    (**(code **)(*(int *)this + 0xfc))(param_1,param_2,0);
    pCVar7 = GetMDIFrame(this);
    DrawMenuBar(*(HWND *)(pCVar7 + 0x1c));
  }
  return;
}


