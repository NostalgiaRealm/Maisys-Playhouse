
/* ==== FUN_0048d545 @ 0048d545 ==== 
 * signature: undefined4 __stdcall FUN_0048d545(void)
 * body: 0048d545-0048d545
 */

undefined4 FUN_0048d545(void)

{
  _AFX_THREAD_STATE *this;
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = CNoTrackObject::operator_new(0x114);
  *(_AFX_THREAD_STATE **)(unaff_EBP + -0x10) = this;
  uVar1 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (_AFX_THREAD_STATE *)0x0) {
    uVar1 = _AFX_THREAD_STATE::_AFX_THREAD_STATE(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


