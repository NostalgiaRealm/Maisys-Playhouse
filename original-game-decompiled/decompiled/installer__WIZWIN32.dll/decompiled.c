/* Ghidra 12.1.4 generated C-like pseudocode for stream_002_00017325.exe.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== entry @ 10001000 ==== 
 * signature: undefined __stdcall entry(undefined4 param_1, int param_2)
 * body: 10001000-10001019
 */

void entry(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_100044a8 = param_1;
  }
  return;
}



/* ==== Update @ 10001020 ==== 
 * signature: HWND __stdcall Update(undefined4 param_1, undefined4 param_2, int param_3, LPCSTR param_4, uint param_5, undefined4 param_6)
 * body: 10001020-1000175c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND Update(undefined4 param_1,undefined4 param_2,int param_3,LPCSTR param_4,uint param_5,
           undefined4 param_6)

{
  DWORD DVar1;
  HICON pHVar2;
  HWND pHVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  HICON *ppHVar8;
  LPCSTR pCVar9;
  CHAR *pCVar10;
  uint local_11c;
  uint local_118;
  RECT local_114;
  CHAR local_104 [260];
  
                    /* 0x1020  1  Update */
  switch(param_1) {
  case 0:
    iVar5 = 0;
    DAT_10004240 = 1;
    DAT_1000443c = 0;
    DAT_10004440 = LoadIconA(*(HINSTANCE *)(param_3 + 0x2c),(LPCSTR)0x6c);
    puVar7 = &DAT_10004444;
    do {
      pHVar2 = LoadIconA(DAT_100044a8,(LPCSTR)(iVar5 + 0x6fU & 0xffff));
      *puVar7 = pHVar2;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)puVar7 < 0x10004498);
    BVar4 = IsWindowVisible(*(HWND *)(param_3 + 4));
    if (BVar4 == 0) {
      pHVar3 = (HWND)0x0;
      pCVar9 = (LPCSTR)0x603;
    }
    else {
      pHVar3 = *(HWND *)(param_3 + 4);
      pCVar9 = (LPCSTR)0x602;
    }
    DAT_100042c8 = CreateDialogParamA(DAT_100044a8,pCVar9,pHVar3,_ProgressDlg_16,0);
    FUN_10001b40();
    return DAT_100042c8;
  case 1:
    DAT_10004430 = *(int *)(param_3 + 0x24);
    DAT_100040fc = *(undefined4 *)(param_3 + 0x30);
    DAT_100041a0 = *(undefined4 *)(param_3 + 0x34);
    if ((DAT_10004430 != 0) && (DAT_100040f4 == 0)) {
      SetWindowTextA(DAT_100042c8,*(LPCSTR *)(DAT_10004430 + 0x74));
      pCVar9 = *(LPCSTR *)(DAT_10004430 + 0x70);
      pHVar3 = GetDlgItem(DAT_100042c8,2);
      SetWindowTextA(pHVar3,pCVar9);
      GetWindowTextA(DAT_100042c8,&DAT_10004260,100);
      pCVar9 = *(LPCSTR *)(DAT_10004430 + 0xbc);
      pHVar3 = GetDlgItem(DAT_100042c8,0x3f1);
      SetWindowTextA(pHVar3,pCVar9);
      pCVar9 = *(LPCSTR *)(DAT_10004430 + 0xc0);
      pHVar3 = GetDlgItem(DAT_100042c8,0x3f0);
      SetWindowTextA(pHVar3,pCVar9);
      pCVar9 = *(LPCSTR *)(DAT_10004430 + 200);
      pHVar3 = GetDlgItem(DAT_100042c8,3);
      SetWindowTextA(pHVar3,pCVar9);
      pCVar9 = *(LPCSTR *)(DAT_10004430 + 0xcc);
      pHVar3 = GetDlgItem(DAT_100042c8,4);
      SetWindowTextA(pHVar3,pCVar9);
      DAT_100040f4 = 1;
    }
    BVar4 = IsIconic(DAT_100042c8);
    if (BVar4 == 0) {
      GetWindowTextA(DAT_100042c8,local_104,0x100);
      iVar5 = lstrcmpA(local_104,&DAT_10004260);
      if (iVar5 != 0) {
        pCVar10 = &DAT_10004260;
        goto LAB_1000125b;
      }
    }
    else {
      wsprintfA(local_104,s__d____s_100040b8,(int)param_5 / 10,&DAT_10004260);
      pCVar10 = local_104;
LAB_1000125b:
      SetWindowTextA(DAT_100042c8,pCVar10);
    }
    if (DAT_10004244 != 0) {
      KillTimer(DAT_100042c8,0x18);
      DAT_100040f0 = 0;
      DAT_10004244 = 0;
      if ((DAT_100040e8 == 0) && (0x1e < (int)param_5)) {
        DAT_100040e8 = GetTickCount();
      }
      return DAT_100042c8;
    }
    if ((param_4 != (LPCSTR)0x0) || (DAT_10004240 == 0)) {
      if (DAT_100040e4 == 0) {
        DAT_100043f8 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_100018b0,&DAT_100040b0,0,
                                    (LPDWORD)&DAT_100044dc);
        DAT_100040e4 = 1;
      }
      if ((DAT_100040f0 == 0) && (DAT_100040e4 == 0)) {
        SetTimer(DAT_100042c8,0x18,0x96,(TIMERPROC)0x0);
        DAT_100040f0 = 1;
      }
      DAT_10004248 = 0;
      DAT_10004434 = param_2;
      if (DAT_10004100 == 0) {
        FUN_10001e90(DAT_100042c8,*(HWND *)(param_3 + 4));
        DAT_10004100 = 1;
      }
      if (DAT_10004240 != 0) {
        EnableWindow(*(HWND *)(param_3 + 4),0);
        EnableWindow(DAT_100042c8,1);
        ShowWindow(DAT_100042c8,5);
        DAT_10004240 = 0;
        DAT_1000443c = 1;
      }
      if ((param_4 != (LPCSTR)0x0) && (*param_4 != '\0')) {
        lstrcpyA(local_104,param_4);
        pCVar10 = local_104;
        pHVar3 = GetDlgItem(DAT_100042c8,0xef5);
        FUN_10002340(pHVar3,pCVar10);
        SetDlgItemTextA(DAT_100042c8,0xef5,local_104);
      }
      if (DAT_100040dc == 0) {
        DAT_100040dc = GetTickCount();
      }
      else if (0x1e < (int)param_5) {
        _DAT_100040ec = GetTickCount();
        DVar1 = DAT_100040e8;
        if (DAT_100040e8 != 0) {
          DAT_100040e8 = 0;
          DAT_100040dc = DAT_100040dc + (_DAT_100040ec - DVar1);
        }
        uVar6 = _DAT_100040ec - DAT_100040dc;
        if (uVar6 < 600000) {
          uVar6 = (((1000 - param_5) * uVar6) / param_5 + 500) / 1000;
        }
        else {
          uVar6 = ((1000 - param_5) * ((uVar6 + 500) / 1000)) / param_5;
        }
        if (DAT_100040b4 == 0xffffffff) {
          if (uVar6 < 0x3d) {
            if (uVar6 < 0x1a) {
              DAT_100040d8 = (10 < uVar6) + 1;
            }
            else {
              DAT_100040d8 = 5;
            }
          }
          else {
            DAT_100040d8 = 10;
          }
          uVar6 = ((uVar6 + 4) / DAT_100040d8) * DAT_100040d8;
        }
        else {
          uVar6 = ((int)(uVar6 - DAT_100040b4) / (int)DAT_100040d8) * DAT_100040d8 + DAT_100040b4;
        }
        if ((DAT_100040b4 != uVar6) && (DAT_10004430 != 0)) {
          DAT_100040b4 = uVar6;
          if (DAT_100042e0 == '\0') {
            FUN_10002730(*(char **)(DAT_10004430 + 0xc4));
          }
          local_11c = (uint)(uVar6 / 0x3c != 1);
          local_118 = (uint)(uVar6 % 0x3c != 1);
          wsprintfA(local_104,&DAT_100042e0,(int)uVar6 / 0x3c,&DAT_100041c0 + local_11c * 0x40,
                    (int)uVar6 % 0x3c,&DAT_10004120 + local_118 * 0x40);
          SetDlgItemTextA(DAT_100042c8,0xef7,local_104);
        }
      }
      DAT_100043f4 = param_6;
      local_114.top = DAT_100044c4 + -1;
      local_114.bottom = DAT_100044cc + 1;
      local_114.left = DAT_100044c0 + -1;
      local_114.right = DAT_100044c8 + 1;
      DAT_100043f0 = param_5;
      InvalidateRect(DAT_100042c8,&local_114,0);
      local_114.top = DAT_10004404 + -1;
      local_114.bottom = DAT_1000440c + 1;
      local_114.left = DAT_10004400 + -1;
      local_114.right = DAT_10004408 + 1;
      InvalidateRect(DAT_100042c8,&local_114,0);
      return (HWND)0x0;
    }
    break;
  case 2:
    if ((DAT_100040e8 == 0) && (0x1e < (int)DAT_100043f0)) {
      DAT_100040e8 = GetTickCount();
    }
    EnableWindow(*(HWND *)(param_3 + 4),1);
    EnableWindow(DAT_100042c8,0);
    ShowWindow(DAT_100042c8,0);
    DAT_10004240 = 1;
    return (HWND)0x0;
  case 3:
    _DAT_100040b0 = 0;
    EnableWindow(*(HWND *)(param_3 + 4),1);
    WaitForSingleObject(DAT_100043f8,0xffffffff);
    if (DAT_10004438 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_10004438);
    }
    if (DAT_100042c4 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_100042c4);
    }
    KillTimer(DAT_100042c8,0x18);
    DestroyWindow(DAT_100042c8);
    ppHVar8 = &DAT_10004440;
    do {
      if (*ppHVar8 != (HICON)0x0) {
        DestroyIcon(*ppHVar8);
      }
      ppHVar8 = ppHVar8 + 1;
    } while ((int)ppHVar8 < 0x100044a8);
  }
  return (HWND)0x0;
}



