
/* ==== FUN_10001f80 @ 10001f80 ==== 
 * signature: undefined __cdecl FUN_10001f80(HWND param_1, int param_2, LPPOINT param_3)
 * body: 10001f80-10002018
 */

void __cdecl FUN_10001f80(HWND param_1,int param_2,LPPOINT param_3)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  uint uVar3;
  int iVar4;
  tagRECT local_10;
  
  hWnd = GetDlgItem(param_1,param_2);
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_10);
    param_3->x = local_10.left + 1;
    param_3->y = local_10.top + 1;
    ScreenToClient(param_1,param_3);
    param_3[1].x = local_10.right + -1;
    param_3[1].y = local_10.bottom + -1;
    ScreenToClient(param_1,param_3 + 1);
  }
  iVar1 = param_3[1].x;
  iVar2 = param_3->x;
  uVar3 = param_3[1].y - param_3->y;
  if (0x14 < uVar3) {
    iVar4 = uVar3 - 3;
    param_3[2].x = iVar4;
    param_3[2].y = (uint)(iVar4 * 2) / 3;
  }
  param_3[3].x = ((iVar1 - iVar2) - 1U) / (param_3[2].y + 2U);
  return;
}


