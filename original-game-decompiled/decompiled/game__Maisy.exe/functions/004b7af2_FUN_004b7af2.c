
/* ==== FUN_004b7af2 @ 004b7af2 ==== 
 * signature: undefined __stdcall FUN_004b7af2(void)
 * body: 004b7af2-004b7b3e
 */

void FUN_004b7af2(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004ccc44;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004b7b7d((int)extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004b7b3f();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004b7b4d();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b7b62();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


