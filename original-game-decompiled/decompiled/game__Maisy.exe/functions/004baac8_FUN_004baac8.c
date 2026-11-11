
/* ==== FUN_004baac8 @ 004baac8 ==== 
 * signature: undefined __stdcall FUN_004baac8(void)
 * body: 004baac8-004baaf0
 */

void FUN_004baac8(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004baafb();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


