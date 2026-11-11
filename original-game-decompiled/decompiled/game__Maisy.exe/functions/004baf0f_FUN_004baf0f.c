
/* ==== FUN_004baf0f @ 004baf0f ==== 
 * signature: undefined __stdcall FUN_004baf0f(void)
 * body: 004baf0f-004baf4c
 */

void FUN_004baf0f(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004baf4d();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004baf5b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004baf73();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


