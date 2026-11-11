
/* ==== FUN_004b6ead @ 004b6ead ==== 
 * signature: undefined4 __stdcall FUN_004b6ead(void)
 * body: 004b6ead-004b6eec
 */

undefined4 FUN_004b6ead(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b6ef7();
  if ((*(byte *)(unaff_EBP + 8) & 1) != 0) {
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


