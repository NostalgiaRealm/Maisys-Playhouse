
/* ==== FUN_0048d5c9 @ 0048d5c9 ==== 
 * signature: undefined __stdcall FUN_0048d5c9(void)
 * body: 0048d5c9-0048d5f7
 */

void FUN_0048d5c9(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004caccc;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0048d602();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


