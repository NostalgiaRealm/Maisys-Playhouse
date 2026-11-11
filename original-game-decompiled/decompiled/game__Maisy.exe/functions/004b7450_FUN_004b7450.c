
/* ==== FUN_004b7450 @ 004b7450 ==== 
 * signature: undefined __thiscall FUN_004b7450(void * this, int param_1)
 * body: 004b7450-004b755a
 */

void __thiscall FUN_004b7450(void *this,int param_1)

{
  ulong uVar1;
  CMDIFrameWnd *pCVar2;
  CMDIFrameWnd *pCVar3;
  uint uVar4;
  LRESULT LVar5;
  int local_c;
  uint local_8;
  
  uVar1 = CWnd::GetExStyle(this);
  local_8 = (uVar1 & 0x10000000) >> 0x1c;
  pCVar2 = CMDIChildWnd::GetMDIFrame(this);
  if (param_1 == -1) {
    CMDIFrameWnd::MDIGetActive(pCVar2,&local_c);
    uVar1 = CWnd::GetExStyle(this);
    if ((local_c == 0) && ((uVar1 & 0x1000000) == 0)) {
      if ((uVar1 & 0x20000000) != 0) {
        param_1 = 2;
      }
    }
    else {
      param_1 = 3;
    }
  }
  CFrameWnd::ActivateFrame(this,param_1);
  pCVar3 = CMDIChildWnd::GetMDIFrame(this);
  SendMessageA(*(HWND *)(pCVar3 + 0xbc),0x234,0,0);
  uVar1 = CWnd::GetExStyle(this);
  uVar4 = (uVar1 & 0x10000000) >> 0x1c;
  if (uVar4 != local_8) {
    if (uVar4 == 0) {
      pCVar2 = pCVar2 + 0xbc;
      LVar5 = SendMessageA(*(HWND *)pCVar2,0x229,0,0);
      if (*(int *)((int)this + 0x1c) == LVar5) {
        SendMessageA(*(HWND *)pCVar2,0x224,0,0);
        LVar5 = SendMessageA(*(HWND *)pCVar2,0x229,0,0);
        if (*(int *)((int)this + 0x1c) == LVar5) {
          CMDIChildWnd::OnMDIActivate(this,0,(CWnd *)0x0,this);
          *(undefined4 *)((int)this + 0xc0) = 1;
        }
      }
    }
    else if (*(int *)((int)this + 0xc0) != 0) {
      CMDIChildWnd::OnMDIActivate(this,1,this,(CWnd *)0x0);
    }
  }
  return;
}


