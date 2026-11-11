
/* ==== _ProgressDlg@16 @ 10001770 ==== 
 * signature: undefined4 __stdcall _ProgressDlg@16(HWND param_1, uint param_2, int param_3)
 * body: 10001770-100018ad
 */

undefined4 _ProgressDlg_16(HWND param_1,uint param_2,int param_3)

{
  HDC pHVar1;
  tagPAINTSTRUCT local_40;
  
                    /* 0x1770  2  _ProgressDlg@16 */
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      FUN_100021b0(param_1);
      FUN_10001f80(param_1,0x3eb,(LPPOINT)&DAT_10004400);
      FUN_10001f80(param_1,0x3ea,(LPPOINT)&DAT_100044c0);
      FUN_10002020(param_1);
      return 1;
    }
    if (param_2 == 0xf) {
      pHVar1 = BeginPaint(param_1,&local_40);
      FUN_10001bb0(pHVar1);
      FUN_100020b0(pHVar1,&DAT_10004400,DAT_100043f4);
      FUN_100020b0(pHVar1,&DAT_100044c0,DAT_100043f0);
      if (DAT_100040e4 == 0) {
        FUN_10002560(pHVar1);
      }
      EndPaint(param_1,&local_40);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    DAT_10004244 = 1;
    DAT_10004248 = 1;
  }
  else if ((param_2 == 0x113) && (param_3 == 0x18)) {
    DAT_10004000 = DAT_10004000 + 1;
    if (0x14 < DAT_10004000) {
      DAT_10004000 = 0;
    }
    InvalidateRect(param_1,(RECT *)&DAT_100043e0,0);
    UpdateWindow(param_1);
    return 0;
  }
  return 0;
}


