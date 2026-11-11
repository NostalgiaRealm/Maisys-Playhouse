
/* ==== FUN_12010bf0 @ 12010bf0 ==== 
 * signature: undefined4 __cdecl FUN_12010bf0(int param_1, HGDIOBJ param_2, short param_3, short param_4)
 * body: 12010bf0-12010fa4
 */

undefined4 __cdecl FUN_12010bf0(int param_1,HGDIOBJ param_2,short param_3,short param_4)

{
  code *pcVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  HDC hdc;
  BITMAPINFO *lpbmi;
  longlong lVar5;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  DOCINFOA DStack_ac;
  tagPDA tStack_98;
  tagPSDA local_54;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x17,(int *)&local_d4);
  DAT_12039a9c = (*pcVar1)(local_d4,&local_54,0,0x54);
  local_54.lStructSize = 0x54;
  local_54.Flags = 0x400;
  PageSetupDlgA(&local_54);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x17,(int *)&fStack_d0);
  DAT_12039a9c = (*pcVar1)(fStack_d0,&tStack_98,0,0x42);
  tStack_98.lStructSize = 0x42;
  tStack_98.nFromPage = 1;
  tStack_98.nToPage = 1;
  tStack_98.nCopies = 1;
  tStack_98.nMaxPage = 1;
  tStack_98.Flags = (-(uint)(*(short *)(param_1 + 0x18) == 0) & 0x400) + 0x100;
  tStack_98.nMinPage = 1;
  BVar2 = PrintDlgA(&tStack_98);
  if (BVar2 == 0) {
    CommDlgExtendedError();
  }
  else {
    uVar3 = GetDeviceCaps(tStack_98.hDC,0x26);
    if ((uVar3 & 1) == 0) {
      DeleteDC(tStack_98.hDC);
      MessageBoxA((HWND)0x0,s_Printer_cannot_display_bitmaps__12037678,s_Device_Error_12037698,0);
      return 0x10000;
    }
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x17,(int *)&local_d4);
    DAT_12039a9c = (*pcVar1)(local_d4,&DStack_ac,0,0x14);
    DStack_ac.cbSize = 0x14;
    DStack_ac.lpszDocName = s_Bitmap_Printing_Test_12037660;
    iVar4 = StartDocA(tStack_98.hDC,&DStack_ac);
    if (iVar4 != -1) {
      iVar4 = StartPage(tStack_98.hDC);
      if (0 < iVar4) {
        local_d4 = (float)GetDeviceCaps(DAT_12037588,0x58);
        fStack_cc = (float)(int)local_d4;
        local_d4 = (float)GetDeviceCaps(DAT_12037588,0x5a);
        fStack_b8 = (float)(int)local_d4;
        local_d4 = (float)GetDeviceCaps(tStack_98.hDC,0x58);
        fStack_d0 = (float)(int)local_d4;
        iVar4 = GetDeviceCaps(tStack_98.hDC,0x5a);
        local_d4 = (float)iVar4;
        if (fStack_cc <= fStack_d0) {
          fStack_d0 = fStack_d0 / fStack_cc;
        }
        else {
          fStack_d0 = fStack_cc / fStack_d0;
        }
        if (fStack_b8 <= local_d4) {
          fStack_cc = local_d4 / fStack_b8;
        }
        else {
          fStack_cc = fStack_b8 / local_d4;
        }
        GetDeviceCaps(tStack_98.hDC,8);
        GetDeviceCaps(tStack_98.hDC,10);
        uStack_b4 = 0;
        lVar5 = __ftol();
        uStack_b0 = CONCAT22(uStack_b0._2_2_,(short)lVar5);
        lVar5 = __ftol();
        uStack_b0 = CONCAT22((short)lVar5,(undefined2)uStack_b0);
        uStack_c0 = 0;
        iVar4 = GetDeviceCaps(tStack_98.hDC,8);
        uStack_bc = CONCAT22(uStack_bc._2_2_,(short)iVar4);
        iVar4 = GetDeviceCaps(tStack_98.hDC,10);
        uStack_bc = CONCAT22((short)iVar4,(undefined2)uStack_bc);
        if (param_3 == 0) {
          uStack_c8 = CONCAT44(uStack_b0,uStack_b4);
          FUN_12011110((short *)&uStack_c8,(short *)&uStack_c0);
        }
        else if (param_4 == 0) {
          uStack_c8 = CONCAT44(uStack_bc,uStack_c0);
        }
        else {
          uStack_c8 = FUN_12010ff0((ushort *)&uStack_b4,(ushort *)&uStack_c0);
        }
        hdc = CreateCompatibleDC(tStack_98.hDC);
        SelectObject(hdc,param_2);
        DAT_12039aa4 = GlobalLock(DAT_12039aa0);
        lpbmi = GlobalLock(DAT_12039ad8);
        StretchDIBits(tStack_98.hDC,(int)(short)uStack_c8,(int)uStack_c8._2_2_,
                      (int)uStack_c8._4_2_ - (int)(short)uStack_c8,
                      (int)uStack_c8._6_2_ - (int)uStack_c8._2_2_,0,0,DAT_12039ab4,DAT_12039ab8,
                      DAT_12039aa4,lpbmi,0,0xcc0020);
        GlobalUnlock(DAT_12039aa0);
        GlobalUnlock(DAT_12039ad8);
        DeleteDC(hdc);
        iVar4 = EndPage(tStack_98.hDC);
        if (0 < iVar4) {
          EndDoc(tStack_98.hDC);
        }
      }
    }
    DeleteDC(tStack_98.hDC);
  }
  return 0;
}


