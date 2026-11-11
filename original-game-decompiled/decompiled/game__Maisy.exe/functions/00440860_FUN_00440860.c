
/* ==== FUN_00440860 @ 00440860 ==== 
 * signature: undefined __fastcall FUN_00440860(int * param_1)
 * body: 00440860-00440995
 */

void __fastcall FUN_00440860(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  
  cVar2 = FUN_00440230(param_1,1);
  if (cVar2 == '\0') goto LAB_00440977;
  if (param_1[0x31] == 0) {
    iVar3 = FUN_0041ed90((int)param_1);
    FUN_00408550(iVar3);
    FUN_0043fd60((int)param_1);
    FUN_0048d3ba();
    goto LAB_00440977;
  }
  iVar3 = FUN_0043fd60((int)param_1);
  if (iVar3 != 0) {
    cVar2 = FUN_00440230(param_1,0x400);
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x244);
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
LAB_004408cf:
        pHVar4 = GetWindow(*(HWND *)(param_1[0x31] + 0x1c),5);
        pCVar5 = CWnd::FromHandle(pHVar4);
        if (pCVar5 == (CWnd *)0x0) {
          pCVar5 = (CWnd *)param_1[0x31];
        }
        RedrawWindow(*(HWND *)(pCVar5 + 0x1c),(RECT *)0x0,(HRGN)0x0,0x181);
      }
      else {
        iVar3 = (*pcVar1)();
        if (*(int *)(iVar3 + 0x156) != 0x6e705453) {
          iVar3 = (*pcVar1)();
          if (*(int *)(iVar3 + 0x156) != 0x616e7473) goto LAB_004408cf;
        }
      }
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x244);
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    iVar3 = (*pcVar1)();
    if (*(int *)(iVar3 + 0x156) == 0x6e705453) {
      RedrawWindow(*(HWND *)(param_1[0x31] + 0x1c),(RECT *)0x0,(HRGN)0x0,0x181);
    }
  }
  RedrawWindow(*(HWND *)(param_1[0x31] + 0x1c),(RECT *)0x0,(HRGN)0x0,0x81);
LAB_00440977:
  FUN_004414c0(param_1,0);
  FUN_00441bb0(param_1);
  return;
}


