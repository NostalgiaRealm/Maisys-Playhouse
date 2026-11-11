
/* ==== FUN_004bab3e @ 004bab3e ==== 
 * signature: undefined4 * __stdcall FUN_004bab3e(void)
 * body: 004bab3e-004bab86
 */

undefined4 * FUN_004bab3e(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004caff4;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  *extraout_ECX = &PTR_FUN_004cb2e4;
  extraout_ECX[4] = 0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


