
/* ==== _ItemDlg@16 @ 004023f2 ==== 
 * signature: undefined4 __stdcall _ItemDlg@16(HWND param_1, int param_2, int param_3)
 * body: 004023f2-004028ce
 */

undefined4 _ItemDlg_16(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  uint uVar3;
  HBRUSH hbr;
  uint uVar4;
  WPARAM wParam;
  char local_254 [256];
  tagPAINTSTRUCT local_154;
  char local_114 [256];
  tagRECT local_14;
  
                    /* 0x23f2  1  _ItemDlg@16 */
  if (param_2 == 0xf) {
    if (DAT_00413424 == 0) {
      SetTimer(param_1,0x19,0x96,(TIMERPROC)0x0);
      DAT_00413424 = 1;
    }
    hdc = BeginPaint(param_1,&local_154);
    hdc_00 = CreateCompatibleDC(hdc);
    h = SelectObject(hdc_00,DAT_00413bf8);
    BitBlt(hdc,0xc,0xc,0x7a,0x106,hdc_00,0,0,0xcc0020);
    SelectObject(hdc_00,h);
    DeleteDC(hdc_00);
    if (DAT_00413bcc != 0) {
      FUN_00409abb(hdc,param_1);
      uVar3 = ((DAT_00413814 - DAT_0041390c & 0xffffU) << 1) / 3;
      uVar4 = (int)((DAT_00413810 - DAT_00413908 & 0xffffU) * DAT_00413868) / DAT_00413c38 & 0xffff;
      SetBkColor(hdc,0x7f0000);
      param_3 = 0;
      local_14.top = DAT_0041390c + 1;
      local_14.bottom = DAT_00413814 + -1;
      local_14.left = DAT_00413908;
      if (uVar4 != 0) {
        do {
          local_14.right = (uVar3 - 3) + local_14.left;
          ExtTextOutA(hdc,local_14.left,local_14.top,6,&local_14,&DAT_00413420,0,(INT *)0x0);
          param_3 = param_3 + uVar3;
          local_14.left = local_14.left + uVar3;
        } while (param_3 < (int)uVar4);
      }
      if (DAT_004138d4 == 0) {
        local_14.top = DAT_0041390c + -1;
        local_14.left = DAT_00413908 + -1;
        local_14.bottom = DAT_00413814 + 1;
        local_14.right = DAT_00413810 + 1;
        hbr = CreateSolidBrush(0);
        FrameRect(hdc,&local_14,hbr);
        DeleteObject(hbr);
      }
    }
    EndPaint(param_1,&local_154);
  }
  else {
    if (param_2 == 0x110) {
      FUN_00408c86(param_1);
      FUN_00408e33(DAT_00413bd0,0x2f,local_114,0x100);
      SetDlgItemTextA(param_1,5,local_114);
      FUN_00408e33(DAT_00413bd0,0x30,local_114,0x100);
      SetDlgItemTextA(param_1,2,local_114);
      FUN_00408e33(DAT_00413bd0,0x31,local_114,0x100);
      SetDlgItemTextA(param_1,3,local_114);
      FUN_00408e33(DAT_00413bd0,0x32,local_114,0x100);
      SetDlgItemTextA(param_1,4,local_114);
      GetWindowTextA(DAT_00413820,local_114,0x100);
      SetWindowTextA(param_1,local_114);
      GetWindowRect(param_1,&local_14);
      MoveWindow(param_1,(DAT_004138f4 - (local_14.right - local_14.left)) / 2,
                 (DAT_004138f8 - (local_14.bottom - local_14.top)) / 2,
                 local_14.right - local_14.left,local_14.bottom - local_14.top,0);
      DAT_00413818 = param_1;
      if ((DAT_00413ba0 == '\v') && (DAT_00413c40 != 0)) {
        iVar1 = 0;
        pHVar2 = GetDlgItem(param_1,1);
        ShowWindow(pHVar2,iVar1);
        iVar1 = 0;
        pHVar2 = GetDlgItem(DAT_00413818,5);
        ShowWindow(pHVar2,iVar1);
      }
      FUN_00402bd3();
      iVar1 = 0;
      pHVar2 = GetDlgItem(DAT_00413818,0xef6);
      ShowWindow(pHVar2,iVar1);
      pHVar2 = GetDlgItem(param_1,0xef6);
      if (pHVar2 != (HWND)0x0) {
        GetWindowRect(pHVar2,&local_14);
        DAT_00413908 = local_14.left + 1;
        DAT_0041390c = local_14.top + 1;
        ScreenToClient(param_1,(LPPOINT)&DAT_00413908);
        DAT_00413810 = local_14.right + -1;
        DAT_00413814 = local_14.bottom + -1;
        ScreenToClient(param_1,(LPPOINT)&DAT_00413810);
      }
      if ((DAT_004138d4 == 0) && (pHVar2 != (HWND)0x0)) {
        ShowWindow(pHVar2,0);
      }
      return 1;
    }
    if (param_2 == 0x111) {
      if (param_3 == 2) {
        FUN_00408e33(DAT_00413bd0,0x19,local_254,0x100);
        FUN_00408e33(DAT_00413bd0,0x3b,local_114,0x100);
        if (DAT_00413bcc != 0) {
          KillTimer(param_1,0x19);
        }
        iVar1 = MessageBoxA(param_1,local_114,local_254,4);
        if (iVar1 == 6) {
          DAT_0041388c = 1;
          EndDialog(param_1,2);
        }
        if (DAT_00413bcc == 0) {
          return 1;
        }
        SetTimer(param_1,0x19,0x96,(TIMERPROC)0x0);
        return 1;
      }
      if (param_3 == 1) {
        if (DAT_00413ba0 == '\v') {
          DAT_00413830 = 1;
          return 0;
        }
        FUN_004029ee(param_1);
        iVar1 = 1;
      }
      else {
        if (param_3 != 5) {
          if (param_3 == 3) {
            wParam = 1;
          }
          else {
            if (param_3 != 4) {
              return 0;
            }
            wParam = 0;
          }
          SendDlgItemMessageA(param_1,0x3eb,0x185,wParam,-1);
          return 0;
        }
        FUN_004029ee(param_1);
        iVar1 = 0;
      }
      FUN_004028cf(iVar1);
      FUN_00402bd3();
    }
    else if ((param_2 == 0x113) && (param_3 == 0x19)) {
      DAT_00410054 = DAT_00410054 + 1;
      if (0x19 < DAT_00410054) {
        DAT_00410054 = 1;
      }
      InvalidateRect(param_1,(RECT *)&DAT_00413bb0,0);
      UpdateWindow(param_1);
    }
  }
  return 0;
}


