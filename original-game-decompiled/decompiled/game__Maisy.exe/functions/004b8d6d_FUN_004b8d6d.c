
/* ==== FUN_004b8d6d @ 004b8d6d ==== 
 * signature: undefined __fastcall FUN_004b8d6d(int * param_1)
 * body: 004b8d6d-004b8d87
 */

void __fastcall FUN_004b8d6d(int *param_1)

{
  if ((CWnd *)param_1[0x26] == (CWnd *)0x0) {
    FUN_004a8882(param_1);
  }
  else {
    CWnd::SetFocus((CWnd *)param_1[0x26]);
  }
  return;
}


