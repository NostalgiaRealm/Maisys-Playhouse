
/* ==== FUN_004b2920 @ 004b2920 ==== 
 * signature: CWnd * __stdcall FUN_004b2920(CWnd * param_1, int param_2)
 * body: 004b2920-004b297e
 */

CWnd * FUN_004b2920(CWnd *param_1,int param_2)

{
  HWND pHVar1;
  CWnd *this;
  int iVar2;
  BOOL BVar3;
  
  pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
  this = CWnd::FromHandle(pHVar1);
  iVar2 = CObject::IsKindOf((CObject *)this,(CRuntimeClass *)&PTR_s_CSplitterWnd_004ddc80);
  if (iVar2 == 0) {
    this = (CWnd *)0x0;
  }
  else if (param_2 == 0) {
    do {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
      param_1 = CWnd::FromHandle(pHVar1);
      if (param_1 == (CWnd *)0x0) {
        return this;
      }
      BVar3 = IsIconic(*(HWND *)(param_1 + 0x1c));
    } while (BVar3 == 0);
    this = (CWnd *)0x0;
  }
  return this;
}


