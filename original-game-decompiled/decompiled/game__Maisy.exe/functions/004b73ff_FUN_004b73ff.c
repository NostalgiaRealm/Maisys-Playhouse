
/* ==== FUN_004b73ff @ 004b73ff ==== 
 * signature: int __fastcall FUN_004b73ff(CMDIChildWnd * param_1)
 * body: 004b73ff-004b744f
 */

int __fastcall FUN_004b73ff(CMDIChildWnd *param_1)

{
  int iVar1;
  CMDIFrameWnd *this;
  CMDIChildWnd *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  UINT Msg;
  HWND hWnd;
  LPARAM lParam;
  
  iVar1 = FUN_004a8882((int *)param_1);
  if ((iVar1 != 3) && (iVar1 != 4)) {
    this = CMDIChildWnd::GetMDIFrame(param_1);
    pCVar2 = CMDIFrameWnd::MDIGetActive(this,(int *)0x0);
    if (pCVar2 != param_1) {
      hWnd = *(HWND *)(param_1 + 0x1c);
      lParam = 0;
      Msg = 0x222;
      pHVar3 = GetParent(hWnd);
      pCVar4 = CWnd::FromHandle(pHVar3);
      SendMessageA(*(HWND *)(pCVar4 + 0x1c),Msg,(WPARAM)hWnd,lParam);
    }
  }
  return iVar1;
}


