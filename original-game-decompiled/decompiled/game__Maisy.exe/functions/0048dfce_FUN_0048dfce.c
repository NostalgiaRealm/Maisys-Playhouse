
/* ==== FUN_0048dfce @ 0048dfce ==== 
 * signature: undefined __stdcall FUN_0048dfce(void)
 * body: 0048dfce-0048dffc
 */

void FUN_0048dfce(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cd4cc;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0048e007();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


