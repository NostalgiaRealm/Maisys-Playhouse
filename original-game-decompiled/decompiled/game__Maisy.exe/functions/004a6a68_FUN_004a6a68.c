
/* ==== FUN_004a6a68 @ 004a6a68 ==== 
 * signature: int __fastcall FUN_004a6a68(CDialog * param_1)
 * body: 004a6a68-004a6aed
 */

int __fastcall FUN_004a6a68(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *this;
  
  (**(code **)(*(int *)param_1 + 0xd0))();
  iVar2 = FUN_004bafe6();
  piVar1 = *(int **)(iVar2 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x58) != 0)) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x18))
                        (param_1,*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x58));
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x14))(param_1,*(int *)(param_1 + 0x4c));
    }
    if (iVar2 == 0) {
      CDialog::EndDialog(param_1,-1);
      return 0;
    }
  }
  iVar2 = FUN_004a8882((int *)param_1);
  if ((iVar2 != 0) && (((byte)param_1[0x25] & 1) != 0)) {
    pHVar3 = GetNextDlgTabItem(*(HWND *)(param_1 + 0x1c),(HWND)0x0,0);
    this = CWnd::FromHandle(pHVar3);
    if (this != (CWnd *)0x0) {
      iVar2 = 0;
      CWnd::SetFocus(this);
    }
  }
  return iVar2;
}


