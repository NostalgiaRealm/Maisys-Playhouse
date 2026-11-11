
/* ==== FUN_004a2cc4 @ 004a2cc4 ==== 
 * signature: HWND __stdcall FUN_004a2cc4(undefined4 param_1, POINT * param_2)
 * body: 004a2cc4-004a2cee
 */

HWND FUN_004a2cc4(undefined4 param_1,POINT *param_2)

{
  tagPOINT tVar1;
  HWND hWnd;
  HWND hWnd_00;
  int iVar2;
  BOOL BVar3;
  tagPOINT local_c;
  
  local_c.x = param_2->x;
  local_c.y = param_2->y;
  hWnd = WindowFromPoint(*param_2);
  if (hWnd == (HWND)0x0) {
    hWnd_00 = (HWND)0x0;
  }
  else {
    hWnd_00 = GetParent(hWnd);
    if ((hWnd_00 == (HWND)0x0) || (iVar2 = _AfxIsComboBoxControl(hWnd_00,2), iVar2 == 0)) {
      ScreenToClient(hWnd,&local_c);
      tVar1.y = local_c.y;
      tVar1.x = local_c.x;
      hWnd_00 = _AfxChildWindowFromPoint(hWnd,tVar1);
      if ((hWnd_00 == (HWND__ *)0x0) || (BVar3 = IsWindowEnabled(hWnd_00), BVar3 != 0)) {
        hWnd_00 = hWnd;
      }
    }
  }
  return hWnd_00;
}


