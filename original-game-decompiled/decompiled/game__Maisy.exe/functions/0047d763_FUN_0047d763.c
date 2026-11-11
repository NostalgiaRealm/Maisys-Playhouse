
/* ==== FUN_0047d763 @ 0047d763 ==== 
 * signature: undefined4 __stdcall FUN_0047d763(void)
 * body: 0047d763-0047d797
 */

undefined4 FUN_0047d763(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x1c);
  if ((HLOCAL)**(undefined4 **)(unaff_EBP + -0x18) != (HLOCAL)0x0) {
    FUN_0043f720((HLOCAL)**(undefined4 **)(unaff_EBP + -0x18));
    **(undefined4 **)(unaff_EBP + -0x18) = 0;
  }
  (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xfc))();
  return 0x47d730;
}


