
/* ==== FUN_0048dbd9 @ 0048dbd9 ==== 
 * signature: undefined __stdcall FUN_0048dbd9(void)
 * body: 0048dbd9-0048dc14
 */

void FUN_0048dbd9(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cc06c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0048dc15();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048dc2a();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


