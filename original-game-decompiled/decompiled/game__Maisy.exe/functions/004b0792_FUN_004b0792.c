
/* ==== FUN_004b0792 @ 004b0792 ==== 
 * signature: undefined4 __stdcall FUN_004b0792(void)
 * body: 004b0792-004b07ae
 */

undefined4 FUN_004b0792(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004b07af();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b07d4();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x30);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


