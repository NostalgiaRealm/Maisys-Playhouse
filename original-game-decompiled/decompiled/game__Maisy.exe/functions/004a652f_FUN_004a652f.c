
/* ==== FUN_004a652f @ 004a652f ==== 
 * signature: undefined4 __stdcall FUN_004a652f(void)
 * body: 004a652f-004a6697;004a66a0-004a673a
 */

undefined4 FUN_004a652f(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  HWND pHVar5;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    iVar2 = FUN_004bafca();
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar2 + 8);
  }
  iVar2 = FUN_004bafca();
  if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
    FUN_004ab920(0x10);
  }
  iVar2 = FUN_004bafe6();
  iVar2 = *(int *)(iVar2 + 8);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  if (iVar2 == 0) {
LAB_004a65ae:
    if (*(int *)(unaff_EBP + 8) != 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_004abb44((undefined4 *)(unaff_EBP + -0x20));
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined2 *)(unaff_EBP + -0xe) = 0;
      iVar2 = CDialogTemplate::GetFont
                        (*(DLGTEMPLATE **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x20),
                         (ushort *)(unaff_EBP + -0xe));
      if (iVar2 == 0) {
LAB_004a6639:
        CDialogTemplate::CDialogTemplate
                  ((CDialogTemplate *)(unaff_EBP + -0x34),*(DLGTEMPLATE **)(unaff_EBP + 8));
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004acbe6((short)*(undefined4 *)(unaff_EBP + -0xe));
        uVar3 = FUN_004ac8bc((undefined4 *)(unaff_EBP + -0x34));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
        FUN_004a6698();
      }
      else {
        iVar2 = GetSystemMetrics(0x2a);
        bVar1 = false;
        if (iVar2 == 0) {
LAB_004a6635:
          if (bVar1) goto LAB_004a6639;
        }
        else {
          iVar2 = __mbscmp(*(uchar **)(unaff_EBP + -0x20),(uchar *)"MS Sans Serif");
          if (iVar2 == 0) {
LAB_004a661f:
            bVar1 = true;
          }
          else {
            bVar1 = false;
            iVar2 = __mbscmp(*(uchar **)(unaff_EBP + -0x20),"Helv");
            if (iVar2 == 0) goto LAB_004a661f;
          }
          if (bVar1) {
            bVar1 = true;
            if (*(short *)(unaff_EBP + -0xe) == 8) {
              *(undefined2 *)(unaff_EBP + -0xe) = 0;
            }
            goto LAB_004a6635;
          }
        }
      }
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        pvVar4 = GlobalLock(*(HGLOBAL *)(unaff_EBP + -0x18));
        *(LPVOID *)(unaff_EBP + 8) = pvVar4;
      }
      iVar2 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(iVar2 + 0x2c) = 0xffffffff;
      *(byte *)(iVar2 + 0x24) = *(byte *)(iVar2 + 0x24) | 0x10;
      FUN_004a8f34(iVar2);
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        pHVar5 = (HWND)0x0;
      }
      else {
        pHVar5 = *(HWND *)(*(int *)(unaff_EBP + 0xc) + 0x1c);
      }
      pHVar5 = CreateDialogIndirectParamA
                         (*(HINSTANCE *)(unaff_EBP + 0x10),*(LPCDLGTEMPLATEA *)(unaff_EBP + 8),
                          pHVar5,AfxDlgProc,0);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))(unaff_EBP + -0x28);
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xb8))(0);
      }
      bVar1 = FUN_004a8f79();
      if (CONCAT31(extraout_var,bVar1) == 0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xa8))();
      }
      if ((*(byte *)(*(int *)(unaff_EBP + -0x14) + 0x24) & 0x10) == 0) {
        DestroyWindow(pHVar5);
        pHVar5 = (HWND)0x0;
      }
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        GlobalUnlock(*(HGLOBAL *)(unaff_EBP + -0x18));
        GlobalFree(*(HGLOBAL *)(unaff_EBP + -0x18));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (pHVar5 != (HWND)0x0) {
        FUN_004a6745();
        uVar3 = 1;
        goto LAB_004a6588;
      }
      FUN_004a6745();
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xb8))(unaff_EBP + -0x28);
    if (iVar2 != 0) {
      uVar3 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))
                        (unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + 8));
      *(undefined4 *)(unaff_EBP + 8) = uVar3;
      goto LAB_004a65ae;
    }
  }
  uVar3 = 0;
LAB_004a6588:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar3;
}


