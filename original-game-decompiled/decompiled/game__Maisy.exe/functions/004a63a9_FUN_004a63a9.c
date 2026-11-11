
/* ==== FUN_004a63a9 @ 004a63a9 ==== 
 * signature: undefined __stdcall FUN_004a63a9(void)
 * body: 004a63a9-004a63eb
 */

void FUN_004a63a9(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cae4c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(*(CWnd **)(unaff_EBP + -0x10) + 0x1c) != 0) {
    FUN_004a92e2(*(CWnd **)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a63f6();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


