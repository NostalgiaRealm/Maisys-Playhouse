
/* ==== switchD_00488dc4::caseD_28 @ 00488e41 ==== 
 * signature: undefined __stdcall caseD_28(void)
 * body: 00488e41-00488e46
 */

void switchD_00488dc4::caseD_28(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_FS_OFFSET;
  
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK((AFX_EXCEPTION_LINK *)(unaff_EBP + -0x2c));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00488fa0(0x1f,*(uint *)(unaff_EBP + 0x10),(undefined2 *)(unaff_EBP + -0x38));
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
  FUN_00488f0d();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


