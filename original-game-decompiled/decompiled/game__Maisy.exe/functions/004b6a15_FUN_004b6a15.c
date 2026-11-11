
/* ==== FUN_004b6a15 @ 004b6a15 ==== 
 * signature: int __thiscall FUN_004b6a15(void * this, uint param_1, int param_2, void * param_3, AFX_CMDHANDLERINFO * param_4)
 * body: 004b6a15-004b6a75
 */

int __thiscall
FUN_004b6a15(void *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  undefined4 uVar1;
  CMDIChildWnd *pCVar2;
  _AFX_THREAD_STATE *p_Var3;
  int iVar4;
  
  pCVar2 = CMDIFrameWnd::MDIGetActive(this,(int *)0x0);
  if (pCVar2 != (CMDIChildWnd *)0x0) {
    p_Var3 = AfxGetThreadState();
    uVar1 = *(undefined4 *)(p_Var3 + 200);
    iVar4 = (**(code **)(*(int *)pCVar2 + 0x14))(param_1,param_2,param_3,param_4);
    *(undefined4 *)(p_Var3 + 200) = uVar1;
    if (iVar4 != 0) {
      return 1;
    }
  }
  iVar4 = CFrameWnd::OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar4;
}


