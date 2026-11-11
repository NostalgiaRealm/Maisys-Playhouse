
/* ==== FUN_004baa48 @ 004baa48 ==== 
 * signature: undefined4 __stdcall FUN_004baa48(void)
 * body: 004baa48-004baa99
 */

undefined4 FUN_004baa48(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004baa9a();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004baaa8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004baac0();
  if ((*(byte *)(unaff_EBP + 8) & 1) != 0) {
    CNoTrackObject::operator_delete(*(void **)(unaff_EBP + -0x10));
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


