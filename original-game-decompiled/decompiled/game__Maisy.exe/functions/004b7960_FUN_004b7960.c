
/* ==== FUN_004b7960 @ 004b7960 ==== 
 * signature: undefined __fastcall FUN_004b7960(CMDIFrameWnd * param_1)
 * body: 004b7960-004b79af
 */

void __fastcall FUN_004b7960(CMDIFrameWnd *param_1)

{
  int iVar1;
  CMDIChildWnd *pCVar2;
  int iVar3;
  int iVar4;
  
  pCVar2 = CMDIFrameWnd::MDIGetActive(param_1,(int *)0x0);
  if ((pCVar2 != (CMDIChildWnd *)0x0) &&
     (iVar3 = (**(code **)(*(int *)pCVar2 + 0xc0))(), iVar3 != 0)) {
    iVar1 = **(int **)(iVar3 + 0x24);
    iVar4 = (**(code **)(iVar1 + 0x74))(iVar3,pCVar2);
    if (iVar4 == 0) {
      return;
    }
    (**(code **)(iVar1 + 0x78))(iVar4,iVar3,1);
    return;
  }
  AfxMessageBox(0xf109,0,0xffffffff);
  return;
}


