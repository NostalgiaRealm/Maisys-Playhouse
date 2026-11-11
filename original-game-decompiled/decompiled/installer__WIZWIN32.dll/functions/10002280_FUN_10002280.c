
/* ==== FUN_10002280 @ 10002280 ==== 
 * signature: undefined FUN_10002280(void)
 * body: 10002280-1000233b
 */

undefined4 FUN_10002280(HWND param_1,WPARAM param_2)

{
  HWND hWnd;
  tagPOINT tStack_20;
  tagPOINT tStack_18;
  tagRECT tStack_10;
  
  GetWindowRect(param_1,&tStack_10);
  hWnd = GetParent(param_1);
  tStack_18.x = tStack_10.left;
  tStack_18.y = tStack_10.top;
  ScreenToClient(hWnd,&tStack_18);
  tStack_20.x = tStack_10.right;
  tStack_20.y = tStack_10.bottom;
  ScreenToClient(hWnd,&tStack_20);
  tStack_18.x = tStack_18.x + tStack_18.x / 6;
  tStack_20.x = tStack_20.x + tStack_20.x / 6;
  MoveWindow(param_1,tStack_18.x,tStack_18.y,tStack_20.x - tStack_18.x,tStack_20.y - tStack_18.y,0);
  SendMessageA(param_1,0x30,param_2,0);
  return 1;
}


