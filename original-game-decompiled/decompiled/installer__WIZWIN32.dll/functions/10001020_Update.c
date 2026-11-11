
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


