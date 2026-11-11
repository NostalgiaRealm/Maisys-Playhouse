
/* ==== switchD_004891d4::caseD_9 @ 004891db ==== 
 * signature: undefined __stdcall caseD_9(void)
 * body: 004891db-00489226
 */

void switchD_004891d4::caseD_9(void)

{
  SHORT SVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int unaff_ESI;
  short sVar4;
  undefined4 *unaff_FS_OFFSET;
  
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
  if (0 < sVar4) {
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK((AFX_EXCEPTION_LINK *)(unaff_EBP + -0x2c));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00488fa0((int)sVar4,*(uint *)(unaff_EBP + 0x10),(undefined2 *)(unaff_EBP + -0x38));
    iVar2 = FUN_00409610(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00409610(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
      (**(code **)(*piVar3 + 0x294))(unaff_EBP + -0x38);
    }
    iVar2 = FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
      (**(code **)(*piVar3 + 0x294))(unaff_EBP + -0x38);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00489335();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


