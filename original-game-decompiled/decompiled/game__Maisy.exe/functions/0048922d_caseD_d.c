
/* ==== switchD_004891d4::caseD_d @ 0048922d ==== 
 * signature: undefined __stdcall caseD_d(void)
 * body: 0048922d-0048923e
 */

void switchD_004891d4::caseD_d(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  int unaff_ESI;
  short sVar3;
  undefined4 *unaff_FS_OFFSET;
  
  if ((*(byte *)(unaff_EBP + 0x11) & 1) == 0) {
    sVar3 = *(short *)(unaff_EBP + 8);
  }
  else {
    sVar3 = 3;
  }
  if (0 < sVar3) {
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK((AFX_EXCEPTION_LINK *)(unaff_EBP + -0x2c));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00488fa0((int)sVar3,*(uint *)(unaff_EBP + 0x10),(undefined2 *)(unaff_EBP + -0x38));
    iVar1 = FUN_00409610(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00409610(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
      (**(code **)(*piVar2 + 0x294))(unaff_EBP + -0x38);
    }
    iVar1 = FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
      (**(code **)(*piVar2 + 0x294))(unaff_EBP + -0x38);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00489335();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


