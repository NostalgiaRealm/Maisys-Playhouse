
/* ==== switchD_004896ed::caseD_9 @ 004896f4 ==== 
 * signature: undefined __stdcall caseD_9(void)
 * body: 004896f4-00489777
 */

void switchD_004896ed::caseD_9(void)

{
  SHORT SVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int unaff_ESI;
  short sVar4;
  undefined4 *unaff_FS_OFFSET;
  
  GetKeyboardState((PBYTE)(unaff_EBP + -0x13c));
  iVar2 = ToAscii(*(UINT *)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10) & 0xf,
                  (BYTE *)(unaff_EBP + -0x13c),(LPWORD)(unaff_EBP + -0x12),0);
  if (iVar2 < 1) {
    SVar1 = GetKeyState(0x11);
    if ((SVar1 < 0) &&
       ((((*(uint *)(unaff_EBP + 8) < 0x3a && (0x2f < *(uint *)(unaff_EBP + 8))) ||
         (*(int *)(unaff_EBP + 8) == 0xc0)) ||
        ((*(int *)(unaff_EBP + 8) == 0xbb || (*(int *)(unaff_EBP + 8) == 0xbd)))))) {
      FUN_00489050((int *)(unaff_EBP + 8));
      sVar4 = *(short *)(unaff_EBP + 8);
    }
    else {
      sVar4 = -1;
    }
  }
  else {
    sVar4 = *(short *)(unaff_EBP + -0x12);
  }
  if (0 < sVar4) {
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK((AFX_EXCEPTION_LINK *)(unaff_EBP + -0x30));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00488fa0((int)sVar4,*(uint *)(unaff_EBP + 0x10),(undefined2 *)(unaff_EBP + -0x3c));
    iVar2 = FUN_00409610(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00409610(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
      (**(code **)(*piVar3 + 0x294))(unaff_EBP + -0x3c);
    }
    iVar2 = FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
      (**(code **)(*piVar3 + 0x294))(unaff_EBP + -0x3c);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00489886();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


