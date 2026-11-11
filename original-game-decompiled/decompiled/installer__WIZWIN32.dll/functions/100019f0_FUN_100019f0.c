
/* ==== FUN_100019f0 @ 100019f0 ==== 
 * signature: undefined FUN_100019f0(void)
 * body: 100019f0-10001afb
 */

LRESULT FUN_100019f0(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  HDC pHVar1;
  LRESULT LVar2;
  tagPAINTSTRUCT tStack_40;
  
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      pHVar1 = BeginPaint(param_1,&tStack_40);
      FUN_10002560(pHVar1);
      EndPaint(param_1,&tStack_40);
      return 0;
    }
    if (param_2 == 2) {
      PostQuitMessage(0);
      return 0;
    }
  }
  else {
    if (param_2 == 0x14) {
      return 1;
    }
    if ((param_2 == 0x113) && (param_3 == 0x19)) {
      if (DAT_10004240 == 0) {
        if (DAT_10004248 == 0) {
          DAT_10004000 = DAT_10004000 + 1;
        }
      }
      else {
        ShowWindow(param_1,0);
      }
      if (DAT_1000443c != 0) {
        ShowWindow(param_1,5);
        DAT_1000443c = 0;
      }
      if (0x14 < DAT_10004000) {
        DAT_10004000 = 0;
      }
      InvalidateRect(param_1,(RECT *)&DAT_100043e0,0);
      UpdateWindow(param_1);
    }
  }
  LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar2;
}


