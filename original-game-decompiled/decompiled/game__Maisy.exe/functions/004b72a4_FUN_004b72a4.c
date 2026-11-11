
/* ==== FUN_004b72a4 @ 004b72a4 ==== 
 * signature: undefined4 __thiscall FUN_004b72a4(void * this, LPRECT param_1)
 * body: 004b72a4-004b7365
 */

undefined4 __thiscall FUN_004b72a4(void *this,LPRECT param_1)

{
  CMDIFrameWnd *pCVar1;
  CMDIChildWnd *pCVar2;
  uint uVar3;
  ulong uVar4;
  uint dwNewLong;
  
  if (DAT_004e51f8 != 0) {
    pCVar1 = CMDIChildWnd::GetMDIFrame(this);
    pCVar2 = CMDIFrameWnd::MDIGetActive(pCVar1,(int *)0x0);
    if ((pCVar2 == (CMDIChildWnd *)0x0) || (this == pCVar2)) {
      pCVar1 = pCVar1 + 0xbc;
      uVar3 = GetWindowLongA(*(HWND *)pCVar1,-0x14);
      if ((pCVar2 == (CMDIChildWnd *)0x0) ||
         ((uVar4 = CWnd::GetExStyle(this), (uVar4 & 0x200) != 0 ||
          (uVar4 = CWnd::GetExStyle(this), (uVar4 & 0x1000000) == 0)))) {
        dwNewLong = uVar3 | 0x200;
      }
      else {
        dwNewLong = uVar3 & 0xfffffdff;
      }
      if (dwNewLong != uVar3) {
        RedrawWindow(*(HWND *)pCVar1,(RECT *)0x0,(HRGN)0x0,0x81);
        SetWindowLongA(*(HWND *)pCVar1,-0x14,dwNewLong);
        SetWindowPos(*(HWND *)pCVar1,(HWND)0x0,0,0,0,0,0x137);
        if (param_1 != (LPRECT)0x0) {
          GetClientRect(*(HWND *)pCVar1,param_1);
        }
        return 1;
      }
    }
  }
  return 0;
}