/* ==== FUN_1000175d @ 1000175d ==== 
 * signature: undefined FUN_1000175d(void)
 * body: 1000175d-1000175f
 */

void __fastcall FUN_1000175d(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar3;
  byte bVar4;
  byte *in_EAX;
  byte bVar5;
  int unaff_EBP;
  byte in_CF;
  bool bVar6;
  byte bVar2;
  
  bVar5 = (byte)((uint)param_2 >> 8);
  bVar1 = *in_EAX;
  bVar3 = (byte)in_EAX;
  bVar2 = *in_EAX;
  *in_EAX = bVar2 + bVar3 + in_CF;
  bVar4 = (byte)((uint)in_EAX >> 8);
  bVar6 = CARRY1(bVar5,bVar4) ||
          CARRY1(bVar5 + bVar4,CARRY1(bVar1,bVar3) || CARRY1(bVar2 + bVar3,in_CF));
  bVar1 = *in_EAX;
  bVar2 = *in_EAX;
  *in_EAX = bVar2 + bVar3 + bVar6;
  *(char *)(unaff_EBP + 0x16) =
       *(char *)(unaff_EBP + 0x16) + bVar4 + (CARRY1(bVar1,bVar3) || CARRY1(bVar2 + bVar3,bVar6));
  *in_EAX = *in_EAX + (char)param_2;
  return;
}



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



