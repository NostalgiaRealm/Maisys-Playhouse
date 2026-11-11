
/* ==== FUN_004b7e47 @ 004b7e47 ==== 
 * signature: undefined __fastcall FUN_004b7e47(CWnd * param_1)
 * body: 004b7e47-004b7f72
 */

void __fastcall FUN_004b7e47(CWnd *param_1)

{
  uint uVar1;
  CWnd *pCVar2;
  HWND pHVar3;
  BOOL BVar4;
  void *pvVar5;
  int iVar6;
  LRESULT LVar7;
  CWnd *pCVar8;
  int iVar9;
  UINT UVar10;
  int local_4;
  
  uVar1 = *(uint *)(param_1 + 0xa0) + 1;
  *(uint *)(param_1 + 0xa0) = uVar1;
  if (uVar1 < 2) {
    iVar9 = 0;
    pCVar2 = CWnd::GetTopLevelParent(param_1);
    UVar10 = 5;
    pHVar3 = GetDesktopWindow();
    for (pHVar3 = GetWindow(pHVar3,UVar10); pHVar3 != (HWND)0x0; pHVar3 = GetWindow(pHVar3,2)) {
      BVar4 = IsWindowEnabled(pHVar3);
      if ((((BVar4 != 0) && (pvVar5 = FUN_004a8970(pHVar3), pvVar5 != (void *)0x0)) &&
          (iVar6 = AfxIsDescendant(*(HWND__ **)(pCVar2 + 0x1c),pHVar3), iVar6 != 0)) &&
         (LVar7 = SendMessageA(pHVar3,0x36c,0,0), LVar7 == 0)) {
        iVar9 = iVar9 + 1;
      }
    }
    if (iVar9 != 0) {
      pCVar8 = param_1 + 0xa4;
      iVar6 = 0;
      iVar9 = FUN_004a5fed(iVar9 * 4 + 4);
      *(int *)pCVar8 = iVar9;
      UVar10 = 5;
      pHVar3 = GetDesktopWindow();
      pHVar3 = GetWindow(pHVar3,UVar10);
      if (pHVar3 != (HWND)0x0) {
        local_4 = 0;
        do {
          BVar4 = IsWindowEnabled(pHVar3);
          if (((BVar4 != 0) && (pvVar5 = FUN_004a8970(pHVar3), pvVar5 != (void *)0x0)) &&
             ((iVar9 = AfxIsDescendant(*(HWND__ **)(pCVar2 + 0x1c),pHVar3), iVar9 != 0 &&
              (LVar7 = SendMessageA(pHVar3,0x36c,0,0), LVar7 == 0)))) {
            iVar6 = iVar6 + 1;
            EnableWindow(pHVar3,0);
            *(HWND *)(*(int *)pCVar8 + local_4) = pHVar3;
            local_4 = local_4 + 4;
          }
          pHVar3 = GetWindow(pHVar3,2);
        } while (pHVar3 != (HWND)0x0);
      }
      *(undefined4 *)(*(int *)pCVar8 + iVar6 * 4) = 0;
    }
  }
  return;
}


