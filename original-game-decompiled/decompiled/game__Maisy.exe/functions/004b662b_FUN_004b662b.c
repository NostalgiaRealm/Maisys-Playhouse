
/* ==== FUN_004b662b @ 004b662b ==== 
 * signature: undefined __stdcall FUN_004b662b(void)
 * body: 004b662b-004b6665
 */

void FUN_004b662b(void)

{
  CWnd *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined ***)extraout_ECX = &PTR_FUN_004cbc64;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(CWnd **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004a92e2(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b6670();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