/* ==== FUN_10001b00 @ 10001b00 ==== 
 * signature: undefined __stdcall FUN_10001b00(void)
 * body: 10001b00-10001b33
 */

void FUN_10001b00(void)

{
  DAT_100043e8 = DAT_100043e8 - DAT_100043e0;
  DAT_100043e0 = 0;
  DAT_100043ec = DAT_100043ec - DAT_100043e4;
  DAT_100043e4 = 0;
  return;
}



/* ==== FUN_10001b40 @ 10001b40 ==== 
 * signature: undefined __stdcall FUN_10001b40(void)
 * body: 10001b40-10001ba8
 */

void FUN_10001b40(void)

{
  HWND hWnd;
  tagPOINT local_8;
  
  hWnd = GetDlgItem(DAT_100042c8,0x3ef);
  GetWindowRect(hWnd,(LPRECT)&DAT_10004420);
  local_8.x = DAT_10004420;
  local_8.y = DAT_10004424;
  ScreenToClient(DAT_100042c8,&local_8);
  DAT_10004424 = local_8.y;
  DAT_10004420 = local_8.x;
  DAT_10004428 = 0;
  DAT_1000442c = 0;
  return;
}



/* ==== FUN_10001bb0 @ 10001bb0 ==== 
 * signature: undefined __cdecl FUN_10001bb0(HDC param_1)
 * body: 10001bb0-10001d9c
 */

