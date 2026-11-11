
/* ==== FUN_004b8929 @ 004b8929 ==== 
 * signature: undefined __thiscall FUN_004b8929(void * this, int param_1, CWnd * param_2, int param_3)
 * body: 004b8929-004b8a00
 */

void __thiscall FUN_004b8929(void *this,int param_1,CWnd *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  CFrameWnd *pCVar4;
  CFrameWnd *pCVar5;
  LRESULT LVar6;
  int *piVar7;
  int iVar8;
  
  FUN_004a8882(this);
  uVar3 = CWnd::GetExStyle(this);
  pCVar4 = this;
  if ((uVar3 & 0x40000000) == 0) {
    pCVar4 = CWnd::GetTopLevelFrame(this);
  }
  if (param_1 != 0) {
    param_2 = this;
  }
  if ((param_2 == (CWnd *)pCVar4) ||
     ((pCVar5 = CWnd::GetTopLevelFrame(param_2), pCVar5 == pCVar4 &&
      ((param_2 == (CWnd *)pCVar4 ||
       (LVar6 = SendMessageA(*(HWND *)(param_2 + 0x1c),0x36d,0x40,0), LVar6 != 0)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pCVar4 = pCVar4 + 0x24;
  uVar1 = *(uint *)pCVar4;
  *(uint *)pCVar4 = uVar1 & 0xffffffdf;
  if (bVar2) {
    *(uint *)pCVar4 = uVar1 & 0xffffffdf | 0x20;
  }
  CFrameWnd::NotifyFloatingWindows(this,(-(uint)!bVar2 & 4) + 4);
  piVar7 = (int *)FUN_004b8d18((int)this);
  if (piVar7 == (int *)0x0) {
    iVar8 = (**(code **)(*(int *)this + 0xc4))();
    piVar7 = (int *)FUN_004b8d18(iVar8);
    if (piVar7 == (int *)0x0) {
      return;
    }
  }
  if ((param_1 != 0) && (param_3 == 0)) {
    (**(code **)(*piVar7 + 0xe8))(1,piVar7,piVar7);
  }
  (**(code **)(*piVar7 + 0xec))(param_1,this);
  return;
}


