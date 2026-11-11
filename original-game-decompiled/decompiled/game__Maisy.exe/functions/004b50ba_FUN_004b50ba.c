
/* ==== FUN_004b50ba @ 004b50ba ==== 
 * signature: undefined __stdcall FUN_004b50ba(CDataExchange * param_1, int param_2, CWnd * param_3)
 * body: 004b50ba-004b5105
 */

void FUN_004b50ba(CDataExchange *param_1,int param_2,CWnd *param_3)

{
  HWND__ *pHVar1;
  int iVar2;
  HWND pHVar3;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    pHVar1 = CDataExchange::PrepareCtrl(param_1,param_2);
    iVar2 = CWnd::SubclassWindow(param_3,pHVar1);
    if (iVar2 == 0) {
      AfxThrowNotSupportedException();
    }
    else {
      pHVar3 = GetParent(*(HWND *)(param_3 + 0x1c));
      if (pHVar3 != *(HWND *)(*(int *)(param_1 + 4) + 0x1c)) {
        FUN_004a83df(param_3,*(int *)(param_1 + 4));
      }
    }
  }
  return;
}