void __cdecl FUN_10001bb0(HDC param_1)

{
  void *lpBits;
  uint uVar1;
  int iVar2;
  int iVar3;
  HBRUSH hbr;
  HPEN h;
  HPEN h_00;
  HGDIOBJ h_01;
  uint DestWidth;
  uint DestHeight;
  
  if (DAT_100040fc != (ushort *)0x0) {
    FUN_10001da0((int)(DAT_100040fc + 5),param_1,&DAT_100042c4);
    DestWidth = (uint)*DAT_100040fc;
    DestHeight = (uint)DAT_100040fc[1];
    if (DAT_1000442c == 0) {
      uVar1 = GetDialogBaseUnits();
      iVar2 = (uVar1 & 0xffff) * DestWidth;
      iVar3 = (uVar1 >> 0x10) * DestHeight;
      DAT_100040e0 = (int)(((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) - DestHeight) / 2;
      DAT_100040d4 = (int)(((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) - DestWidth) / 2;
      DAT_1000442c = DestHeight + DAT_100040e0 * 2 + DAT_10004424;
      DAT_10004428 = DestWidth + DAT_100040d4 * 2 + DAT_10004420;
    }
    lpBits = (void *)(*(int *)(DAT_100040fc + 2) + 10 + (int)DAT_100040fc);
    if (((DAT_100040d4 != 0) || (DAT_100040e0 != 0)) && (DAT_100041a0 != 0)) {
      hbr = CreateSolidBrush(DAT_100041a0);
      FillRect(param_1,(RECT *)&DAT_10004420,hbr);
      DeleteObject(hbr);
    }
    StretchDIBits(param_1,DAT_100040d4 + DAT_10004420,DAT_100040e0 + DAT_10004424,DestWidth,
                  DestHeight,0,0,(int)(short)*DAT_100040fc,(int)(short)DAT_100040fc[1],lpBits,
                  (BITMAPINFO *)(DAT_100040fc + 5),0,0xcc0020);
    h = CreatePen(0,1,0xffffff);
    h_00 = CreatePen(0,1,0x808080);
    h_01 = SelectObject(param_1,h);
    MoveToEx(param_1,DAT_10004428,DAT_10004424,(LPPOINT)0x0);
    LineTo(param_1,DAT_10004428,DAT_1000442c);
    LineTo(param_1,DAT_10004420,DAT_1000442c);
    SelectObject(param_1,h_00);
    LineTo(param_1,DAT_10004420,DAT_10004424);
    LineTo(param_1,DAT_10004428,DAT_10004424);
    SelectObject(param_1,h_01);
    DeleteObject(h);
    DeleteObject(h_00);
  }
  return;
}



/* ==== FUN_10001da0 @ 10001da0 ==== 
 * signature: undefined __cdecl FUN_10001da0(int param_1, HDC param_2, undefined4 * param_3)
 * body: 10001da0-10001e63
 */

void __cdecl FUN_10001da0(int param_1,HDC param_2,undefined4 *param_3)

{
  HGDIOBJ ho;
  HGLOBAL hMem;
  LOGPALETTE *plpal;
  HPALETTE pHVar1;
  BYTE *pBVar2;
  BYTE *pBVar3;
  int iVar4;
  WORD WVar5;
  
  if (*(short *)(param_1 + 0xe) == 8) {
    if (*(int *)(param_1 + 0x20) == 0) {
      WVar5 = 0x100;
    }
    else {
      WVar5 = *(WORD *)(param_1 + 0x20);
    }
    if (WVar5 != 0) {
      iVar4 = (int)(short)WVar5;
      hMem = GlobalAlloc(0x42,iVar4 * 4 + 8);
      plpal = GlobalLock(hMem);
      plpal->palNumEntries = WVar5;
      plpal->palVersion = 0x300;
      if (0 < (short)WVar5) {
        pBVar2 = &plpal->palPalEntry[0].peGreen;
        pBVar3 = (BYTE *)(param_1 + 0x29);
        do {
          ((PALETTEENTRY *)(pBVar2 + -1))->peRed = pBVar3[1];
          *pBVar2 = *pBVar3;
          pBVar2[1] = pBVar3[-1];
          pBVar2[2] = '\0';
          pBVar2 = pBVar2 + 4;
          iVar4 = iVar4 + -1;
          pBVar3 = pBVar3 + 4;
        } while (iVar4 != 0);
      }
      ho = (HGDIOBJ)*param_3;
      pHVar1 = CreatePalette(plpal);
      *param_3 = pHVar1;
      FUN_10001e70(hMem);
      SelectPalette(param_2,(HPALETTE)*param_3,0);
      if (ho != (HGDIOBJ)0x0) {
        DeleteObject(ho);
      }
      RealizePalette(param_2);
    }
  }
  return;
}



/* ==== FUN_10001e70 @ 10001e70 ==== 
 * signature: undefined __cdecl FUN_10001e70(HGLOBAL param_1)
 * body: 10001e70-10001e84
 */

void __cdecl FUN_10001e70(HGLOBAL param_1)

{
  GlobalUnlock(param_1);
  GlobalFree(param_1);
  return;
}



/* ==== FUN_10001e90 @ 10001e90 ==== 
 * signature: undefined __cdecl FUN_10001e90(HWND param_1, HWND param_2)
 * body: 10001e90-10001f7b
 */

void __cdecl FUN_10001e90(HWND param_1,HWND param_2)

{
  HDC hDC;
  int iVar1;
  int nHeight;
  int X;
  int nWidth;
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_10);
  nWidth = local_10.right - local_10.left;
  nHeight = local_10.bottom - local_10.top;
  hDC = GetDC(param_2);
  GetClientRect(param_2,&local_10);
  iVar1 = ((DAT_10004434 & 0xf) % 3 + 1) * local_10.right;
  X = ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) - nWidth / 2;
  iVar1 = ((DAT_10004434 & 0xf) / 3 + 1) * local_10.bottom;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) - nHeight / 2;
  if (local_10.right < X + nWidth) {
    X = local_10.right - nWidth;
  }
  if (local_10.bottom < iVar1 + nHeight) {
    iVar1 = local_10.bottom - nHeight;
  }
  if (X < 0) {
    X = 0;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  ReleaseDC((HWND)0x0,hDC);
  MoveWindow(param_1,X,iVar1,nWidth,nHeight,0);
  return;
}



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



