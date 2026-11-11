
/* ==== FUN_0048e00f @ 0048e00f ==== 
 * signature: undefined4 __stdcall FUN_0048e00f(void)
 * body: 0048e00f-0048e061
 */

undefined4 FUN_0048e00f(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cd6ec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0048e062();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048e077();
  if ((*(byte *)(unaff_EBP + 8) & 1) != 0) {
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


