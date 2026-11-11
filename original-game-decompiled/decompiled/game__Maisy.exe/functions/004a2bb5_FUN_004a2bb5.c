
/* ==== FUN_004a2bb5 @ 004a2bb5 ==== 
 * signature: undefined __stdcall FUN_004a2bb5(void)
 * body: 004a2bb5-004a2bfb
 */

void FUN_004a2bb5(void)

{
  CWnd *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined ***)extraout_ECX = &PTR_FUN_004ce8b4;
  *(CWnd **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004a92e2(extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a2bfc();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a2c11();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