/* ==== FUN_100020b0 @ 100020b0 ==== 
 * signature: undefined __cdecl FUN_100020b0(HDC param_1, int * param_2, int param_3)
 * body: 100020b0-100021af
 */

void __cdecl FUN_100020b0(HDC param_1,int *param_2,int param_3)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  HGDIOBJ h;
  int iVar3;
  int iVar4;
  RECT local_20;
  int local_8;
  
  local_8 = param_2[2] + -1;
  local_20.top = param_2[1] + 3;
  local_20.left = *param_2 + 2;
  local_20.bottom = param_2[3] + -3;
  local_20.right = local_20.left + param_2[5];
  DVar1 = GetSysColor(0xd);
  pHVar2 = CreateSolidBrush(DVar1);
  h = SelectObject(param_1,pHVar2);
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar4 = iVar3 + 1;
      FillRect(param_1,&local_20,pHVar2);
      local_20.left = local_20.right + 2;
      if (param_2[6] < iVar3 + 2) {
        local_20.right = local_8 + -2;
      }
      else {
        local_20.right = local_20.left + param_2[5];
      }
      iVar3 = iVar4;
    } while ((int)(1000 / (longlong)param_2[6]) * iVar4 < param_3);
  }
  local_20.right = param_2[2] + -1;
  local_20.top = param_2[1] + 1;
  local_20.bottom = param_2[3] + -1;
  SelectObject(param_1,h);
  DeleteObject(pHVar2);
  DVar1 = GetSysColor(0xf);
  pHVar2 = CreateSolidBrush(DVar1);
  FillRect(param_1,&local_20,pHVar2);
  DeleteObject(pHVar2);
  return;
}



