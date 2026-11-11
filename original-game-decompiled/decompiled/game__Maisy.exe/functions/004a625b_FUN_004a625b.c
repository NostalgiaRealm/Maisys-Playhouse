
/* ==== FUN_004a625b @ 004a625b ==== 
 * signature: undefined4 __thiscall FUN_004a625b(void * this, LPMSG param_1)
 * body: 004a625b-004a6296
 */

undefined4 __thiscall FUN_004a625b(void *this,LPMSG param_1)

{
  int iVar1;
  undefined4 uVar2;
  CFrameWnd *pCVar3;
  
  iVar1 = FUN_004a9389(this,param_1);
  if (iVar1 == 0) {
    pCVar3 = CWnd::GetTopLevelFrame(this);
    if ((pCVar3 == (CFrameWnd *)0x0) || (uVar2 = 0, *(int *)(pCVar3 + 0x50) == 0)) {
      uVar2 = FUN_004ab767(this,param_1);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


