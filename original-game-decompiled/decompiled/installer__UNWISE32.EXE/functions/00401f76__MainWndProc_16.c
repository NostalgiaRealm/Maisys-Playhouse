
/* ==== _MainWndProc@16 @ 00401f76 ==== 
 * signature: UINT __stdcall _MainWndProc@16(HWND param_1, UINT param_2, HWND param_3, int param_4)
 * body: 00401f76-00402298
 */

UINT _MainWndProc_16(HWND param_1,UINT param_2,HWND param_3,int param_4)

{
  int *piVar1;
  HDC pHVar2;
  COLORREF color;
  HBRUSH h;
  HGDIOBJ pvVar3;
  HPALETTE pHVar4;
  UINT UVar5;
  HDC hdc;
  int iVar6;
  int iVar7;
  uint uVar8;
  tagPAINTSTRUCT local_7c;
  tagRECT local_3c;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10;
  undefined1 local_c;
  uint local_8;
  
                    /* 0x1f76  2  _MainWndProc@16 */
  if ((param_1 == DAT_0041381c) || (DAT_00413820 == 0)) {
    if (param_2 == 2) {
      DAT_0041381c = (HWND)0x0;
    }
    else if (param_2 == 0xf) {
      pHVar2 = BeginPaint(param_1,&local_7c);
      if (DAT_004138bc != (HPALETTE)0x0) {
        SelectPalette(pHVar2,DAT_004138bc,0);
        RealizePalette(pHVar2);
      }
      hdc = CreateCompatibleDC(pHVar2);
      pvVar3 = SelectObject(hdc,DAT_004138ac);
      GetObjectA(DAT_004138ac,0x18,local_2c);
      BitBlt(pHVar2,0,0,local_28,local_24,hdc,0,0,0xcc0020);
      SelectObject(hdc,pvVar3);
      DeleteDC(hdc);
      EndPaint(param_1,&local_7c);
    }
    else if (param_2 == 0x113) {
      DAT_00413880 = 1;
    }
    else {
      if (param_2 != 0x30f) {
        if (param_2 != 0x311) goto LAB_00402166;
        if (param_3 == param_1) {
          return 0;
        }
      }
      if (DAT_00413cc4 != (HPALETTE)0x0) {
        pHVar2 = GetDC(param_1);
        pHVar4 = DAT_00413cc4;
        goto LAB_004021a1;
      }
    }
  }
  else if (param_2 == 2) {
    PostQuitMessage(0);
  }
  else if (param_2 == 0xf) {
    pHVar2 = BeginPaint(param_1,&local_7c);
    GetClientRect(param_1,&local_3c);
    if (DAT_004138bc != (HPALETTE)0x0) {
      SelectPalette(pHVar2,DAT_004138bc,0);
      RealizePalette(pHVar2);
    }
    iVar7 = -1;
    uVar8 = 0;
    do {
      local_8 = uVar8 + 1;
      local_18 = (int)(local_3c.bottom * (uVar8 + 1)) / 0x60;
      param_3 = (HWND)0x0;
      param_4 = 3;
      do {
        iVar6 = param_3[0x104f08].unused + (int)(param_3[0x104f0b].unused * uVar8) / 0x5f;
        piVar1 = (int *)(local_14 + (int)param_3);
        *piVar1 = iVar6;
        if (iVar6 < 0) {
          *piVar1 = 0;
        }
        if (0xff < *piVar1) {
          *piVar1 = 0xff;
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      if (DAT_004138bc == (HPALETTE)0x0) {
        color = (COLORREF)CONCAT21(CONCAT11(local_c,local_10),local_14[0]);
      }
      else {
        color = uVar8 & 0xffff | 0x1000000;
      }
      local_20 = iVar7;
      h = CreateSolidBrush(color);
      pvVar3 = SelectObject(pHVar2,h);
      iVar7 = local_18;
      PatBlt(pHVar2,0,local_20,local_3c.right,local_18 - local_20,0xf00021);
      SelectObject(pHVar2,pvVar3);
      DeleteObject(h);
      uVar8 = local_8;
    } while ((int)local_8 < 0x60);
    EndPaint(param_1,&local_7c);
  }
  else {
    if (param_2 == 0x14) {
      return 1;
    }
    if (param_2 == 0x113) {
      DAT_00413be4 = 0;
    }
    else {
      if (param_2 != 0x30f) {
        if (param_2 != 0x311) {
LAB_00402166:
          UVar5 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,param_4);
          return UVar5;
        }
        if (param_3 == param_1) {
          return 0;
        }
      }
      if (DAT_004138bc != (HPALETTE)0x0) {
        pHVar2 = GetDC(param_1);
        pHVar4 = DAT_004138bc;
LAB_004021a1:
        pHVar4 = SelectPalette(pHVar2,pHVar4,0);
        UVar5 = RealizePalette(pHVar2);
        if (UVar5 != 0) {
          InvalidateRect(param_1,(RECT *)0x0,1);
        }
        SelectPalette(pHVar2,pHVar4,1);
        RealizePalette(pHVar2);
        ReleaseDC(param_1,pHVar2);
        return UVar5;
      }
    }
  }
  return 0;
}


