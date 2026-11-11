
/* ==== FUN_100018b0 @ 100018b0 ==== 
 * signature: undefined FUN_100018b0(void)
 * body: 100018b0-100019ee
 */

undefined4 FUN_100018b0(int *param_1)

{
  HWND hWnd;
  int iVar1;
  tagMSG tStack_44;
  WNDCLASSA WStack_28;
  
  WStack_28.style = 0;
  WStack_28.lpfnWndProc = FUN_100019f0;
  WStack_28.cbClsExtra = 0;
  WStack_28.cbWndExtra = 0;
  WStack_28.hInstance = DAT_100044a8;
  WStack_28.hIcon = (HICON)0x0;
  WStack_28.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  WStack_28.hbrBackground = (HBRUSH)0x10;
  WStack_28.lpszMenuName = (LPCSTR)0x0;
  WStack_28.lpszClassName = s_AnimateWindow_100040c0;
  RegisterClassA(&WStack_28);
  hWnd = CreateWindowExA(0,s_AnimateWindow_100040c0,(LPCSTR)0x0,0x50000000,DAT_100043e0,DAT_100043e4
                         ,(DAT_100043e8 - DAT_100043e0) + 1,(DAT_100043ec - DAT_100043e4) + 1,
                         DAT_100042c8,(HMENU)0x0,DAT_100044a8,(LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  FUN_10001b00();
  ShowWindow(hWnd,1);
  UpdateWindow(hWnd);
  SetTimer(hWnd,0x19,0x96,(TIMERPROC)0x0);
  iVar1 = GetMessageA(&tStack_44,(HWND)0x0,0,0);
  while (iVar1 != 0) {
    TranslateMessage(&tStack_44);
    DispatchMessageA(&tStack_44);
    if ((*param_1 == 0) && (DAT_100040f8 == 0)) {
      PostQuitMessage(0);
      DAT_100040f8 = 1;
    }
    iVar1 = GetMessageA(&tStack_44,(HWND)0x0,0,0);
  }
  KillTimer(hWnd,0x19);
  return tStack_44.wParam;
}


