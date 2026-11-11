
/* ==== FUN_0048dd55 @ 0048dd55 ==== 
 * signature: undefined __stdcall FUN_0048dd55(void)
 * body: 0048dd55-0048dd8f
 */

void FUN_0048dd55(void)

{
  CImageList *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined ***)this = &PTR_FUN_004cc33c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(CImageList **)(unaff_EBP + -0x10) = this;
  CImageList::DeleteImageList(this);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048dd9a();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


