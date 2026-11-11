
/* ==== FUN_004b647c @ 004b647c ==== 
 * signature: undefined __stdcall FUN_004b647c(void)
 * body: 004b647c-004b64b6
 */

void FUN_004b647c(void)

{
  CWnd *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined ***)extraout_ECX = &PTR_FUN_004cbb7c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(CWnd **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004a92e2(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b64c1();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


