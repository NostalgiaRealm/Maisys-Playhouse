
/* ==== FUN_004a5cfb @ 004a5cfb ==== 
 * signature: undefined __stdcall FUN_004a5cfb(void)
 * body: 004a5cfb-004a5d35
 */

void FUN_004a5cfb(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004ce99c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004a5c9a((int)extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a5d40();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


