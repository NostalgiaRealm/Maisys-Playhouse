
/* ==== FUN_10012f5c @ 10012f5c ==== 
 * signature: undefined4 __stdcall FUN_10012f5c(HWND param_1, HWND param_2)
 * body: 10012f5c-10012ffd
 */

undefined4 FUN_10012f5c(HWND param_1,HWND param_2)

{
  HWND hWnd;
  tagRECT local_24;
  tagPOINT local_14;
  tagPOINT local_c;
  
  GetWindowRect(param_1,&local_24);
  hWnd = GetParent(param_1);
  local_c.x = local_24.left;
  local_c.y = local_24.top;
  ScreenToClient(hWnd,&local_c);
  local_14.x = local_24.right;
  local_14.y = local_24.bottom;
  ScreenToClient(hWnd,&local_14);
  local_c.x = local_c.x + local_c.x / 6;
  local_14.x = local_14.x + local_14.x / 6;
  if (hWnd == param_2) {
    MoveWindow(param_1,local_c.x,local_c.y,local_14.x - local_c.x,local_14.y - local_c.y,0);
  }
  SendMessageA(param_1,0x30,DAT_10024120,0);
  return 1;
}


