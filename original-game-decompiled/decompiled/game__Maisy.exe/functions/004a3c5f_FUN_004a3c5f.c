
/* ==== FUN_004a3c5f @ 004a3c5f ==== 
 * signature: undefined4 __stdcall FUN_004a3c5f(void)
 * body: 004a3c5f-004a3dac;004a3db5-004a3dfd;004a3e06-004a3eaf
 */

undefined4 FUN_004a3c5f(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uchar *puVar4;
  CString *pCVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  piVar1 = (int *)(extraout_ECX + 0x78);
  *(byte *)(unaff_EBP + -0x15) = -(DAT_004e51f8 == 0) & 0x20;
  iVar2 = **(int **)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  if (*piVar1 == iVar2) {
    if ((*(byte *)(extraout_ECX + 0x91) & 2) == 0) {
      **(int **)(unaff_EBP + 0xc) = 0;
    }
    else {
      if (**(char **)(unaff_EBP + -0x10) != *(char *)(unaff_EBP + -0x15)) {
        do {
          if (**(uchar **)(unaff_EBP + -0x10) == '\0') break;
          puVar4 = __mbsinc(*(uchar **)(unaff_EBP + -0x10));
          *(uchar **)(unaff_EBP + -0x10) = puVar4;
        } while (*puVar4 != *(uchar *)(unaff_EBP + -0x15));
      }
      puVar4 = __mbsinc(*(uchar **)(unaff_EBP + -0x10));
      iVar2 = *piVar1;
      *(uchar **)(unaff_EBP + -0x10) = puVar4;
      if ((int)puVar4 - iVar2 <= (int)(uint)*(ushort *)(extraout_ECX + 0x94)) goto LAB_004a3d0d;
      **(undefined4 **)(unaff_EBP + 0xc) = 0;
    }
    CString::CString(*(CString **)(unaff_EBP + 8),(char *)*piVar1);
    *(byte *)(unaff_EBP + -0x20) = *(byte *)(unaff_EBP + -0x20) | 1;
    goto LAB_004a3cab;
  }
LAB_004a3d0d:
  CString::CString((CString *)(unaff_EBP + -0x14),(char *)*piVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (DAT_004e51f8 == 0) {
    for (puVar4 = (uchar *)*piVar1; *puVar4 != *(uchar *)(unaff_EBP + -0x15);
        puVar4 = __mbsinc(puVar4)) {
    }
    pCVar5 = (CString *)FUN_004a4662();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    CString::operator=((CString *)(unaff_EBP + -0x14),pCVar5);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004a3dad();
  }
  CString::CString((CString *)(unaff_EBP + -0x1c),*(char **)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (**(char **)(unaff_EBP + -0x10) != *(char *)(unaff_EBP + -0x15)) {
    do {
      if (**(uchar **)(unaff_EBP + -0x10) == '\0') break;
      puVar4 = __mbsinc(*(uchar **)(unaff_EBP + -0x10));
      *(uchar **)(unaff_EBP + -0x10) = puVar4;
    } while (*puVar4 != *(uchar *)(unaff_EBP + -0x15));
  }
  if ((DAT_004e51f8 == 0) && (**(char **)(unaff_EBP + -0x10) == '\0')) {
    **(undefined4 **)(unaff_EBP + 0xc) = 0;
  }
  else {
    if (DAT_004e51f8 == 0) {
      pCVar5 = (CString *)FUN_004a4662();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      CString::operator=((CString *)(unaff_EBP + -0x1c),pCVar5);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004a3dfe();
    }
    puVar4 = __mbsinc(*(uchar **)(unaff_EBP + -0x10));
    if (*puVar4 == '\0') {
      **(undefined4 **)(unaff_EBP + 0xc) = 0;
    }
    else {
      **(undefined4 **)(unaff_EBP + 0xc) = puVar4;
    }
  }
  if (*(int *)(*(uchar **)(unaff_EBP + -0x14) + -8) != 0) {
    puVar4 = __mbsrchr(*(uchar **)(unaff_EBP + -0x14),0x5c);
    if (puVar4 == (uchar *)0x0) {
      puVar4 = __mbsrchr(*(uchar **)(unaff_EBP + -0x14),0x2f);
      if (puVar4 == (uchar *)0x0) goto LAB_004a3e6c;
    }
    if ((*(int *)(*(int *)(unaff_EBP + -0x14) + -8) - (int)puVar4) + *(int *)(unaff_EBP + -0x14) ==
        1) {
      operator+(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x14));
      *(byte *)(unaff_EBP + -0x20) = *(byte *)(unaff_EBP + -0x20) | 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004a3ec7();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004a3ed9();
      goto LAB_004a3cab;
    }
  }
LAB_004a3e6c:
  pCVar5 = (CString *)operator+((CString *)(unaff_EBP + -0x18),(char)unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  operator+(*(CString **)(unaff_EBP + 8),pCVar5);
  *(byte *)(unaff_EBP + -0x20) = *(byte *)(unaff_EBP + -0x20) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004a3eb0();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004a3ec7();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a3ed9();
LAB_004a3cab:
  uVar3 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar3;
}


