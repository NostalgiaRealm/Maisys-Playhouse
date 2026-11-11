
/* ==== FUN_004a85cb @ 004a85cb ==== 
 * signature: CCmdTarget * __stdcall FUN_004a85cb(void)
 * body: 004a85cb-004a861d
 */

CCmdTarget * FUN_004a85cb(void)

{
  undefined4 uVar1;
  CCmdTarget *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CCmdTarget **)(unaff_EBP + -0x10) = this;
  CCmdTarget::CCmdTarget(this);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this = &PTR_FUN_004cb6c4;
  _memset(this + 0x1c,0,0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = uVar1;
  return this;
}


