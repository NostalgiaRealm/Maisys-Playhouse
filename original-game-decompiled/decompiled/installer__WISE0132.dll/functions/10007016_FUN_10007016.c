
/* ==== FUN_10007016 @ 10007016 ==== 
 * signature: int __cdecl FUN_10007016(int param_1)
 * body: 10007016-100072a4
 */

int __cdecl FUN_10007016(int param_1)

{
  BOOL BVar1;
  HFONT pHVar2;
  int iVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SIZE_T dwBytes;
  undefined4 *puVar8;
  char *pcVar9;
  LOGFONTA *lplf;
  LOGFONTA *pLVar10;
  int iVar11;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined4 local_70 [16];
  tagMSG local_30;
  int local_14;
  int local_10;
  LPCDLGTEMPLATEA local_c;
  LPCDLGTEMPLATEA local_8;
  
  iVar11 = param_1 * 0xc;
  iVar6 = *(int *)(DAT_10023e8c + iVar11);
  dwBytes = ((int *)(DAT_10023e8c + iVar11))[1] - iVar6;
  local_c = GlobalAlloc(0x40,dwBytes);
  if (local_c == (LPCDLGTEMPLATEA)0x0) {
    iVar6 = -2;
  }
  else {
    local_8 = GlobalLock(local_c);
    if (DAT_10023e20 != 0) {
      if (DAT_100238cc == (HWND)0x0) {
        lpParam = (LPVOID)0x0;
        hMenu = (HMENU)0x0;
        hInstance = DAT_10024178;
        BVar1 = IsWindowVisible(DAT_100238d8);
        DAT_100238cc = CreateWindowExA(1,s_GLBSWizard_1001f398,&DAT_10023314,0x80c80080,0,0,1,1,
                                       (HWND)(-(uint)(BVar1 != 0) & (uint)DAT_100238d8),hMenu,
                                       hInstance,lpParam);
        DAT_100241f0 = 1;
      }
      if (DAT_10023924 == 0) {
        *(undefined4 *)(iVar6 + DAT_10023e8c) = 0x50000040;
      }
    }
    FUN_10015e50(&local_8->style,(undefined4 *)(DAT_10023e8c + iVar6),dwBytes);
    GlobalUnlock(local_c);
    iVar3 = DAT_10023e8c;
    iVar5 = DAT_10023924;
    local_8 = (LPCDLGTEMPLATEA)(iVar6 + DAT_10023e8c);
    pcVar9 = (char *)(*(int *)(DAT_10023e8c + 4 + iVar11) + DAT_10023e8c);
    local_14 = (int)*pcVar9;
    if (local_14 < 1) {
      lplf = (LOGFONTA *)(pcVar9 + 1);
    }
    else {
      lplf = (LOGFONTA *)(pcVar9 + 1);
      *(undefined4 **)(&DAT_10023e40 + DAT_10023924 * 4) = local_70;
      if (0 < local_14) {
        puVar8 = local_70;
        local_10 = local_14;
        do {
          pHVar2 = CreateFontIndirectA(lplf);
          *puVar8 = pHVar2;
          lplf = lplf + 1;
          puVar8 = puVar8 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        local_10 = 0;
        iVar3 = DAT_10023e8c;
        iVar5 = DAT_10023924;
      }
    }
    iVar6 = DAT_10023eec;
    if (0 < DAT_10023eec) {
      do {
        for (; (char)lplf->lfHeight != '\0'; lplf = (LOGFONTA *)((int)&lplf->lfHeight + 1)) {
        }
        lplf = (LOGFONTA *)((int)&lplf->lfHeight + 1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = DAT_10024020 - DAT_10023eec;
    pLVar10 = lplf;
    if (0 < iVar6) {
      do {
        for (; (char)pLVar10->lfHeight != '\0'; pLVar10 = (LOGFONTA *)((int)&pLVar10->lfHeight + 1))
        {
        }
        pLVar10 = (LOGFONTA *)((int)&pLVar10->lfHeight + 1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    DAT_100241e4 = lplf;
    *(short *)(&DAT_10024140 + iVar5 * 2) = (short)pLVar10->lfHeight;
    iVar7 = iVar5 * 4;
    (&DAT_100240e0)[iVar5] = (char *)((int)&pLVar10->lfHeight + 2);
    iVar6 = *(int *)(iVar3 + 8 + iVar11);
    if (iVar6 < 1) {
      *(undefined4 *)(&DAT_10023960 + iVar7) = 0;
    }
    else {
      *(int *)(&DAT_10023960 + iVar7) = iVar6 + iVar3;
    }
    DAT_1002405c = -1;
    DAT_100238fc = DAT_100238fc + '\x01';
    if ((DAT_10023e20 == 0) || (param_1 != 0)) {
      pHVar4 = DAT_100238d8;
      if (iVar5 != 0) {
        pHVar4 = *(HWND *)(&DAT_10023fdc + iVar7);
      }
      iVar6 = DialogBoxIndirectParamA(DAT_10024178,local_c,pHVar4,CustomDlg,0);
    }
    else {
      pHVar4 = CreateDialogIndirectParamA(DAT_10024178,local_8,DAT_100238cc,CustomDlg,0);
      while (DAT_1002405c < 0) {
        BVar1 = GetMessageA(&local_30,(HWND)0x0,0,0);
        if ((-1 < BVar1) && (BVar1 = IsDialogMessageA(pHVar4,&local_30), BVar1 == 0)) {
          TranslateMessage(&local_30);
          DispatchMessageA(&local_30);
        }
      }
      DestroyWindow(pHVar4);
      iVar6 = DAT_1002405c;
    }
    if ((DAT_10024120 != (HGDIOBJ)0x0) && (DAT_10023924 == 0)) {
      DeleteObject(DAT_10024120);
      DAT_10024120 = (HGDIOBJ)0x0;
    }
    GlobalFree(local_c);
    if (0 < local_14) {
      puVar8 = local_70;
      iVar11 = local_14;
      do {
        DeleteObject((HGDIOBJ)*puVar8);
        puVar8 = puVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    DAT_100238fc = DAT_100238fc + -1;
  }
  return iVar6;
}


