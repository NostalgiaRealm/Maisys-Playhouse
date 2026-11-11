
/* ==== FUN_004b04f2 @ 004b04f2 ==== 
 * signature: undefined4 __stdcall FUN_004b04f2(void)
 * body: 004b04f2-004b053e
 */

undefined4 FUN_004b04f2(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004b053f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b0554();
  if ((*(byte *)(unaff_EBP + 8) & 1) != 0) {
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


