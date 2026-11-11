
/* ==== FUN_00469f1e @ 00469f1e ==== 
 * signature: undefined4 __stdcall FUN_00469f1e(void)
 * body: 00469f1e-00469f68
 */

undefined4 FUN_00469f1e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x28);
  (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x1f8))(1);
  FUN_0040af50();
  FUN_0047dc10();
  DAT_004db9c4 = *(undefined1 *)(unaff_EBP + -0x11);
  DAT_004db998 = *(undefined4 *)(unaff_EBP + -0x20);
  **(uint **)(unaff_EBP + -0x1c) = **(uint **)(unaff_EBP + -0x1c) | 0x80000000;
  FUN_004a3538();
  return 0x469ee2;
}


