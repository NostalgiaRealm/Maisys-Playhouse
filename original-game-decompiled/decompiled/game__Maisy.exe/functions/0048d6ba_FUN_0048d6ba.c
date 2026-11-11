
/* ==== FUN_0048d6ba @ 0048d6ba ==== 
 * signature: undefined __stdcall FUN_0048d6ba(void)
 * body: 0048d6ba-0048d6e8
 */

void FUN_0048d6ba(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cad24;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0048d6f3();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


