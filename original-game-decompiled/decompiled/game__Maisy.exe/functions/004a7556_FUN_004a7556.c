
/* ==== FUN_004a7556 @ 004a7556 ==== 
 * signature: undefined4 __stdcall FUN_004a7556(tagMSG * param_1)
 * body: 004a7556-004a7645
 */

undefined4 FUN_004a7556(tagMSG *param_1)

{
  uint uVar1;
  int *piVar2;
  HWND__ *pHVar3;
  undefined4 uVar4;
  CWnd *pCVar5;
  int iVar6;
  CWnd *pCVar7;
  
  uVar1 = param_1->message;
  if (((uVar1 < 0x100) || (0x108 < uVar1)) && ((uVar1 < 0x104 || (0x107 < uVar1)))) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  if (((((((iVar6 != 0) || (uVar1 == 0x201)) || (uVar1 == 0x203)) ||
        ((uVar1 == 0x204 || (uVar1 == 0x206)))) ||
       ((uVar1 == 0x207 || ((uVar1 == 0x209 || (uVar1 == 0xa1)))))) ||
      ((uVar1 == 0xa3 || (((uVar1 == 0xa4 || (uVar1 == 0xa6)) || (uVar1 == 0xa7)))))) ||
     (uVar1 == 0xa9)) {
    CWnd::CancelToolTips(iVar6);
  }
  pCVar7 = (CWnd *)0x0;
  iVar6 = FUN_004a7052();
  if (iVar6 != 0) {
    piVar2 = (int *)FUN_004a7052();
    pCVar7 = (CWnd *)(**(code **)(*piVar2 + 0x78))();
  }
  pHVar3 = (HWND__ *)0x0;
  if (pCVar7 != (CWnd *)0x0) {
    pHVar3 = *(HWND__ **)(pCVar7 + 0x1c);
  }
  iVar6 = CWnd::WalkPreTranslateTree(pHVar3,param_1);
  if (iVar6 == 0) {
    if (pCVar7 != (CWnd *)0x0) {
      pCVar5 = CWnd::FromHandle(param_1->hwnd);
      pCVar5 = CWnd::GetTopLevelParent(pCVar5);
      if (pCVar5 != pCVar7) {
        uVar4 = (**(code **)(*(int *)pCVar7 + 0x94))(param_1);
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


