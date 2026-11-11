
/* ==== FUN_004a4049 @ 004a4049 ==== 
 * signature: undefined __fastcall FUN_004a4049(int param_1)
 * body: 004a4049-004a4061
 */

void __fastcall FUN_004a4049(int param_1)

{
  HWND pHVar1;
  CWnd *this;
  int iVar2;
  
  iVar2 = 0;
  pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
  this = CWnd::FromHandle(pHVar1);
  FUN_004ab3d0(this,iVar2);
  return;
}


