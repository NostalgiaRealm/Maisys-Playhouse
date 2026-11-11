
/* ==== DiskPrompt @ 1000bf62 ==== 
 * signature: undefined4 __stdcall DiskPrompt(int param_1, int param_2)
 * body: 1000bf62-1000c2a9
 */

undefined4 DiskPrompt(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CHAR CVar4;
  LPCSTR pCVar5;
  int iVar6;
  HFILE HVar7;
  HWND hWndParent;
  undefined4 uVar8;
  int iVar9;
  code *lpDialogFunc;
  LPARAM dwInitParam;
  CHAR local_314 [257];
  CHAR aCStack_213 [263];
  CHAR local_10c [260];
  int local_8;
  
                    /* 0xbf62  4  DiskPrompt */
  local_8 = 0;
  if (*(int *)(DAT_1002392c + 0x18) == -1) {
LAB_1000bfbc:
    if (DAT_10023f50 < 1) {
      iVar9 = 1;
    }
    else {
      iVar9 = (*(int *)(DAT_1002392c + 8) + DAT_100239b0) / DAT_10023f50 + 1;
    }
    wsprintfA(local_10c,&DAT_1001f4c8,iVar9);
    FUN_100105d2(s_DISK_NUMBER_1001f700,local_10c);
    GetModuleFileNameA(*(HMODULE *)(DAT_1002392c + 4),DAT_10024034,0x100);
    pCVar5 = FUN_10014834(DAT_10024034,0x5c);
    lstrcpyA(aCStack_213 + 3,pCVar5 + 1);
    iVar6 = lstrlenA(aCStack_213 + 3);
    *(int *)(DAT_1002392c + 0xc) = (iVar9 + -1) * DAT_10023f50;
    if (iVar9 < 2) {
      lstrcpyA(aCStack_213 + iVar6,&DAT_1001f670);
    }
    else {
      wsprintfA(aCStack_213 + iVar6,s_W_02d_1001fa6c,iVar9);
      *(int *)(DAT_1002392c + 0xc) = *(int *)(DAT_1002392c + 0xc) - DAT_100239b0;
    }
    do {
      FUN_1001054d(&DAT_1001fa64,DAT_10024034);
      if ((*DAT_10024034 != '\0') && (CVar4 = FUN_10014819(DAT_10024034), CVar4 != '\\')) {
        lstrcatA(DAT_10024034,&DAT_1001f314);
      }
      lstrcpyA(local_10c,DAT_10024034);
      lstrcatA(local_10c,aCStack_213 + 3);
      HVar7 = _lopen(local_10c,0);
      *(HFILE *)(DAT_1002392c + 0x18) = HVar7;
      if (*(int *)(DAT_1002392c + 0x18) != -1) break;
      if (*(int *)(DAT_1002392c + 0x30) != 0) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
        return 1;
      }
      if ((DAT_10023dc0 != 0) && (local_8 == 0)) {
        if (DAT_100238b4 == 0) {
          GetDlgItemTextA(DAT_10023fac,0xef5,local_314,0x104);
        }
        FUN_1000bb6a();
        DAT_10023dc0 = 1;
        local_8 = 1;
      }
      if ((DAT_100238dc._1_1_ & 8) != 0) {
        MessageBeep(0);
      }
      uVar3 = DAT_10024064;
      uVar2 = DAT_10023e8c;
      uVar1 = DAT_10023e20;
      uVar8 = DAT_100238c8;
      DAT_10023e8c = DAT_10023f0c;
      DAT_10023e20 = 0;
      DAT_100238c8 = 0;
      iVar9 = FUN_10007016(0);
      if (((-1 < iVar9) && (iVar9 < 0x400)) &&
         (*(char *)(*(int *)(DAT_100240e0 + 1 + iVar9 * 4) + 4 + DAT_100240e0) == '\x03')) {
        iVar9 = 0x400;
      }
      DAT_100238c8 = uVar8;
      DAT_10023e20 = uVar1;
      DAT_10023e8c = uVar2;
      DAT_10024064 = uVar3;
      if ((iVar9 == 0x400) || (iVar9 < 0)) {
        *(undefined4 *)(DAT_1002392c + 0x1c) = 1;
        return 1;
      }
    } while (*(int *)(DAT_1002392c + 0x18) == -1);
    if (local_8 != 0) {
      if (DAT_100238b4 == 0) {
        dwInitParam = 0;
        lpDialogFunc = CopyDlg;
        hWndParent = (HWND)FUN_100157cf();
        DAT_10023fac = CreateDialogParamA(DAT_10024178,(LPCSTR)0x602,hWndParent,lpDialogFunc,
                                          dwInitParam);
        FUN_10010d18(DAT_10023fac,'\x02',0);
        SetDlgItemTextA(DAT_10023fac,0xef5,local_314);
        ShowWindow(DAT_10023fac,5);
        EnableWindow(DAT_100238d8,0);
      }
      else {
        FUN_10013bba(&DAT_10023314);
      }
    }
    UpdateScreen(0);
    uVar8 = 0;
  }
  else {
    if (param_1 == 0) {
      if (DAT_10023f50 != 0) goto LAB_1000bfab;
    }
    else if (DAT_10023f50 == 0) {
      *(undefined4 *)(DAT_1002392c + 0x1c) = 2;
      *(undefined1 *)(DAT_1002392c + 0x20) = 2;
    }
    else {
LAB_1000bfab:
      if (param_2 != 0) {
        _lclose(*(int *)(DAT_1002392c + 0x18));
        goto LAB_1000bfbc;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


