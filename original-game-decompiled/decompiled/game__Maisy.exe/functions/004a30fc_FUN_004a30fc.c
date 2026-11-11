
/* ==== FUN_004a30fc @ 004a30fc ==== 
 * signature: undefined __stdcall FUN_004a30fc(void)
 * body: 004a30fc-004a334e;004a3362-004a3431
 */

void FUN_004a30fc(void)

{
  _AFX_THREAD_STATE *p_Var1;
  byte bVar2;
  undefined4 uVar3;
  SHORT SVar4;
  CWnd *pCVar5;
  HWND pHVar6;
  _AFX_THREAD_STATE *p_Var7;
  HWND__ *pHVar8;
  CWnd *pCVar9;
  CToolTipCtrl *this;
  int iVar10;
  LRESULT LVar11;
  int *piVar12;
  int extraout_ECX;
  CToolTipCtrl *this_00;
  int unaff_EBP;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  bVar2 = *(byte *)(extraout_ECX + 0x24);
  iVar10 = *(int *)(*(int *)(unaff_EBP + 8) + 4);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (((((bVar2 & 1) == 0) ||
       ((((iVar10 != 0x200 && (iVar10 != 0xa0)) && (iVar10 != 0x202)) &&
        ((iVar10 != 0x205 && (iVar10 != 0x208)))))) || (SVar4 = GetKeyState(1), SVar4 < 0)) ||
     ((SVar4 = GetKeyState(2), SVar4 < 0 || (SVar4 = GetKeyState(4), SVar4 < 0))))
  goto LAB_004a3420;
  pCVar5 = CWnd::FromHandle((HWND__ *)**(undefined4 **)(unaff_EBP + 8));
  while (pCVar5 != (CWnd *)0x0) {
    if (pCVar5 == *(CWnd **)(unaff_EBP + -0x10)) goto LAB_004a31a8;
    if (((byte)pCVar5[0x24] & 1) != 0) break;
    pHVar6 = GetParent(*(HWND *)(pCVar5 + 0x1c));
    pCVar5 = CWnd::FromHandle(pHVar6);
  }
  if (pCVar5 != *(CWnd **)(unaff_EBP + -0x10)) goto LAB_004a3420;
LAB_004a31a8:
  p_Var7 = AfxGetThreadState();
  p_Var1 = p_Var7 + 0xd0;
  *(_AFX_THREAD_STATE **)(unaff_EBP + -0x18) = p_Var7;
  this_00 = *(CToolTipCtrl **)p_Var1;
  pCVar5 = CWnd::GetParentOwner(*(CWnd **)(unaff_EBP + -0x10));
  if (this_00 == (CToolTipCtrl *)0x0) {
LAB_004a31fc:
    this_00 = (CToolTipCtrl *)0x0;
    this = (CToolTipCtrl *)FUN_004a5fed(0x58);
    *(CToolTipCtrl **)(unaff_EBP + -0x14) = this;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (this != (CToolTipCtrl *)0x0) {
      this_00 = (CToolTipCtrl *)CToolTipCtrl::CToolTipCtrl(this);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar10 = CToolTipCtrl::Create(this_00,pCVar5,1);
    if (iVar10 == 0) {
      if (this_00 != (CToolTipCtrl *)0x0) {
        (**(code **)(*(int *)this_00 + 4))(1);
      }
      goto LAB_004a3420;
    }
    SendMessageA(*(HWND *)(this_00 + 0x1c),0x401,0,0);
    *(CToolTipCtrl **)p_Var1 = this_00;
  }
  else {
    pHVar8 = *(HWND__ **)(this_00 + 0x20);
    if (pHVar8 == (HWND__ *)0x0) {
      pHVar8 = GetParent(*(HWND *)(this_00 + 0x1c));
    }
    pCVar9 = CWnd::FromHandle(pHVar8);
    if (pCVar9 != pCVar5) {
      (**(code **)(*(int *)this_00 + 0x5c))();
      if (this_00 != (CToolTipCtrl *)0x0) {
        (**(code **)(*(int *)this_00 + 4))(1);
      }
      this_00 = (CToolTipCtrl *)0x0;
      *(int *)p_Var1 = 0;
    }
    if (this_00 == (CToolTipCtrl *)0x0) goto LAB_004a31fc;
  }
  _memset((void *)(unaff_EBP + -0x50),0,0x28);
  *(undefined4 *)(unaff_EBP + -0x50) = 0x28;
  *(undefined4 *)(unaff_EBP + -0x4c) = 1;
  uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x48) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x44) = uVar3;
  LVar11 = SendMessageA(*(HWND *)(this_00 + 0x1c),0x408,0,unaff_EBP + -0x50);
  if (LVar11 == 0) {
    SendMessageA(*(HWND *)(this_00 + 0x1c),0x404,0,unaff_EBP + -0x50);
  }
  uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x18);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x14);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  ScreenToClient(*(HWND *)(*(int *)(unaff_EBP + -0x10) + 0x1c),(LPPOINT)(unaff_EBP + -0x28));
  _memset((void *)(unaff_EBP + -0x78),0,0x28);
  *(undefined4 *)(unaff_EBP + -0x78) = 0x28;
  iVar10 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x68))
                     (*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                      unaff_EBP + -0x78);
  *(int *)(unaff_EBP + -0x14) = iVar10;
  *(uint *)(unaff_EBP + -0x20) = (iVar10 == -1) - 1 & *(uint *)(unaff_EBP + -0x10);
  piVar12 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xd8);
  *(int **)(unaff_EBP + -0x1c) = piVar12;
  if ((*piVar12 == *(int *)(unaff_EBP + -0x14)) &&
     (*(int *)(*(int *)(unaff_EBP + -0x18) + 0xd4) == *(int *)(unaff_EBP + -0x20))) {
    if (*(int *)(unaff_EBP + -0x14) != -1) {
      RelayToolTipMessage(this_00,*(tagMSG **)(unaff_EBP + 8));
    }
  }
  else {
    if (*(int *)(unaff_EBP + -0x14) != -1) {
      puVar13 = (undefined4 *)(unaff_EBP + -0x78);
      puVar15 = (undefined4 *)(unaff_EBP + -0x50);
      for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x74) & 0x3fffffff;
      SendMessageA(*(HWND *)(this_00 + 0x1c),0x404,0,unaff_EBP + -0x50);
      if (((*(byte *)(unaff_EBP + -0x71) & 0x40) != 0) ||
         (iVar10 = CWnd::IsTopParentActive(*(CWnd **)(unaff_EBP + -0x10)), iVar10 != 0)) {
        SendMessageA(*(HWND *)(this_00 + 0x1c),0x401,1,0);
        SetWindowPos(*(HWND *)(this_00 + 0x1c),(HWND)0x0,0,0,0,0,0x13);
      }
    }
    RelayToolTipMessage(this_00,*(tagMSG **)(unaff_EBP + 8));
    piVar12 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xdc);
    if (*piVar12 == 0x28) {
      SendMessageA(*(HWND *)(this_00 + 0x1c),0x405,0,(LPARAM)piVar12);
    }
    puVar13 = *(undefined4 **)(unaff_EBP + -0x1c);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xd4) = *(undefined4 *)(unaff_EBP + -0x20);
    *puVar13 = *(undefined4 *)(unaff_EBP + -0x14);
    piVar14 = (int *)(unaff_EBP + -0x78);
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar12 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar12 = piVar12 + 1;
    }
  }
  if (*(int *)(unaff_EBP + -0x54) != -1) {
    FUN_0048e750(*(LPVOID *)(unaff_EBP + -0x54));
  }
LAB_004a3420:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


