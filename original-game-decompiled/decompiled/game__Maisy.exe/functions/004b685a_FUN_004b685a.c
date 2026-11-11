
/* ==== FUN_004b685a @ 004b685a ==== 
 * signature: int __thiscall FUN_004b685a(void * this, int param_1, int param_2)
 * body: 004b685a-004b68c2
 */

int __thiscall FUN_004b685a(void *this,int param_1,int param_2)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_2 + 0x1c),param_1);
  if (pHVar1 == (HWND)0x0) {
    if ((*(int **)(param_2 + 0x34) != (int *)0x0) &&
       (iVar2 = (**(code **)(**(int **)(param_2 + 0x34) + 0x54))(param_1), iVar2 != 0)) {
      CWnd::SubclassWindow(this,*(HWND__ **)(iVar2 + 0x20));
      pHVar1 = GetParent(*(HWND *)(iVar2 + 0x20));
      if (pHVar1 != *(HWND *)(param_2 + 0x1c)) {
        FUN_004a83df(this,param_2);
      }
      return 1;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = CWnd::SubclassWindow(this,pHVar1);
  }
  return iVar2;
}


