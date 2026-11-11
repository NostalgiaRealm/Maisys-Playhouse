
/* ==== switchD_004896ed::caseD_21 @ 00489790 ==== 
 * signature: undefined __stdcall caseD_21(void)
 * body: 00489790-00489795
 */

void switchD_004896ed::caseD_21(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_FS_OFFSET;
  
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK((AFX_EXCEPTION_LINK *)(unaff_EBP + -0x30));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00488fa0(0xb,*(uint *)(unaff_EBP + 0x10),(undefined2 *)(unaff_EBP + -0x3c));
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
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


