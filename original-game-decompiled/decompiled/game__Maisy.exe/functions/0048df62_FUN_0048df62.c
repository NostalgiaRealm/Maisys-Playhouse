
/* ==== FUN_0048df62 @ 0048df62 ==== 
 * signature: undefined4 __stdcall FUN_0048df62(void)
 * body: 0048df62-0048dfb3
 */

undefined4 FUN_0048df62(void)

{
  undefined4 uVar1;
  CImageList *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined ***)this = &PTR_FUN_004ccd4c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(CImageList **)(unaff_EBP + -0x10) = this;
  CImageList::DeleteImageList(this);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048dfbe();
  if ((*(byte *)(unaff_EBP + 8) & 1) != 0) {
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