/* ==== FUN_100021b0 @ 100021b0 ==== 
 * signature: undefined __cdecl FUN_100021b0(HWND param_1)
 * body: 100021b0-10002272
 */

void __cdecl FUN_100021b0(HWND param_1)

{
  HANDLE h;
  int iVar1;
  tagRECT local_4c;
  LOGFONTA local_3c;
  
  GetWindowRect(param_1,&local_4c);
  local_4c.left = local_4c.left + local_4c.left / 6;
  local_4c.right = local_4c.right + local_4c.right / 6;
  MoveWindow(param_1,local_4c.left,local_4c.top,local_4c.right - local_4c.left,
             local_4c.bottom - local_4c.top,0);
  if (DAT_10004438 == (HFONT)0x0) {
    h = (HANDLE)SendMessageA(param_1,0x31,0,0);
    if ((h != (HANDLE)0x0) && (iVar1 = GetObjectA(h,0x3c,&local_3c), iVar1 != 0)) {
      local_3c.lfWeight = 300;
      DAT_10004438 = CreateFontIndirectA(&local_3c);
    }
    if (DAT_10004438 == (HFONT)0x0) {
      return;
    }
  }
  EnumChildWindows(param_1,FUN_10002280,(LPARAM)DAT_10004438);
  return;
}



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



/* ==== FUN_10002340 @ 10002340 ==== 
 * signature: undefined __cdecl FUN_10002340(HWND param_1, LPCSTR param_2)
 * body: 10002340-1000255b
 */

void __cdecl FUN_10002340(HWND param_1,LPCSTR param_2)

{
  char *pcVar1;
  HGDIOBJ h;
  HDC hdc;
  int iVar2;
  LPCSTR lpString2;
  char cVar3;
  char *pcVar4;
  LPSTR lpString1;
  tagSIZE *ptVar5;
  CHAR *lpString2_00;
  LPCSTR local_328;
  tagSIZE local_324;
  HGDIOBJ local_31c;
  HGDIOBJ local_318;
  tagRECT local_314;
  char local_304;
  char local_303 [254];
  undefined1 local_205;
  CHAR local_204 [260];
  CHAR local_100 [256];
  
  cVar3 = *param_2;
  local_328 = param_2;
  while (((cVar3 != '\n' && (cVar3 != '\r')) && (cVar3 != '\0'))) {
    pcVar4 = local_328 + 1;
    local_328 = local_328 + 1;
    cVar3 = *pcVar4;
  }
  for (; (*local_328 == '\r' || (*local_328 == '\n')); local_328 = local_328 + 1) {
  }
  if (*local_328 == '\0') {
    lstrcpyA(local_204,param_2);
    local_328 = param_2;
  }
  else {
    lstrcpyA(local_204,local_328);
  }
  if (param_1 != (HWND)0x0) {
    GetWindowRect(param_1,&local_314);
    local_314.right = local_314.right - local_314.left;
    h = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
    local_318 = h;
    hdc = GetDC(param_1);
    if (h != (HGDIOBJ)0x0) {
      local_31c = SelectObject(hdc,h);
    }
    ptVar5 = &local_324;
    iVar2 = lstrlenA(param_2);
    GetTextExtentPointA(hdc,local_204,iVar2,ptVar5);
    if (local_314.right <= local_324.cx) {
      lstrcpynA(&local_304,local_204,0x100);
      local_205 = 0;
      pcVar4 = &local_304;
      while ((local_304 != '\0' && (local_304 != '\\'))) {
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        local_304 = *pcVar1;
      }
      if (*pcVar4 == '\\') {
        pcVar4 = pcVar4 + 1;
      }
      if (local_314.right <= local_324.cx) {
        do {
          lpString2 = pcVar4;
          if (*pcVar4 == '.') {
            cVar3 = '.';
            do {
              if (cVar3 == '\\') break;
              cVar3 = lpString2[1];
              lpString2 = lpString2 + 1;
            } while (cVar3 != '\0');
            if (*lpString2 == '\\') {
              lpString2 = lpString2 + 1;
            }
          }
          cVar3 = *lpString2;
          while ((cVar3 != '\0' && (cVar3 != '\\'))) {
            pcVar1 = lpString2 + 1;
            lpString2 = lpString2 + 1;
            cVar3 = *pcVar1;
          }
          if ((*lpString2 == '\0') || ((int)lpString2 - (int)pcVar4 < 4)) {
            lpString2_00 = &DAT_100040d0;
            iVar2 = lstrlenA(&local_304);
            lpString1 = (LPSTR)((int)&local_314.bottom + iVar2);
          }
          else {
            lstrcpyA(local_100,lpString2);
            lstrcpyA(pcVar4,&DAT_100040d0);
            lpString2_00 = local_100;
            lpString1 = pcVar4 + 3;
          }
          lstrcpyA(lpString1,lpString2_00);
          ptVar5 = &local_324;
          iVar2 = lstrlenA(&local_304);
          GetTextExtentPointA(hdc,&local_304,iVar2,ptVar5);
        } while (local_314.right <= local_324.cx);
      }
      lstrcpyA(local_328,&local_304);
    }
    if (local_318 != (HGDIOBJ)0x0) {
      SelectObject(hdc,local_31c);
    }
    ReleaseDC(param_1,hdc);
  }
  return;
}



