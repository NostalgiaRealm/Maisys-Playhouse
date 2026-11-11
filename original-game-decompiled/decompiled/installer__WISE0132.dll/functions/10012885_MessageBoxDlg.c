
/* ==== MessageBoxDlg @ 10012885 ==== 
 * signature: undefined4 __stdcall MessageBoxDlg(HWND param_1, int param_2, int param_3)
 * body: 10012885-10012d5a
 */

undefined4 MessageBoxDlg(HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  HWND pHVar1;
  LPCSTR lpString;
  uint uVar2;
  int iVar3;
  HANDLE h;
  HWND pHVar4;
  HMENU hMenu;
  UINT UVar5;
  UINT uIDEnableItem;
  LPCSTR pCVar6;
  int iVar7;
  tagRECT *ptVar8;
  tagPAINTSTRUCT local_b4;
  LOGFONTA local_74;
  tagRECT local_38;
  uint local_28;
  int local_24;
  tagRECT local_20;
  HWND local_10;
  HDC local_c;
  HWND local_8;
  
                    /* 0x12885  10  MessageBoxDlg */
  hWnd = param_1;
  if (param_2 == 2) {
    if (DAT_10023ebc != (HGDIOBJ)0x0) {
      DeleteObject(DAT_10023ebc);
    }
    return 0;
  }
  if (param_2 == 0xf) {
    BeginPaint(param_1,&local_b4);
    if (DAT_10023ec8 != (HICON)0x0) {
      DrawIcon(local_b4.hdc,8,0xc,DAT_10023ec8);
    }
    EndPaint(param_1,&local_b4);
    return 0;
  }
  if (param_2 != 0x110) {
    if (param_2 != 0x111) {
      return 0;
    }
    EndDialog(param_1,param_3);
    return 1;
  }
  SetForegroundWindow(param_1);
  DAT_10024184 = param_1;
  FUN_10012dfb(param_1);
  local_8 = GetDlgItem(param_1,1);
  local_10 = GetDlgItem(param_1,3);
  pHVar1 = GetDlgItem(param_1,2);
  param_2 = 0x7000000;
  param_1 = (HWND)0x4000000;
  if (((byte)DAT_1002418c & 3) < 2) {
    if ((DAT_1002418c & 0x40) == 0) {
      pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0x70);
    }
    else {
      pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0xa0);
    }
    SetWindowTextA(pHVar1,pCVar6);
  }
  else {
    ShowWindow(pHVar1,0);
    param_2 = 0x3000000;
    param_1 = (HWND)0x3000000;
  }
  if ((DAT_1002418c & 1) == 0) {
    if (DAT_100240b8 == 0) {
      pCVar6 = &DAT_1001fd54;
    }
    else {
      pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0x6c);
    }
    SetWindowTextA(local_8,pCVar6);
    ShowWindow(local_10,0);
    param_2 = param_2 & 0x5ffffff;
    param_1 = (HWND)((uint)(byte)(param_1._3_1_ - 1) << 0x18);
  }
  else {
    if ((DAT_1002418c & 0x100) == 0) {
      if ((DAT_1002418c & 0x40) == 0) {
        pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0x8c);
        lpString = *(LPCSTR *)(DAT_100240b8 + 0x90);
      }
      else {
        pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0x98);
        lpString = *(LPCSTR *)(DAT_100240b8 + 0x9c);
      }
    }
    else {
      pCVar6 = *(LPCSTR *)(DAT_100240b8 + 0xb4);
      lpString = *(LPCSTR *)(DAT_100240b8 + 0xb8);
    }
    SetWindowTextA(local_8,pCVar6);
    SetWindowTextA(local_10,lpString);
  }
  uVar2 = DAT_1002418c & 0x1c;
  DAT_10023ec8 = (HICON)0x0;
  if (uVar2 == 4) {
    pCVar6 = (LPCSTR)0x7f04;
  }
  else if (uVar2 == 8) {
    pCVar6 = (LPCSTR)0x7f03;
  }
  else if (uVar2 == 0xc) {
    pCVar6 = (LPCSTR)0x7f02;
  }
  else {
    if (uVar2 != 0x10) goto LAB_10012a19;
    pCVar6 = (LPCSTR)0x7f01;
  }
  DAT_10023ec8 = LoadIconA((HINSTANCE)0x0,pCVar6);
