
/* ==== FUN_004bab03 @ 004bab03 ==== 
 * signature: undefined __stdcall FUN_004bab03(void)
 * body: 004bab03-004bab2b
 */

void FUN_004bab03(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bab36();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