/* ==== FUN_10002560 @ 10002560 ==== 
 * signature: undefined __cdecl FUN_10002560(HDC param_1)
 * body: 10002560-1000272a
 */

void __cdecl FUN_10002560(HDC param_1)

{
  DWORD color;
  HBRUSH hbr;
  uint uVar1;
  HBITMAP h;
  HDC hdc;
  HGDIOBJ h_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  HICON hIcon;
  RECT local_10;
  
  color = GetSysColor(0xf);
  hbr = CreateSolidBrush(color);
  uVar1 = GetDialogBaseUnits();
  h = CreateCompatibleBitmap
                (param_1,(DAT_100043e8 - DAT_100043e0) + 1,(DAT_100043ec - DAT_100043e4) + 1);
  if (h != (HBITMAP)0x0) {
    hdc = CreateCompatibleDC(param_1);
    if (hdc != (HDC)0x0) {
      h_00 = SelectObject(hdc,h);
      local_10.left = 0;
      local_10.top = 0;
      local_10.right = DAT_100043e8 - DAT_100043e0;
      local_10.bottom = DAT_100043ec - DAT_100043e4;
      FillRect(hdc,&local_10,hbr);
      uVar3 = uVar1 >> 0x10;
      iVar4 = (int)(uVar3 * 8) >> 3;
      DrawIcon(hdc,0,iVar4,DAT_10004440);
      DrawIcon(hdc,(int)((uVar1 & 0xffff) * 0x71) >> 2,iVar4,DAT_10004444);
      if (DAT_10004000 == 0) {
        iVar2 = DAT_1000400c * uVar3 + ((int)(DAT_1000400c * uVar3) >> 0x1f & 7U);
        iVar4 = DAT_10004008;
        hIcon = DAT_10004494;
      }
      else {
        hIcon = (&DAT_10004444)[DAT_10004000];
        iVar2 = (&DAT_1000400c)[DAT_10004000 * 2] * uVar3 +
                ((int)((&DAT_1000400c)[DAT_10004000 * 2] * uVar3) >> 0x1f & 7U);
        iVar4 = (&DAT_10004008)[DAT_10004000 * 2];
      }
      iVar4 = iVar4 * (uVar1 & 0xffff);
      DrawIcon(hdc,(int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2,iVar2 >> 3,hIcon);
      StretchBlt(param_1,DAT_100043e0,DAT_100043e4,DAT_100043e8 - DAT_100043e0,
                 DAT_100043ec - DAT_100043e4,hdc,0,0,DAT_100043e8 - DAT_100043e0,
                 DAT_100043ec - DAT_100043e4,0xcc0020);
      SelectObject(hdc,h_00);
      DeleteObject(h);
      DeleteObject(hbr);
      DeleteDC(hdc);
    }
  }
  return;
}



/* ==== FUN_10002730 @ 10002730 ==== 
 * signature: undefined __cdecl FUN_10002730(char * param_1)
 * body: 10002730-1000289c
 */

void __cdecl FUN_10002730(char *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  bVar3 = false;
  iVar6 = 0;
  pcVar7 = &DAT_100042e0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (cVar2 == '[') {
      if (iVar6 < 2) {
        bVar3 = true;
        pcVar5 = &DAT_100041c0;
        cVar2 = param_1[1];
        while (pcVar4 = param_1 + 1, cVar2 == ' ') {
          cVar2 = param_1[2];
          param_1 = pcVar4;
        }
        cVar2 = *pcVar4;
        while ((cVar2 != '^' && (cVar2 != '\0'))) {
          *pcVar5 = cVar2;
          pcVar1 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
          cVar2 = *pcVar1;
        }
        cVar2 = *pcVar5;
        while (cVar2 == ' ') {
          *pcVar5 = '\0';
          pcVar1 = pcVar5 + -1;
          pcVar5 = pcVar5 + -1;
          cVar2 = *pcVar1;
        }
        pcVar5 = &DAT_10004200;
        cVar2 = pcVar4[1];
        while (param_1 = pcVar4 + 1, cVar2 == ' ') {
          cVar2 = pcVar4[2];
          pcVar4 = param_1;
        }
        cVar2 = *param_1;
        while ((cVar2 != ']' && (cVar2 != '\0'))) {
          *pcVar5 = cVar2;
          pcVar4 = param_1 + 1;
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + 1;
          cVar2 = *pcVar4;
        }
        cVar2 = *pcVar5;
        while (cVar2 == ' ') {
          *pcVar5 = '\0';
          pcVar4 = pcVar5 + -1;
          pcVar5 = pcVar5 + -1;
          cVar2 = *pcVar4;
        }
      }
      else {
        if (!bVar3) {
          *pcVar7 = '%';
          pcVar7[1] = 's';
          pcVar7 = pcVar7 + 2;
        }
        pcVar5 = &DAT_10004120;
        cVar2 = param_1[1];
        while (pcVar4 = param_1 + 1, cVar2 == ' ') {
          cVar2 = param_1[2];
          param_1 = pcVar4;
        }
        cVar2 = *pcVar4;
        while ((cVar2 != '^' && (cVar2 != '\0'))) {
          *pcVar5 = cVar2;
          pcVar1 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
          cVar2 = *pcVar1;
        }
        cVar2 = *pcVar5;
        while (cVar2 == ' ') {
          *pcVar5 = '\0';
          pcVar1 = pcVar5 + -1;
          pcVar5 = pcVar5 + -1;
          cVar2 = *pcVar1;
        }
        pcVar5 = &DAT_10004160;
        cVar2 = pcVar4[1];
        while (param_1 = pcVar4 + 1, cVar2 == ' ') {
          cVar2 = pcVar4[2];
          pcVar4 = param_1;
        }
        cVar2 = *param_1;
        while ((cVar2 != ']' && (cVar2 != '\0'))) {
          *pcVar5 = cVar2;
          pcVar4 = param_1 + 1;
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + 1;
          cVar2 = *pcVar4;
        }
        cVar2 = *pcVar5;
        while (cVar2 == ' ') {
          *pcVar5 = '\0';
          pcVar4 = pcVar5 + -1;
          pcVar5 = pcVar5 + -1;
          cVar2 = *pcVar4;
        }
      }
      if (*param_1 != '\0') {
        param_1 = param_1 + 1;
      }
      *pcVar7 = '%';
      pcVar7[1] = 's';
      pcVar7 = pcVar7 + 2;
    }
    else {
      if (cVar2 == '%') {
        iVar6 = iVar6 + 1;
      }
      *pcVar7 = cVar2;
      pcVar7 = pcVar7 + 1;
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  }
  *pcVar7 = '\0';
  return;
}


