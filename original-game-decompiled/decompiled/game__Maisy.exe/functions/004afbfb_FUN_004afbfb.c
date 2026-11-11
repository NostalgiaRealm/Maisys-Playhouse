
/* ==== FUN_004afbfb @ 004afbfb ==== 
 * signature: undefined4 __fastcall FUN_004afbfb(int * param_1)
 * body: 004afbfb-004afc43
 */

undefined4 __fastcall FUN_004afbfb(int *param_1)

{
  int iVar1;
  CWnd *this;
  CFrameWnd *pCVar2;
  undefined4 uVar3;
  int iStack_4;
  
  iVar1 = *param_1;
  iStack_4 = (**(code **)(iVar1 + 100))();
  do {
    if (iStack_4 == 0) {
      uVar3 = (**(code **)(iVar1 + 0x94))();
      return uVar3;
    }
    this = (CWnd *)(**(code **)(iVar1 + 0x68))(&iStack_4);
    pCVar2 = CWnd::GetParentFrame(this);
  } while ((pCVar2 == (CFrameWnd *)0x0) || (*(int *)(pCVar2 + 0x40) < 1));
  return 1;
}


