
/* ==== CopyDlg @ 10002e3e ==== 
 * signature: undefined4 __stdcall CopyDlg(HWND param_1, int param_2)
 * body: 10002e3e-100030dc
 */

undefined4 CopyDlg(HWND param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND pHVar2;
  HDC hdc;
  HBRUSH hbr;
  uint uVar3;
  uint uVar4;
  LPCSTR lpString;
  tagPAINTSTRUCT local_84;
  RECT local_44;
  tagRECT local_34;
  tagSIZE local_24;
  CHAR local_1c [8];
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
                    /* 0x2e3e  1  CopyDlg */
  if (param_2 == 0xf) {
    hdc = BeginPaint(param_1,&local_84);
    uVar3 = DAT_100238c0 - DAT_10023f58;
    uVar4 = DAT_100238c4 - DAT_10023f5c;
    FUN_10013ca6(&local_c,&local_10);
    local_8 = uVar3 & 0xffff;
    local_34.left = DAT_10023f58;
    local_34.right = ((local_c * local_8) / local_10 & 0xffff) + DAT_10023f58;
    local_34.top = DAT_10023f5c;
    local_34.bottom = DAT_100238c4;
    wsprintfA(local_1c,s__3d___1001f3a8,(uint)DAT_1002393c);
    uVar3 = lstrlenA(local_1c);
    uVar3 = uVar3 & 0xffff;
    GetTextExtentPointA(hdc,local_1c,uVar3,&local_24);
    SetBkColor(hdc,0x7f0000);
    SetTextColor(hdc,DAT_1001f034);
    local_14 = uVar4 & 0xffff;
    ExtTextOutA(hdc,(int)(local_8 - local_24.cx) / 2 + DAT_10023f58,
                (int)(local_14 - local_24.cy) / 2 + DAT_10023f5c,6,&local_34,local_1c,uVar3,
                (INT *)0x0);
    SetBkColor(hdc,DAT_1001f034);
    SetTextColor(hdc,0x7f0000);
    local_44.top = local_34.top;
    local_44.left = local_34.right + 1;
    local_44.bottom = local_34.bottom;
    local_44.right = DAT_100238c0;
    ExtTextOutA(hdc,(int)(local_8 - local_24.cx) / 2 + DAT_10023f58,
                (int)(local_14 - local_24.cy) / 2 + DAT_10023f5c,6,&local_44,local_1c,uVar3,
                (INT *)0x0);
    hbr = GetStockObject(4);
    if (DAT_10023f24 == 0) {
      local_34.left = local_34.left + -1;
      local_34.right = local_44.right + 1;
      local_34.top = local_34.top + -1;
      local_34.bottom = local_34.bottom + 1;
      FrameRect(hdc,&local_34,hbr);
    }
    EndPaint(param_1,&local_84);
  }
  else {
    if (param_2 == 0x110) {
      FUN_10012e0d(param_1,(int *)0x0);
      SetWindowTextA(param_1,*(LPCSTR *)(DAT_100240b8 + 0x74));
      lpString = *(LPCSTR *)(DAT_100240b8 + 0x70);
      pHVar2 = GetDlgItem(param_1,2);
      SetWindowTextA(pHVar2,lpString);
      pHVar2 = GetDlgItem(param_1,0xef6);
      if (pHVar2 != (HWND)0x0) {
        GetWindowRect(pHVar2,&local_34);
        DAT_10023f58 = local_34.left + 1;
        DAT_10023f5c = local_34.top + 1;
        ScreenToClient(param_1,(LPPOINT)&DAT_10023f58);
        DAT_100238c0 = local_34.right + -1;
        DAT_100238c4 = local_34.bottom + -1;
        ScreenToClient(param_1,(LPPOINT)&DAT_100238c0);
      }
      if ((DAT_10023f24 == 0) && (pHVar2 != (HWND)0x0)) {
        ShowWindow(pHVar2,0);
      }
      return 1;
    }
    if (((param_2 == 0x111) && (param_1 == DAT_10023fac)) &&
       (bVar1 = FUN_1000be14(param_1), CONCAT31(extraout_var,bVar1) != 0)) {
      *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
    }
  }
  return 0;
}


