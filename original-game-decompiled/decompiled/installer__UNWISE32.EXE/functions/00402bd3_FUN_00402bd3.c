
/* ==== FUN_00402bd3 @ 00402bd3 ==== 
 * signature: undefined __stdcall FUN_00402bd3(void)
 * body: 00402bd3-0040366b
 */

void FUN_00402bd3(void)

{
  bool bVar1;
  HWND pHVar2;
  HDC hdc;
  int iVar3;
  uint uVar4;
  HDC lpString;
  HDC pHVar5;
  code *pcVar6;
  UINT UVar7;
  RECT *lpRect;
  tagSIZE *lpsz;
  BOOL BVar8;
  int local_954;
  uint local_950;
  tagSIZE local_948;
  HDC__ local_940 [256];
  tagPAINTSTRUCT local_540;
  char local_500 [255];
  undefined1 local_401;
  CHAR local_400 [1024];
  
  if (DAT_00413ba0 == '\v') {
    UVar7 = 0x3f;
  }
  else {
    UVar7 = 0x2e;
  }
  FUN_00408e33(DAT_00413bd0,UVar7,(char *)local_940,0x400);
  SetDlgItemTextA(DAT_00413818,1,(LPCSTR)local_940);
  if ((DAT_00413ba0 == '\0') || (DAT_00413ba0 == '\f')) {
    FUN_00402ba2(0x3eb,0);
    FUN_00402ba2(3,0);
    FUN_00402ba2(4,0);
    FUN_00402ba2(1000,1);
    FUN_00402ba2(0x3e9,1);
    FUN_00402ba2(0x3ec,1);
    if (DAT_00413ba0 == '\0') {
      FUN_00408e33(DAT_00413bd0,0x3c,(char *)local_940,0x100);
      SetDlgItemTextA(DAT_00413818,1000,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x3d,(char *)local_940,0x100);
      SetDlgItemTextA(DAT_00413818,0x3e9,(LPCSTR)local_940);
      SendDlgItemMessageA(DAT_00413818,1000,0xf1,(uint)(DAT_00413840 != 0x3e9),0);
      SendDlgItemMessageA(DAT_00413818,0x3e9,0xf1,(uint)(DAT_00413840 == 0x3e9),0);
      FUN_00408e33(DAT_00413bd0,7,(char *)local_940,0x400);
      wsprintfA(local_400,(LPCSTR)local_940,DAT_00413be0);
      SetDlgItemTextA(DAT_00413818,0x3ea,local_400);
      FUN_00408e33(DAT_00413bd0,10,(char *)local_940,0x400);
      SetDlgItemTextA(DAT_00413818,0x3ec,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x10,(char *)local_940,0x400);
      SetWindowTextA(DAT_00413818,(LPCSTR)local_940);
      BVar8 = 0;
    }
    else {
      FUN_00408e33(DAT_00413bd0,0x33,(char *)local_940,0x100);
      SetDlgItemTextA(DAT_00413818,1000,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x34,(char *)local_940,0x100);
      SetDlgItemTextA(DAT_00413818,0x3e9,(LPCSTR)local_940);
      SendDlgItemMessageA(DAT_00413818,1000,0xf1,(uint)(DAT_004138c8 != 0),0);
      SendDlgItemMessageA(DAT_00413818,0x3e9,0xf1,(uint)(DAT_004138c8 == 0),0);
      FUN_00408e33(DAT_00413bd0,0x41,(char *)local_940,0x400);
      SetDlgItemTextA(DAT_00413818,0x3ea,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x42,(char *)local_940,0x400);
      SetDlgItemTextA(DAT_00413818,0x3ec,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x40,(char *)local_940,0x400);
      SetWindowTextA(DAT_00413818,(LPCSTR)local_940);
      BVar8 = 1;
    }
  }
  else {
    if (DAT_00413ba0 == '\v') {
      FUN_00402ba2(0x3eb,0);
      FUN_00402ba2(3,0);
      FUN_00402ba2(4,0);
      FUN_00402ba2(1000,0);
      FUN_00402ba2(0x3e9,0);
      FUN_00402ba2(0x3ec,1);
      FUN_00408e33(DAT_00413bd0,0xd,(char *)local_940,0x400);
      wsprintfA(local_400,(LPCSTR)local_940,DAT_00413be0);
      SetDlgItemTextA(DAT_00413818,0x3ea,local_400);
      FUN_00408e33(DAT_00413bd0,0x16,(char *)local_940,0x400);
      SetDlgItemTextA(DAT_00413818,0x3ec,(LPCSTR)local_940);
      FUN_00408e33(DAT_00413bd0,0x13,(char *)local_940,0x400);
      SetWindowTextA(DAT_00413818,(LPCSTR)local_940);
      uVar4 = (uint)(DAT_00413ba4 == 0);
      pHVar2 = GetDlgItem(DAT_00413818,5);
      EnableWindow(pHVar2,uVar4);
      goto LAB_0040303d;
    }
    FUN_00402ba2(0x3eb,1);
    FUN_00402ba2(3,1);
    FUN_00402ba2(4,1);
    FUN_00402ba2(1000,0);
    FUN_00402ba2(0x3e9,0);
    FUN_00402ba2(0x3ec,0);
    BVar8 = 1;
  }
  pHVar2 = GetDlgItem(DAT_00413818,5);
  EnableWindow(pHVar2,BVar8);
LAB_0040303d:
  switch(DAT_00413ba0) {
  case '\x01':
    FUN_00408e33(DAT_00413bd0,5,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,6,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413bec;
    break;
  case '\x02':
    FUN_00408e33(DAT_00413bd0,8,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,9,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_004138c0;
    break;
  case '\x03':
    FUN_00408e33(DAT_00413bd0,0xb,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0xc,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413cc8;
    break;
  case '\x04':
    FUN_00408e33(DAT_00413bd0,0xe,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0xf,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_004138cc;
    break;
  case '\x05':
    FUN_00408e33(DAT_00413bd0,0x11,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x12,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413884;
    break;
  case '\x06':
    FUN_00408e33(DAT_00413bd0,0x14,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x15,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413cdc;
    break;
  case '\a':
    FUN_00408e33(DAT_00413bd0,0x36,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x37,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413c44;
    break;
  case '\b':
    FUN_00408e33(DAT_00413bd0,0x17,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x18,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413c3c;
    break;
  case '\t':
    FUN_00408e33(DAT_00413bd0,0x1a,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x1b,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413844;
    break;
  case '\n':
    FUN_00408e33(DAT_00413bd0,0x2a,DAT_00413cc0,0x100);
    FUN_00408e33(DAT_00413bd0,0x29,DAT_004138b0,0x100);
    DAT_00413c38 = DAT_00413bc0 + DAT_00413bd8;
    if (DAT_004138f0 != (HDC)0x0) {
      DAT_00413c38 = DAT_00413c38 + 1;
    }
  }
  pcVar6 = SendDlgItemMessageA_exref;
  if (((DAT_00413ba0 != '\0') && (DAT_00413ba0 != '\v')) && (DAT_00413ba0 != '\f')) {
    SendDlgItemMessageA(DAT_00413818,0x3eb,0x184,0,0);
    SetDlgItemTextA(DAT_00413818,0x3ea,DAT_004138b0);
    SetWindowTextA(DAT_00413818,DAT_00413cc0);
    uVar4 = 0;
    local_950 = 0;
    hdc = BeginPaint(DAT_00413818,&local_540);
    SendDlgItemMessageA(DAT_00413818,0x3eb,0xb,0,0);
    lpString = hdc;
    pHVar5 = hdc;
    if (0 < DAT_00413c38) {
      do {
        switch(DAT_00413ba0) {
        case '\x01':
          iVar3 = *(int *)(DAT_00413858 + uVar4 * 4);
          lpString = (HDC)(iVar3 + 8);
          goto LAB_0040343b;
        case '\x02':
          lpString = *(HDC *)(DAT_00413c4c + uVar4 * 4);
          pHVar5 = (HDC)lpString[0x82].unused;
          break;
        case '\x03':
          lstrcpyA((LPSTR)local_940,*(LPCSTR *)(DAT_0041386c + uVar4 * 4));
          lpString = local_940;
          iVar3 = lstrlenA((LPCSTR)local_940);
          *(undefined1 *)((int)local_940 + iVar3 + -1) = 0;
          pHVar5 = *(HDC *)(*(int *)(DAT_0041386c + uVar4 * 4) + 0x104);
          break;
        case '\x04':
          iVar3 = DAT_0041382c;
          goto LAB_0040344b;
        case '\x05':
          iVar3 = *(int *)(DAT_004138fc + uVar4 * 4);
          wsprintfA((LPSTR)local_940,s__s____s___s__s_004101e4,iVar3 + 8,iVar3 + 0x10c,iVar3 + 0x20c
                    ,iVar3 + 0x30c);
          lpString = local_940;
          pHVar5 = *(HDC *)(*(int *)(DAT_004138fc + uVar4 * 4) + 0x70c);
          break;
        case '\x06':
          iVar3 = *(int *)(DAT_00413848 + uVar4 * 4);
          if (*(char *)(iVar3 + 0x10c) == '\0') {
            lpString = (HDC)(iVar3 + 8);
          }
          else {
            wsprintfA((LPSTR)local_940,s__s_Value_Name___s_004101d0,iVar3 + 8,iVar3 + 0x10c);
            lpString = local_940;
          }
          iVar3 = *(int *)(DAT_00413848 + uVar4 * 4);
LAB_0040343b:
          pHVar5 = *(HDC *)(iVar3 + 0x210);
          break;
        case '\a':
          iVar3 = DAT_00413910;
LAB_0040344b:
          lpString = *(HDC *)(iVar3 + uVar4 * 4);
LAB_0040357c:
          pHVar5 = (HDC)lpString[0x41].unused;
          break;
        case '\b':
          iVar3 = *(int *)(DAT_00413bc4 + uVar4 * 4);
          if (*(char *)(iVar3 + 0x108) == '\0') {
            wsprintfA((LPSTR)local_940,s__s__s_004101b0,iVar3 + 8,iVar3 + 0x208);
          }
          else {
            _strncpy(local_500,(char *)(iVar3 + 0x208),0xff);
            local_401 = 0;
            iVar3 = *(int *)(DAT_00413bc4 + uVar4 * 4);
            wsprintfA((LPSTR)local_940,s__s_Value_Name___s__s_004101b8,iVar3 + 8,iVar3 + 0x108,
                      local_500);
          }
          lpString = local_940;
          pHVar5 = *(HDC *)(*(int *)(DAT_00413bc4 + uVar4 * 4) + 0x1210);
          break;
        case '\t':
          iVar3 = *(int *)(DAT_00413898 + uVar4 * 4);
          pHVar5 = *(HDC *)(iVar3 + 0x300);
          lpString = (HDC)(iVar3 + 0x100);
          break;
        case '\n':
          local_954 = 0;
          bVar1 = false;
          if ((DAT_004138f0 != (HDC)0x0) && (local_954 = 1, uVar4 == 0)) {
            bVar1 = true;
            lpString = DAT_004138f0;
            pHVar5 = DAT_0041384c;
          }
          if (bVar1) break;
          bVar1 = false;
          if ((int)(uVar4 - local_954) < DAT_00413bd8) {
            pHVar5 = *(HDC *)(DAT_004138a4 + (uVar4 - local_954) * 4);
            lpString = pHVar5 + 0x41;
            if ((char)pHVar5[0x41].unused == '\0') {
              lpString = pHVar5;
            }
            pHVar5 = (HDC)pHVar5[0x81].unused;
            bVar1 = true;
          }
          if (bVar1) break;
          lpString = *(HDC *)(DAT_00413cd8 + (uVar4 - (local_954 + DAT_00413bd8)) * 4);
          goto LAB_0040357c;
        }
        lpsz = &local_948;
        iVar3 = lstrlenA((LPCSTR)lpString);
        GetTextExtentPointA(hdc,(LPCSTR)lpString,iVar3,lpsz);
        if (local_950 < (local_948.cx & 0xffffU)) {
          local_950 = local_948.cx;
        }
        SendDlgItemMessageA(DAT_00413818,0x3eb,0x180,0,(LPARAM)lpString);
        if (pHVar5 != (HDC)0x0) {
          SendDlgItemMessageA(DAT_00413818,0x3eb,0x185,1,uVar4 & 0xffff);
        }
        uVar4 = uVar4 + 1;
        pcVar6 = SendDlgItemMessageA_exref;
      } while ((int)uVar4 < DAT_00413c38);
    }
    EndPaint(DAT_00413818,&local_540);
    (*pcVar6)(DAT_00413818,0x3eb,0x194,local_950,0);
    (*pcVar6)(DAT_00413818,0x3eb,0x197,0,0);
    (*pcVar6)(DAT_00413818,0x3eb,0xb,1,0);
    BVar8 = 0;
    lpRect = (RECT *)0x0;
    pHVar2 = GetDlgItem(DAT_00413818,0x3eb);
    InvalidateRect(pHVar2,lpRect,BVar8);
  }
  pHVar2 = GetDlgItem(DAT_00413818,1);
  SetFocus(pHVar2);
  return;
}


