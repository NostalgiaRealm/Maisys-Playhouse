
/* ==== FUN_10002020 @ 10002020 ==== 
 * signature: undefined __cdecl FUN_10002020(HWND param_1)
 * body: 10002020-100020a7
 */

void __cdecl FUN_10002020(HWND param_1)

{
  HWND hWnd;
  tagPOINT local_20;
  tagPOINT local_18;
  tagRECT local_10;
  
  hWnd = GetDlgItem(param_1,0x3ed);
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_10);
    local_20.y = local_10.top;
    local_20.x = local_10.left;
    local_18.x = local_10.right;
    local_18.y = local_10.bottom;
    ScreenToClient(param_1,&local_20);
    ScreenToClient(param_1,&local_18);
    DAT_100043e0 = local_20.x;
    DAT_100043e4 = local_20.y;
    DAT_100043e8 = local_18.x;
    DAT_100043ec = local_18.y;
  }
  return;
}


