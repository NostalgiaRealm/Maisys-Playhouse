
/* ==== switchD_004896ed::caseD_d @ 0048977e ==== 
 * signature: undefined __stdcall caseD_d(void)
 * body: 0048977e-0048978f
 */

void switchD_004896ed::caseD_d(void)

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
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK((AFX_EXCEPTION_LINK *)(unaff_EBP + -0x30));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00488fa0((int)sVar3,*(uint *)(unaff_EBP + 0x10),(undefined2 *)(unaff_EBP + -0x3c));
    iVar1 = FUN_00409610(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00409610(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
      (**(code **)(*piVar2 + 0x294))(unaff_EBP + -0x3c);
    }
    iVar1 = FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00409600(*(int *)(*(int *)(unaff_ESI + 0x50) + 0x82));
      (**(code **)(*piVar2 + 0x294))(unaff_EBP + -0x3c);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00489886();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


