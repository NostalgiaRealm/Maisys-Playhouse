
/* ==== FUN_004bbcff @ 004bbcff ==== 
 * signature: undefined4 __stdcall FUN_004bbcff(void)
 * body: 004bbcff-004bbd3b
 */

undefined4 FUN_004bbcff(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bbd46();
  if ((*(byte *)(unaff_EBP + 8) & 1) != 0) {
    CNoTrackObject::operator_delete(*(void **)(unaff_EBP + -0x10));
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


