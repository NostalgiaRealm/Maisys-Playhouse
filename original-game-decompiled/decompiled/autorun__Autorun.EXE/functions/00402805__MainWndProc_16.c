
/* ==== _MainWndProc@16 @ 00402805 ==== 
 * signature: UINT __stdcall _MainWndProc@16(HWND param_1, uint param_2, HWND param_3, HPALETTE param_4)
 * body: 00402805-00402b1a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UINT _MainWndProc_16(HWND param_1,uint param_2,HWND param_3,HPALETTE param_4)

{
  HDC pHVar1;
  int iVar2;
  COLORREF color;
  HBRUSH h;
  HGDIOBJ h_00;
  HPALETTE pHVar3;
  UINT UVar4;
  int *piVar5;
  uint uVar6;
  tagPAINTSTRUCT local_68;
  int local_24;
  int local_1c;
  int local_18;
  undefined1 local_14;
  undefined1 local_10;
  uint local_c;
  HDC local_8;
  
                    /* 0x2805  1  _MainWndProc@16 */
  if (param_2 < 6) {
    if (param_2 == 5) {
      InvalidateRect(param_1,(RECT *)0x0,1);
    }
    else {
      if (param_2 != 2) goto LAB_00402b0b;
      PostQuitMessage(0);
    }
  }
  else if (param_2 < 0x15) {
    if (param_2 == 0x14) {
      return 1;
    }
    if (param_2 != 0xf) {
LAB_00402b0b:
      UVar4 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return UVar4;
    }
    pHVar1 = BeginPaint(param_1,&local_68);
    local_8 = pHVar1;
    FUN_004027dd();
    if (DAT_00404348 != (HPALETTE)0x0) {
      param_4 = SelectPalette(pHVar1,DAT_00404348,0);
      RealizePalette(pHVar1);
    }
    if ((DAT_004042d8 & 3) == 0) {
      local_1c = -1;
      uVar6 = 0;
      do {
        local_c = uVar6 + 1;
        piVar5 = &local_18;
        param_3 = (HWND)&DAT_00404350;
        param_2 = 3;
        do {
          iVar2 = (int)((int)*(short *)((int)&param_3[1].unused + 2) * uVar6) / 0x5f +
                  (int)(short)param_3->unused;
          *piVar5 = iVar2;
          if (iVar2 < 0) {
            *piVar5 = 0;
          }
          if (0xff < *piVar5) {
            *piVar5 = 0xff;
          }
          param_3 = (HWND)((int)&param_3->unused + 2);
          piVar5 = piVar5 + 1;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
        if (DAT_00404348 == (HPALETTE)0x0) {
          color = (COLORREF)CONCAT21(CONCAT11(local_10,local_14),(undefined1)local_18);
        }
        else {
          color = uVar6 & 0xffff | 0x1000000;
        }
        local_24 = local_1c;
        local_1c = (int)(DAT_004042c8 * (uVar6 + 1)) / 0x60;
        h = CreateSolidBrush(color);
        pHVar1 = local_8;
        h_00 = SelectObject(local_8,h);
        PatBlt(pHVar1,0,local_24,DAT_004042c4,local_1c - local_24,0xf00021);
        SelectObject(pHVar1,h_00);
        DeleteObject(h);
        uVar6 = local_c;
      } while ((int)local_c < 0x60);
    }
    if (DAT_00404348 != (HPALETTE)0x0) {
      SelectPalette(pHVar1,param_4,1);
    }
    if (DAT_0040433c != (code *)0x0) {
      (*DAT_0040433c)(param_1,pHVar1);
    }
    EndPaint(param_1,&local_68);
  }
  else if (param_2 == 0x112) {
    if (param_3 != (HWND)0xf060) {
      param_2 = 0x112;
      goto LAB_00402b0b;
    }
    DAT_004042bc = 1;
  }
  else if (param_2 == 0x113) {
    if (param_3 == (HWND)0x2069) {
      _DAT_004042cc = 0;
    }
    else {
      (*DAT_00404340)(0);
    }
  }
  else {
    if (param_2 != 0x30f) {
      if (param_2 != 0x311) {
        if (0x400 < param_2) {
          if (param_2 < 0x403) {
            if (DAT_0040434c == (code *)0x0) {
              return 0;
            }
            (*DAT_0040434c)(param_2,param_3,param_4);
            return 0;
          }
          if (param_2 == 0x4c8) {
            if (param_4 != (HPALETTE)0x20d) {
              return 0;
            }
            if ((DAT_004042d8 & 4) == 0) {
              UVar4 = 0x10;
            }
            else {
              UVar4 = 0x806;
            }
            SendMessageA(param_3,UVar4,0,0);
            return 0;
          }
        }
        goto LAB_00402b0b;
      }
      if (param_3 == param_1) {
        return 0;
      }
    }
    if ((DAT_004042dc != (HPALETTE)0x0) || (DAT_00404348 != (HPALETTE)0x0)) {
      pHVar3 = DAT_004042dc;
      if (DAT_004042dc == (HPALETTE)0x0) {
        pHVar3 = DAT_00404348;
      }
      pHVar1 = GetDC(param_1);
      pHVar3 = SelectPalette(pHVar1,pHVar3,0);
      UVar4 = RealizePalette(pHVar1);
      if (UVar4 != 0) {
        InvalidateRect(param_1,(RECT *)0x0,1);
      }
      SelectPalette(pHVar1,pHVar3,1);
      RealizePalette(pHVar1);
      ReleaseDC(param_1,pHVar1);
      return UVar4;
    }
  }
  return 0;
}


