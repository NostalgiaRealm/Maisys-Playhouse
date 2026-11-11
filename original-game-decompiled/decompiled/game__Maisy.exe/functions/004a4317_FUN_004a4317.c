
/* ==== FUN_004a4317 @ 004a4317 ==== 
 * signature: undefined __fastcall FUN_004a4317(CWnd * param_1)
 * body: 004a4317-004a432d
 */

void __fastcall FUN_004a4317(CWnd *param_1)

{
  int iVar1;
  
  iVar1 = CWnd::UpdateData(param_1,1);
  if (iVar1 != 0) {
    FUN_004a8882((int *)param_1);
  }
  return;
}


