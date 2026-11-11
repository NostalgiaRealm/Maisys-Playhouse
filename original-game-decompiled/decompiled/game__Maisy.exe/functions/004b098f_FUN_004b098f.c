
/* ==== FUN_004b098f @ 004b098f ==== 
 * signature: undefined4 __stdcall FUN_004b098f(void)
 * body: 004b098f-004b09ab
 */

undefined4 FUN_004b098f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004b09ac();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b09d1();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x28);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


