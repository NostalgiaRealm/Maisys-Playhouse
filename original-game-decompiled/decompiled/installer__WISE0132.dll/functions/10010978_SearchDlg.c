
/* ==== SearchDlg @ 10010978 ==== 
 * signature: undefined4 __stdcall SearchDlg(HWND param_1, int param_2)
 * body: 10010978-10010bde
 */

undefined4 SearchDlg(HWND param_1,int param_2)

{
  int iVar1;
  HDC pHVar2;
  HGDIOBJ h;
  HICON hIcon;
  undefined4 uVar3;
  int iVar4;
  tagSIZE *lpsz;
  tagPAINTSTRUCT local_9c;
  CHAR local_5c [32];
  tagSIZE local_3c;
  tagRECT local_34;
  tagRECT local_24;
  HGDIOBJ local_14;
  tagPOINT local_10;
  HWND local_8;
  
                    /* 0x10978  12  SearchDlg */
  if (param_2 == 0xf) {
    pHVar2 = BeginPaint(param_1,&local_9c);
    hIcon = LoadIconA(DAT_1002403c,&DAT_0000006c);
    if (hIcon != (HICON)0x0) {
      GetClientRect(param_1,&local_24);
      iVar4 = ((local_24.bottom - local_24.top) + -0x20) / 2;
      DrawIcon(pHVar2,iVar4,iVar4,hIcon);
      DestroyIcon(hIcon);
    }
    EndPaint(param_1,&local_9c);
LAB_10010bd6:
    uVar3 = 0;
  }
  else {
    if (param_2 == 0x110) {
      FUN_10012e0d(param_1,(int *)0x0);
      local_8 = GetDlgItem(param_1,0x3ed);
      pHVar2 = GetDC(param_1);
      h = (HGDIOBJ)SendMessageA(local_8,0x31,0,0);
      if (h != (HGDIOBJ)0x0) {
        local_14 = SelectObject(pHVar2,h);
        lpsz = &local_3c;
        iVar4 = lstrlenA(&DAT_10023bc0);
        GetTextExtentPointA(pHVar2,&DAT_10023bc0,iVar4,lpsz);
        GetClientRect(param_1,&local_24);
        GetWindowRect(local_8,&local_34);
        local_10.x = local_34.left;
        local_10.y = local_34.top;
        ScreenToClient(param_1,&local_10);
        local_24.right = (local_10.x - local_24.top) + local_3c.cx + -0x20 + local_24.bottom;
        SetWindowPos(param_1,(HWND)0x0,0,0,local_24.right,local_24.bottom,6);
        SetWindowPos(local_8,(HWND)0x0,0,0,local_24.right,local_34.bottom - local_34.top,6);
        SelectObject(pHVar2,local_14);
      }
      ReleaseDC(param_1,pHVar2);
      FUN_10010d18(param_1,'\0',0);
      SetDlgItemTextA(param_1,0x3ed,&DAT_10023bc0);
      SetTimer(param_1,0xef1,0xfa,(TIMERPROC)0x0);
    }
    else if (param_2 != 0x111) {
      if (param_2 == 0x113) {
        KillTimer(param_1,0xef1);
        DAT_10023cc0 = '\0';
        if (DAT_10023e34 == '\x02') {
          FUN_10006a8b();
        }
        else if (DAT_10023e34 == '\x01') {
          FUN_10011094(&DAT_100239c0,&DAT_10023cc0);
        }
        else {
          iVar4 = 0x41;
          do {
            if (DAT_10023cc0 != '\0') break;
            iVar1 = FUN_10011fc8(iVar4 + -0x41);
            if ((iVar1 == 3) && ((DAT_10023918 & 2) == 0)) {
LAB_10010a1f:
              wsprintfA(local_5c,s__c______1001f4b4,iVar4);
              FUN_10010bdf(local_5c,&DAT_100239c0,1,'\0');
            }
            else {
              iVar1 = FUN_10011fc8(iVar4 + -0x41);
              if ((iVar1 == 4) && ((DAT_10023918 & 6) != 0)) goto LAB_10010a1f;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x5b);
        }
        EndDialog(param_1,1);
      }
      goto LAB_10010bd6;
    }
    uVar3 = 1;
  }
  return uVar3;
}


