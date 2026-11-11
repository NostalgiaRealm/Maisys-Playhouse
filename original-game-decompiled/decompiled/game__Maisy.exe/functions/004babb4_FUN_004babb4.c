
/* ==== FUN_004babb4 @ 004babb4 ==== 
 * signature: undefined __stdcall FUN_004babb4(void)
 * body: 004babb4-004babf6
 */

void FUN_004babb4(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cb2e4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if ((undefined4 *)extraout_ECX[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[5])(1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bac01();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