LAB_10012a19:
  SetWindowTextA(hWnd,DAT_10023dc4);
  pHVar1 = GetDlgItem(hWnd,0x3ed);
  SetWindowTextA(pHVar1,DAT_10023e88);
  FUN_10012d5b(hWnd,pHVar1,&local_20);
  local_24 = local_20.right - local_20.left;
  local_10 = (HWND)(local_20.bottom - local_20.top);
  local_c = GetDC(pHVar1);
  iVar7 = 0x48;
  iVar3 = GetDeviceCaps(local_c,0x5a);
  iVar3 = MulDiv((uint)DAT_10023910,iVar3,iVar7);
  DAT_10023ebc = (HFONT)0x0;
  h = (HANDLE)SendMessageA(hWnd,0x31,0,0);
  if ((h != (HANDLE)0x0) && (iVar7 = GetObjectA(h,0x3c,&local_74), iVar7 != 0)) {
    local_74.lfWeight = (-(uint)(DAT_10023e90 != 0) & 0xfffffe70) + 700;
    local_74.lfHeight = -iVar3;
    lstrcpyA(local_74.lfFaceName,DAT_10023f08);
    local_74.lfCharSet = DAT_10023ea9;
    DAT_10023ebc = CreateFontIndirectA(&local_74);
    SendMessageA(pHVar1,0x30,(WPARAM)DAT_10023ebc,0);
  }
  local_8 = SelectObject(local_c,DAT_10023ebc);
  DrawTextA(local_c,DAT_10023e88,-1,&local_20,0xc50);
  SelectObject(local_c,local_8);
  ReleaseDC(pHVar1,local_c);
  ptVar8 = &local_38;
  pHVar4 = GetDlgItem(hWnd,1);
  FUN_10012d5b(hWnd,pHVar4,ptVar8);
  local_28 = (uint)param_1 >> 0x18;
  iVar3 = (local_28 - 1) * (local_38.right - local_38.left) + (local_38.right - local_38.left) / 2;
  if (local_20.right - local_20.left < iVar3) {
    local_20.right = iVar3 + local_20.left;
  }
  iVar3 = local_20.bottom - local_20.top;
  iVar7 = (local_20.right - local_20.left) - local_24;
  local_10 = (HWND)(iVar3 - (int)local_10);
  if ((DAT_1002418c & 0x1c) != 0) {
    local_20.left = local_20.left + 0x18;
    local_20.right = local_20.right + 0x18;
    iVar7 = iVar7 + 0x18;
  }
  local_24 = iVar3;
  MoveWindow(pHVar1,local_20.left,local_20.top,local_20.right - local_20.left,iVar3,0);
  GetWindowRect(hWnd,&local_20);
  local_24 = (iVar7 - local_20.left) + local_20.right;
  MoveWindow(hWnd,local_20.left,local_20.top,local_24,
             ((int)local_10 - local_20.top) + local_20.bottom,0);
  param_3 = 0;
  local_8 = (HWND)0x1;
  do {
    iVar3 = 1;
    if (((uint)param_2 >> 0x18 & 1 << ((byte)param_3 & 0x1f)) != 0) {
      if (param_3 != 0) {
        iVar3 = (param_3 != 2) + 2;
      }
      local_c = (HDC)GetDlgItem(hWnd,iVar3);
      SendMessageA((HWND)local_c,0x30,(WPARAM)DAT_10023ebc,0);
      FUN_10012d5b(hWnd,(HWND)local_c,&local_20);
      iVar3 = (local_24 / (int)local_28) * (int)local_8 - (local_20.right - local_20.left) / 2;
      if ((param_3 == 0) && (param_1._3_1_ == '\x04')) {
        iVar3 = iVar3 + -0x14;
      }
      if ((param_3 == 2) && (param_1._3_1_ == '\x04')) {
        iVar3 = iVar3 + 0x14;
      }
      MoveWindow((HWND)local_c,iVar3,(int)local_10 + local_20.top,local_20.right - local_20.left,
                 local_20.bottom - local_20.top,0);
      local_8 = (HWND)((int)local_8 + 1);
    }
    param_3 = param_3 + 1;
  } while (param_3 < 3);
  FUN_10010d18(hWnd,'\x01',0);
  hMenu = GetSystemMenu(hWnd,0);
  if (hMenu != (HMENU)0x0) {
    iVar3 = GetMenuItemCount(hMenu);
    uIDEnableItem = 0;
    if (0 < iVar3) {
      do {
        UVar5 = GetMenuItemID(hMenu,uIDEnableItem);
        if (UVar5 == 0xf060) {
          EnableMenuItem(hMenu,uIDEnableItem,((DAT_1002418c & 0x60) != 0) + 0x400);
        }
        uIDEnableItem = uIDEnableItem + 1;
      } while ((int)uIDEnableItem < iVar3);
      return 1;
    }
    return 1;
  }
  return 1;
}


