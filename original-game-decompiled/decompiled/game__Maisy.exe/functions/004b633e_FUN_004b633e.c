
/* ==== FUN_004b633e @ 004b633e ==== 
 * signature: undefined __stdcall FUN_004b633e(void)
 * body: 004b633e-004b6378
 */

void FUN_004b633e(void)

{
  CWnd *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined ***)extraout_ECX = &PTR_FUN_004cb9e4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(CWnd **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004a92e2(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b6383();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


