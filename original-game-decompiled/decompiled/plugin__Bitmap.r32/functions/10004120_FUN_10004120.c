
/* ==== FUN_10004120 @ 10004120 ==== 
 * signature: undefined4 __cdecl FUN_10004120(int param_1, int param_2)
 * body: 10004120-10004413
 */

undefined4 __cdecl FUN_10004120(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  BOOL BVar3;
  int iVar4;
  int DestHeight;
  int iVar5;
  HWND *ppHVar6;
  longlong lVar7;
  int xSrc;
  int ySrc;
  short *SrcHeight;
  UINT iUsage;
  DWORD rop;
  BITMAPINFO *local_98;
  short *local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  LPCSTR local_78;
  LPCSTR local_74;
  void *local_70;
  int local_6c;
  double local_68;
  double local_60;
  DOCINFOA local_58;
  tagPDA local_44;
  
  local_44.lStructSize = 0x42;
  ppHVar6 = &local_44.hwndOwner;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppHVar6 = (HWND)0x0;
    ppHVar6 = ppHVar6 + 1;
  }
  *(undefined2 *)ppHVar6 = 0;
  iVar5 = 1;
  FUN_10006070(param_2,(int *)&local_98,(int *)&local_70);
  bVar1 = FUN_10004550(&local_44);
  if (((CONCAT31(extraout_var,bVar1) == 0) ||
      (bVar1 = FUN_100045f0((int)&local_44,1), CONCAT31(extraout_var_00,bVar1) == 0)) ||
     (iVar2 = FUN_10004580(local_44.hDC,&local_84,&local_88,&local_90,&local_8c,&local_80),
     iVar2 == 0)) goto LAB_100043dd;
  if (*(int *)(param_1 + 0x40) == 0) {
    if (*(short *)(param_1 + 0x3c) == 0) {
      if ((int)local_78 - local_80 < (local_98->bmiHeader).biWidth) goto LAB_100041fa;
    }
    else if ((local_98->bmiHeader).biHeight < (local_98->bmiHeader).biWidth) {
LAB_100041fa:
      iVar5 = 0;
    }
  }
  else if (*(int *)(param_1 + 0x40) == 2) goto LAB_100041fa;
  bVar1 = FUN_100045f0((int)&local_44,iVar5);
  if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
     (iVar5 = FUN_10004580(local_44.hDC,&local_84,&local_88,&local_90,&local_8c,&local_80),
     iVar5 != 0)) {
    if (*(int *)(param_1 + 0x46) == 1) {
      local_94 = FUN_10004420(param_1,(short *)(param_1 + 0x4a),(int *)0x0);
      local_94 = FUN_10004420(param_1,(short *)(param_1 + 0x76),(int *)0x0);
    }
    iVar5 = FUN_10004640(local_84,local_88,&local_60,&local_68);
    if (iVar5 != 0) {
      local_58.lpszOutput = local_78;
      local_58.lpszDatatype = local_74;
      iVar5 = local_7c;
      iVar2 = local_80;
      if (*(short *)(param_1 + 0x3c) == 0) {
        if (*(int *)(param_1 + 0x46) == 0) {
          lVar7 = __ftol();
          iVar2 = (int)lVar7;
          lVar7 = __ftol();
          iVar5 = (int)lVar7;
        }
      }
      else {
        FUN_100046a0((int)local_98,&local_80,&local_60,&local_68);
      }
      if (*(short *)(param_1 + 0x38) != 0) {
        local_44.Flags = 0x10010c;
        BVar3 = PrintDlgA(&local_44);
        if (BVar3 == 0) goto LAB_100043dd;
      }
      local_58.lpszOutput = (LPCSTR)0x0;
      local_58.lpszDatatype = (LPCSTR)0x0;
      local_58.cbSize = 0x14;
      local_58.fwType = 0;
      local_58.lpszDocName = s_MTropolis_10013150;
      iVar4 = StartDocA(local_44.hDC,&local_58);
      if ((0 < iVar4) && (iVar4 = StartPage(local_44.hDC), 0 < iVar4)) {
        rop = 0xcc0020;
        iUsage = 0;
        SrcHeight = (short *)(local_98->bmiHeader).biHeight;
        iVar4 = (local_98->bmiHeader).biWidth;
        ySrc = 0;
        xSrc = 0;
        local_94 = SrcHeight;
        local_6c = iVar4;
        lVar7 = __ftol();
        DestHeight = (int)lVar7;
        lVar7 = __ftol();
        StretchDIBits(local_44.hDC,iVar2,iVar5,(int)lVar7,DestHeight,xSrc,ySrc,iVar4,(int)SrcHeight,
                      local_70,local_98,iUsage,rop);
        iVar5 = EndPage(local_44.hDC);
        if (0 < iVar5) {
          EndDoc(local_44.hDC);
        }
      }
    }
  }
LAB_100043dd:
  if (local_44.hDC != (HDC)0x0) {
    DeleteDC(local_44.hDC);
  }
  if (local_44.hDevMode != (HGLOBAL)0x0) {
    GlobalFree(local_44.hDevMode);
  }
  if (local_44.hDevNames != (HGLOBAL)0x0) {
    GlobalFree(local_44.hDevNames);
  }
  return 0;
}


