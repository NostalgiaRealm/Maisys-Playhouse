
/* ==== _SharedDlg@16 @ 00402299 ==== 
 * signature: undefined4 __stdcall _SharedDlg@16(HWND param_1, int param_2, INT_PTR param_3)
 * body: 00402299-004023f1
 */

undefined4 _SharedDlg_16(HWND param_1,int param_2,INT_PTR param_3)

{
  char local_114 [256];
  tagRECT local_14;
  
                    /* 0x2299  3  _SharedDlg@16 */
  if (param_2 == 0x110) {
    FUN_00408c86(param_1);
    SetDlgItemTextA(param_1,0x3ea,DAT_004138b0);
    FUN_00408e33(DAT_00413bd0,0x3e,local_114,0x100);
    SetWindowTextA(param_1,local_114);
    FUN_00408e33(DAT_00413bd0,0x33,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ed,local_114);
    FUN_00408e33(DAT_00413bd0,0x34,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ee,local_114);
    FUN_00408e33(DAT_00413bd0,0x45,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ef,local_114);
    FUN_00408e33(DAT_00413bd0,0x35,local_114,0x100);
    SetDlgItemTextA(param_1,1,local_114);
    GetWindowRect(param_1,&local_14);
    MoveWindow(param_1,(DAT_004138f4 - (local_14.right - local_14.left)) / 2,
               (DAT_004138f8 - (local_14.bottom - local_14.top)) / 2,local_14.right - local_14.left,
               local_14.bottom - local_14.top,0);
  }
  else {
    if (param_2 != 0x111) {
      return 0;
    }
    EndDialog(param_1,param_3);
  }
  return 1;
}


