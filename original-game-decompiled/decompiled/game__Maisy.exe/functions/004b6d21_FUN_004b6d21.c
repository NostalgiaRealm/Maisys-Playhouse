
/* ==== FUN_004b6d21 @ 004b6d21 ==== 
 * signature: CMDIChildWnd * __fastcall FUN_004b6d21(CMDIFrameWnd * param_1)
 * body: 004b6d21-004b6d34
 */

CMDIChildWnd * __fastcall FUN_004b6d21(CMDIFrameWnd *param_1)

{
  CMDIChildWnd *pCVar1;
  
  pCVar1 = CMDIFrameWnd::MDIGetActive(param_1,(int *)0x0);
  if (pCVar1 != (CMDIChildWnd *)0x0) {
    param_1 = (CMDIFrameWnd *)pCVar1;
  }
  return (CMDIChildWnd *)param_1;
}


