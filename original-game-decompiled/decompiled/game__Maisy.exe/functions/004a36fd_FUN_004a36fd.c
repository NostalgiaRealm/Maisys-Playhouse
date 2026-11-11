
/* ==== FUN_004a36fd @ 004a36fd ==== 
 * signature: undefined4 __stdcall FUN_004a36fd(void)
 * body: 004a36fd-004a3749
 */

undefined4 FUN_004a36fd(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a374a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a3762();
  if ((*(byte *)(unaff_EBP + 8) & 1) != 0) {
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


